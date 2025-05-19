import random

print("Press 'W' to generate a 6-digit OTP. Press 'Q' to quit.")

generated_otps = set()

while True:
    key = input("Enter key: ").strip().lower()

    if key == 'w':
        if len(generated_otps) >= 900000:
            print("All possible OTPs have been used!")
            continue

        while True:
            otp = random.randint(100000, 999999)
            if otp not in generated_otps:
                generated_otps.add(otp)
                print("Generated OTP:", otp)
                break

    elif key == 'q':
        print("Exiting...")
        break
    else:
        print("Invalid key. Press 'W' to generate OTP or 'Q' to quit.")
