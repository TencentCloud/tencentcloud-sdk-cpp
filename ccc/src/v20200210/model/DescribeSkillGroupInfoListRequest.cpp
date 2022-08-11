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

#include <tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeSkillGroupInfoListRequest::DescribeSkillGroupInfoListRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false)
{
}

string DescribeSkillGroupInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifiedTime, allocator);
    }

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSkillGroupInfoListRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeSkillGroupInfoListRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeSkillGroupInfoListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSkillGroupInfoListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeSkillGroupInfoListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeSkillGroupInfoListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeSkillGroupInfoListRequest::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void DescribeSkillGroupInfoListRequest::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

int64_t DescribeSkillGroupInfoListRequest::GetModifiedTime() const
{
    return m_modifiedTime;
}

void DescribeSkillGroupInfoListRequest::SetModifiedTime(const int64_t& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string DescribeSkillGroupInfoListRequest::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void DescribeSkillGroupInfoListRequest::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool DescribeSkillGroupInfoListRequest::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}


