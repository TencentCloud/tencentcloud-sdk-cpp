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

#include <tencentcloud/gaap/v20180529/model/BandwidthPriceGradient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

BandwidthPriceGradient::BandwidthPriceGradient() :
    m_bandwidthRangeHasBeenSet(false),
    m_bandwidthUnitPriceHasBeenSet(false),
    m_discountBandwidthUnitPriceHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthPriceGradient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BandwidthRange") && !value["BandwidthRange"].IsNull())
    {
        if (!value["BandwidthRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BandwidthPriceGradient.BandwidthRange` is not array type"));

        const rapidjson::Value &tmpValue = value["BandwidthRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bandwidthRange.push_back((*itr).GetInt64());
        }
        m_bandwidthRangeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthUnitPrice") && !value["BandwidthUnitPrice"].IsNull())
    {
        if (!value["BandwidthUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPriceGradient.BandwidthUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthUnitPrice = value["BandwidthUnitPrice"].GetDouble();
        m_bandwidthUnitPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountBandwidthUnitPrice") && !value["DiscountBandwidthUnitPrice"].IsNull())
    {
        if (!value["DiscountBandwidthUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BandwidthPriceGradient.DiscountBandwidthUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountBandwidthUnitPrice = value["DiscountBandwidthUnitPrice"].GetDouble();
        m_discountBandwidthUnitPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthPriceGradient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bandwidthRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bandwidthRange.begin(); itr != m_bandwidthRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bandwidthUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthUnitPrice, allocator);
    }

    if (m_discountBandwidthUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountBandwidthUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountBandwidthUnitPrice, allocator);
    }

}


vector<int64_t> BandwidthPriceGradient::GetBandwidthRange() const
{
    return m_bandwidthRange;
}

void BandwidthPriceGradient::SetBandwidthRange(const vector<int64_t>& _bandwidthRange)
{
    m_bandwidthRange = _bandwidthRange;
    m_bandwidthRangeHasBeenSet = true;
}

bool BandwidthPriceGradient::BandwidthRangeHasBeenSet() const
{
    return m_bandwidthRangeHasBeenSet;
}

double BandwidthPriceGradient::GetBandwidthUnitPrice() const
{
    return m_bandwidthUnitPrice;
}

void BandwidthPriceGradient::SetBandwidthUnitPrice(const double& _bandwidthUnitPrice)
{
    m_bandwidthUnitPrice = _bandwidthUnitPrice;
    m_bandwidthUnitPriceHasBeenSet = true;
}

bool BandwidthPriceGradient::BandwidthUnitPriceHasBeenSet() const
{
    return m_bandwidthUnitPriceHasBeenSet;
}

double BandwidthPriceGradient::GetDiscountBandwidthUnitPrice() const
{
    return m_discountBandwidthUnitPrice;
}

void BandwidthPriceGradient::SetDiscountBandwidthUnitPrice(const double& _discountBandwidthUnitPrice)
{
    m_discountBandwidthUnitPrice = _discountBandwidthUnitPrice;
    m_discountBandwidthUnitPriceHasBeenSet = true;
}

bool BandwidthPriceGradient::DiscountBandwidthUnitPriceHasBeenSet() const
{
    return m_discountBandwidthUnitPriceHasBeenSet;
}

