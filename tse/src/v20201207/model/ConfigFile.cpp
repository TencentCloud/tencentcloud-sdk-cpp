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

#include <tencentcloud/tse/v20201207/model/ConfigFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFile::ConfigFile() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_modifyByHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_releaseByHasBeenSet(false),
    m_configFileSupportedClientHasBeenSet(false),
    m_configFilePersistentHasBeenSet(false),
    m_encryptedHasBeenSet(false),
    m_encryptAlgoHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigFileTag item;
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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyBy") && !value["ModifyBy"].IsNull())
    {
        if (!value["ModifyBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ModifyBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBy = string(value["ModifyBy"].GetString());
        m_modifyByHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("ReleaseBy") && !value["ReleaseBy"].IsNull())
    {
        if (!value["ReleaseBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ReleaseBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseBy = string(value["ReleaseBy"].GetString());
        m_releaseByHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileSupportedClient") && !value["ConfigFileSupportedClient"].IsNull())
    {
        if (!value["ConfigFileSupportedClient"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ConfigFileSupportedClient` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configFileSupportedClient = value["ConfigFileSupportedClient"].GetInt64();
        m_configFileSupportedClientHasBeenSet = true;
    }

    if (value.HasMember("ConfigFilePersistent") && !value["ConfigFilePersistent"].IsNull())
    {
        if (!value["ConfigFilePersistent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.ConfigFilePersistent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configFilePersistent.Deserialize(value["ConfigFilePersistent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configFilePersistentHasBeenSet = true;
    }

    if (value.HasMember("Encrypted") && !value["Encrypted"].IsNull())
    {
        if (!value["Encrypted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.Encrypted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypted = value["Encrypted"].GetBool();
        m_encryptedHasBeenSet = true;
    }

    if (value.HasMember("EncryptAlgo") && !value["EncryptAlgo"].IsNull())
    {
        if (!value["EncryptAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFile.EncryptAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgo = string(value["EncryptAlgo"].GetString());
        m_encryptAlgoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseBy.c_str(), allocator).Move(), allocator);
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

    if (m_encryptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypted, allocator);
    }

    if (m_encryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgo.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ConfigFile::GetId() const
{
    return m_id;
}

void ConfigFile::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigFile::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ConfigFile::GetName() const
{
    return m_name;
}

void ConfigFile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigFile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigFile::GetNamespace() const
{
    return m_namespace;
}

void ConfigFile::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFile::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFile::GetGroup() const
{
    return m_group;
}

void ConfigFile::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConfigFile::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConfigFile::GetContent() const
{
    return m_content;
}

void ConfigFile::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConfigFile::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ConfigFile::GetFormat() const
{
    return m_format;
}

void ConfigFile::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ConfigFile::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ConfigFile::GetComment() const
{
    return m_comment;
}

void ConfigFile::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ConfigFile::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ConfigFile::GetStatus() const
{
    return m_status;
}

void ConfigFile::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConfigFile::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ConfigFileTag> ConfigFile::GetTags() const
{
    return m_tags;
}

void ConfigFile::SetTags(const vector<ConfigFileTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ConfigFile::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ConfigFile::GetCreateTime() const
{
    return m_createTime;
}

void ConfigFile::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigFile::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigFile::GetCreateBy() const
{
    return m_createBy;
}

void ConfigFile::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool ConfigFile::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string ConfigFile::GetModifyTime() const
{
    return m_modifyTime;
}

void ConfigFile::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ConfigFile::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ConfigFile::GetModifyBy() const
{
    return m_modifyBy;
}

void ConfigFile::SetModifyBy(const string& _modifyBy)
{
    m_modifyBy = _modifyBy;
    m_modifyByHasBeenSet = true;
}

bool ConfigFile::ModifyByHasBeenSet() const
{
    return m_modifyByHasBeenSet;
}

string ConfigFile::GetReleaseTime() const
{
    return m_releaseTime;
}

void ConfigFile::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool ConfigFile::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string ConfigFile::GetReleaseBy() const
{
    return m_releaseBy;
}

void ConfigFile::SetReleaseBy(const string& _releaseBy)
{
    m_releaseBy = _releaseBy;
    m_releaseByHasBeenSet = true;
}

bool ConfigFile::ReleaseByHasBeenSet() const
{
    return m_releaseByHasBeenSet;
}

int64_t ConfigFile::GetConfigFileSupportedClient() const
{
    return m_configFileSupportedClient;
}

void ConfigFile::SetConfigFileSupportedClient(const int64_t& _configFileSupportedClient)
{
    m_configFileSupportedClient = _configFileSupportedClient;
    m_configFileSupportedClientHasBeenSet = true;
}

bool ConfigFile::ConfigFileSupportedClientHasBeenSet() const
{
    return m_configFileSupportedClientHasBeenSet;
}

ConfigFilePersistent ConfigFile::GetConfigFilePersistent() const
{
    return m_configFilePersistent;
}

void ConfigFile::SetConfigFilePersistent(const ConfigFilePersistent& _configFilePersistent)
{
    m_configFilePersistent = _configFilePersistent;
    m_configFilePersistentHasBeenSet = true;
}

bool ConfigFile::ConfigFilePersistentHasBeenSet() const
{
    return m_configFilePersistentHasBeenSet;
}

bool ConfigFile::GetEncrypted() const
{
    return m_encrypted;
}

void ConfigFile::SetEncrypted(const bool& _encrypted)
{
    m_encrypted = _encrypted;
    m_encryptedHasBeenSet = true;
}

bool ConfigFile::EncryptedHasBeenSet() const
{
    return m_encryptedHasBeenSet;
}

string ConfigFile::GetEncryptAlgo() const
{
    return m_encryptAlgo;
}

void ConfigFile::SetEncryptAlgo(const string& _encryptAlgo)
{
    m_encryptAlgo = _encryptAlgo;
    m_encryptAlgoHasBeenSet = true;
}

bool ConfigFile::EncryptAlgoHasBeenSet() const
{
    return m_encryptAlgoHasBeenSet;
}

