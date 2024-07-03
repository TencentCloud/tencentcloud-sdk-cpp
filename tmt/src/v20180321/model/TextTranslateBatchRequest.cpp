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

#include <tencentcloud/tmt/v20180321/model/TextTranslateBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

TextTranslateBatchRequest::TextTranslateBatchRequest() :
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_sourceTextListHasBeenSet(false),
    m_termRepoIDListHasBeenSet(false),
    m_sentRepoIDListHasBeenSet(false)
{
}

string TextTranslateBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_sourceTextListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTextList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceTextList.begin(); itr != m_sourceTextList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_termRepoIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermRepoIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_termRepoIDList.begin(); itr != m_termRepoIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sentRepoIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRepoIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sentRepoIDList.begin(); itr != m_sentRepoIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextTranslateBatchRequest::GetSource() const
{
    return m_source;
}

void TextTranslateBatchRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TextTranslateBatchRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TextTranslateBatchRequest::GetTarget() const
{
    return m_target;
}

void TextTranslateBatchRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TextTranslateBatchRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t TextTranslateBatchRequest::GetProjectId() const
{
    return m_projectId;
}

void TextTranslateBatchRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextTranslateBatchRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> TextTranslateBatchRequest::GetSourceTextList() const
{
    return m_sourceTextList;
}

void TextTranslateBatchRequest::SetSourceTextList(const vector<string>& _sourceTextList)
{
    m_sourceTextList = _sourceTextList;
    m_sourceTextListHasBeenSet = true;
}

bool TextTranslateBatchRequest::SourceTextListHasBeenSet() const
{
    return m_sourceTextListHasBeenSet;
}

vector<string> TextTranslateBatchRequest::GetTermRepoIDList() const
{
    return m_termRepoIDList;
}

void TextTranslateBatchRequest::SetTermRepoIDList(const vector<string>& _termRepoIDList)
{
    m_termRepoIDList = _termRepoIDList;
    m_termRepoIDListHasBeenSet = true;
}

bool TextTranslateBatchRequest::TermRepoIDListHasBeenSet() const
{
    return m_termRepoIDListHasBeenSet;
}

vector<string> TextTranslateBatchRequest::GetSentRepoIDList() const
{
    return m_sentRepoIDList;
}

void TextTranslateBatchRequest::SetSentRepoIDList(const vector<string>& _sentRepoIDList)
{
    m_sentRepoIDList = _sentRepoIDList;
    m_sentRepoIDListHasBeenSet = true;
}

bool TextTranslateBatchRequest::SentRepoIDListHasBeenSet() const
{
    return m_sentRepoIDListHasBeenSet;
}


