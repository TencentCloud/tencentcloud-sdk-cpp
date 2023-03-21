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

#include <tencentcloud/postgres/v20170312/model/UpgradeDBInstanceKernelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

UpgradeDBInstanceKernelVersionRequest::UpgradeDBInstanceKernelVersionRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_targetDBKernelVersionHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string UpgradeDBInstanceKernelVersionRequest::ToJsonString() const
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

    if (m_targetDBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceKernelVersionRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void UpgradeDBInstanceKernelVersionRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string UpgradeDBInstanceKernelVersionRequest::GetTargetDBKernelVersion() const
{
    return m_targetDBKernelVersion;
}

void UpgradeDBInstanceKernelVersionRequest::SetTargetDBKernelVersion(const string& _targetDBKernelVersion)
{
    m_targetDBKernelVersion = _targetDBKernelVersion;
    m_targetDBKernelVersionHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::TargetDBKernelVersionHasBeenSet() const
{
    return m_targetDBKernelVersionHasBeenSet;
}

uint64_t UpgradeDBInstanceKernelVersionRequest::GetSwitchTag() const
{
    return m_switchTag;
}

void UpgradeDBInstanceKernelVersionRequest::SetSwitchTag(const uint64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string UpgradeDBInstanceKernelVersionRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void UpgradeDBInstanceKernelVersionRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string UpgradeDBInstanceKernelVersionRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void UpgradeDBInstanceKernelVersionRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}

bool UpgradeDBInstanceKernelVersionRequest::GetDryRun() const
{
    return m_dryRun;
}

void UpgradeDBInstanceKernelVersionRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool UpgradeDBInstanceKernelVersionRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


