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

#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateCloudNativeAPIGatewayMCPToolRequest::CreateCloudNativeAPIGatewayMCPToolRequest() :
    m_contentTypeHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayMCPToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayMCPToolRequest::GetContentType() const
{
    return m_contentType;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetDisplayName() const
{
    return m_displayName;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}


