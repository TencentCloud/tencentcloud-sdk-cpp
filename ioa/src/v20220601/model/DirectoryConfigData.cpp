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

#include <tencentcloud/ioa/v20220601/model/DirectoryConfigData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DirectoryConfigData::DirectoryConfigData() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_syncEnableHasBeenSet(false),
    m_syncPolicyHasBeenSet(false),
    m_syncPolicyParamsHasBeenSet(false),
    m_createAuthConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_displayOnLoginPageHasBeenSet(false)
{
}

CoreInternalOutcome DirectoryConfigData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("SyncEnable") && !value["SyncEnable"].IsNull())
    {
        if (!value["SyncEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.SyncEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncEnable = value["SyncEnable"].GetBool();
        m_syncEnableHasBeenSet = true;
    }

    if (value.HasMember("SyncPolicy") && !value["SyncPolicy"].IsNull())
    {
        if (!value["SyncPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.SyncPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncPolicy = string(value["SyncPolicy"].GetString());
        m_syncPolicyHasBeenSet = true;
    }

    if (value.HasMember("SyncPolicyParams") && !value["SyncPolicyParams"].IsNull())
    {
        if (!value["SyncPolicyParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.SyncPolicyParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncPolicyParams = string(value["SyncPolicyParams"].GetString());
        m_syncPolicyParamsHasBeenSet = true;
    }

    if (value.HasMember("CreateAuthConfig") && !value["CreateAuthConfig"].IsNull())
    {
        if (!value["CreateAuthConfig"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.CreateAuthConfig` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_createAuthConfig = value["CreateAuthConfig"].GetBool();
        m_createAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayOnLoginPage") && !value["DisplayOnLoginPage"].IsNull())
    {
        if (!value["DisplayOnLoginPage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectoryConfigData.DisplayOnLoginPage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_displayOnLoginPage = value["DisplayOnLoginPage"].GetBool();
        m_displayOnLoginPageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectoryConfigData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_syncEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncEnable, allocator);
    }

    if (m_syncPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_syncPolicyParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPolicyParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncPolicyParams.c_str(), allocator).Move(), allocator);
    }

    if (m_createAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAuthConfig, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayOnLoginPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayOnLoginPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displayOnLoginPage, allocator);
    }

}


int64_t DirectoryConfigData::GetId() const
{
    return m_id;
}

void DirectoryConfigData::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DirectoryConfigData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DirectoryConfigData::GetType() const
{
    return m_type;
}

void DirectoryConfigData::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DirectoryConfigData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DirectoryConfigData::GetName() const
{
    return m_name;
}

void DirectoryConfigData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DirectoryConfigData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DirectoryConfigData::GetConfig() const
{
    return m_config;
}

void DirectoryConfigData::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool DirectoryConfigData::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool DirectoryConfigData::GetSyncEnable() const
{
    return m_syncEnable;
}

void DirectoryConfigData::SetSyncEnable(const bool& _syncEnable)
{
    m_syncEnable = _syncEnable;
    m_syncEnableHasBeenSet = true;
}

bool DirectoryConfigData::SyncEnableHasBeenSet() const
{
    return m_syncEnableHasBeenSet;
}

string DirectoryConfigData::GetSyncPolicy() const
{
    return m_syncPolicy;
}

void DirectoryConfigData::SetSyncPolicy(const string& _syncPolicy)
{
    m_syncPolicy = _syncPolicy;
    m_syncPolicyHasBeenSet = true;
}

bool DirectoryConfigData::SyncPolicyHasBeenSet() const
{
    return m_syncPolicyHasBeenSet;
}

string DirectoryConfigData::GetSyncPolicyParams() const
{
    return m_syncPolicyParams;
}

void DirectoryConfigData::SetSyncPolicyParams(const string& _syncPolicyParams)
{
    m_syncPolicyParams = _syncPolicyParams;
    m_syncPolicyParamsHasBeenSet = true;
}

bool DirectoryConfigData::SyncPolicyParamsHasBeenSet() const
{
    return m_syncPolicyParamsHasBeenSet;
}

bool DirectoryConfigData::GetCreateAuthConfig() const
{
    return m_createAuthConfig;
}

void DirectoryConfigData::SetCreateAuthConfig(const bool& _createAuthConfig)
{
    m_createAuthConfig = _createAuthConfig;
    m_createAuthConfigHasBeenSet = true;
}

bool DirectoryConfigData::CreateAuthConfigHasBeenSet() const
{
    return m_createAuthConfigHasBeenSet;
}

string DirectoryConfigData::GetDescription() const
{
    return m_description;
}

void DirectoryConfigData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DirectoryConfigData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DirectoryConfigData::GetSourceId() const
{
    return m_sourceId;
}

void DirectoryConfigData::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool DirectoryConfigData::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

bool DirectoryConfigData::GetDisplayOnLoginPage() const
{
    return m_displayOnLoginPage;
}

void DirectoryConfigData::SetDisplayOnLoginPage(const bool& _displayOnLoginPage)
{
    m_displayOnLoginPage = _displayOnLoginPage;
    m_displayOnLoginPageHasBeenSet = true;
}

bool DirectoryConfigData::DisplayOnLoginPageHasBeenSet() const
{
    return m_displayOnLoginPageHasBeenSet;
}

