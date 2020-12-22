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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

DescribeAlarmNoticesRequest::DescribeAlarmNoticesRequest() :
    m_moduleHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_ownerUidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

string DescribeAlarmNoticesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerUid, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmNoticesRequest::GetModule() const
{
    return m_module;
}

void DescribeAlarmNoticesRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeAlarmNoticesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmNoticesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeAlarmNoticesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmNoticesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeAlarmNoticesRequest::GetOrder() const
{
    return m_order;
}

void DescribeAlarmNoticesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t DescribeAlarmNoticesRequest::GetOwnerUid() const
{
    return m_ownerUid;
}

void DescribeAlarmNoticesRequest::SetOwnerUid(const int64_t& _ownerUid)
{
    m_ownerUid = _ownerUid;
    m_ownerUidHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::OwnerUidHasBeenSet() const
{
    return m_ownerUidHasBeenSet;
}

string DescribeAlarmNoticesRequest::GetName() const
{
    return m_name;
}

void DescribeAlarmNoticesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAlarmNoticesRequest::GetReceiverType() const
{
    return m_receiverType;
}

void DescribeAlarmNoticesRequest::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<int64_t> DescribeAlarmNoticesRequest::GetUserIds() const
{
    return m_userIds;
}

void DescribeAlarmNoticesRequest::SetUserIds(const vector<int64_t>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<int64_t> DescribeAlarmNoticesRequest::GetGroupIds() const
{
    return m_groupIds;
}

void DescribeAlarmNoticesRequest::SetGroupIds(const vector<int64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool DescribeAlarmNoticesRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}


