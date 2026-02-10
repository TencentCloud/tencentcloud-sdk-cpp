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

#include <tencentcloud/vod/v20180717/model/CreateLLMComprehendTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateLLMComprehendTemplateRequest::CreateLLMComprehendTemplateRequest() :
    m_levelHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_asrHasBeenSet(false)
{
}

string CreateLLMComprehendTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asr.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLLMComprehendTemplateRequest::GetLevel() const
{
    return m_level;
}

void CreateLLMComprehendTemplateRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t CreateLLMComprehendTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateLLMComprehendTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateLLMComprehendTemplateRequest::GetName() const
{
    return m_name;
}

void CreateLLMComprehendTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLLMComprehendTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateLLMComprehendTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

LLMComprehendSummary CreateLLMComprehendTemplateRequest::GetSummary() const
{
    return m_summary;
}

void CreateLLMComprehendTemplateRequest::SetSummary(const LLMComprehendSummary& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

LLMComprehendAsr CreateLLMComprehendTemplateRequest::GetAsr() const
{
    return m_asr;
}

void CreateLLMComprehendTemplateRequest::SetAsr(const LLMComprehendAsr& _asr)
{
    m_asr = _asr;
    m_asrHasBeenSet = true;
}

bool CreateLLMComprehendTemplateRequest::AsrHasBeenSet() const
{
    return m_asrHasBeenSet;
}


