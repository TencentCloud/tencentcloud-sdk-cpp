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

#include <tencentcloud/tmt/v20180321/model/TextTranslateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

TextTranslateRequest::TextTranslateRequest() :
    m_sourceTextHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_untranslatedTextHasBeenSet(false),
    m_termRepoIDListHasBeenSet(false),
    m_sentRepoIDListHasBeenSet(false)
{
}

string TextTranslateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

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

    if (m_untranslatedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntranslatedText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_untranslatedText.c_str(), allocator).Move(), allocator);
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


string TextTranslateRequest::GetSourceText() const
{
    return m_sourceText;
}

void TextTranslateRequest::SetSourceText(const string& _sourceText)
{
    m_sourceText = _sourceText;
    m_sourceTextHasBeenSet = true;
}

bool TextTranslateRequest::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string TextTranslateRequest::GetSource() const
{
    return m_source;
}

void TextTranslateRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TextTranslateRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TextTranslateRequest::GetTarget() const
{
    return m_target;
}

void TextTranslateRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TextTranslateRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t TextTranslateRequest::GetProjectId() const
{
    return m_projectId;
}

void TextTranslateRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextTranslateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TextTranslateRequest::GetUntranslatedText() const
{
    return m_untranslatedText;
}

void TextTranslateRequest::SetUntranslatedText(const string& _untranslatedText)
{
    m_untranslatedText = _untranslatedText;
    m_untranslatedTextHasBeenSet = true;
}

bool TextTranslateRequest::UntranslatedTextHasBeenSet() const
{
    return m_untranslatedTextHasBeenSet;
}

vector<string> TextTranslateRequest::GetTermRepoIDList() const
{
    return m_termRepoIDList;
}

void TextTranslateRequest::SetTermRepoIDList(const vector<string>& _termRepoIDList)
{
    m_termRepoIDList = _termRepoIDList;
    m_termRepoIDListHasBeenSet = true;
}

bool TextTranslateRequest::TermRepoIDListHasBeenSet() const
{
    return m_termRepoIDListHasBeenSet;
}

vector<string> TextTranslateRequest::GetSentRepoIDList() const
{
    return m_sentRepoIDList;
}

void TextTranslateRequest::SetSentRepoIDList(const vector<string>& _sentRepoIDList)
{
    m_sentRepoIDList = _sentRepoIDList;
    m_sentRepoIDListHasBeenSet = true;
}

bool TextTranslateRequest::SentRepoIDListHasBeenSet() const
{
    return m_sentRepoIDListHasBeenSet;
}


