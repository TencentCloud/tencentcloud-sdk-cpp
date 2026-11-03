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
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_inputParamsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayMCPToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
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

    if (m_inputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputParams.begin(); itr != m_inputParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayMCPToolRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetServerId() const
{
    return m_serverId;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
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

string CreateCloudNativeAPIGatewayMCPToolRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetMethod() const
{
    return m_method;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetPath() const
{
    return m_path;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
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

vector<CNAPIGwMCPToolParam> CreateCloudNativeAPIGatewayMCPToolRequest::GetInputParams() const
{
    return m_inputParams;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetInputParams(const vector<CNAPIGwMCPToolParam>& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPToolRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayMCPToolRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPToolRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


