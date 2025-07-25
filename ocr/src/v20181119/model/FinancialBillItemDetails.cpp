/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ocr/v20181119/model/FinancialBillItemDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FinancialBillItemDetails::FinancialBillItemDetails() :
    m_itemIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome FinancialBillItemDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.ItemID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = string(value["ItemID"].GetString());
        m_itemIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinancialBillItemDetails.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FinancialBillItemDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_standardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standard.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string FinancialBillItemDetails::GetItemID() const
{
    return m_itemID;
}

void FinancialBillItemDetails::SetItemID(const string& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool FinancialBillItemDetails::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

string FinancialBillItemDetails::GetName() const
{
    return m_name;
}

void FinancialBillItemDetails::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FinancialBillItemDetails::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FinancialBillItemDetails::GetUnit() const
{
    return m_unit;
}

void FinancialBillItemDetails::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool FinancialBillItemDetails::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string FinancialBillItemDetails::GetQuantity() const
{
    return m_quantity;
}

void FinancialBillItemDetails::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool FinancialBillItemDetails::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string FinancialBillItemDetails::GetStandard() const
{
    return m_standard;
}

void FinancialBillItemDetails::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool FinancialBillItemDetails::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

string FinancialBillItemDetails::GetTotal() const
{
    return m_total;
}

void FinancialBillItemDetails::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool FinancialBillItemDetails::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string FinancialBillItemDetails::GetSerialNumber() const
{
    return m_serialNumber;
}

void FinancialBillItemDetails::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool FinancialBillItemDetails::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string FinancialBillItemDetails::GetRemark() const
{
    return m_remark;
}

void FinancialBillItemDetails::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FinancialBillItemDetails::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

