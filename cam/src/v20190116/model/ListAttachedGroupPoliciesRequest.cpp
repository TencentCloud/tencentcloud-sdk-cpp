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

#include <tencentcloud/cam/v20190116/model/ListAttachedGroupPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListAttachedGroupPoliciesRequest::ListAttachedGroupPoliciesRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string ListAttachedGroupPoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetGroupId, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_rpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rp, allocator);
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


uint64_t ListAttachedGroupPoliciesRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ListAttachedGroupPoliciesRequest::SetTargetGroupId(const uint64_t& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ListAttachedGroupPoliciesRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

uint64_t ListAttachedGroupPoliciesRequest::GetPage() const
{
    return m_page;
}

void ListAttachedGroupPoliciesRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool ListAttachedGroupPoliciesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t ListAttachedGroupPoliciesRequest::GetRp() const
{
    return m_rp;
}

void ListAttachedGroupPoliciesRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool ListAttachedGroupPoliciesRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

string ListAttachedGroupPoliciesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAttachedGroupPoliciesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAttachedGroupPoliciesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


