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

#include <tencentcloud/vpc/v20170312/model/InternetPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InternetPrice::InternetPrice() :
    m_addressPriceHasBeenSet(false),
    m_iPPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome InternetPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressPrice") && !value["AddressPrice"].IsNull())
    {
        if (!value["AddressPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternetPrice.AddressPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addressPrice.Deserialize(value["AddressPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressPriceHasBeenSet = true;
    }

    if (value.HasMember("IPPrice") && !value["IPPrice"].IsNull())
    {
        if (!value["IPPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InternetPrice.IPPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPPrice.Deserialize(value["IPPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InternetPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InternetPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

}


InternetPriceDetail InternetPrice::GetAddressPrice() const
{
    return m_addressPrice;
}

void InternetPrice::SetAddressPrice(const InternetPriceDetail& _addressPrice)
{
    m_addressPrice = _addressPrice;
    m_addressPriceHasBeenSet = true;
}

bool InternetPrice::AddressPriceHasBeenSet() const
{
    return m_addressPriceHasBeenSet;
}

InternetPriceDetail InternetPrice::GetIPPrice() const
{
    return m_iPPrice;
}

void InternetPrice::SetIPPrice(const InternetPriceDetail& _iPPrice)
{
    m_iPPrice = _iPPrice;
    m_iPPriceHasBeenSet = true;
}

bool InternetPrice::IPPriceHasBeenSet() const
{
    return m_iPPriceHasBeenSet;
}

double InternetPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void InternetPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool InternetPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double InternetPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void InternetPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool InternetPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

