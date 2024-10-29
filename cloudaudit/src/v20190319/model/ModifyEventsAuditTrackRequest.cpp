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

#include <tencentcloud/cloudaudit/v20190319/model/ModifyEventsAuditTrackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

ModifyEventsAuditTrackRequest::ModifyEventsAuditTrackRequest() :
    m_trackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_trackForAllMembersHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ModifyEventsAuditTrackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trackId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trackForAllMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackForAllMembers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trackForAllMembers, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEventsAuditTrackRequest::GetTrackId() const
{
    return m_trackId;
}

void ModifyEventsAuditTrackRequest::SetTrackId(const uint64_t& _trackId)
{
    m_trackId = _trackId;
    m_trackIdHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::TrackIdHasBeenSet() const
{
    return m_trackIdHasBeenSet;
}

string ModifyEventsAuditTrackRequest::GetName() const
{
    return m_name;
}

void ModifyEventsAuditTrackRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyEventsAuditTrackRequest::GetStatus() const
{
    return m_status;
}

void ModifyEventsAuditTrackRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Storage ModifyEventsAuditTrackRequest::GetStorage() const
{
    return m_storage;
}

void ModifyEventsAuditTrackRequest::SetStorage(const Storage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t ModifyEventsAuditTrackRequest::GetTrackForAllMembers() const
{
    return m_trackForAllMembers;
}

void ModifyEventsAuditTrackRequest::SetTrackForAllMembers(const uint64_t& _trackForAllMembers)
{
    m_trackForAllMembers = _trackForAllMembers;
    m_trackForAllMembersHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::TrackForAllMembersHasBeenSet() const
{
    return m_trackForAllMembersHasBeenSet;
}

Filter ModifyEventsAuditTrackRequest::GetFilters() const
{
    return m_filters;
}

void ModifyEventsAuditTrackRequest::SetFilters(const Filter& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyEventsAuditTrackRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


