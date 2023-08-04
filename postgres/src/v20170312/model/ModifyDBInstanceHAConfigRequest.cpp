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

#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceHAConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBInstanceHAConfigRequest::ModifyDBInstanceHAConfigRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_maxStandbyLatencyHasBeenSet(false),
    m_maxStandbyLagHasBeenSet(false),
    m_maxSyncStandbyLatencyHasBeenSet(false),
    m_maxSyncStandbyLagHasBeenSet(false)
{
}

string ModifyDBInstanceHAConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncMode.c_str(), allocator).Move(), allocator);
    }

    if (m_maxStandbyLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStandbyLatency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxStandbyLatency, allocator);
    }

    if (m_maxStandbyLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStandbyLag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxStandbyLag, allocator);
    }

    if (m_maxSyncStandbyLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSyncStandbyLatency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSyncStandbyLatency, allocator);
    }

    if (m_maxSyncStandbyLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSyncStandbyLag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSyncStandbyLag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceHAConfigRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBInstanceHAConfigRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyDBInstanceHAConfigRequest::GetSyncMode() const
{
    return m_syncMode;
}

void ModifyDBInstanceHAConfigRequest::SetSyncMode(const string& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

uint64_t ModifyDBInstanceHAConfigRequest::GetMaxStandbyLatency() const
{
    return m_maxStandbyLatency;
}

void ModifyDBInstanceHAConfigRequest::SetMaxStandbyLatency(const uint64_t& _maxStandbyLatency)
{
    m_maxStandbyLatency = _maxStandbyLatency;
    m_maxStandbyLatencyHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::MaxStandbyLatencyHasBeenSet() const
{
    return m_maxStandbyLatencyHasBeenSet;
}

uint64_t ModifyDBInstanceHAConfigRequest::GetMaxStandbyLag() const
{
    return m_maxStandbyLag;
}

void ModifyDBInstanceHAConfigRequest::SetMaxStandbyLag(const uint64_t& _maxStandbyLag)
{
    m_maxStandbyLag = _maxStandbyLag;
    m_maxStandbyLagHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::MaxStandbyLagHasBeenSet() const
{
    return m_maxStandbyLagHasBeenSet;
}

uint64_t ModifyDBInstanceHAConfigRequest::GetMaxSyncStandbyLatency() const
{
    return m_maxSyncStandbyLatency;
}

void ModifyDBInstanceHAConfigRequest::SetMaxSyncStandbyLatency(const uint64_t& _maxSyncStandbyLatency)
{
    m_maxSyncStandbyLatency = _maxSyncStandbyLatency;
    m_maxSyncStandbyLatencyHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::MaxSyncStandbyLatencyHasBeenSet() const
{
    return m_maxSyncStandbyLatencyHasBeenSet;
}

uint64_t ModifyDBInstanceHAConfigRequest::GetMaxSyncStandbyLag() const
{
    return m_maxSyncStandbyLag;
}

void ModifyDBInstanceHAConfigRequest::SetMaxSyncStandbyLag(const uint64_t& _maxSyncStandbyLag)
{
    m_maxSyncStandbyLag = _maxSyncStandbyLag;
    m_maxSyncStandbyLagHasBeenSet = true;
}

bool ModifyDBInstanceHAConfigRequest::MaxSyncStandbyLagHasBeenSet() const
{
    return m_maxSyncStandbyLagHasBeenSet;
}


