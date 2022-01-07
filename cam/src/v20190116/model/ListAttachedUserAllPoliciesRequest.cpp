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

#include <tencentcloud/cam/v20190116/model/ListAttachedUserAllPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListAttachedUserAllPoliciesRequest::ListAttachedUserAllPoliciesRequest() :
    m_targetUinHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_attachTypeHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string ListAttachedUserAllPoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_rpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_attachTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attachType, allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListAttachedUserAllPoliciesRequest::GetTargetUin() const
{
    return m_targetUin;
}

void ListAttachedUserAllPoliciesRequest::SetTargetUin(const uint64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

uint64_t ListAttachedUserAllPoliciesRequest::GetRp() const
{
    return m_rp;
}

void ListAttachedUserAllPoliciesRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

uint64_t ListAttachedUserAllPoliciesRequest::GetPage() const
{
    return m_page;
}

void ListAttachedUserAllPoliciesRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t ListAttachedUserAllPoliciesRequest::GetAttachType() const
{
    return m_attachType;
}

void ListAttachedUserAllPoliciesRequest::SetAttachType(const uint64_t& _attachType)
{
    m_attachType = _attachType;
    m_attachTypeHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::AttachTypeHasBeenSet() const
{
    return m_attachTypeHasBeenSet;
}

uint64_t ListAttachedUserAllPoliciesRequest::GetStrategyType() const
{
    return m_strategyType;
}

void ListAttachedUserAllPoliciesRequest::SetStrategyType(const uint64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string ListAttachedUserAllPoliciesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAttachedUserAllPoliciesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAttachedUserAllPoliciesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


