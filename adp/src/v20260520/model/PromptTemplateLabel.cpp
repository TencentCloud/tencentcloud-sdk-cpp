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

#include <tencentcloud/adp/v20260520/model/PromptTemplateLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplateLabel::PromptTemplateLabel() :
    m_contentHasBeenSet(false),
    m_promptTemplateLabelIdHasBeenSet(false),
    m_promptTemplateLabelTypeHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplateLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateLabel.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("PromptTemplateLabelId") && !value["PromptTemplateLabelId"].IsNull())
    {
        if (!value["PromptTemplateLabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateLabel.PromptTemplateLabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptTemplateLabelId = string(value["PromptTemplateLabelId"].GetString());
        m_promptTemplateLabelIdHasBeenSet = true;
    }

    if (value.HasMember("PromptTemplateLabelType") && !value["PromptTemplateLabelType"].IsNull())
    {
        if (!value["PromptTemplateLabelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateLabel.PromptTemplateLabelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTemplateLabelType = value["PromptTemplateLabelType"].GetInt64();
        m_promptTemplateLabelTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplateLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateLabelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplateLabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptTemplateLabelId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateLabelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplateLabelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptTemplateLabelType, allocator);
    }

}


string PromptTemplateLabel::GetContent() const
{
    return m_content;
}

void PromptTemplateLabel::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PromptTemplateLabel::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PromptTemplateLabel::GetPromptTemplateLabelId() const
{
    return m_promptTemplateLabelId;
}

void PromptTemplateLabel::SetPromptTemplateLabelId(const string& _promptTemplateLabelId)
{
    m_promptTemplateLabelId = _promptTemplateLabelId;
    m_promptTemplateLabelIdHasBeenSet = true;
}

bool PromptTemplateLabel::PromptTemplateLabelIdHasBeenSet() const
{
    return m_promptTemplateLabelIdHasBeenSet;
}

int64_t PromptTemplateLabel::GetPromptTemplateLabelType() const
{
    return m_promptTemplateLabelType;
}

void PromptTemplateLabel::SetPromptTemplateLabelType(const int64_t& _promptTemplateLabelType)
{
    m_promptTemplateLabelType = _promptTemplateLabelType;
    m_promptTemplateLabelTypeHasBeenSet = true;
}

bool PromptTemplateLabel::PromptTemplateLabelTypeHasBeenSet() const
{
    return m_promptTemplateLabelTypeHasBeenSet;
}

