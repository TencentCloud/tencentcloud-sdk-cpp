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

#include <tencentcloud/tse/v20201207/model/ConfigFilePublishInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFilePublishInfo::ConfigFilePublishInfo() :
    m_releaseNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_modifyByHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFilePublishInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReleaseName") && !value["ReleaseName"].IsNull())
    {
        if (!value["ReleaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.ReleaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseName = string(value["ReleaseName"].GetString());
        m_releaseNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("ModifyBy") && !value["ModifyBy"].IsNull())
    {
        if (!value["ModifyBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.ModifyBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBy = string(value["ModifyBy"].GetString());
        m_modifyByHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigFilePublishInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void ConfigFilePublishInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_releaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseName.c_str(), allocator).Move(), allocator);
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

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyBy.c_str(), allocator).Move(), allocator);
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

}


string ConfigFilePublishInfo::GetReleaseName() const
{
    return m_releaseName;
}

void ConfigFilePublishInfo::SetReleaseName(const string& _releaseName)
{
    m_releaseName = _releaseName;
    m_releaseNameHasBeenSet = true;
}

bool ConfigFilePublishInfo::ReleaseNameHasBeenSet() const
{
    return m_releaseNameHasBeenSet;
}

string ConfigFilePublishInfo::GetNamespace() const
{
    return m_namespace;
}

void ConfigFilePublishInfo::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFilePublishInfo::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFilePublishInfo::GetGroup() const
{
    return m_group;
}

void ConfigFilePublishInfo::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ConfigFilePublishInfo::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string ConfigFilePublishInfo::GetFileName() const
{
    return m_fileName;
}

void ConfigFilePublishInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConfigFilePublishInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConfigFilePublishInfo::GetContent() const
{
    return m_content;
}

void ConfigFilePublishInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ConfigFilePublishInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ConfigFilePublishInfo::GetComment() const
{
    return m_comment;
}

void ConfigFilePublishInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ConfigFilePublishInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ConfigFilePublishInfo::GetFormat() const
{
    return m_format;
}

void ConfigFilePublishInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ConfigFilePublishInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ConfigFilePublishInfo::GetCreateBy() const
{
    return m_createBy;
}

void ConfigFilePublishInfo::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool ConfigFilePublishInfo::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string ConfigFilePublishInfo::GetModifyBy() const
{
    return m_modifyBy;
}

void ConfigFilePublishInfo::SetModifyBy(const string& _modifyBy)
{
    m_modifyBy = _modifyBy;
    m_modifyByHasBeenSet = true;
}

bool ConfigFilePublishInfo::ModifyByHasBeenSet() const
{
    return m_modifyByHasBeenSet;
}

vector<ConfigFileTag> ConfigFilePublishInfo::GetTags() const
{
    return m_tags;
}

void ConfigFilePublishInfo::SetTags(const vector<ConfigFileTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ConfigFilePublishInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

