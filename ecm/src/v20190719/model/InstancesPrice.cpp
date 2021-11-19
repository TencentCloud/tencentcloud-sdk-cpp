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

#include <tencentcloud/ecm/v20190719/model/InstancesPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstancesPrice::InstancesPrice() :
    m_instancePricesPartDetailHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false)
{
}

CoreInternalOutcome InstancesPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstancePricesPartDetail") && !value["InstancePricesPartDetail"].IsNull())
    {
        if (!value["InstancePricesPartDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstancesPrice.InstancePricesPartDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePricesPartDetail.Deserialize(value["InstancePricesPartDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePricesPartDetailHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancesPrice.Discount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetUint64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancesPrice.DiscountPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetUint64();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancesPrice.OriginalPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetUint64();
        m_originalPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancesPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instancePricesPartDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePricesPartDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePricesPartDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

}


InstancePricesPartDetail InstancesPrice::GetInstancePricesPartDetail() const
{
    return m_instancePricesPartDetail;
}

void InstancesPrice::SetInstancePricesPartDetail(const InstancePricesPartDetail& _instancePricesPartDetail)
{
    m_instancePricesPartDetail = _instancePricesPartDetail;
    m_instancePricesPartDetailHasBeenSet = true;
}

bool InstancesPrice::InstancePricesPartDetailHasBeenSet() const
{
    return m_instancePricesPartDetailHasBeenSet;
}

uint64_t InstancesPrice::GetDiscount() const
{
    return m_discount;
}

void InstancesPrice::SetDiscount(const uint64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool InstancesPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

uint64_t InstancesPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void InstancesPrice::SetDiscountPrice(const uint64_t& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool InstancesPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

uint64_t InstancesPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void InstancesPrice::SetOriginalPrice(const uint64_t& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool InstancesPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

