# Projeto: Temporizador com LEDs na Raspberry Pi Pico

## Descrição

Este projeto demonstra o uso de um temporizador repetitivo para alternar o estado de três LEDs (verde, amarelo e vermelho) em uma Raspberry Pi Pico. Os LEDs mudam de estado a cada 3 segundos, alternando entre ligar e desligar em sequência.

## Componentes Necessários

- 1 x Raspberry Pi Pico
- 1 x LED Verde
- 1 x LED Amarelo
- 1 x LED Vermelho
- 3 x Resistores (1kΩ)
- Cabos de Conexão
- Protoboard

## Conexões

Conecte os LEDs e os resistores à Raspberry Pi Pico conforme o diagrama a seguir:

- **LED Verde**: Anodo no pino GP11, Catodo no GND (via resistor)
- **LED Amarelo**: Anodo no pino GP12, Catodo no GND (via resistor)
- **LED Vermelho**: Anodo no pino GP13, Catodo no GND (via resistor)

## Explicação do Código

### Definições de Pinos

Os pinos para os LEDs verde, amarelo e vermelho são definidos.

### Função de Callback do Temporizador

A função `repeating_timer_callback` é chamada a cada 3 segundos para alternar o estado dos LEDs. A variável `ledon` controla qual LED está ativo.

### Inicialização

Inicializa a comunicação serial e os pinos GPIO para os LEDs.

### Loop Principal

O loop principal aguarda continuamente com uma pausa de 200 ms enquanto o temporizador alterna os LEDs em segundo plano.

## Notas

- Certifique-se de que os resistores estão corretamente conectados em série com os LEDs para limitar a corrente.
- Você pode ajustar o intervalo de tempo alterando o valor passado para `add_repeating_timer_ms`.

## Autor

Gabriel Oliveira
# Projeto: Temporizador com LEDs na Raspberry Pi Pico

## Descrição

Este projeto demonstra o uso de um temporizador repetitivo para alternar o estado de três LEDs (verde, amarelo e vermelho) em uma Raspberry Pi Pico. Os LEDs mudam de estado a cada 3 segundos, alternando entre ligar e desligar em sequência.

## Componentes Necessários

- 1 x Raspberry Pi Pico
- 1 x LED Verde
- 1 x LED Amarelo
- 1 x LED Vermelho
- 3 x Resistores (1kΩ)
- Cabos de Conexão
- Protoboard

## Conexões

Conecte os LEDs e os resistores à Raspberry Pi Pico conforme o diagrama a seguir:

- **LED Verde**: Anodo no pino GP11, Catodo no GND (via resistor)
- **LED Amarelo**: Anodo no pino GP12, Catodo no GND (via resistor)
- **LED Vermelho**: Anodo no pino GP13, Catodo no GND (via resistor)

## Explicação do Código

### Definições de Pinos

Os pinos para os LEDs verde, amarelo e vermelho são definidos.

### Função de Callback do Temporizador

A função `repeating_timer_callback` é chamada a cada 3 segundos para alternar o estado dos LEDs. A variável `ledon` controla qual LED está ativo.


## Autor

Gabriel Oliveira
