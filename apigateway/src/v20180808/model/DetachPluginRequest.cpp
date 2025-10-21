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

#include <tencentcloud/apigateway/v20180808/model/DetachPluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DetachPluginRequest::DetachPluginRequest() :
    m_pluginIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_apiIdHasBeenSet(false)
{
}

string DetachPluginRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
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


string DetachPluginRequest::GetPluginId() const
{
    return m_pluginId;
}

void DetachPluginRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool DetachPluginRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string DetachPluginRequest::GetServiceId() const
{
    return m_serviceId;
}

void DetachPluginRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DetachPluginRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DetachPluginRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void DetachPluginRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool DetachPluginRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string DetachPluginRequest::GetApiId() const
{
    return m_apiId;
}

void DetachPluginRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool DetachPluginRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}


