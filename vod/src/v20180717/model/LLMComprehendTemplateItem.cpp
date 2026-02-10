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

#include <tencentcloud/vod/v20180717/model/LLMComprehendTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

LLMComprehendTemplateItem::LLMComprehendTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_asrHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LLMComprehendTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Asr") && !value["Asr"].IsNull())
    {
        if (!value["Asr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.Asr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asr.Deserialize(value["Asr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMComprehendTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asr.ToJsonObject(value[key.c_str()], allocator);
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

}


int64_t LLMComprehendTemplateItem::GetDefinition() const
{
    return m_definition;
}

void LLMComprehendTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool LLMComprehendTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string LLMComprehendTemplateItem::GetName() const
{
    return m_name;
}

void LLMComprehendTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LLMComprehendTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LLMComprehendTemplateItem::GetComment() const
{
    return m_comment;
}

void LLMComprehendTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool LLMComprehendTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string LLMComprehendTemplateItem::GetLevel() const
{
    return m_level;
}

void LLMComprehendTemplateItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool LLMComprehendTemplateItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

LLMComprehendSummary LLMComprehendTemplateItem::GetSummary() const
{
    return m_summary;
}

void LLMComprehendTemplateItem::SetSummary(const LLMComprehendSummary& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool LLMComprehendTemplateItem::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

LLMComprehendAsr LLMComprehendTemplateItem::GetAsr() const
{
    return m_asr;
}

void LLMComprehendTemplateItem::SetAsr(const LLMComprehendAsr& _asr)
{
    m_asr = _asr;
    m_asrHasBeenSet = true;
}

bool LLMComprehendTemplateItem::AsrHasBeenSet() const
{
    return m_asrHasBeenSet;
}

string LLMComprehendTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void LLMComprehendTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LLMComprehendTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LLMComprehendTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void LLMComprehendTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LLMComprehendTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

