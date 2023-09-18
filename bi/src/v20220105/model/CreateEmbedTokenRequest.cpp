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

#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

CreateEmbedTokenRequest::CreateEmbedTokenRequest() :
    m_projectIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_userCorpIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string CreateEmbedTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageId, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_userCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userCorpId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateEmbedTokenRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateEmbedTokenRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateEmbedTokenRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateEmbedTokenRequest::GetPageId() const
{
    return m_pageId;
}

void CreateEmbedTokenRequest::SetPageId(const uint64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool CreateEmbedTokenRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string CreateEmbedTokenRequest::GetScope() const
{
    return m_scope;
}

void CreateEmbedTokenRequest::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool CreateEmbedTokenRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string CreateEmbedTokenRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateEmbedTokenRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateEmbedTokenRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateEmbedTokenRequest::GetExtraParam() const
{
    return m_extraParam;
}

void CreateEmbedTokenRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool CreateEmbedTokenRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string CreateEmbedTokenRequest::GetUserCorpId() const
{
    return m_userCorpId;
}

void CreateEmbedTokenRequest::SetUserCorpId(const string& _userCorpId)
{
    m_userCorpId = _userCorpId;
    m_userCorpIdHasBeenSet = true;
}

bool CreateEmbedTokenRequest::UserCorpIdHasBeenSet() const
{
    return m_userCorpIdHasBeenSet;
}

string CreateEmbedTokenRequest::GetUserId() const
{
    return m_userId;
}

void CreateEmbedTokenRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateEmbedTokenRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


