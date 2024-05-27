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

#include <tencentcloud/domain/v20180808/model/PriceScopeConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

PriceScopeConf::PriceScopeConf() :
    m_maxPriceHasBeenSet(false),
    m_minPriceHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_depositPriceHasBeenSet(false)
{
}

CoreInternalOutcome PriceScopeConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxPrice") && !value["MaxPrice"].IsNull())
    {
        if (!value["MaxPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceScopeConf.MaxPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxPrice = value["MaxPrice"].GetDouble();
        m_maxPriceHasBeenSet = true;
    }

    if (value.HasMember("MinPrice") && !value["MinPrice"].IsNull())
    {
        if (!value["MinPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceScopeConf.MinPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minPrice = value["MinPrice"].GetDouble();
        m_minPriceHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceScopeConf.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("DepositPrice") && !value["DepositPrice"].IsNull())
    {
        if (!value["DepositPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PriceScopeConf.DepositPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_depositPrice = value["DepositPrice"].GetDouble();
        m_depositPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceScopeConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPrice, allocator);
    }

    if (m_minPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPrice, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_depositPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepositPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_depositPrice, allocator);
    }

}


double PriceScopeConf::GetMaxPrice() const
{
    return m_maxPrice;
}

void PriceScopeConf::SetMaxPrice(const double& _maxPrice)
{
    m_maxPrice = _maxPrice;
    m_maxPriceHasBeenSet = true;
}

bool PriceScopeConf::MaxPriceHasBeenSet() const
{
    return m_maxPriceHasBeenSet;
}

double PriceScopeConf::GetMinPrice() const
{
    return m_minPrice;
}

void PriceScopeConf::SetMinPrice(const double& _minPrice)
{
    m_minPrice = _minPrice;
    m_minPriceHasBeenSet = true;
}

bool PriceScopeConf::MinPriceHasBeenSet() const
{
    return m_minPriceHasBeenSet;
}

double PriceScopeConf::GetPrice() const
{
    return m_price;
}

void PriceScopeConf::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PriceScopeConf::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double PriceScopeConf::GetDepositPrice() const
{
    return m_depositPrice;
}

void PriceScopeConf::SetDepositPrice(const double& _depositPrice)
{
    m_depositPrice = _depositPrice;
    m_depositPriceHasBeenSet = true;
}

bool PriceScopeConf::DepositPriceHasBeenSet() const
{
    return m_depositPriceHasBeenSet;
}

