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
using namespace rapidjson;
using namespace std;

BandwidthPriceGradient::BandwidthPriceGradient() :
    m_bandwidthRangeHasBeenSet(false),
    m_bandwidthUnitPriceHasBeenSet(false)
{
}

CoreInternalOutcome BandwidthPriceGradient::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BandwidthRange") && !value["BandwidthRange"].IsNull())
    {
        if (!value["BandwidthRange"].IsArray())
            return CoreInternalOutcome(Error("response `BandwidthPriceGradient.BandwidthRange` is not array type"));

        const Value &tmpValue = value["BandwidthRange"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bandwidthRange.push_back((*itr).GetInt64());
        }
        m_bandwidthRangeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthUnitPrice") && !value["BandwidthUnitPrice"].IsNull())
    {
        if (!value["BandwidthUnitPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `BandwidthPriceGradient.BandwidthUnitPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthUnitPrice = value["BandwidthUnitPrice"].GetDouble();
        m_bandwidthUnitPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BandwidthPriceGradient::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_bandwidthRangeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_bandwidthRange.begin(); itr != m_bandwidthRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bandwidthUnitPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthUnitPrice, allocator);
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

