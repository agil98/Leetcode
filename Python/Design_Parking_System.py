class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.carType = [big, medium, small]

    def addCar(self, carType: int) -> bool:
        if self.carType[carType - 1] > 0:
            self.carType[carType - 1] = self.carType[carType - 1] - 1
            return True
        else:
            return False
