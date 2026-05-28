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

#include <tencentcloud/tcb/v20180608/model/RepairPGUserMigrationHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RepairPGUserMigrationHistoryRequest::RepairPGUserMigrationHistoryRequest() :
    m_envIdHasBeenSet(false),
    m_migrationVersionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

string RepairPGUserMigrationHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_migrationVersion.c_str(), allocator).Move(), allocator);
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
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RepairPGUserMigrationHistoryRequest::GetEnvId() const
{
    return m_envId;
}

void RepairPGUserMigrationHistoryRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string RepairPGUserMigrationHistoryRequest::GetMigrationVersion() const
{
    return m_migrationVersion;
}

void RepairPGUserMigrationHistoryRequest::SetMigrationVersion(const string& _migrationVersion)
{
    m_migrationVersion = _migrationVersion;
    m_migrationVersionHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::MigrationVersionHasBeenSet() const
{
    return m_migrationVersionHasBeenSet;
}

string RepairPGUserMigrationHistoryRequest::GetName() const
{
    return m_name;
}

void RepairPGUserMigrationHistoryRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RepairPGUserMigrationHistoryRequest::GetStatus() const
{
    return m_status;
}

void RepairPGUserMigrationHistoryRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RepairPGUserMigrationHistoryRequest::GetReason() const
{
    return m_reason;
}

void RepairPGUserMigrationHistoryRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string RepairPGUserMigrationHistoryRequest::GetQuery() const
{
    return m_query;
}

void RepairPGUserMigrationHistoryRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool RepairPGUserMigrationHistoryRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


