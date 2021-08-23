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

#include <tencentcloud/cvm/v20170312/model/SpotMarketOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

SpotMarketOptions::SpotMarketOptions() :
    m_maxPriceHasBeenSet(false),
    m_spotInstanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome SpotMarketOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxPrice") && !value["MaxPrice"].IsNull())
    {
        if (!value["MaxPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMarketOptions.MaxPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxPrice = string(value["MaxPrice"].GetString());
        m_maxPriceHasBeenSet = true;
    }

    if (value.HasMember("SpotInstanceType") && !value["SpotInstanceType"].IsNull())
    {
        if (!value["SpotInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMarketOptions.SpotInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spotInstanceType = string(value["SpotInstanceType"].GetString());
        m_spotInstanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpotMarketOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_spotInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spotInstanceType.c_str(), allocator).Move(), allocator);
    }

}


string SpotMarketOptions::GetMaxPrice() const
{
    return m_maxPrice;
}

void SpotMarketOptions::SetMaxPrice(const string& _maxPrice)
{
    m_maxPrice = _maxPrice;
    m_maxPriceHasBeenSet = true;
}

bool SpotMarketOptions::MaxPriceHasBeenSet() const
{
    return m_maxPriceHasBeenSet;
}

string SpotMarketOptions::GetSpotInstanceType() const
{
    return m_spotInstanceType;
}

void SpotMarketOptions::SetSpotInstanceType(const string& _spotInstanceType)
{
    m_spotInstanceType = _spotInstanceType;
    m_spotInstanceTypeHasBeenSet = true;
}

bool SpotMarketOptions::SpotInstanceTypeHasBeenSet() const
{
    return m_spotInstanceTypeHasBeenSet;
}

