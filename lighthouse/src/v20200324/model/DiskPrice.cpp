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

#include <tencentcloud/lighthouse/v20200324/model/DiskPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DiskPrice::DiskPrice() :
    m_originalDiskPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_detailPricesHasBeenSet(false)
{
}

CoreInternalOutcome DiskPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalDiskPrice") && !value["OriginalDiskPrice"].IsNull())
    {
        if (!value["OriginalDiskPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiskPrice.OriginalDiskPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalDiskPrice = value["OriginalDiskPrice"].GetDouble();
        m_originalDiskPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiskPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiskPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiskPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("DetailPrices") && !value["DetailPrices"].IsNull())
    {
        if (!value["DetailPrices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiskPrice.DetailPrices` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailPrices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailPrice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailPrices.push_back(item);
        }
        m_detailPricesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalDiskPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalDiskPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalDiskPrice, allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
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

    if (m_detailPricesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailPrices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailPrices.begin(); itr != m_detailPrices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double DiskPrice::GetOriginalDiskPrice() const
{
    return m_originalDiskPrice;
}

void DiskPrice::SetOriginalDiskPrice(const double& _originalDiskPrice)
{
    m_originalDiskPrice = _originalDiskPrice;
    m_originalDiskPriceHasBeenSet = true;
}

bool DiskPrice::OriginalDiskPriceHasBeenSet() const
{
    return m_originalDiskPriceHasBeenSet;
}

double DiskPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void DiskPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool DiskPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double DiskPrice::GetDiscount() const
{
    return m_discount;
}

void DiskPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool DiskPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double DiskPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void DiskPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool DiskPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

vector<DetailPrice> DiskPrice::GetDetailPrices() const
{
    return m_detailPrices;
}

void DiskPrice::SetDetailPrices(const vector<DetailPrice>& _detailPrices)
{
    m_detailPrices = _detailPrices;
    m_detailPricesHasBeenSet = true;
}

bool DiskPrice::DetailPricesHasBeenSet() const
{
    return m_detailPricesHasBeenSet;
}

