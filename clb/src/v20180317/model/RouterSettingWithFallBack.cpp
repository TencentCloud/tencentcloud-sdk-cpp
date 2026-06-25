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

#include <tencentcloud/clb/v20180317/model/RouterSettingWithFallBack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RouterSettingWithFallBack::RouterSettingWithFallBack() :
    m_fallBackHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_crossModelGroupRoutingStrategyHasBeenSet(false)
{
}

CoreInternalOutcome RouterSettingWithFallBack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FallBack") && !value["FallBack"].IsNull())
    {
        if (!value["FallBack"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.FallBack` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fallBack.Deserialize(value["FallBack"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fallBackHasBeenSet = true;
    }

    if (value.HasMember("RoutingStrategy") && !value["RoutingStrategy"].IsNull())
    {
        if (!value["RoutingStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.RoutingStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routingStrategy = string(value["RoutingStrategy"].GetString());
        m_routingStrategyHasBeenSet = true;
    }

    if (value.HasMember("CrossModelGroupRoutingStrategy") && !value["CrossModelGroupRoutingStrategy"].IsNull())
    {
        if (!value["CrossModelGroupRoutingStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.CrossModelGroupRoutingStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossModelGroupRoutingStrategy = string(value["CrossModelGroupRoutingStrategy"].GetString());
        m_crossModelGroupRoutingStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterSettingWithFallBack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fallBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fallBack.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_routingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routingStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_crossModelGroupRoutingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossModelGroupRoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossModelGroupRoutingStrategy.c_str(), allocator).Move(), allocator);
    }

}


FallBackItem RouterSettingWithFallBack::GetFallBack() const
{
    return m_fallBack;
}

void RouterSettingWithFallBack::SetFallBack(const FallBackItem& _fallBack)
{
    m_fallBack = _fallBack;
    m_fallBackHasBeenSet = true;
}

bool RouterSettingWithFallBack::FallBackHasBeenSet() const
{
    return m_fallBackHasBeenSet;
}

string RouterSettingWithFallBack::GetRoutingStrategy() const
{
    return m_routingStrategy;
}

void RouterSettingWithFallBack::SetRoutingStrategy(const string& _routingStrategy)
{
    m_routingStrategy = _routingStrategy;
    m_routingStrategyHasBeenSet = true;
}

bool RouterSettingWithFallBack::RoutingStrategyHasBeenSet() const
{
    return m_routingStrategyHasBeenSet;
}

string RouterSettingWithFallBack::GetCrossModelGroupRoutingStrategy() const
{
    return m_crossModelGroupRoutingStrategy;
}

void RouterSettingWithFallBack::SetCrossModelGroupRoutingStrategy(const string& _crossModelGroupRoutingStrategy)
{
    m_crossModelGroupRoutingStrategy = _crossModelGroupRoutingStrategy;
    m_crossModelGroupRoutingStrategyHasBeenSet = true;
}

bool RouterSettingWithFallBack::CrossModelGroupRoutingStrategyHasBeenSet() const
{
    return m_crossModelGroupRoutingStrategyHasBeenSet;
}

