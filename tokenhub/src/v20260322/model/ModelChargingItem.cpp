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

#include <tencentcloud/tokenhub/v20260322/model/ModelChargingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelChargingItem::ModelChargingItem() :
    m_priceNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_priceUnitHasBeenSet(false)
{
}

CoreInternalOutcome ModelChargingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PriceName") && !value["PriceName"].IsNull())
    {
        if (!value["PriceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingItem.PriceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceName = string(value["PriceName"].GetString());
        m_priceNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingItem.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingItem.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("PriceUnit") && !value["PriceUnit"].IsNull())
    {
        if (!value["PriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelChargingItem.PriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceUnit = string(value["PriceUnit"].GetString());
        m_priceUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelChargingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_priceUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceUnit.c_str(), allocator).Move(), allocator);
    }

}


string ModelChargingItem::GetPriceName() const
{
    return m_priceName;
}

void ModelChargingItem::SetPriceName(const string& _priceName)
{
    m_priceName = _priceName;
    m_priceNameHasBeenSet = true;
}

bool ModelChargingItem::PriceNameHasBeenSet() const
{
    return m_priceNameHasBeenSet;
}

string ModelChargingItem::GetDisplayName() const
{
    return m_displayName;
}

void ModelChargingItem::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModelChargingItem::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModelChargingItem::GetPrice() const
{
    return m_price;
}

void ModelChargingItem::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool ModelChargingItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string ModelChargingItem::GetPriceUnit() const
{
    return m_priceUnit;
}

void ModelChargingItem::SetPriceUnit(const string& _priceUnit)
{
    m_priceUnit = _priceUnit;
    m_priceUnitHasBeenSet = true;
}

bool ModelChargingItem::PriceUnitHasBeenSet() const
{
    return m_priceUnitHasBeenSet;
}

