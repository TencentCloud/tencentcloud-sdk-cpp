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

#include <tencentcloud/mongodb/v20190725/model/SetBackupRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SetBackupRulesRequest::SetBackupRulesRequest() :
    m_instanceIdHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_notifyHasBeenSet(false),
    m_backupRetentionPeriodHasBeenSet(false)
{
}

string SetBackupRulesRequest::ToJsonString() const
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

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupMethod, allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupTime, allocator);
    }

    if (m_notifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notify, allocator);
    }

    if (m_backupRetentionPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRetentionPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_backupRetentionPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetBackupRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SetBackupRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SetBackupRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupMethod() const
{
    return m_backupMethod;
}

void SetBackupRulesRequest::SetBackupMethod(const uint64_t& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupTime() const
{
    return m_backupTime;
}

void SetBackupRulesRequest::SetBackupTime(const uint64_t& _backupTime)
{
    m_backupTime = _backupTime;
    m_backupTimeHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

bool SetBackupRulesRequest::GetNotify() const
{
    return m_notify;
}

void SetBackupRulesRequest::SetNotify(const bool& _notify)
{
    m_notify = _notify;
    m_notifyHasBeenSet = true;
}

bool SetBackupRulesRequest::NotifyHasBeenSet() const
{
    return m_notifyHasBeenSet;
}

uint64_t SetBackupRulesRequest::GetBackupRetentionPeriod() const
{
    return m_backupRetentionPeriod;
}

void SetBackupRulesRequest::SetBackupRetentionPeriod(const uint64_t& _backupRetentionPeriod)
{
    m_backupRetentionPeriod = _backupRetentionPeriod;
    m_backupRetentionPeriodHasBeenSet = true;
}

bool SetBackupRulesRequest::BackupRetentionPeriodHasBeenSet() const
{
    return m_backupRetentionPeriodHasBeenSet;
}


