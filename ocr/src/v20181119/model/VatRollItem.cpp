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

#include <tencentcloud/ocr/v20181119/model/VatRollItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatRollItem::VatRollItem() :
    m_nameHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome VatRollItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatRollItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatRollItem.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatRollItem.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatRollItem.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatRollItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string VatRollItem::GetName() const
{
    return m_name;
}

void VatRollItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VatRollItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VatRollItem::GetQuantity() const
{
    return m_quantity;
}

void VatRollItem::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool VatRollItem::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string VatRollItem::GetPrice() const
{
    return m_price;
}

void VatRollItem::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool VatRollItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string VatRollItem::GetTotal() const
{
    return m_total;
}

void VatRollItem::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VatRollItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

