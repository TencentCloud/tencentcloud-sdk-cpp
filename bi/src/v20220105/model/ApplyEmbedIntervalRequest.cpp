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

#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ApplyEmbedIntervalRequest::ApplyEmbedIntervalRequest() :
    m_projectIdHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_bITokenHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_intentionHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

string ApplyEmbedIntervalRequest::ToJsonString() const
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

    if (m_bITokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BIToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bIToken.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_intentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intention.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ApplyEmbedIntervalRequest::GetProjectId() const
{
    return m_projectId;
}

void ApplyEmbedIntervalRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ApplyEmbedIntervalRequest::GetPageId() const
{
    return m_pageId;
}

void ApplyEmbedIntervalRequest::SetPageId(const uint64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string ApplyEmbedIntervalRequest::GetBIToken() const
{
    return m_bIToken;
}

void ApplyEmbedIntervalRequest::SetBIToken(const string& _bIToken)
{
    m_bIToken = _bIToken;
    m_bITokenHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::BITokenHasBeenSet() const
{
    return m_bITokenHasBeenSet;
}

string ApplyEmbedIntervalRequest::GetExtraParam() const
{
    return m_extraParam;
}

void ApplyEmbedIntervalRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string ApplyEmbedIntervalRequest::GetIntention() const
{
    return m_intention;
}

void ApplyEmbedIntervalRequest::SetIntention(const string& _intention)
{
    m_intention = _intention;
    m_intentionHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::IntentionHasBeenSet() const
{
    return m_intentionHasBeenSet;
}

string ApplyEmbedIntervalRequest::GetScope() const
{
    return m_scope;
}

void ApplyEmbedIntervalRequest::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ApplyEmbedIntervalRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}


