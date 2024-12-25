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

#include <tencentcloud/cdwdoris/v20211228/model/RecoverBackUpJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

RecoverBackUpJobRequest::RecoverBackUpJobRequest() :
    m_instanceIdHasBeenSet(false),
    m_backUpJobIdHasBeenSet(false),
    m_replicationNumHasBeenSet(false),
    m_reserveSourceConfigHasBeenSet(false),
    m_recoverTypeHasBeenSet(false),
    m_cosSourceInfoHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_nextTimeHasBeenSet(false),
    m_scheduleNameHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_recoverScopeHasBeenSet(false),
    m_recoverDatabaseHasBeenSet(false),
    m_reserveStoragePolicyHasBeenSet(false)
{
}

string RecoverBackUpJobRequest::ToJsonString() const
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

    if (m_backUpJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpJobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backUpJobId, allocator);
    }

    if (m_replicationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicationNum, allocator);
    }

    if (m_reserveSourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveSourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reserveSourceConfig, allocator);
    }

    if (m_recoverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recoverType, allocator);
    }

    if (m_cosSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosSourceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scheduleType, allocator);
    }

    if (m_nextTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_recoverScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recoverScope.c_str(), allocator).Move(), allocator);
    }

    if (m_recoverDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverDatabase";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recoverDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveStoragePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveStoragePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reserveStoragePolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecoverBackUpJobRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RecoverBackUpJobRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RecoverBackUpJobRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetBackUpJobId() const
{
    return m_backUpJobId;
}

void RecoverBackUpJobRequest::SetBackUpJobId(const int64_t& _backUpJobId)
{
    m_backUpJobId = _backUpJobId;
    m_backUpJobIdHasBeenSet = true;
}

bool RecoverBackUpJobRequest::BackUpJobIdHasBeenSet() const
{
    return m_backUpJobIdHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetReplicationNum() const
{
    return m_replicationNum;
}

void RecoverBackUpJobRequest::SetReplicationNum(const int64_t& _replicationNum)
{
    m_replicationNum = _replicationNum;
    m_replicationNumHasBeenSet = true;
}

bool RecoverBackUpJobRequest::ReplicationNumHasBeenSet() const
{
    return m_replicationNumHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetReserveSourceConfig() const
{
    return m_reserveSourceConfig;
}

void RecoverBackUpJobRequest::SetReserveSourceConfig(const int64_t& _reserveSourceConfig)
{
    m_reserveSourceConfig = _reserveSourceConfig;
    m_reserveSourceConfigHasBeenSet = true;
}

bool RecoverBackUpJobRequest::ReserveSourceConfigHasBeenSet() const
{
    return m_reserveSourceConfigHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetRecoverType() const
{
    return m_recoverType;
}

void RecoverBackUpJobRequest::SetRecoverType(const int64_t& _recoverType)
{
    m_recoverType = _recoverType;
    m_recoverTypeHasBeenSet = true;
}

bool RecoverBackUpJobRequest::RecoverTypeHasBeenSet() const
{
    return m_recoverTypeHasBeenSet;
}

CosSourceInfo RecoverBackUpJobRequest::GetCosSourceInfo() const
{
    return m_cosSourceInfo;
}

void RecoverBackUpJobRequest::SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo)
{
    m_cosSourceInfo = _cosSourceInfo;
    m_cosSourceInfoHasBeenSet = true;
}

bool RecoverBackUpJobRequest::CosSourceInfoHasBeenSet() const
{
    return m_cosSourceInfoHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetScheduleType() const
{
    return m_scheduleType;
}

void RecoverBackUpJobRequest::SetScheduleType(const int64_t& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool RecoverBackUpJobRequest::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

string RecoverBackUpJobRequest::GetNextTime() const
{
    return m_nextTime;
}

void RecoverBackUpJobRequest::SetNextTime(const string& _nextTime)
{
    m_nextTime = _nextTime;
    m_nextTimeHasBeenSet = true;
}

bool RecoverBackUpJobRequest::NextTimeHasBeenSet() const
{
    return m_nextTimeHasBeenSet;
}

string RecoverBackUpJobRequest::GetScheduleName() const
{
    return m_scheduleName;
}

void RecoverBackUpJobRequest::SetScheduleName(const string& _scheduleName)
{
    m_scheduleName = _scheduleName;
    m_scheduleNameHasBeenSet = true;
}

bool RecoverBackUpJobRequest::ScheduleNameHasBeenSet() const
{
    return m_scheduleNameHasBeenSet;
}

string RecoverBackUpJobRequest::GetOperationType() const
{
    return m_operationType;
}

void RecoverBackUpJobRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool RecoverBackUpJobRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string RecoverBackUpJobRequest::GetRecoverScope() const
{
    return m_recoverScope;
}

void RecoverBackUpJobRequest::SetRecoverScope(const string& _recoverScope)
{
    m_recoverScope = _recoverScope;
    m_recoverScopeHasBeenSet = true;
}

bool RecoverBackUpJobRequest::RecoverScopeHasBeenSet() const
{
    return m_recoverScopeHasBeenSet;
}

string RecoverBackUpJobRequest::GetRecoverDatabase() const
{
    return m_recoverDatabase;
}

void RecoverBackUpJobRequest::SetRecoverDatabase(const string& _recoverDatabase)
{
    m_recoverDatabase = _recoverDatabase;
    m_recoverDatabaseHasBeenSet = true;
}

bool RecoverBackUpJobRequest::RecoverDatabaseHasBeenSet() const
{
    return m_recoverDatabaseHasBeenSet;
}

int64_t RecoverBackUpJobRequest::GetReserveStoragePolicy() const
{
    return m_reserveStoragePolicy;
}

void RecoverBackUpJobRequest::SetReserveStoragePolicy(const int64_t& _reserveStoragePolicy)
{
    m_reserveStoragePolicy = _reserveStoragePolicy;
    m_reserveStoragePolicyHasBeenSet = true;
}

bool RecoverBackUpJobRequest::ReserveStoragePolicyHasBeenSet() const
{
    return m_reserveStoragePolicyHasBeenSet;
}


