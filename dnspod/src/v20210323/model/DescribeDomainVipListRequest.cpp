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

#include <tencentcloud/dnspod/v20210323/model/DescribeDomainVipListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeDomainVipListRequest::DescribeDomainVipListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_resourceIdListHasBeenSet(false),
    m_gradeListHasBeenSet(false),
    m_getUnbindResourceHasBeenSet(false)
{
}

string DescribeDomainVipListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdList.begin(); itr != m_resourceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gradeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gradeList.begin(); itr != m_gradeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_getUnbindResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetUnbindResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_getUnbindResource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDomainVipListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDomainVipListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDomainVipListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDomainVipListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDomainVipListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDomainVipListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDomainVipListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDomainVipListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDomainVipListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> DescribeDomainVipListRequest::GetResourceIdList() const
{
    return m_resourceIdList;
}

void DescribeDomainVipListRequest::SetResourceIdList(const vector<string>& _resourceIdList)
{
    m_resourceIdList = _resourceIdList;
    m_resourceIdListHasBeenSet = true;
}

bool DescribeDomainVipListRequest::ResourceIdListHasBeenSet() const
{
    return m_resourceIdListHasBeenSet;
}

vector<string> DescribeDomainVipListRequest::GetGradeList() const
{
    return m_gradeList;
}

void DescribeDomainVipListRequest::SetGradeList(const vector<string>& _gradeList)
{
    m_gradeList = _gradeList;
    m_gradeListHasBeenSet = true;
}

bool DescribeDomainVipListRequest::GradeListHasBeenSet() const
{
    return m_gradeListHasBeenSet;
}

bool DescribeDomainVipListRequest::GetGetUnbindResource() const
{
    return m_getUnbindResource;
}

void DescribeDomainVipListRequest::SetGetUnbindResource(const bool& _getUnbindResource)
{
    m_getUnbindResource = _getUnbindResource;
    m_getUnbindResourceHasBeenSet = true;
}

bool DescribeDomainVipListRequest::GetUnbindResourceHasBeenSet() const
{
    return m_getUnbindResourceHasBeenSet;
}


