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

#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulLevelCountRequest::DescribeVulLevelCountRequest() :
    m_vulCategoryHasBeenSet(false),
    m_isFollowVulHasBeenSet(false)
{
}

string DescribeVulLevelCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulCategory, allocator);
    }

    if (m_isFollowVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFollowVul";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFollowVul, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeVulLevelCountRequest::GetVulCategory() const
{
    return m_vulCategory;
}

void DescribeVulLevelCountRequest::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool DescribeVulLevelCountRequest::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

uint64_t DescribeVulLevelCountRequest::GetIsFollowVul() const
{
    return m_isFollowVul;
}

void DescribeVulLevelCountRequest::SetIsFollowVul(const uint64_t& _isFollowVul)
{
    m_isFollowVul = _isFollowVul;
    m_isFollowVulHasBeenSet = true;
}

bool DescribeVulLevelCountRequest::IsFollowVulHasBeenSet() const
{
    return m_isFollowVulHasBeenSet;
}


