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

#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeUsersForUserManagerRequest::DescribeUsersForUserManagerRequest() :
    m_instanceIdHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_userManagerFilterHasBeenSet(false),
    m_needKeytabInfoHasBeenSet(false)
{
}

string DescribeUsersForUserManagerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_userManagerFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserManagerFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userManagerFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needKeytabInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedKeytabInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needKeytabInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUsersForUserManagerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeUsersForUserManagerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeUsersForUserManagerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeUsersForUserManagerRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUsersForUserManagerRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUsersForUserManagerRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeUsersForUserManagerRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUsersForUserManagerRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUsersForUserManagerRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

UserManagerFilter DescribeUsersForUserManagerRequest::GetUserManagerFilter() const
{
    return m_userManagerFilter;
}

void DescribeUsersForUserManagerRequest::SetUserManagerFilter(const UserManagerFilter& _userManagerFilter)
{
    m_userManagerFilter = _userManagerFilter;
    m_userManagerFilterHasBeenSet = true;
}

bool DescribeUsersForUserManagerRequest::UserManagerFilterHasBeenSet() const
{
    return m_userManagerFilterHasBeenSet;
}

bool DescribeUsersForUserManagerRequest::GetNeedKeytabInfo() const
{
    return m_needKeytabInfo;
}

void DescribeUsersForUserManagerRequest::SetNeedKeytabInfo(const bool& _needKeytabInfo)
{
    m_needKeytabInfo = _needKeytabInfo;
    m_needKeytabInfoHasBeenSet = true;
}

bool DescribeUsersForUserManagerRequest::NeedKeytabInfoHasBeenSet() const
{
    return m_needKeytabInfoHasBeenSet;
}


