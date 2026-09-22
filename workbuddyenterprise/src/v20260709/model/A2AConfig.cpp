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

#include <tencentcloud/workbuddyenterprise/v20260709/model/A2AConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

A2AConfig::A2AConfig() :
    m_a2AEnabledHasBeenSet(false),
    m_a2APublicRefHasBeenSet(false),
    m_a2AEndpointHasBeenSet(false),
    m_a2AStatusHasBeenSet(false)
{
}

CoreInternalOutcome A2AConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("A2AEnabled") && !value["A2AEnabled"].IsNull())
    {
        if (!value["A2AEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `A2AConfig.A2AEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_a2AEnabled = value["A2AEnabled"].GetBool();
        m_a2AEnabledHasBeenSet = true;
    }

    if (value.HasMember("A2APublicRef") && !value["A2APublicRef"].IsNull())
    {
        if (!value["A2APublicRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2AConfig.A2APublicRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2APublicRef = string(value["A2APublicRef"].GetString());
        m_a2APublicRefHasBeenSet = true;
    }

    if (value.HasMember("A2AEndpoint") && !value["A2AEndpoint"].IsNull())
    {
        if (!value["A2AEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2AConfig.A2AEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AEndpoint = string(value["A2AEndpoint"].GetString());
        m_a2AEndpointHasBeenSet = true;
    }

    if (value.HasMember("A2AStatus") && !value["A2AStatus"].IsNull())
    {
        if (!value["A2AStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `A2AConfig.A2AStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_a2AStatus = string(value["A2AStatus"].GetString());
        m_a2AStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void A2AConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_a2AEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_a2AEnabled, allocator);
    }

    if (m_a2APublicRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2APublicRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2APublicRef.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_a2AStatus.c_str(), allocator).Move(), allocator);
    }

}


bool A2AConfig::GetA2AEnabled() const
{
    return m_a2AEnabled;
}

void A2AConfig::SetA2AEnabled(const bool& _a2AEnabled)
{
    m_a2AEnabled = _a2AEnabled;
    m_a2AEnabledHasBeenSet = true;
}

bool A2AConfig::A2AEnabledHasBeenSet() const
{
    return m_a2AEnabledHasBeenSet;
}

string A2AConfig::GetA2APublicRef() const
{
    return m_a2APublicRef;
}

void A2AConfig::SetA2APublicRef(const string& _a2APublicRef)
{
    m_a2APublicRef = _a2APublicRef;
    m_a2APublicRefHasBeenSet = true;
}

bool A2AConfig::A2APublicRefHasBeenSet() const
{
    return m_a2APublicRefHasBeenSet;
}

string A2AConfig::GetA2AEndpoint() const
{
    return m_a2AEndpoint;
}

void A2AConfig::SetA2AEndpoint(const string& _a2AEndpoint)
{
    m_a2AEndpoint = _a2AEndpoint;
    m_a2AEndpointHasBeenSet = true;
}

bool A2AConfig::A2AEndpointHasBeenSet() const
{
    return m_a2AEndpointHasBeenSet;
}

string A2AConfig::GetA2AStatus() const
{
    return m_a2AStatus;
}

void A2AConfig::SetA2AStatus(const string& _a2AStatus)
{
    m_a2AStatus = _a2AStatus;
    m_a2AStatusHasBeenSet = true;
}

bool A2AConfig::A2AStatusHasBeenSet() const
{
    return m_a2AStatusHasBeenSet;
}

