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

#include <tencentcloud/eis/v20210601/model/ListRuntimeDeployedInstancesMCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

ListRuntimeDeployedInstancesMCRequest::ListRuntimeDeployedInstancesMCRequest() :
    m_runtimeIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_apiVersionHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runtimeClassHasBeenSet(false)
{
}

string ListRuntimeDeployedInstancesMCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeId, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortType, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_apiVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_apiVersion, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_runtimeClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeClass, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListRuntimeDeployedInstancesMCRequest::GetRuntimeId() const
{
    return m_runtimeId;
}

void ListRuntimeDeployedInstancesMCRequest::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetLimit() const
{
    return m_limit;
}

void ListRuntimeDeployedInstancesMCRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetOffset() const
{
    return m_offset;
}

void ListRuntimeDeployedInstancesMCRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetSortType() const
{
    return m_sortType;
}

void ListRuntimeDeployedInstancesMCRequest::SetSortType(const int64_t& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string ListRuntimeDeployedInstancesMCRequest::GetSort() const
{
    return m_sort;
}

void ListRuntimeDeployedInstancesMCRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string ListRuntimeDeployedInstancesMCRequest::GetZone() const
{
    return m_zone;
}

void ListRuntimeDeployedInstancesMCRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetApiVersion() const
{
    return m_apiVersion;
}

void ListRuntimeDeployedInstancesMCRequest::SetApiVersion(const int64_t& _apiVersion)
{
    m_apiVersion = _apiVersion;
    m_apiVersionHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::ApiVersionHasBeenSet() const
{
    return m_apiVersionHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetGroupId() const
{
    return m_groupId;
}

void ListRuntimeDeployedInstancesMCRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetStatus() const
{
    return m_status;
}

void ListRuntimeDeployedInstancesMCRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ListRuntimeDeployedInstancesMCRequest::GetRuntimeClass() const
{
    return m_runtimeClass;
}

void ListRuntimeDeployedInstancesMCRequest::SetRuntimeClass(const int64_t& _runtimeClass)
{
    m_runtimeClass = _runtimeClass;
    m_runtimeClassHasBeenSet = true;
}

bool ListRuntimeDeployedInstancesMCRequest::RuntimeClassHasBeenSet() const
{
    return m_runtimeClassHasBeenSet;
}


