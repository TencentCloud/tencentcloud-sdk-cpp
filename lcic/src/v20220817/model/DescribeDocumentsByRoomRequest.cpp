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

#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeDocumentsByRoomRequest::DescribeDocumentsByRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

string DescribeDocumentsByRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permission.begin(); itr != m_permission.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDocumentsByRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeDocumentsByRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t DescribeDocumentsByRoomRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeDocumentsByRoomRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeDocumentsByRoomRequest::GetPage() const
{
    return m_page;
}

void DescribeDocumentsByRoomRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeDocumentsByRoomRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDocumentsByRoomRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<uint64_t> DescribeDocumentsByRoomRequest::GetPermission() const
{
    return m_permission;
}

void DescribeDocumentsByRoomRequest::SetPermission(const vector<uint64_t>& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string DescribeDocumentsByRoomRequest::GetOwner() const
{
    return m_owner;
}

void DescribeDocumentsByRoomRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DescribeDocumentsByRoomRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}


