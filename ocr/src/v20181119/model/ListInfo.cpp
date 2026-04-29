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

#include <tencentcloud/ocr/v20181119/model/ListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ListInfo::ListInfo() :
    m_queryInfoHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_extractFieldsHasBeenSet(false),
    m_textDetectionsHasBeenSet(false)
{
}

CoreInternalOutcome ListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueryInfo") && !value["QueryInfo"].IsNull())
    {
        if (!value["QueryInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListInfo.QueryInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryInfo = string(value["QueryInfo"].GetString());
        m_queryInfoHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListInfo.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("ExtractFields") && !value["ExtractFields"].IsNull())
    {
        if (!value["ExtractFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListInfo.ExtractFields` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtractFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extractFields.push_back(item);
        }
        m_extractFieldsHasBeenSet = true;
    }

    if (value.HasMember("TextDetections") && !value["TextDetections"].IsNull())
    {
        if (!value["TextDetections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListInfo.TextDetections` is not array type"));

        const rapidjson::Value &tmpValue = value["TextDetections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextDetection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textDetections.push_back(item);
        }
        m_textDetectionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_extractFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extractFields.begin(); itr != m_extractFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textDetectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextDetections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textDetections.begin(); itr != m_textDetections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ListInfo::GetQueryInfo() const
{
    return m_queryInfo;
}

void ListInfo::SetQueryInfo(const string& _queryInfo)
{
    m_queryInfo = _queryInfo;
    m_queryInfoHasBeenSet = true;
}

bool ListInfo::QueryInfoHasBeenSet() const
{
    return m_queryInfoHasBeenSet;
}

string ListInfo::GetAnswer() const
{
    return m_answer;
}

void ListInfo::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ListInfo::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

vector<FieldsInfo> ListInfo::GetExtractFields() const
{
    return m_extractFields;
}

void ListInfo::SetExtractFields(const vector<FieldsInfo>& _extractFields)
{
    m_extractFields = _extractFields;
    m_extractFieldsHasBeenSet = true;
}

bool ListInfo::ExtractFieldsHasBeenSet() const
{
    return m_extractFieldsHasBeenSet;
}

vector<TextDetection> ListInfo::GetTextDetections() const
{
    return m_textDetections;
}

void ListInfo::SetTextDetections(const vector<TextDetection>& _textDetections)
{
    m_textDetections = _textDetections;
    m_textDetectionsHasBeenSet = true;
}

bool ListInfo::TextDetectionsHasBeenSet() const
{
    return m_textDetectionsHasBeenSet;
}

