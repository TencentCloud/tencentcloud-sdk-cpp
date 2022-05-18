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

#include <tencentcloud/cam/v20190116/model/DescribeRoleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DescribeRoleListRequest::DescribeRoleListRequest() :
    m_pageHasBeenSet(false),
    m_rpHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string DescribeRoleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRoleListRequest::GetPage() const
{
    return m_page;
}

void DescribeRoleListRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeRoleListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeRoleListRequest::GetRp() const
{
    return m_rp;
}

void DescribeRoleListRequest::SetRp(const uint64_t& _rp)
{
    m_rp = _rp;
    m_rpHasBeenSet = true;
}

bool DescribeRoleListRequest::RpHasBeenSet() const
{
    return m_rpHasBeenSet;
}

vector<RoleTags> DescribeRoleListRequest::GetTags() const
{
    return m_tags;
}

void DescribeRoleListRequest::SetTags(const vector<RoleTags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeRoleListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


