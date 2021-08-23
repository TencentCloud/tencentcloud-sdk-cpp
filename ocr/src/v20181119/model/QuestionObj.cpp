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

#include <tencentcloud/ocr/v20181119/model/QuestionObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuestionObj::QuestionObj() :
    m_questionTextNoHasBeenSet(false),
    m_questionTextTypeHasBeenSet(false),
    m_questionTextHasBeenSet(false),
    m_questionOptionsHasBeenSet(false),
    m_questionSubquestionHasBeenSet(false),
    m_questionImageCoordsHasBeenSet(false)
{
}

CoreInternalOutcome QuestionObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuestionTextNo") && !value["QuestionTextNo"].IsNull())
    {
        if (!value["QuestionTextNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionTextNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionTextNo = string(value["QuestionTextNo"].GetString());
        m_questionTextNoHasBeenSet = true;
    }

    if (value.HasMember("QuestionTextType") && !value["QuestionTextType"].IsNull())
    {
        if (!value["QuestionTextType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionTextType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_questionTextType = value["QuestionTextType"].GetInt64();
        m_questionTextTypeHasBeenSet = true;
    }

    if (value.HasMember("QuestionText") && !value["QuestionText"].IsNull())
    {
        if (!value["QuestionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionText = string(value["QuestionText"].GetString());
        m_questionTextHasBeenSet = true;
    }

    if (value.HasMember("QuestionOptions") && !value["QuestionOptions"].IsNull())
    {
        if (!value["QuestionOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionOptions = string(value["QuestionOptions"].GetString());
        m_questionOptionsHasBeenSet = true;
    }

    if (value.HasMember("QuestionSubquestion") && !value["QuestionSubquestion"].IsNull())
    {
        if (!value["QuestionSubquestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionSubquestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionSubquestion = string(value["QuestionSubquestion"].GetString());
        m_questionSubquestionHasBeenSet = true;
    }

    if (value.HasMember("QuestionImageCoords") && !value["QuestionImageCoords"].IsNull())
    {
        if (!value["QuestionImageCoords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuestionObj.QuestionImageCoords` is not array type"));

        const rapidjson::Value &tmpValue = value["QuestionImageCoords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Rect item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_questionImageCoords.push_back(item);
        }
        m_questionImageCoordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_questionTextNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionTextNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionTextNo.c_str(), allocator).Move(), allocator);
    }

    if (m_questionTextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionTextType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_questionTextType, allocator);
    }

    if (m_questionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionText.c_str(), allocator).Move(), allocator);
    }

    if (m_questionOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_questionSubquestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionSubquestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionSubquestion.c_str(), allocator).Move(), allocator);
    }

    if (m_questionImageCoordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionImageCoords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_questionImageCoords.begin(); itr != m_questionImageCoords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QuestionObj::GetQuestionTextNo() const
{
    return m_questionTextNo;
}

void QuestionObj::SetQuestionTextNo(const string& _questionTextNo)
{
    m_questionTextNo = _questionTextNo;
    m_questionTextNoHasBeenSet = true;
}

bool QuestionObj::QuestionTextNoHasBeenSet() const
{
    return m_questionTextNoHasBeenSet;
}

int64_t QuestionObj::GetQuestionTextType() const
{
    return m_questionTextType;
}

void QuestionObj::SetQuestionTextType(const int64_t& _questionTextType)
{
    m_questionTextType = _questionTextType;
    m_questionTextTypeHasBeenSet = true;
}

bool QuestionObj::QuestionTextTypeHasBeenSet() const
{
    return m_questionTextTypeHasBeenSet;
}

string QuestionObj::GetQuestionText() const
{
    return m_questionText;
}

void QuestionObj::SetQuestionText(const string& _questionText)
{
    m_questionText = _questionText;
    m_questionTextHasBeenSet = true;
}

bool QuestionObj::QuestionTextHasBeenSet() const
{
    return m_questionTextHasBeenSet;
}

string QuestionObj::GetQuestionOptions() const
{
    return m_questionOptions;
}

void QuestionObj::SetQuestionOptions(const string& _questionOptions)
{
    m_questionOptions = _questionOptions;
    m_questionOptionsHasBeenSet = true;
}

bool QuestionObj::QuestionOptionsHasBeenSet() const
{
    return m_questionOptionsHasBeenSet;
}

string QuestionObj::GetQuestionSubquestion() const
{
    return m_questionSubquestion;
}

void QuestionObj::SetQuestionSubquestion(const string& _questionSubquestion)
{
    m_questionSubquestion = _questionSubquestion;
    m_questionSubquestionHasBeenSet = true;
}

bool QuestionObj::QuestionSubquestionHasBeenSet() const
{
    return m_questionSubquestionHasBeenSet;
}

vector<Rect> QuestionObj::GetQuestionImageCoords() const
{
    return m_questionImageCoords;
}

void QuestionObj::SetQuestionImageCoords(const vector<Rect>& _questionImageCoords)
{
    m_questionImageCoords = _questionImageCoords;
    m_questionImageCoordsHasBeenSet = true;
}

bool QuestionObj::QuestionImageCoordsHasBeenSet() const
{
    return m_questionImageCoordsHasBeenSet;
}

