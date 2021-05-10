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

#include <tencentcloud/vod/v20180717/model/CreateHeadTailTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

CreateHeadTailTemplateRequest::CreateHeadTailTemplateRequest() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_headCandidateSetHasBeenSet(false),
    m_tailCandidateSetHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string CreateHeadTailTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_headCandidateSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HeadCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_headCandidateSet.begin(); itr != m_headCandidateSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tailCandidateSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TailCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tailCandidateSet.begin(); itr != m_tailCandidateSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fillTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fillType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateHeadTailTemplateRequest::GetName() const
{
    return m_name;
}

void CreateHeadTailTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateHeadTailTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateHeadTailTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<string> CreateHeadTailTemplateRequest::GetHeadCandidateSet() const
{
    return m_headCandidateSet;
}

void CreateHeadTailTemplateRequest::SetHeadCandidateSet(const vector<string>& _headCandidateSet)
{
    m_headCandidateSet = _headCandidateSet;
    m_headCandidateSetHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::HeadCandidateSetHasBeenSet() const
{
    return m_headCandidateSetHasBeenSet;
}

vector<string> CreateHeadTailTemplateRequest::GetTailCandidateSet() const
{
    return m_tailCandidateSet;
}

void CreateHeadTailTemplateRequest::SetTailCandidateSet(const vector<string>& _tailCandidateSet)
{
    m_tailCandidateSet = _tailCandidateSet;
    m_tailCandidateSetHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::TailCandidateSetHasBeenSet() const
{
    return m_tailCandidateSetHasBeenSet;
}

string CreateHeadTailTemplateRequest::GetFillType() const
{
    return m_fillType;
}

void CreateHeadTailTemplateRequest::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

uint64_t CreateHeadTailTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateHeadTailTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateHeadTailTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


