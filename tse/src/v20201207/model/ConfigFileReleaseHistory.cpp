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

#include <tencentcloud/tse/v20201207/model/ConfigFileReleaseHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFileReleaseHistory::ConfigFileReleaseHistory() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_modifyByHasBeenSet(false),
    m_releaseDescriptionHasBeenSet(false),
    m_releaseReasonHasBeenSet(false),
    m_configFileSupportedClientHasBeenSet(false),
    m_configFilePersistentHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFileReleaseHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyBy") && !value["ModifyBy"].IsNull())
    {
        if (!value["ModifyBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ModifyBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBy = string(value["ModifyBy"].GetString());
        m_modifyByHasBeenSet = true;
    }

    if (value.HasMember("ReleaseDescription") && !value["ReleaseDescription"].IsNull())
    {
        if (!value["ReleaseDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ReleaseDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDescription = string(value["ReleaseDescription"].GetString());
        m_releaseDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseReason") && !value["ReleaseReason"].IsNull())
    {
        if (!value["ReleaseReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ReleaseReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseReason = string(value["ReleaseReason"].GetString());
        m_releaseReasonHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileSupportedClient") && !value["ConfigFileSupportedClient"].IsNull())
    {
        if (!value["ConfigFileSupportedClient"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ConfigFileSupportedClient` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configFileSupportedClient = value["ConfigFileSupportedClient"].GetInt64();
        m_configFileSupportedClientHasBeenSet = true;
    }

    if (value.HasMember("ConfigFilePersistent") && !value["ConfigFilePersistent"].IsNull())
    {
        if (!value["ConfigFilePersistent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileReleaseHistory.ConfigFilePersistent` is not object type").SetRequestId(requestId));
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

void ConfigFileReleaseHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_releaseDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseReason.c_str(), allocator).Move(), allocator);
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


uint64_t ConfigFileReleaseHistory::GetId() const
{
    return m_id;
}

void ConfigFileReleaseHistory::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigFileReleaseHistory::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ConfigFileReleaseHistory::GetName() const
{
    return m_name;
}

void ConfigFileReleaseHistory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigFileReleaseHistory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigFileReleaseHistory::GetNamespace() const
{
    return m_namespace;
}

void ConfigFileReleaseHistory::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFileReleaseHistory::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFileReleaseHistory::GetGroup() const
{
    return m_group;
}

void ConfigFileReleaseHistory::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConfigFileReleaseHistory::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConfigFileReleaseHistory::GetFileName() const
{
    return m_fileName;
}

void ConfigFileReleaseHistory::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConfigFileReleaseHistory::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConfigFileReleaseHistory::GetContent() const
{
    return m_content;
}

void ConfigFileReleaseHistory::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ConfigFileReleaseHistory::GetFormat() const
{
    return m_format;
}

void ConfigFileReleaseHistory::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ConfigFileReleaseHistory::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ConfigFileReleaseHistory::GetComment() const
{
    return m_comment;
}

void ConfigFileReleaseHistory::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ConfigFileReleaseHistory::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ConfigFileReleaseHistory::GetMd5() const
{
    return m_md5;
}

void ConfigFileReleaseHistory::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ConfigFileReleaseHistory::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string ConfigFileReleaseHistory::GetType() const
{
    return m_type;
}

void ConfigFileReleaseHistory::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConfigFileReleaseHistory::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ConfigFileReleaseHistory::GetStatus() const
{
    return m_status;
}

void ConfigFileReleaseHistory::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConfigFileReleaseHistory::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ConfigFileTag> ConfigFileReleaseHistory::GetTags() const
{
    return m_tags;
}

void ConfigFileReleaseHistory::SetTags(const vector<ConfigFileTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ConfigFileReleaseHistory::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ConfigFileReleaseHistory::GetCreateTime() const
{
    return m_createTime;
}

void ConfigFileReleaseHistory::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigFileReleaseHistory::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigFileReleaseHistory::GetCreateBy() const
{
    return m_createBy;
}

void ConfigFileReleaseHistory::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool ConfigFileReleaseHistory::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string ConfigFileReleaseHistory::GetModifyTime() const
{
    return m_modifyTime;
}

void ConfigFileReleaseHistory::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ConfigFileReleaseHistory::GetModifyBy() const
{
    return m_modifyBy;
}

void ConfigFileReleaseHistory::SetModifyBy(const string& _modifyBy)
{
    m_modifyBy = _modifyBy;
    m_modifyByHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ModifyByHasBeenSet() const
{
    return m_modifyByHasBeenSet;
}

string ConfigFileReleaseHistory::GetReleaseDescription() const
{
    return m_releaseDescription;
}

void ConfigFileReleaseHistory::SetReleaseDescription(const string& _releaseDescription)
{
    m_releaseDescription = _releaseDescription;
    m_releaseDescriptionHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ReleaseDescriptionHasBeenSet() const
{
    return m_releaseDescriptionHasBeenSet;
}

string ConfigFileReleaseHistory::GetReleaseReason() const
{
    return m_releaseReason;
}

void ConfigFileReleaseHistory::SetReleaseReason(const string& _releaseReason)
{
    m_releaseReason = _releaseReason;
    m_releaseReasonHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ReleaseReasonHasBeenSet() const
{
    return m_releaseReasonHasBeenSet;
}

int64_t ConfigFileReleaseHistory::GetConfigFileSupportedClient() const
{
    return m_configFileSupportedClient;
}

void ConfigFileReleaseHistory::SetConfigFileSupportedClient(const int64_t& _configFileSupportedClient)
{
    m_configFileSupportedClient = _configFileSupportedClient;
    m_configFileSupportedClientHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ConfigFileSupportedClientHasBeenSet() const
{
    return m_configFileSupportedClientHasBeenSet;
}

ConfigFilePersistent ConfigFileReleaseHistory::GetConfigFilePersistent() const
{
    return m_configFilePersistent;
}

void ConfigFileReleaseHistory::SetConfigFilePersistent(const ConfigFilePersistent& _configFilePersistent)
{
    m_configFilePersistent = _configFilePersistent;
    m_configFilePersistentHasBeenSet = true;
}

bool ConfigFileReleaseHistory::ConfigFilePersistentHasBeenSet() const
{
    return m_configFilePersistentHasBeenSet;
}

