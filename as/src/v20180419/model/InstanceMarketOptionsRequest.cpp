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

#include <tencentcloud/as/v20180419/model/InstanceMarketOptionsRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

InstanceMarketOptionsRequest::InstanceMarketOptionsRequest() :
    m_spotOptionsHasBeenSet(false),
    m_marketTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceMarketOptionsRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpotOptions") && !value["SpotOptions"].IsNull())
    {
        if (!value["SpotOptions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMarketOptionsRequest.SpotOptions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spotOptions.Deserialize(value["SpotOptions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spotOptionsHasBeenSet = true;
    }

    if (value.HasMember("MarketType") && !value["MarketType"].IsNull())
    {
        if (!value["MarketType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMarketOptionsRequest.MarketType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketType = string(value["MarketType"].GetString());
        m_marketTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceMarketOptionsRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_spotOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spotOptions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_marketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketType.c_str(), allocator).Move(), allocator);
    }

}


SpotMarketOptions InstanceMarketOptionsRequest::GetSpotOptions() const
{
    return m_spotOptions;
}

void InstanceMarketOptionsRequest::SetSpotOptions(const SpotMarketOptions& _spotOptions)
{
    m_spotOptions = _spotOptions;
    m_spotOptionsHasBeenSet = true;
}

bool InstanceMarketOptionsRequest::SpotOptionsHasBeenSet() const
{
    return m_spotOptionsHasBeenSet;
}

string InstanceMarketOptionsRequest::GetMarketType() const
{
    return m_marketType;
}

void InstanceMarketOptionsRequest::SetMarketType(const string& _marketType)
{
    m_marketType = _marketType;
    m_marketTypeHasBeenSet = true;
}

bool InstanceMarketOptionsRequest::MarketTypeHasBeenSet() const
{
    return m_marketTypeHasBeenSet;
}

