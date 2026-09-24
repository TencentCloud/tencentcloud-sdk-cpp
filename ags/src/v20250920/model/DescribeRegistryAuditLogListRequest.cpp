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

#include <tencentcloud/ags/v20250920/model/DescribeRegistryAuditLogListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DescribeRegistryAuditLogListRequest::DescribeRegistryAuditLogListRequest() :
    m_registryIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_actionFilterHasBeenSet(false),
    m_actorHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeRegistryAuditLogListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_actorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actor.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRegistryAuditLogListRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeRegistryAuditLogListRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetRecordId() const
{
    return m_recordId;
}

void DescribeRegistryAuditLogListRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetVersionId() const
{
    return m_versionId;
}

void DescribeRegistryAuditLogListRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetActionFilter() const
{
    return m_actionFilter;
}

void DescribeRegistryAuditLogListRequest::SetActionFilter(const string& _actionFilter)
{
    m_actionFilter = _actionFilter;
    m_actionFilterHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::ActionFilterHasBeenSet() const
{
    return m_actionFilterHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetActor() const
{
    return m_actor;
}

void DescribeRegistryAuditLogListRequest::SetActor(const string& _actor)
{
    m_actor = _actor;
    m_actorHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::ActorHasBeenSet() const
{
    return m_actorHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRegistryAuditLogListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeRegistryAuditLogListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRegistryAuditLogListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRegistryAuditLogListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRegistryAuditLogListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRegistryAuditLogListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRegistryAuditLogListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRegistryAuditLogListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


