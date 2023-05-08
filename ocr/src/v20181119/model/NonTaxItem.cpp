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

#include <tencentcloud/ocr/v20181119/model/NonTaxItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

NonTaxItem::NonTaxItem() :
    m_itemIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome NonTaxItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.ItemID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = string(value["ItemID"].GetString());
        m_itemIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonTaxItem.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NonTaxItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string NonTaxItem::GetItemID() const
{
    return m_itemID;
}

void NonTaxItem::SetItemID(const string& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool NonTaxItem::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

string NonTaxItem::GetName() const
{
    return m_name;
}

void NonTaxItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NonTaxItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NonTaxItem::GetUnit() const
{
    return m_unit;
}

void NonTaxItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool NonTaxItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string NonTaxItem::GetQuantity() const
{
    return m_quantity;
}

void NonTaxItem::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool NonTaxItem::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string NonTaxItem::GetStandard() const
{
    return m_standard;
}

void NonTaxItem::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool NonTaxItem::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

string NonTaxItem::GetTotal() const
{
    return m_total;
}

void NonTaxItem::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool NonTaxItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

