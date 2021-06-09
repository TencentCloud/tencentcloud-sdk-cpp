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

#include <tencentcloud/asw/v20200722/model/ModifyFlowServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

ModifyFlowServiceRequest::ModifyFlowServiceRequest() :
    m_flowServiceResourceHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_flowServiceNameHasBeenSet(false),
    m_flowServiceChineseNameHasBeenSet(false),
    m_isNewRoleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_roleResourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableCLSHasBeenSet(false)
{
}

string ModifyFlowServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowServiceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowServiceResource.c_str(), allocator).Move(), allocator);
    }

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

    if (m_flowServiceChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceChineseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowServiceChineseName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyFlowServiceRequest::GetFlowServiceResource() const
{
    return m_flowServiceResource;
}

void ModifyFlowServiceRequest::SetFlowServiceResource(const string& _flowServiceResource)
{
    m_flowServiceResource = _flowServiceResource;
    m_flowServiceResourceHasBeenSet = true;
}

bool ModifyFlowServiceRequest::FlowServiceResourceHasBeenSet() const
{
    return m_flowServiceResourceHasBeenSet;
}

string ModifyFlowServiceRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyFlowServiceRequest::SetDefinition(const string& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyFlowServiceRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyFlowServiceRequest::GetFlowServiceName() const
{
    return m_flowServiceName;
}

void ModifyFlowServiceRequest::SetFlowServiceName(const string& _flowServiceName)
{
    m_flowServiceName = _flowServiceName;
    m_flowServiceNameHasBeenSet = true;
}

bool ModifyFlowServiceRequest::FlowServiceNameHasBeenSet() const
{
    return m_flowServiceNameHasBeenSet;
}

string ModifyFlowServiceRequest::GetFlowServiceChineseName() const
{
    return m_flowServiceChineseName;
}

void ModifyFlowServiceRequest::SetFlowServiceChineseName(const string& _flowServiceChineseName)
{
    m_flowServiceChineseName = _flowServiceChineseName;
    m_flowServiceChineseNameHasBeenSet = true;
}

bool ModifyFlowServiceRequest::FlowServiceChineseNameHasBeenSet() const
{
    return m_flowServiceChineseNameHasBeenSet;
}

bool ModifyFlowServiceRequest::GetIsNewRole() const
{
    return m_isNewRole;
}

void ModifyFlowServiceRequest::SetIsNewRole(const bool& _isNewRole)
{
    m_isNewRole = _isNewRole;
    m_isNewRoleHasBeenSet = true;
}

bool ModifyFlowServiceRequest::IsNewRoleHasBeenSet() const
{
    return m_isNewRoleHasBeenSet;
}

string ModifyFlowServiceRequest::GetType() const
{
    return m_type;
}

void ModifyFlowServiceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyFlowServiceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyFlowServiceRequest::GetRoleResource() const
{
    return m_roleResource;
}

void ModifyFlowServiceRequest::SetRoleResource(const string& _roleResource)
{
    m_roleResource = _roleResource;
    m_roleResourceHasBeenSet = true;
}

bool ModifyFlowServiceRequest::RoleResourceHasBeenSet() const
{
    return m_roleResourceHasBeenSet;
}

string ModifyFlowServiceRequest::GetDescription() const
{
    return m_description;
}

void ModifyFlowServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyFlowServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyFlowServiceRequest::GetEnableCLS() const
{
    return m_enableCLS;
}

void ModifyFlowServiceRequest::SetEnableCLS(const bool& _enableCLS)
{
    m_enableCLS = _enableCLS;
    m_enableCLSHasBeenSet = true;
}

bool ModifyFlowServiceRequest::EnableCLSHasBeenSet() const
{
    return m_enableCLSHasBeenSet;
}


