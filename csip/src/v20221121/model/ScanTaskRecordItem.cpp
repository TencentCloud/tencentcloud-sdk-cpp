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

#include <tencentcloud/csip/v20221121/model/ScanTaskRecordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanTaskRecordItem::ScanTaskRecordItem() :
    m_taskIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_costQuotaHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskSourceHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskRecordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("CostQuota") && !value["CostQuota"].IsNull())
    {
        if (!value["CostQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.CostQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_costQuota = value["CostQuota"].GetUint64();
        m_costQuotaHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskSource") && !value["TaskSource"].IsNull())
    {
        if (!value["TaskSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRecordItem.TaskSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSource = string(value["TaskSource"].GetString());
        m_taskSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskRecordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_costQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costQuota, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSource.c_str(), allocator).Move(), allocator);
    }

}


string ScanTaskRecordItem::GetTaskID() const
{
    return m_taskID;
}

void ScanTaskRecordItem::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool ScanTaskRecordItem::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string ScanTaskRecordItem::GetStatus() const
{
    return m_status;
}

void ScanTaskRecordItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanTaskRecordItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ScanTaskRecordItem::GetProgress() const
{
    return m_progress;
}

void ScanTaskRecordItem::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ScanTaskRecordItem::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t ScanTaskRecordItem::GetCostQuota() const
{
    return m_costQuota;
}

void ScanTaskRecordItem::SetCostQuota(const uint64_t& _costQuota)
{
    m_costQuota = _costQuota;
    m_costQuotaHasBeenSet = true;
}

bool ScanTaskRecordItem::CostQuotaHasBeenSet() const
{
    return m_costQuotaHasBeenSet;
}

string ScanTaskRecordItem::GetCreateTime() const
{
    return m_createTime;
}

void ScanTaskRecordItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScanTaskRecordItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScanTaskRecordItem::GetEndTime() const
{
    return m_endTime;
}

void ScanTaskRecordItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScanTaskRecordItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ScanTaskRecordItem::GetTaskSource() const
{
    return m_taskSource;
}

void ScanTaskRecordItem::SetTaskSource(const string& _taskSource)
{
    m_taskSource = _taskSource;
    m_taskSourceHasBeenSet = true;
}

bool ScanTaskRecordItem::TaskSourceHasBeenSet() const
{
    return m_taskSourceHasBeenSet;
}

