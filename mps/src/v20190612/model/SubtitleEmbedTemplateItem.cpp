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

#include <tencentcloud/mps/v20190612/model/SubtitleEmbedTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleEmbedTemplateItem::SubtitleEmbedTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_deleteTagHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subtitleEmbedConfigHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleEmbedTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DeleteTag") && !value["DeleteTag"].IsNull())
    {
        if (!value["DeleteTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.DeleteTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTag = value["DeleteTag"].GetInt64();
        m_deleteTagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("SubtitleEmbedConfig") && !value["SubtitleEmbedConfig"].IsNull())
    {
        if (!value["SubtitleEmbedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.SubtitleEmbedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleEmbedConfig.Deserialize(value["SubtitleEmbedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleEmbedConfigHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleEmbedTemplateItem.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleEmbedTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTag, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleEmbedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleEmbedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleEmbedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

}


int64_t SubtitleEmbedTemplateItem::GetDefinition() const
{
    return m_definition;
}

void SubtitleEmbedTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetName() const
{
    return m_name;
}

void SubtitleEmbedTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetComment() const
{
    return m_comment;
}

void SubtitleEmbedTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetType() const
{
    return m_type;
}

void SubtitleEmbedTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SubtitleEmbedTemplateItem::GetDeleteTag() const
{
    return m_deleteTag;
}

void SubtitleEmbedTemplateItem::SetDeleteTag(const int64_t& _deleteTag)
{
    m_deleteTag = _deleteTag;
    m_deleteTagHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::DeleteTagHasBeenSet() const
{
    return m_deleteTagHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void SubtitleEmbedTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SubtitleEmbedTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

SubtitleEmbedConfig SubtitleEmbedTemplateItem::GetSubtitleEmbedConfig() const
{
    return m_subtitleEmbedConfig;
}

void SubtitleEmbedTemplateItem::SetSubtitleEmbedConfig(const SubtitleEmbedConfig& _subtitleEmbedConfig)
{
    m_subtitleEmbedConfig = _subtitleEmbedConfig;
    m_subtitleEmbedConfigHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::SubtitleEmbedConfigHasBeenSet() const
{
    return m_subtitleEmbedConfigHasBeenSet;
}

string SubtitleEmbedTemplateItem::GetAliasName() const
{
    return m_aliasName;
}

void SubtitleEmbedTemplateItem::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool SubtitleEmbedTemplateItem::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

