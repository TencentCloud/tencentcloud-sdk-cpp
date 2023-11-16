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

#include <tencentcloud/sqlserver/v20180328/model/DescribeRegularBackupPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeRegularBackupPlanRequest::DescribeRegularBackupPlanRequest() :
    m_instanceIdHasBeenSet(false),
    m_regularBackupSaveDaysHasBeenSet(false),
    m_regularBackupStrategyHasBeenSet(false),
    m_regularBackupCountsHasBeenSet(false),
    m_regularBackupStartTimeHasBeenSet(false),
    m_backupCycleHasBeenSet(false)
{
}

string DescribeRegularBackupPlanRequest::ToJsonString() const
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

    if (m_regularBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regularBackupSaveDays, allocator);
    }

    if (m_regularBackupStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regularBackupStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupCounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regularBackupCounts, allocator);
    }

    if (m_regularBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regularBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCycle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupCycle.begin(); itr != m_backupCycle.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRegularBackupPlanRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRegularBackupPlanRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeRegularBackupPlanRequest::GetRegularBackupSaveDays() const
{
    return m_regularBackupSaveDays;
}

void DescribeRegularBackupPlanRequest::SetRegularBackupSaveDays(const uint64_t& _regularBackupSaveDays)
{
    m_regularBackupSaveDays = _regularBackupSaveDays;
    m_regularBackupSaveDaysHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::RegularBackupSaveDaysHasBeenSet() const
{
    return m_regularBackupSaveDaysHasBeenSet;
}

string DescribeRegularBackupPlanRequest::GetRegularBackupStrategy() const
{
    return m_regularBackupStrategy;
}

void DescribeRegularBackupPlanRequest::SetRegularBackupStrategy(const string& _regularBackupStrategy)
{
    m_regularBackupStrategy = _regularBackupStrategy;
    m_regularBackupStrategyHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::RegularBackupStrategyHasBeenSet() const
{
    return m_regularBackupStrategyHasBeenSet;
}

uint64_t DescribeRegularBackupPlanRequest::GetRegularBackupCounts() const
{
    return m_regularBackupCounts;
}

void DescribeRegularBackupPlanRequest::SetRegularBackupCounts(const uint64_t& _regularBackupCounts)
{
    m_regularBackupCounts = _regularBackupCounts;
    m_regularBackupCountsHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::RegularBackupCountsHasBeenSet() const
{
    return m_regularBackupCountsHasBeenSet;
}

string DescribeRegularBackupPlanRequest::GetRegularBackupStartTime() const
{
    return m_regularBackupStartTime;
}

void DescribeRegularBackupPlanRequest::SetRegularBackupStartTime(const string& _regularBackupStartTime)
{
    m_regularBackupStartTime = _regularBackupStartTime;
    m_regularBackupStartTimeHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::RegularBackupStartTimeHasBeenSet() const
{
    return m_regularBackupStartTimeHasBeenSet;
}

vector<uint64_t> DescribeRegularBackupPlanRequest::GetBackupCycle() const
{
    return m_backupCycle;
}

void DescribeRegularBackupPlanRequest::SetBackupCycle(const vector<uint64_t>& _backupCycle)
{
    m_backupCycle = _backupCycle;
    m_backupCycleHasBeenSet = true;
}

bool DescribeRegularBackupPlanRequest::BackupCycleHasBeenSet() const
{
    return m_backupCycleHasBeenSet;
}


