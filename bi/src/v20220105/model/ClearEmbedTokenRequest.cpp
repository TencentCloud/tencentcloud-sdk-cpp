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

#include <tencentcloud/bi/v20220105/model/ClearEmbedTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ClearEmbedTokenRequest::ClearEmbedTokenRequest() :
    m_projectIdHasBeenSet(false),
    m_userCorpIdHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_pageIdHasBeenSet(false)
{
}

string ClearEmbedTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_userCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userCorpId.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ClearEmbedTokenRequest::GetProjectId() const
{
    return m_projectId;
}

void ClearEmbedTokenRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ClearEmbedTokenRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ClearEmbedTokenRequest::GetUserCorpId() const
{
    return m_userCorpId;
}

void ClearEmbedTokenRequest::SetUserCorpId(const string& _userCorpId)
{
    m_userCorpId = _userCorpId;
    m_userCorpIdHasBeenSet = true;
}

bool ClearEmbedTokenRequest::UserCorpIdHasBeenSet() const
{
    return m_userCorpIdHasBeenSet;
}

string ClearEmbedTokenRequest::GetScope() const
{
    return m_scope;
}

void ClearEmbedTokenRequest::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ClearEmbedTokenRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string ClearEmbedTokenRequest::GetPageId() const
{
    return m_pageId;
}

void ClearEmbedTokenRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ClearEmbedTokenRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}


