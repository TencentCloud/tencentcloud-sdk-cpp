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

#include <tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

GenerateKeywordSentenceRequest::GenerateKeywordSentenceRequest() :
    m_wordListHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string GenerateKeywordSentenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_wordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wordList.begin(); itr != m_wordList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> GenerateKeywordSentenceRequest::GetWordList() const
{
    return m_wordList;
}

void GenerateKeywordSentenceRequest::SetWordList(const vector<string>& _wordList)
{
    m_wordList = _wordList;
    m_wordListHasBeenSet = true;
}

bool GenerateKeywordSentenceRequest::WordListHasBeenSet() const
{
    return m_wordListHasBeenSet;
}

int64_t GenerateKeywordSentenceRequest::GetNumber() const
{
    return m_number;
}

void GenerateKeywordSentenceRequest::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool GenerateKeywordSentenceRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string GenerateKeywordSentenceRequest::GetDomain() const
{
    return m_domain;
}

void GenerateKeywordSentenceRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool GenerateKeywordSentenceRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


