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

#include <tencentcloud/apigateway/v20180808/model/UnbindApiAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UnbindApiAppRequest::UnbindApiAppRequest() :
    m_apiAppIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_apiIdHasBeenSet(false)
{
}

string UnbindApiAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindApiAppRequest::GetApiAppId() const
{
    return m_apiAppId;
}

void UnbindApiAppRequest::SetApiAppId(const string& _apiAppId)
{
    m_apiAppId = _apiAppId;
    m_apiAppIdHasBeenSet = true;
}

bool UnbindApiAppRequest::ApiAppIdHasBeenSet() const
{
    return m_apiAppIdHasBeenSet;
}

string UnbindApiAppRequest::GetEnvironment() const
{
    return m_environment;
}

void UnbindApiAppRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool UnbindApiAppRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string UnbindApiAppRequest::GetServiceId() const
{
    return m_serviceId;
}

void UnbindApiAppRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UnbindApiAppRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string UnbindApiAppRequest::GetApiId() const
{
    return m_apiId;
}

void UnbindApiAppRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool UnbindApiAppRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}


