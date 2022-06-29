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

#include <tencentcloud/nlp/v20190408/model/TextSimilarityProRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

TextSimilarityProRequest::TextSimilarityProRequest() :
    m_srcTextHasBeenSet(false),
    m_targetTextHasBeenSet(false)
{
}

string TextSimilarityProRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetText.begin(); itr != m_targetText.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextSimilarityProRequest::GetSrcText() const
{
    return m_srcText;
}

void TextSimilarityProRequest::SetSrcText(const string& _srcText)
{
    m_srcText = _srcText;
    m_srcTextHasBeenSet = true;
}

bool TextSimilarityProRequest::SrcTextHasBeenSet() const
{
    return m_srcTextHasBeenSet;
}

vector<string> TextSimilarityProRequest::GetTargetText() const
{
    return m_targetText;
}

void TextSimilarityProRequest::SetTargetText(const vector<string>& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool TextSimilarityProRequest::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}


