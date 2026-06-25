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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPToolRequest::ModifyCloudNativeAPIGatewayMCPToolRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_inputParamsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_toolVersionHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::ToJsonString() const
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

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
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

    if (m_toolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayMCPToolRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetToolId() const
{
    return m_toolId;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetName() const
{
    return m_name;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetPath() const
{
    return m_path;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetContentType() const
{
    return m_contentType;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetMethod() const
{
    return m_method;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

vector<CNAPIGwMCPToolParam> ModifyCloudNativeAPIGatewayMCPToolRequest::GetInputParams() const
{
    return m_inputParams;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetInputParams(const vector<CNAPIGwMCPToolParam>& _inputParams)
{
    m_inputParams = _inputParams;
    m_inputParamsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::InputParamsHasBeenSet() const
{
    return m_inputParamsHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolRequest::GetToolVersion() const
{
    return m_toolVersion;
}

void ModifyCloudNativeAPIGatewayMCPToolRequest::SetToolVersion(const string& _toolVersion)
{
    m_toolVersion = _toolVersion;
    m_toolVersionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolRequest::ToolVersionHasBeenSet() const
{
    return m_toolVersionHasBeenSet;
}


