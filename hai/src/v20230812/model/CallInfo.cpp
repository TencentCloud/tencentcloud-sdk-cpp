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

#include <tencentcloud/hai/v20230812/model/CallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

CallInfo::CallInfo() :
    m_serviceIdHasBeenSet(false),
    m_publicEndpointHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false)
{
}

CoreInternalOutcome CallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("PublicEndpoint") && !value["PublicEndpoint"].IsNull())
    {
        if (!value["PublicEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInfo.PublicEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndpoint = string(value["PublicEndpoint"].GetString());
        m_publicEndpointHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInfo.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpoint") && !value["VpcEndpoint"].IsNull())
    {
        if (!value["VpcEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallInfo.VpcEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndpoint = string(value["VpcEndpoint"].GetString());
        m_vpcEndpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndpoint.c_str(), allocator).Move(), allocator);
    }

}


string CallInfo::GetServiceId() const
{
    return m_serviceId;
}

void CallInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CallInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CallInfo::GetPublicEndpoint() const
{
    return m_publicEndpoint;
}

void CallInfo::SetPublicEndpoint(const string& _publicEndpoint)
{
    m_publicEndpoint = _publicEndpoint;
    m_publicEndpointHasBeenSet = true;
}

bool CallInfo::PublicEndpointHasBeenSet() const
{
    return m_publicEndpointHasBeenSet;
}

string CallInfo::GetApiKey() const
{
    return m_apiKey;
}

void CallInfo::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool CallInfo::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string CallInfo::GetVpcEndpoint() const
{
    return m_vpcEndpoint;
}

void CallInfo::SetVpcEndpoint(const string& _vpcEndpoint)
{
    m_vpcEndpoint = _vpcEndpoint;
    m_vpcEndpointHasBeenSet = true;
}

bool CallInfo::VpcEndpointHasBeenSet() const
{
    return m_vpcEndpointHasBeenSet;
}

