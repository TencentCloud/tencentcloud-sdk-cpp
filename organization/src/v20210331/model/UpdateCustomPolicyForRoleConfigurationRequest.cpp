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

#include <tencentcloud/organization/v20210331/model/UpdateCustomPolicyForRoleConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateCustomPolicyForRoleConfigurationRequest::UpdateCustomPolicyForRoleConfigurationRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_customPolicyNameHasBeenSet(false),
    m_newCustomPolicyDocumentHasBeenSet(false)
{
}

string UpdateCustomPolicyForRoleConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_customPolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customPolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_newCustomPolicyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCustomPolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newCustomPolicyDocument.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCustomPolicyForRoleConfigurationRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateCustomPolicyForRoleConfigurationRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateCustomPolicyForRoleConfigurationRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateCustomPolicyForRoleConfigurationRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void UpdateCustomPolicyForRoleConfigurationRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool UpdateCustomPolicyForRoleConfigurationRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string UpdateCustomPolicyForRoleConfigurationRequest::GetCustomPolicyName() const
{
    return m_customPolicyName;
}

void UpdateCustomPolicyForRoleConfigurationRequest::SetCustomPolicyName(const string& _customPolicyName)
{
    m_customPolicyName = _customPolicyName;
    m_customPolicyNameHasBeenSet = true;
}

bool UpdateCustomPolicyForRoleConfigurationRequest::CustomPolicyNameHasBeenSet() const
{
    return m_customPolicyNameHasBeenSet;
}

string UpdateCustomPolicyForRoleConfigurationRequest::GetNewCustomPolicyDocument() const
{
    return m_newCustomPolicyDocument;
}

void UpdateCustomPolicyForRoleConfigurationRequest::SetNewCustomPolicyDocument(const string& _newCustomPolicyDocument)
{
    m_newCustomPolicyDocument = _newCustomPolicyDocument;
    m_newCustomPolicyDocumentHasBeenSet = true;
}

bool UpdateCustomPolicyForRoleConfigurationRequest::NewCustomPolicyDocumentHasBeenSet() const
{
    return m_newCustomPolicyDocumentHasBeenSet;
}


