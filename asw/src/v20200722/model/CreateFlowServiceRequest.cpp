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

#include <tencentcloud/asw/v20200722/model/CreateFlowServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

CreateFlowServiceRequest::CreateFlowServiceRequest() :
    m_definitionHasBeenSet(false),
    m_flowServiceNameHasBeenSet(false),
    m_isNewRoleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_flowServiceChineseNameHasBeenSet(false),
    m_roleResourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableCLSHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

string CreateFlowServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_definition.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNewRole, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceChineseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowServiceChineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleResource.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCLS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCLS, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFlowServiceRequest::GetDefinition() const
{
    return m_definition;
}

void CreateFlowServiceRequest::SetDefinition(const string& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool CreateFlowServiceRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string CreateFlowServiceRequest::GetFlowServiceName() const
{
    return m_flowServiceName;
}

void CreateFlowServiceRequest::SetFlowServiceName(const string& _flowServiceName)
{
    m_flowServiceName = _flowServiceName;
    m_flowServiceNameHasBeenSet = true;
}

bool CreateFlowServiceRequest::FlowServiceNameHasBeenSet() const
{
    return m_flowServiceNameHasBeenSet;
}

bool CreateFlowServiceRequest::GetIsNewRole() const
{
    return m_isNewRole;
}

void CreateFlowServiceRequest::SetIsNewRole(const bool& _isNewRole)
{
    m_isNewRole = _isNewRole;
    m_isNewRoleHasBeenSet = true;
}

bool CreateFlowServiceRequest::IsNewRoleHasBeenSet() const
{
    return m_isNewRoleHasBeenSet;
}

string CreateFlowServiceRequest::GetType() const
{
    return m_type;
}

void CreateFlowServiceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateFlowServiceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateFlowServiceRequest::GetFlowServiceChineseName() const
{
    return m_flowServiceChineseName;
}

void CreateFlowServiceRequest::SetFlowServiceChineseName(const string& _flowServiceChineseName)
{
    m_flowServiceChineseName = _flowServiceChineseName;
    m_flowServiceChineseNameHasBeenSet = true;
}

bool CreateFlowServiceRequest::FlowServiceChineseNameHasBeenSet() const
{
    return m_flowServiceChineseNameHasBeenSet;
}

string CreateFlowServiceRequest::GetRoleResource() const
{
    return m_roleResource;
}

void CreateFlowServiceRequest::SetRoleResource(const string& _roleResource)
{
    m_roleResource = _roleResource;
    m_roleResourceHasBeenSet = true;
}

bool CreateFlowServiceRequest::RoleResourceHasBeenSet() const
{
    return m_roleResourceHasBeenSet;
}

string CreateFlowServiceRequest::GetDescription() const
{
    return m_description;
}

void CreateFlowServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFlowServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateFlowServiceRequest::GetEnableCLS() const
{
    return m_enableCLS;
}

void CreateFlowServiceRequest::SetEnableCLS(const bool& _enableCLS)
{
    m_enableCLS = _enableCLS;
    m_enableCLSHasBeenSet = true;
}

bool CreateFlowServiceRequest::EnableCLSHasBeenSet() const
{
    return m_enableCLSHasBeenSet;
}

string CreateFlowServiceRequest::GetInput() const
{
    return m_input;
}

void CreateFlowServiceRequest::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool CreateFlowServiceRequest::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}


