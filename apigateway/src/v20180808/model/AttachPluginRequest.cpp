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

#include <tencentcloud/apigateway/v20180808/model/AttachPluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

AttachPluginRequest::AttachPluginRequest() :
    m_pluginIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_apiIdsHasBeenSet(false)
{
}

string AttachPluginRequest::ToJsonString() const
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

    if (m_apiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiIds.begin(); itr != m_apiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachPluginRequest::GetPluginId() const
{
    return m_pluginId;
}

void AttachPluginRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AttachPluginRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string AttachPluginRequest::GetServiceId() const
{
    return m_serviceId;
}

void AttachPluginRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool AttachPluginRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string AttachPluginRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void AttachPluginRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool AttachPluginRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

vector<string> AttachPluginRequest::GetApiIds() const
{
    return m_apiIds;
}

void AttachPluginRequest::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool AttachPluginRequest::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}


