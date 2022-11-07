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

#include <tencentcloud/tem/v20210701/model/TemService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemService::TemService() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_modifierHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_codingLanguageHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_activeVersionsHasBeenSet(false),
    m_enableTracingHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hasAuthorityHasBeenSet(false)
{
}

CoreInternalOutcome TemService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("Modifier") && !value["Modifier"].IsNull())
    {
        if (!value["Modifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.Modifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifier = string(value["Modifier"].GetString());
        m_modifierHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.RepoType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = value["RepoType"].GetInt64();
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("CodingLanguage") && !value["CodingLanguage"].IsNull())
    {
        if (!value["CodingLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.CodingLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codingLanguage = string(value["CodingLanguage"].GetString());
        m_codingLanguageHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("ActiveVersions") && !value["ActiveVersions"].IsNull())
    {
        if (!value["ActiveVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemService.ActiveVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["ActiveVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceVersionBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activeVersions.push_back(item);
        }
        m_activeVersionsHasBeenSet = true;
    }

    if (value.HasMember("EnableTracing") && !value["EnableTracing"].IsNull())
    {
        if (!value["EnableTracing"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.EnableTracing` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableTracing = value["EnableTracing"].GetUint64();
        m_enableTracingHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemService.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("HasAuthority") && !value["HasAuthority"].IsNull())
    {
        if (!value["HasAuthority"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemService.HasAuthority` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasAuthority = value["HasAuthority"].GetBool();
        m_hasAuthorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Modifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifier.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repoType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_codingLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codingLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_activeVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activeVersions.begin(); itr != m_activeVersions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableTracingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTracing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTracing, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hasAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAuthority, allocator);
    }

}


string TemService::GetApplicationId() const
{
    return m_applicationId;
}

void TemService::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool TemService::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string TemService::GetApplicationName() const
{
    return m_applicationName;
}

void TemService::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool TemService::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string TemService::GetDescription() const
{
    return m_description;
}

void TemService::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemService::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TemService::GetEnvironmentId() const
{
    return m_environmentId;
}

void TemService::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool TemService::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string TemService::GetCreateDate() const
{
    return m_createDate;
}

void TemService::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool TemService::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string TemService::GetModifyDate() const
{
    return m_modifyDate;
}

void TemService::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool TemService::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

string TemService::GetModifier() const
{
    return m_modifier;
}

void TemService::SetModifier(const string& _modifier)
{
    m_modifier = _modifier;
    m_modifierHasBeenSet = true;
}

bool TemService::ModifierHasBeenSet() const
{
    return m_modifierHasBeenSet;
}

string TemService::GetCreator() const
{
    return m_creator;
}

void TemService::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool TemService::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t TemService::GetRepoType() const
{
    return m_repoType;
}

void TemService::SetRepoType(const int64_t& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool TemService::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

string TemService::GetInstanceId() const
{
    return m_instanceId;
}

void TemService::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TemService::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TemService::GetRepoName() const
{
    return m_repoName;
}

void TemService::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool TemService::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string TemService::GetCodingLanguage() const
{
    return m_codingLanguage;
}

void TemService::SetCodingLanguage(const string& _codingLanguage)
{
    m_codingLanguage = _codingLanguage;
    m_codingLanguageHasBeenSet = true;
}

bool TemService::CodingLanguageHasBeenSet() const
{
    return m_codingLanguageHasBeenSet;
}

string TemService::GetDeployMode() const
{
    return m_deployMode;
}

void TemService::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool TemService::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string TemService::GetEnvironmentName() const
{
    return m_environmentName;
}

void TemService::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool TemService::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

vector<ServiceVersionBrief> TemService::GetActiveVersions() const
{
    return m_activeVersions;
}

void TemService::SetActiveVersions(const vector<ServiceVersionBrief>& _activeVersions)
{
    m_activeVersions = _activeVersions;
    m_activeVersionsHasBeenSet = true;
}

bool TemService::ActiveVersionsHasBeenSet() const
{
    return m_activeVersionsHasBeenSet;
}

uint64_t TemService::GetEnableTracing() const
{
    return m_enableTracing;
}

void TemService::SetEnableTracing(const uint64_t& _enableTracing)
{
    m_enableTracing = _enableTracing;
    m_enableTracingHasBeenSet = true;
}

bool TemService::EnableTracingHasBeenSet() const
{
    return m_enableTracingHasBeenSet;
}

vector<Tag> TemService::GetTags() const
{
    return m_tags;
}

void TemService::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TemService::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool TemService::GetHasAuthority() const
{
    return m_hasAuthority;
}

void TemService::SetHasAuthority(const bool& _hasAuthority)
{
    m_hasAuthority = _hasAuthority;
    m_hasAuthorityHasBeenSet = true;
}

bool TemService::HasAuthorityHasBeenSet() const
{
    return m_hasAuthorityHasBeenSet;
}

