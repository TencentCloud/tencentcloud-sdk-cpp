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

#include <tencentcloud/lke/v20231130/model/SimilarQuestionModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SimilarQuestionModify::SimilarQuestionModify() :
    m_addQuestionsHasBeenSet(false),
    m_updateQuestionsHasBeenSet(false),
    m_deleteQuestionsHasBeenSet(false)
{
}

CoreInternalOutcome SimilarQuestionModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddQuestions") && !value["AddQuestions"].IsNull())
    {
        if (!value["AddQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModify.AddQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["AddQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addQuestions.push_back((*itr).GetString());
        }
        m_addQuestionsHasBeenSet = true;
    }

    if (value.HasMember("UpdateQuestions") && !value["UpdateQuestions"].IsNull())
    {
        if (!value["UpdateQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModify.UpdateQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["UpdateQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimilarQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_updateQuestions.push_back(item);
        }
        m_updateQuestionsHasBeenSet = true;
    }

    if (value.HasMember("DeleteQuestions") && !value["DeleteQuestions"].IsNull())
    {
        if (!value["DeleteQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimilarQuestionModify.DeleteQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["DeleteQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimilarQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deleteQuestions.push_back(item);
        }
        m_deleteQuestionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimilarQuestionModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_addQuestions.begin(); itr != m_addQuestions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_updateQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateQuestions.begin(); itr != m_updateQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deleteQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteQuestions.begin(); itr != m_deleteQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> SimilarQuestionModify::GetAddQuestions() const
{
    return m_addQuestions;
}

void SimilarQuestionModify::SetAddQuestions(const vector<string>& _addQuestions)
{
    m_addQuestions = _addQuestions;
    m_addQuestionsHasBeenSet = true;
}

bool SimilarQuestionModify::AddQuestionsHasBeenSet() const
{
    return m_addQuestionsHasBeenSet;
}

vector<SimilarQuestion> SimilarQuestionModify::GetUpdateQuestions() const
{
    return m_updateQuestions;
}

void SimilarQuestionModify::SetUpdateQuestions(const vector<SimilarQuestion>& _updateQuestions)
{
    m_updateQuestions = _updateQuestions;
    m_updateQuestionsHasBeenSet = true;
}

bool SimilarQuestionModify::UpdateQuestionsHasBeenSet() const
{
    return m_updateQuestionsHasBeenSet;
}

vector<SimilarQuestion> SimilarQuestionModify::GetDeleteQuestions() const
{
    return m_deleteQuestions;
}

void SimilarQuestionModify::SetDeleteQuestions(const vector<SimilarQuestion>& _deleteQuestions)
{
    m_deleteQuestions = _deleteQuestions;
    m_deleteQuestionsHasBeenSet = true;
}

bool SimilarQuestionModify::DeleteQuestionsHasBeenSet() const
{
    return m_deleteQuestionsHasBeenSet;
}

