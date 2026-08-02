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

#include <tencentcloud/vod/v20180717/model/MPSEmbedSubtitleTemplateForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSEmbedSubtitleTemplateForUpdate::MPSEmbedSubtitleTemplateForUpdate() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_subtitleEmbedConfigHasBeenSet(false)
{
}

CoreInternalOutcome MPSEmbedSubtitleTemplateForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEmbedSubtitleTemplateForUpdate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEmbedSubtitleTemplateForUpdate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEmbedSubtitleTemplateForUpdate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("SubtitleEmbedConfig") && !value["SubtitleEmbedConfig"].IsNull())
    {
        if (!value["SubtitleEmbedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSEmbedSubtitleTemplateForUpdate.SubtitleEmbedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleEmbedConfig.Deserialize(value["SubtitleEmbedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleEmbedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSEmbedSubtitleTemplateForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subtitleEmbedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleEmbedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleEmbedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MPSEmbedSubtitleTemplateForUpdate::GetDefinition() const
{
    return m_definition;
}

void MPSEmbedSubtitleTemplateForUpdate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MPSEmbedSubtitleTemplateForUpdate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string MPSEmbedSubtitleTemplateForUpdate::GetName() const
{
    return m_name;
}

void MPSEmbedSubtitleTemplateForUpdate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MPSEmbedSubtitleTemplateForUpdate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MPSEmbedSubtitleTemplateForUpdate::GetComment() const
{
    return m_comment;
}

void MPSEmbedSubtitleTemplateForUpdate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool MPSEmbedSubtitleTemplateForUpdate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

MPSSubtitleEmbedConfig MPSEmbedSubtitleTemplateForUpdate::GetSubtitleEmbedConfig() const
{
    return m_subtitleEmbedConfig;
}

void MPSEmbedSubtitleTemplateForUpdate::SetSubtitleEmbedConfig(const MPSSubtitleEmbedConfig& _subtitleEmbedConfig)
{
    m_subtitleEmbedConfig = _subtitleEmbedConfig;
    m_subtitleEmbedConfigHasBeenSet = true;
}

bool MPSEmbedSubtitleTemplateForUpdate::SubtitleEmbedConfigHasBeenSet() const
{
    return m_subtitleEmbedConfigHasBeenSet;
}

