/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ocr/v20181119/model/VatElectronicItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatElectronicItemInfo::VatElectronicItemInfo() :
    m_nameHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_vehicleBrandHasBeenSet(false),
    m_departurePlaceHasBeenSet(false),
    m_arrivalPlaceHasBeenSet(false),
    m_transportItemsNameHasBeenSet(false),
    m_placeOfBuildingServiceHasBeenSet(false),
    m_buildingNameHasBeenSet(false),
    m_estateNumberHasBeenSet(false),
    m_areaUnitHasBeenSet(false),
    m_travelerHasBeenSet(false),
    m_travelerIDHasBeenSet(false),
    m_travelDateHasBeenSet(false),
    m_travelLevelHasBeenSet(false)
{
}

CoreInternalOutcome VatElectronicItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("VehicleBrand") && !value["VehicleBrand"].IsNull())
    {
        if (!value["VehicleBrand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.VehicleBrand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleBrand = string(value["VehicleBrand"].GetString());
        m_vehicleBrandHasBeenSet = true;
    }

    if (value.HasMember("DeparturePlace") && !value["DeparturePlace"].IsNull())
    {
        if (!value["DeparturePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.DeparturePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departurePlace = string(value["DeparturePlace"].GetString());
        m_departurePlaceHasBeenSet = true;
    }

    if (value.HasMember("ArrivalPlace") && !value["ArrivalPlace"].IsNull())
    {
        if (!value["ArrivalPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.ArrivalPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrivalPlace = string(value["ArrivalPlace"].GetString());
        m_arrivalPlaceHasBeenSet = true;
    }

    if (value.HasMember("TransportItemsName") && !value["TransportItemsName"].IsNull())
    {
        if (!value["TransportItemsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.TransportItemsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transportItemsName = string(value["TransportItemsName"].GetString());
        m_transportItemsNameHasBeenSet = true;
    }

    if (value.HasMember("PlaceOfBuildingService") && !value["PlaceOfBuildingService"].IsNull())
    {
        if (!value["PlaceOfBuildingService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.PlaceOfBuildingService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placeOfBuildingService = string(value["PlaceOfBuildingService"].GetString());
        m_placeOfBuildingServiceHasBeenSet = true;
    }

    if (value.HasMember("BuildingName") && !value["BuildingName"].IsNull())
    {
        if (!value["BuildingName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.BuildingName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingName = string(value["BuildingName"].GetString());
        m_buildingNameHasBeenSet = true;
    }

    if (value.HasMember("EstateNumber") && !value["EstateNumber"].IsNull())
    {
        if (!value["EstateNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.EstateNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estateNumber = string(value["EstateNumber"].GetString());
        m_estateNumberHasBeenSet = true;
    }

    if (value.HasMember("AreaUnit") && !value["AreaUnit"].IsNull())
    {
        if (!value["AreaUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.AreaUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaUnit = string(value["AreaUnit"].GetString());
        m_areaUnitHasBeenSet = true;
    }

    if (value.HasMember("Traveler") && !value["Traveler"].IsNull())
    {
        if (!value["Traveler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.Traveler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traveler = string(value["Traveler"].GetString());
        m_travelerHasBeenSet = true;
    }

    if (value.HasMember("TravelerID") && !value["TravelerID"].IsNull())
    {
        if (!value["TravelerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.TravelerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_travelerID = string(value["TravelerID"].GetString());
        m_travelerIDHasBeenSet = true;
    }

    if (value.HasMember("TravelDate") && !value["TravelDate"].IsNull())
    {
        if (!value["TravelDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.TravelDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_travelDate = string(value["TravelDate"].GetString());
        m_travelDateHasBeenSet = true;
    }

    if (value.HasMember("TravelLevel") && !value["TravelLevel"].IsNull())
    {
        if (!value["TravelLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatElectronicItemInfo.TravelLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_travelLevel = string(value["TravelLevel"].GetString());
        m_travelLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatElectronicItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quantity.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleBrandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleBrand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleBrand.c_str(), allocator).Move(), allocator);
    }

    if (m_departurePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeparturePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departurePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_arrivalPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivalPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrivalPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_transportItemsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportItemsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transportItemsName.c_str(), allocator).Move(), allocator);
    }

    if (m_placeOfBuildingServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaceOfBuildingService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placeOfBuildingService.c_str(), allocator).Move(), allocator);
    }

    if (m_buildingNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildingName.c_str(), allocator).Move(), allocator);
    }

    if (m_estateNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstateNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estateNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_areaUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_travelerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Traveler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traveler.c_str(), allocator).Move(), allocator);
    }

    if (m_travelerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_travelerID.c_str(), allocator).Move(), allocator);
    }

    if (m_travelDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_travelDate.c_str(), allocator).Move(), allocator);
    }

    if (m_travelLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_travelLevel.c_str(), allocator).Move(), allocator);
    }

}


string VatElectronicItemInfo::GetName() const
{
    return m_name;
}

void VatElectronicItemInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VatElectronicItemInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VatElectronicItemInfo::GetQuantity() const
{
    return m_quantity;
}

void VatElectronicItemInfo::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool VatElectronicItemInfo::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string VatElectronicItemInfo::GetSpecification() const
{
    return m_specification;
}

void VatElectronicItemInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool VatElectronicItemInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string VatElectronicItemInfo::GetPrice() const
{
    return m_price;
}

void VatElectronicItemInfo::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool VatElectronicItemInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string VatElectronicItemInfo::GetTotal() const
{
    return m_total;
}

void VatElectronicItemInfo::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatElectronicItemInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string VatElectronicItemInfo::GetTaxRate() const
{
    return m_taxRate;
}

void VatElectronicItemInfo::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool VatElectronicItemInfo::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string VatElectronicItemInfo::GetTax() const
{
    return m_tax;
}

void VatElectronicItemInfo::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool VatElectronicItemInfo::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string VatElectronicItemInfo::GetUnit() const
{
    return m_unit;
}

void VatElectronicItemInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool VatElectronicItemInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string VatElectronicItemInfo::GetVehicleType() const
{
    return m_vehicleType;
}

void VatElectronicItemInfo::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool VatElectronicItemInfo::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string VatElectronicItemInfo::GetVehicleBrand() const
{
    return m_vehicleBrand;
}

void VatElectronicItemInfo::SetVehicleBrand(const string& _vehicleBrand)
{
    m_vehicleBrand = _vehicleBrand;
    m_vehicleBrandHasBeenSet = true;
}

bool VatElectronicItemInfo::VehicleBrandHasBeenSet() const
{
    return m_vehicleBrandHasBeenSet;
}

string VatElectronicItemInfo::GetDeparturePlace() const
{
    return m_departurePlace;
}

void VatElectronicItemInfo::SetDeparturePlace(const string& _departurePlace)
{
    m_departurePlace = _departurePlace;
    m_departurePlaceHasBeenSet = true;
}

bool VatElectronicItemInfo::DeparturePlaceHasBeenSet() const
{
    return m_departurePlaceHasBeenSet;
}

string VatElectronicItemInfo::GetArrivalPlace() const
{
    return m_arrivalPlace;
}

void VatElectronicItemInfo::SetArrivalPlace(const string& _arrivalPlace)
{
    m_arrivalPlace = _arrivalPlace;
    m_arrivalPlaceHasBeenSet = true;
}

bool VatElectronicItemInfo::ArrivalPlaceHasBeenSet() const
{
    return m_arrivalPlaceHasBeenSet;
}

string VatElectronicItemInfo::GetTransportItemsName() const
{
    return m_transportItemsName;
}

void VatElectronicItemInfo::SetTransportItemsName(const string& _transportItemsName)
{
    m_transportItemsName = _transportItemsName;
    m_transportItemsNameHasBeenSet = true;
}

bool VatElectronicItemInfo::TransportItemsNameHasBeenSet() const
{
    return m_transportItemsNameHasBeenSet;
}

string VatElectronicItemInfo::GetPlaceOfBuildingService() const
{
    return m_placeOfBuildingService;
}

void VatElectronicItemInfo::SetPlaceOfBuildingService(const string& _placeOfBuildingService)
{
    m_placeOfBuildingService = _placeOfBuildingService;
    m_placeOfBuildingServiceHasBeenSet = true;
}

bool VatElectronicItemInfo::PlaceOfBuildingServiceHasBeenSet() const
{
    return m_placeOfBuildingServiceHasBeenSet;
}

string VatElectronicItemInfo::GetBuildingName() const
{
    return m_buildingName;
}

void VatElectronicItemInfo::SetBuildingName(const string& _buildingName)
{
    m_buildingName = _buildingName;
    m_buildingNameHasBeenSet = true;
}

bool VatElectronicItemInfo::BuildingNameHasBeenSet() const
{
    return m_buildingNameHasBeenSet;
}

string VatElectronicItemInfo::GetEstateNumber() const
{
    return m_estateNumber;
}

void VatElectronicItemInfo::SetEstateNumber(const string& _estateNumber)
{
    m_estateNumber = _estateNumber;
    m_estateNumberHasBeenSet = true;
}

bool VatElectronicItemInfo::EstateNumberHasBeenSet() const
{
    return m_estateNumberHasBeenSet;
}

string VatElectronicItemInfo::GetAreaUnit() const
{
    return m_areaUnit;
}

void VatElectronicItemInfo::SetAreaUnit(const string& _areaUnit)
{
    m_areaUnit = _areaUnit;
    m_areaUnitHasBeenSet = true;
}

bool VatElectronicItemInfo::AreaUnitHasBeenSet() const
{
    return m_areaUnitHasBeenSet;
}

string VatElectronicItemInfo::GetTraveler() const
{
    return m_traveler;
}

void VatElectronicItemInfo::SetTraveler(const string& _traveler)
{
    m_traveler = _traveler;
    m_travelerHasBeenSet = true;
}

bool VatElectronicItemInfo::TravelerHasBeenSet() const
{
    return m_travelerHasBeenSet;
}

string VatElectronicItemInfo::GetTravelerID() const
{
    return m_travelerID;
}

void VatElectronicItemInfo::SetTravelerID(const string& _travelerID)
{
    m_travelerID = _travelerID;
    m_travelerIDHasBeenSet = true;
}

bool VatElectronicItemInfo::TravelerIDHasBeenSet() const
{
    return m_travelerIDHasBeenSet;
}

string VatElectronicItemInfo::GetTravelDate() const
{
    return m_travelDate;
}

void VatElectronicItemInfo::SetTravelDate(const string& _travelDate)
{
    m_travelDate = _travelDate;
    m_travelDateHasBeenSet = true;
}

bool VatElectronicItemInfo::TravelDateHasBeenSet() const
{
    return m_travelDateHasBeenSet;
}

string VatElectronicItemInfo::GetTravelLevel() const
{
    return m_travelLevel;
}

void VatElectronicItemInfo::SetTravelLevel(const string& _travelLevel)
{
    m_travelLevel = _travelLevel;
    m_travelLevelHasBeenSet = true;
}

bool VatElectronicItemInfo::TravelLevelHasBeenSet() const
{
    return m_travelLevelHasBeenSet;
}

