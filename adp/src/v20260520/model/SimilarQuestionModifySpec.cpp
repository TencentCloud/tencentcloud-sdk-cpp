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

#include <tencentcloud/adp/v20260520/model/SimilarQuestionModifySpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SimilarQuestionModifySpec::SimilarQuestionModifySpec() :
    m_contentHasBeenSet(false),
    m_modifyActionHasBeenSet(false),
    m_similarQuestionIdHasBeenSet(false)
{
}

CoreInternalOutcome SimilarQuestionModifySpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModifySpec.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ModifyAction") && !value["ModifyAction"].IsNull())
    {
        if (!value["ModifyAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModifySpec.ModifyAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyAction = value["ModifyAction"].GetInt64();
        m_modifyActionHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionId") && !value["SimilarQuestionId"].IsNull())
    {
        if (!value["SimilarQuestionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModifySpec.SimilarQuestionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionId = string(value["SimilarQuestionId"].GetString());
        m_similarQuestionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimilarQuestionModifySpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyAction, allocator);
    }

    if (m_similarQuestionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_similarQuestionId.c_str(), allocator).Move(), allocator);
    }

}


string SimilarQuestionModifySpec::GetContent() const
{
    return m_content;
}

void SimilarQuestionModifySpec::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SimilarQuestionModifySpec::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t SimilarQuestionModifySpec::GetModifyAction() const
{
    return m_modifyAction;
}

void SimilarQuestionModifySpec::SetModifyAction(const int64_t& _modifyAction)
{
    m_modifyAction = _modifyAction;
    m_modifyActionHasBeenSet = true;
}

bool SimilarQuestionModifySpec::ModifyActionHasBeenSet() const
{
    return m_modifyActionHasBeenSet;
}

string SimilarQuestionModifySpec::GetSimilarQuestionId() const
{
    return m_similarQuestionId;
}

void SimilarQuestionModifySpec::SetSimilarQuestionId(const string& _similarQuestionId)
{
    m_similarQuestionId = _similarQuestionId;
    m_similarQuestionIdHasBeenSet = true;
}

bool SimilarQuestionModifySpec::SimilarQuestionIdHasBeenSet() const
{
    return m_similarQuestionIdHasBeenSet;
}

