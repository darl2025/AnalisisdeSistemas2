import tkinter as tk

# Crear la ventana principal
ventana = tk.Tk()
ventana.title("Hola Mundo en Interfaz Gráfica")
ventana.geometry("300x150")  # Tamaño de la ventana

# Crear una etiqueta que diga "Hola Mundo"
etiqueta = tk.Label(ventana, text="¡Hola Mundo!", font=("Arial", 18))
etiqueta.pack(pady=40)  # Empaquetar la etiqueta con espacio

# Iniciar el bucle principal de la ventana
ventana.mainloop()
