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

#include <tencentcloud/adp/v20260520/model/SimilarQuestion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SimilarQuestion::SimilarQuestion() :
    m_contentHasBeenSet(false),
    m_isAiGeneratedHasBeenSet(false),
    m_similarQuestionIdHasBeenSet(false)
{
}

CoreInternalOutcome SimilarQuestion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("IsAiGenerated") && !value["IsAiGenerated"].IsNull())
    {
        if (!value["IsAiGenerated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.IsAiGenerated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAiGenerated = value["IsAiGenerated"].GetBool();
        m_isAiGeneratedHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionId") && !value["SimilarQuestionId"].IsNull())
    {
        if (!value["SimilarQuestionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestion.SimilarQuestionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionId = string(value["SimilarQuestionId"].GetString());
        m_similarQuestionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimilarQuestion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_isAiGeneratedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAiGenerated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAiGenerated, allocator);
    }

    if (m_similarQuestionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_similarQuestionId.c_str(), allocator).Move(), allocator);
    }

}


string SimilarQuestion::GetContent() const
{
    return m_content;
}

void SimilarQuestion::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SimilarQuestion::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool SimilarQuestion::GetIsAiGenerated() const
{
    return m_isAiGenerated;
}

void SimilarQuestion::SetIsAiGenerated(const bool& _isAiGenerated)
{
    m_isAiGenerated = _isAiGenerated;
    m_isAiGeneratedHasBeenSet = true;
}

bool SimilarQuestion::IsAiGeneratedHasBeenSet() const
{
    return m_isAiGeneratedHasBeenSet;
}

string SimilarQuestion::GetSimilarQuestionId() const
{
    return m_similarQuestionId;
}

void SimilarQuestion::SetSimilarQuestionId(const string& _similarQuestionId)
{
    m_similarQuestionId = _similarQuestionId;
    m_similarQuestionIdHasBeenSet = true;
}

bool SimilarQuestion::SimilarQuestionIdHasBeenSet() const
{
    return m_similarQuestionIdHasBeenSet;
}

