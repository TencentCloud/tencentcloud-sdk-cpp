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

#include <tencentcloud/apigateway/v20180808/model/DescribeAllPluginApisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DescribeAllPluginApisRequest::DescribeAllPluginApisRequest() :
    m_serviceIdHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeAllPluginApisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAllPluginApisRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeAllPluginApisRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeAllPluginApisRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeAllPluginApisRequest::GetPluginId() const
{
    return m_pluginId;
}

void DescribeAllPluginApisRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool DescribeAllPluginApisRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string DescribeAllPluginApisRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void DescribeAllPluginApisRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool DescribeAllPluginApisRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

int64_t DescribeAllPluginApisRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAllPluginApisRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAllPluginApisRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAllPluginApisRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAllPluginApisRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAllPluginApisRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


