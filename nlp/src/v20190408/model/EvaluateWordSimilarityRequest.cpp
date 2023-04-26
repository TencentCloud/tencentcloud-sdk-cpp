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

#include <tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

EvaluateWordSimilarityRequest::EvaluateWordSimilarityRequest() :
    m_sourceWordHasBeenSet(false),
    m_targetWordHasBeenSet(false)
{
}

string EvaluateWordSimilarityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceWord.c_str(), allocator).Move(), allocator);
    }

    if (m_targetWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetWord.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EvaluateWordSimilarityRequest::GetSourceWord() const
{
    return m_sourceWord;
}

void EvaluateWordSimilarityRequest::SetSourceWord(const string& _sourceWord)
{
    m_sourceWord = _sourceWord;
    m_sourceWordHasBeenSet = true;
}

bool EvaluateWordSimilarityRequest::SourceWordHasBeenSet() const
{
    return m_sourceWordHasBeenSet;
}

string EvaluateWordSimilarityRequest::GetTargetWord() const
{
    return m_targetWord;
}

void EvaluateWordSimilarityRequest::SetTargetWord(const string& _targetWord)
{
    m_targetWord = _targetWord;
    m_targetWordHasBeenSet = true;
}

bool EvaluateWordSimilarityRequest::TargetWordHasBeenSet() const
{
    return m_targetWordHasBeenSet;
}


