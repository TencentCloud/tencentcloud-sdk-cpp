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

#include <tencentcloud/ioa/v20220601/model/ModifyCompanyDirectoryConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ModifyCompanyDirectoryConfigRequest::ModifyCompanyDirectoryConfigRequest() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_syncEnableHasBeenSet(false),
    m_syncPolicyHasBeenSet(false),
    m_syncPolicyParamsHasBeenSet(false),
    m_createAuthConfigHasBeenSet(false),
    m_displayOnLoginPageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyCompanyDirectoryConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_syncEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncEnable, allocator);
    }

    if (m_syncPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_syncPolicyParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPolicyParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncPolicyParams.c_str(), allocator).Move(), allocator);
    }

    if (m_createAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createAuthConfig, allocator);
    }

    if (m_displayOnLoginPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayOnLoginPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_displayOnLoginPage, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
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


string ModifyCompanyDirectoryConfigRequest::GetType() const
{
    return m_type;
}

void ModifyCompanyDirectoryConfigRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyCompanyDirectoryConfigRequest::GetName() const
{
    return m_name;
}

void ModifyCompanyDirectoryConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCompanyDirectoryConfigRequest::GetConfig() const
{
    return m_config;
}

void ModifyCompanyDirectoryConfigRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool ModifyCompanyDirectoryConfigRequest::GetSyncEnable() const
{
    return m_syncEnable;
}

void ModifyCompanyDirectoryConfigRequest::SetSyncEnable(const bool& _syncEnable)
{
    m_syncEnable = _syncEnable;
    m_syncEnableHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::SyncEnableHasBeenSet() const
{
    return m_syncEnableHasBeenSet;
}

string ModifyCompanyDirectoryConfigRequest::GetSyncPolicy() const
{
    return m_syncPolicy;
}

void ModifyCompanyDirectoryConfigRequest::SetSyncPolicy(const string& _syncPolicy)
{
    m_syncPolicy = _syncPolicy;
    m_syncPolicyHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::SyncPolicyHasBeenSet() const
{
    return m_syncPolicyHasBeenSet;
}

string ModifyCompanyDirectoryConfigRequest::GetSyncPolicyParams() const
{
    return m_syncPolicyParams;
}

void ModifyCompanyDirectoryConfigRequest::SetSyncPolicyParams(const string& _syncPolicyParams)
{
    m_syncPolicyParams = _syncPolicyParams;
    m_syncPolicyParamsHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::SyncPolicyParamsHasBeenSet() const
{
    return m_syncPolicyParamsHasBeenSet;
}

bool ModifyCompanyDirectoryConfigRequest::GetCreateAuthConfig() const
{
    return m_createAuthConfig;
}

void ModifyCompanyDirectoryConfigRequest::SetCreateAuthConfig(const bool& _createAuthConfig)
{
    m_createAuthConfig = _createAuthConfig;
    m_createAuthConfigHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::CreateAuthConfigHasBeenSet() const
{
    return m_createAuthConfigHasBeenSet;
}

bool ModifyCompanyDirectoryConfigRequest::GetDisplayOnLoginPage() const
{
    return m_displayOnLoginPage;
}

void ModifyCompanyDirectoryConfigRequest::SetDisplayOnLoginPage(const bool& _displayOnLoginPage)
{
    m_displayOnLoginPage = _displayOnLoginPage;
    m_displayOnLoginPageHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::DisplayOnLoginPageHasBeenSet() const
{
    return m_displayOnLoginPageHasBeenSet;
}

int64_t ModifyCompanyDirectoryConfigRequest::GetId() const
{
    return m_id;
}

void ModifyCompanyDirectoryConfigRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyCompanyDirectoryConfigRequest::GetDescription() const
{
    return m_description;
}

void ModifyCompanyDirectoryConfigRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCompanyDirectoryConfigRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


