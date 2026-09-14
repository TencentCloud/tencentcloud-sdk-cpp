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

#include <tencentcloud/adp/v20260520/model/SearchInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchInput::SearchInput() :
    m_imageUrlListHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_subQuestionListHasBeenSet(false)
{
}

CoreInternalOutcome SearchInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrlList") && !value["ImageUrlList"].IsNull())
    {
        if (!value["ImageUrlList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInput.ImageUrlList` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrlList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrlList.push_back((*itr).GetString());
        }
        m_imageUrlListHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchInput.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("SubQuestionList") && !value["SubQuestionList"].IsNull())
    {
        if (!value["SubQuestionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchInput.SubQuestionList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubQuestionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subQuestionList.push_back((*itr).GetString());
        }
        m_subQuestionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlList.begin(); itr != m_imageUrlList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_subQuestionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubQuestionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subQuestionList.begin(); itr != m_subQuestionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SearchInput::GetImageUrlList() const
{
    return m_imageUrlList;
}

void SearchInput::SetImageUrlList(const vector<string>& _imageUrlList)
{
    m_imageUrlList = _imageUrlList;
    m_imageUrlListHasBeenSet = true;
}

bool SearchInput::ImageUrlListHasBeenSet() const
{
    return m_imageUrlListHasBeenSet;
}

string SearchInput::GetQuestion() const
{
    return m_question;
}

void SearchInput::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool SearchInput::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

vector<string> SearchInput::GetSubQuestionList() const
{
    return m_subQuestionList;
}

void SearchInput::SetSubQuestionList(const vector<string>& _subQuestionList)
{
    m_subQuestionList = _subQuestionList;
    m_subQuestionListHasBeenSet = true;
}

bool SearchInput::SubQuestionListHasBeenSet() const
{
    return m_subQuestionListHasBeenSet;
}

