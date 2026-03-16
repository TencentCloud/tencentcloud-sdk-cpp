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

#include <tencentcloud/tione/v20211111/model/GatewayConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

GatewayConfig::GatewayConfig() :
    m_gatewayTypeHasBeenSet(false),
    m_schedulingAlgorithmHasBeenSet(false),
    m_hashHeaderKeyHasBeenSet(false)
{
}

CoreInternalOutcome GatewayConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayConfig.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("SchedulingAlgorithm") && !value["SchedulingAlgorithm"].IsNull())
    {
        if (!value["SchedulingAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayConfig.SchedulingAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulingAlgorithm = string(value["SchedulingAlgorithm"].GetString());
        m_schedulingAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("HashHeaderKey") && !value["HashHeaderKey"].IsNull())
    {
        if (!value["HashHeaderKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayConfig.HashHeaderKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hashHeaderKey = string(value["HashHeaderKey"].GetString());
        m_hashHeaderKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulingAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulingAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_hashHeaderKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HashHeaderKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hashHeaderKey.c_str(), allocator).Move(), allocator);
    }

}


string GatewayConfig::GetGatewayType() const
{
    return m_gatewayType;
}

void GatewayConfig::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool GatewayConfig::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string GatewayConfig::GetSchedulingAlgorithm() const
{
    return m_schedulingAlgorithm;
}

void GatewayConfig::SetSchedulingAlgorithm(const string& _schedulingAlgorithm)
{
    m_schedulingAlgorithm = _schedulingAlgorithm;
    m_schedulingAlgorithmHasBeenSet = true;
}

bool GatewayConfig::SchedulingAlgorithmHasBeenSet() const
{
    return m_schedulingAlgorithmHasBeenSet;
}

string GatewayConfig::GetHashHeaderKey() const
{
    return m_hashHeaderKey;
}

void GatewayConfig::SetHashHeaderKey(const string& _hashHeaderKey)
{
    m_hashHeaderKey = _hashHeaderKey;
    m_hashHeaderKeyHasBeenSet = true;
}

bool GatewayConfig::HashHeaderKeyHasBeenSet() const
{
    return m_hashHeaderKeyHasBeenSet;
}

