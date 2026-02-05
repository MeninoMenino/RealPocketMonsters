#ifndef UUIDUTILS_H
#define UUIDUTILS_H

#include <string>
#include <stdint.h>
#include <cstring>

typedef std::string String;

class UuidUtils {
public:
    /**
     * Gera um UUID v4 (aleatório) no formato padrão
     * Exemplo: "550e8400-e29b-41d4-a716-446655440000"
     * 
     * @return String contendo o UUID gerado
     */
    static String generateUuid() {
        uint8_t bytes[16];
        generateRandomBytes(bytes, 16);
        
        // Define os bits de versão e variante para UUID v4
        bytes[6] = (bytes[6] & 0x0f) | 0x40;  // Versão 4
        bytes[8] = (bytes[8] & 0x3f) | 0x80;  // Variante RFC 4122
        
        return formatUuid(bytes);
    }

    /**
     * Valida se uma string está no formato UUID válido
     * 
     * @param uuid String a validar
     * @return true se for um UUID válido, false caso contrário
     */
    static bool isValidUuid(const std::string& uuid) {
        if (uuid.length() != 36) return false;
        
        const char* valid_positions[] = {
            "8", "4", "4", "4", "12"  // Comprimentos dos segmentos
        };
        int positions[] = {8, 13, 18, 23};
        
        // Verifica os hífens nas posições corretas
        for (int i = 0; i < 4; i++) {
            if (uuid[positions[i]] != '-') return false;
        }
        
        // Verifica se todos os outros caracteres são hexadecimais
        for (int i = 0; i < uuid.length(); i++) {
            bool is_hyphen = false;
            for (int j = 0; j < 4; j++) {
                if (i == positions[j]) {
                    is_hyphen = true;
                    break;
                }
            }
            
            if (is_hyphen) continue;
            
            char c = uuid[i];
            if (!((c >= '0' && c <= '9') || 
                  (c >= 'a' && c <= 'f') || 
                  (c >= 'A' && c <= 'F'))) {
                return false;
            }
        }
        
        return true;
    }

private:
    /**
     * Gera bytes aleatórios usando o gerador de números aleatórios do sistema
     * 
     * @param buffer Ponteiro para o buffer onde armazenar os bytes
     * @param length Quantidade de bytes a gerar
     */
    static void generateRandomBytes(uint8_t* buffer, int length) {
        for (int i = 0; i < length; i++) {
            buffer[i] = static_cast<uint8_t>(rand() & 0xFF);
        }
    }

    /**
     * Formata um array de 16 bytes em uma string UUID
     * 
     * @param bytes Array de 16 bytes do UUID
     * @return String formatada no padrão UUID
     */
    static String formatUuid(const uint8_t* bytes) {
        char buffer[37];  // 36 caracteres + null terminator
        
        snprintf(buffer, sizeof(buffer),
                "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                bytes[0], bytes[1], bytes[2], bytes[3],
                bytes[4], bytes[5],
                bytes[6], bytes[7],
                bytes[8], bytes[9],
                bytes[10], bytes[11], bytes[12], bytes[13], bytes[14], bytes[15]);
        
        return String(buffer);
    }
};

#endif // UUIDUTILS_H
