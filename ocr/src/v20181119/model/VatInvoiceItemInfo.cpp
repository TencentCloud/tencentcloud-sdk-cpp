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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceItemInfo::VatInvoiceItemInfo() :
    m_nameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxHasBeenSet(false),
    m_dateStartHasBeenSet(false),
    m_dateEndHasBeenSet(false),
    m_licensePlateHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_serialNumberHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }

    if (value.HasMember("DateStart") && !value["DateStart"].IsNull())
    {
        if (!value["DateStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.DateStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateStart = string(value["DateStart"].GetString());
        m_dateStartHasBeenSet = true;
    }

    if (value.HasMember("DateEnd") && !value["DateEnd"].IsNull())
    {
        if (!value["DateEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.DateEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateEnd = string(value["DateEnd"].GetString());
        m_dateEndHasBeenSet = true;
    }

    if (value.HasMember("LicensePlate") && !value["LicensePlate"].IsNull())
    {
        if (!value["LicensePlate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.LicensePlate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licensePlate = string(value["LicensePlate"].GetString());
        m_licensePlateHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItemInfo.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quantity.c_str(), allocator).Move(), allocator);
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

    if (m_dateStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateStart.c_str(), allocator).Move(), allocator);
    }

    if (m_dateEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_licensePlateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicensePlate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licensePlate.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoiceItemInfo::GetName() const
{
    return m_name;
}

void VatInvoiceItemInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VatInvoiceItemInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VatInvoiceItemInfo::GetSpecification() const
{
    return m_specification;
}

void VatInvoiceItemInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool VatInvoiceItemInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string VatInvoiceItemInfo::GetUnit() const
{
    return m_unit;
}

void VatInvoiceItemInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool VatInvoiceItemInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string VatInvoiceItemInfo::GetQuantity() const
{
    return m_quantity;
}

void VatInvoiceItemInfo::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool VatInvoiceItemInfo::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string VatInvoiceItemInfo::GetPrice() const
{
    return m_price;
}

void VatInvoiceItemInfo::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool VatInvoiceItemInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string VatInvoiceItemInfo::GetTotal() const
{
    return m_total;
}

void VatInvoiceItemInfo::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatInvoiceItemInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string VatInvoiceItemInfo::GetTaxRate() const
{
    return m_taxRate;
}

void VatInvoiceItemInfo::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool VatInvoiceItemInfo::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string VatInvoiceItemInfo::GetTax() const
{
    return m_tax;
}

void VatInvoiceItemInfo::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool VatInvoiceItemInfo::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}

string VatInvoiceItemInfo::GetDateStart() const
{
    return m_dateStart;
}

void VatInvoiceItemInfo::SetDateStart(const string& _dateStart)
{
    m_dateStart = _dateStart;
    m_dateStartHasBeenSet = true;
}

bool VatInvoiceItemInfo::DateStartHasBeenSet() const
{
    return m_dateStartHasBeenSet;
}

string VatInvoiceItemInfo::GetDateEnd() const
{
    return m_dateEnd;
}

void VatInvoiceItemInfo::SetDateEnd(const string& _dateEnd)
{
    m_dateEnd = _dateEnd;
    m_dateEndHasBeenSet = true;
}

bool VatInvoiceItemInfo::DateEndHasBeenSet() const
{
    return m_dateEndHasBeenSet;
}

string VatInvoiceItemInfo::GetLicensePlate() const
{
    return m_licensePlate;
}

void VatInvoiceItemInfo::SetLicensePlate(const string& _licensePlate)
{
    m_licensePlate = _licensePlate;
    m_licensePlateHasBeenSet = true;
}

bool VatInvoiceItemInfo::LicensePlateHasBeenSet() const
{
    return m_licensePlateHasBeenSet;
}

string VatInvoiceItemInfo::GetVehicleType() const
{
    return m_vehicleType;
}

void VatInvoiceItemInfo::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool VatInvoiceItemInfo::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string VatInvoiceItemInfo::GetSerialNumber() const
{
    return m_serialNumber;
}

void VatInvoiceItemInfo::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool VatInvoiceItemInfo::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

