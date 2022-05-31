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

#include <tencentcloud/vod/v20180717/model/ModifyHeadTailTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyHeadTailTemplateRequest::ModifyHeadTailTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_headCandidateSetHasBeenSet(false),
    m_tailCandidateSetHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

string ModifyHeadTailTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
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

    if (m_headCandidateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headCandidateSet.begin(); itr != m_headCandidateSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tailCandidateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tailCandidateSet.begin(); itr != m_tailCandidateSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyHeadTailTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyHeadTailTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

uint64_t ModifyHeadTailTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyHeadTailTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyHeadTailTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyHeadTailTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyHeadTailTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyHeadTailTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<string> ModifyHeadTailTemplateRequest::GetHeadCandidateSet() const
{
    return m_headCandidateSet;
}

void ModifyHeadTailTemplateRequest::SetHeadCandidateSet(const vector<string>& _headCandidateSet)
{
    m_headCandidateSet = _headCandidateSet;
    m_headCandidateSetHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::HeadCandidateSetHasBeenSet() const
{
    return m_headCandidateSetHasBeenSet;
}

vector<string> ModifyHeadTailTemplateRequest::GetTailCandidateSet() const
{
    return m_tailCandidateSet;
}

void ModifyHeadTailTemplateRequest::SetTailCandidateSet(const vector<string>& _tailCandidateSet)
{
    m_tailCandidateSet = _tailCandidateSet;
    m_tailCandidateSetHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::TailCandidateSetHasBeenSet() const
{
    return m_tailCandidateSetHasBeenSet;
}

string ModifyHeadTailTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void ModifyHeadTailTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool ModifyHeadTailTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}


