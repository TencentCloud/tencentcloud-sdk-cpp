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

#include <tencentcloud/nlp/v20190408/model/SentenceSimilarityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

SentenceSimilarityRequest::SentenceSimilarityRequest() :
    m_srcTextHasBeenSet(false),
    m_targetTextHasBeenSet(false)
{
}

string SentenceSimilarityRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_srcText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_targetText.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SentenceSimilarityRequest::GetSrcText() const
{
    return m_srcText;
}

void SentenceSimilarityRequest::SetSrcText(const string& _srcText)
{
    m_srcText = _srcText;
    m_srcTextHasBeenSet = true;
}

bool SentenceSimilarityRequest::SrcTextHasBeenSet() const
{
    return m_srcTextHasBeenSet;
}

string SentenceSimilarityRequest::GetTargetText() const
{
    return m_targetText;
}

void SentenceSimilarityRequest::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool SentenceSimilarityRequest::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}


