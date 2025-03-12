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

#include <tencentcloud/tse/v20201207/model/ConfigFileRelease.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFileRelease::ConfigFileRelease() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_modifyByHasBeenSet(false),
    m_releaseDescriptionHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_configFileIdHasBeenSet(false),
    m_configFileSupportedClientHasBeenSet(false),
    m_configFilePersistentHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFileRelease::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyBy") && !value["ModifyBy"].IsNull())
    {
        if (!value["ModifyBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ModifyBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBy = string(value["ModifyBy"].GetString());
        m_modifyByHasBeenSet = true;
    }

    if (value.HasMember("ReleaseDescription") && !value["ReleaseDescription"].IsNull())
    {
        if (!value["ReleaseDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ReleaseDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDescription = string(value["ReleaseDescription"].GetString());
        m_releaseDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Active` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_active = value["Active"].GetBool();
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileId") && !value["ConfigFileId"].IsNull())
    {
        if (!value["ConfigFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ConfigFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFileId = string(value["ConfigFileId"].GetString());
        m_configFileIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileSupportedClient") && !value["ConfigFileSupportedClient"].IsNull())
    {
        if (!value["ConfigFileSupportedClient"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ConfigFileSupportedClient` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configFileSupportedClient = value["ConfigFileSupportedClient"].GetInt64();
        m_configFileSupportedClientHasBeenSet = true;
    }

    if (value.HasMember("ConfigFilePersistent") && !value["ConfigFilePersistent"].IsNull())
    {
        if (!value["ConfigFilePersistent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileRelease.ConfigFilePersistent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configFilePersistent.Deserialize(value["ConfigFilePersistent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configFilePersistentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigFileRelease::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyBy.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_active, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_configFileSupportedClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileSupportedClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configFileSupportedClient, allocator);
    }

    if (m_configFilePersistentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFilePersistent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configFilePersistent.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t ConfigFileRelease::GetId() const
{
    return m_id;
}

void ConfigFileRelease::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigFileRelease::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ConfigFileRelease::GetName() const
{
    return m_name;
}

void ConfigFileRelease::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigFileRelease::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigFileRelease::GetNamespace() const
{
    return m_namespace;
}

void ConfigFileRelease::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFileRelease::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFileRelease::GetGroup() const
{
    return m_group;
}

void ConfigFileRelease::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConfigFileRelease::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConfigFileRelease::GetFileName() const
{
    return m_fileName;
}

void ConfigFileRelease::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConfigFileRelease::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConfigFileRelease::GetContent() const
{
    return m_content;
}

void ConfigFileRelease::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConfigFileRelease::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ConfigFileRelease::GetComment() const
{
    return m_comment;
}

void ConfigFileRelease::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ConfigFileRelease::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ConfigFileRelease::GetMd5() const
{
    return m_md5;
}

void ConfigFileRelease::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ConfigFileRelease::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

uint64_t ConfigFileRelease::GetVersion() const
{
    return m_version;
}

void ConfigFileRelease::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ConfigFileRelease::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ConfigFileRelease::GetCreateTime() const
{
    return m_createTime;
}

void ConfigFileRelease::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigFileRelease::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigFileRelease::GetCreateBy() const
{
    return m_createBy;
}

void ConfigFileRelease::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool ConfigFileRelease::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string ConfigFileRelease::GetModifyTime() const
{
    return m_modifyTime;
}

void ConfigFileRelease::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ConfigFileRelease::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ConfigFileRelease::GetModifyBy() const
{
    return m_modifyBy;
}

void ConfigFileRelease::SetModifyBy(const string& _modifyBy)
{
    m_modifyBy = _modifyBy;
    m_modifyByHasBeenSet = true;
}

bool ConfigFileRelease::ModifyByHasBeenSet() const
{
    return m_modifyByHasBeenSet;
}

string ConfigFileRelease::GetReleaseDescription() const
{
    return m_releaseDescription;
}

void ConfigFileRelease::SetReleaseDescription(const string& _releaseDescription)
{
    m_releaseDescription = _releaseDescription;
    m_releaseDescriptionHasBeenSet = true;
}

bool ConfigFileRelease::ReleaseDescriptionHasBeenSet() const
{
    return m_releaseDescriptionHasBeenSet;
}

bool ConfigFileRelease::GetActive() const
{
    return m_active;
}

void ConfigFileRelease::SetActive(const bool& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool ConfigFileRelease::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

string ConfigFileRelease::GetFormat() const
{
    return m_format;
}

void ConfigFileRelease::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ConfigFileRelease::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ConfigFileRelease::GetConfigFileId() const
{
    return m_configFileId;
}

void ConfigFileRelease::SetConfigFileId(const string& _configFileId)
{
    m_configFileId = _configFileId;
    m_configFileIdHasBeenSet = true;
}

bool ConfigFileRelease::ConfigFileIdHasBeenSet() const
{
    return m_configFileIdHasBeenSet;
}

int64_t ConfigFileRelease::GetConfigFileSupportedClient() const
{
    return m_configFileSupportedClient;
}

void ConfigFileRelease::SetConfigFileSupportedClient(const int64_t& _configFileSupportedClient)
{
    m_configFileSupportedClient = _configFileSupportedClient;
    m_configFileSupportedClientHasBeenSet = true;
}

bool ConfigFileRelease::ConfigFileSupportedClientHasBeenSet() const
{
    return m_configFileSupportedClientHasBeenSet;
}

ConfigFilePersistent ConfigFileRelease::GetConfigFilePersistent() const
{
    return m_configFilePersistent;
}

void ConfigFileRelease::SetConfigFilePersistent(const ConfigFilePersistent& _configFilePersistent)
{
    m_configFilePersistent = _configFilePersistent;
    m_configFilePersistentHasBeenSet = true;
}

bool ConfigFileRelease::ConfigFilePersistentHasBeenSet() const
{
    return m_configFilePersistentHasBeenSet;
}

