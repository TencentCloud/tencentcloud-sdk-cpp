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

#include <tencentcloud/thpc/v20230321/model/Price.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

Price::Price() :
    m_spacePriceHasBeenSet(false),
    m_bandwidthPriceHasBeenSet(false)
{
}

CoreInternalOutcome Price::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpacePrice") && !value["SpacePrice"].IsNull())
    {
        if (!value["SpacePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Price.SpacePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spacePrice.Deserialize(value["SpacePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spacePriceHasBeenSet = true;
    }

    if (value.HasMember("BandwidthPrice") && !value["BandwidthPrice"].IsNull())
    {
        if (!value["BandwidthPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Price.BandwidthPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bandwidthPrice.Deserialize(value["BandwidthPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bandwidthPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Price::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spacePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpacePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spacePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


ItemPrice Price::GetSpacePrice() const
{
    return m_spacePrice;
}

void Price::SetSpacePrice(const ItemPrice& _spacePrice)
{
    m_spacePrice = _spacePrice;
    m_spacePriceHasBeenSet = true;
}

bool Price::SpacePriceHasBeenSet() const
{
    return m_spacePriceHasBeenSet;
}

ItemPrice Price::GetBandwidthPrice() const
{
    return m_bandwidthPrice;
}

void Price::SetBandwidthPrice(const ItemPrice& _bandwidthPrice)
{
    m_bandwidthPrice = _bandwidthPrice;
    m_bandwidthPriceHasBeenSet = true;
}

bool Price::BandwidthPriceHasBeenSet() const
{
    return m_bandwidthPriceHasBeenSet;
}

