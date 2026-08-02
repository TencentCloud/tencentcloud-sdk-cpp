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
    m_crossModelGroupRoutingStrategyHasBeenSet(false),
    m_fallBackHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_numRetriesHasBeenSet(false),
    m_routingStrategyArgsHasBeenSet(false)
{
}

CoreInternalOutcome RouterSettingWithFallBack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrossModelGroupRoutingStrategy") && !value["CrossModelGroupRoutingStrategy"].IsNull())
    {
        if (!value["CrossModelGroupRoutingStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.CrossModelGroupRoutingStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossModelGroupRoutingStrategy = string(value["CrossModelGroupRoutingStrategy"].GetString());
        m_crossModelGroupRoutingStrategyHasBeenSet = true;
    }

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

    if (value.HasMember("NumRetries") && !value["NumRetries"].IsNull())
    {
        if (!value["NumRetries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.NumRetries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numRetries = value["NumRetries"].GetUint64();
        m_numRetriesHasBeenSet = true;
    }

    if (value.HasMember("RoutingStrategyArgs") && !value["RoutingStrategyArgs"].IsNull())
    {
        if (!value["RoutingStrategyArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithFallBack.RoutingStrategyArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_routingStrategyArgs.Deserialize(value["RoutingStrategyArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_routingStrategyArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterSettingWithFallBack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crossModelGroupRoutingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossModelGroupRoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossModelGroupRoutingStrategy.c_str(), allocator).Move(), allocator);
    }

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

    if (m_numRetriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRetries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numRetries, allocator);
    }

    if (m_routingStrategyArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingStrategyArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routingStrategyArgs.ToJsonObject(value[key.c_str()], allocator);
    }

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

uint64_t RouterSettingWithFallBack::GetNumRetries() const
{
    return m_numRetries;
}

void RouterSettingWithFallBack::SetNumRetries(const uint64_t& _numRetries)
{
    m_numRetries = _numRetries;
    m_numRetriesHasBeenSet = true;
}

bool RouterSettingWithFallBack::NumRetriesHasBeenSet() const
{
    return m_numRetriesHasBeenSet;
}

RoutingStrategyArgs RouterSettingWithFallBack::GetRoutingStrategyArgs() const
{
    return m_routingStrategyArgs;
}

void RouterSettingWithFallBack::SetRoutingStrategyArgs(const RoutingStrategyArgs& _routingStrategyArgs)
{
    m_routingStrategyArgs = _routingStrategyArgs;
    m_routingStrategyArgsHasBeenSet = true;
}

bool RouterSettingWithFallBack::RoutingStrategyArgsHasBeenSet() const
{
    return m_routingStrategyArgsHasBeenSet;
}

