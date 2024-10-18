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

#include <tencentcloud/sqlserver/v20180328/model/RestoreTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

RestoreTask::RestoreTask() :
    m_targetInstanceIdHasBeenSet(false),
    m_targetInstanceNameHasBeenSet(false),
    m_targetInstanceStatusHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_restoreIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_restoreTypeHasBeenSet(false),
    m_restoreTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_flowIdHasBeenSet(false)
{
}

CoreInternalOutcome RestoreTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetInstanceId") && !value["TargetInstanceId"].IsNull())
    {
        if (!value["TargetInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetInstanceId = string(value["TargetInstanceId"].GetString());
        m_targetInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetInstanceName") && !value["TargetInstanceName"].IsNull())
    {
        if (!value["TargetInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetInstanceName = string(value["TargetInstanceName"].GetString());
        m_targetInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetInstanceStatus") && !value["TargetInstanceStatus"].IsNull())
    {
        if (!value["TargetInstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetInstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetInstanceStatus = value["TargetInstanceStatus"].GetInt64();
        m_targetInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("RestoreId") && !value["RestoreId"].IsNull())
    {
        if (!value["RestoreId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreId = value["RestoreId"].GetInt64();
        m_restoreIdHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.TargetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetInt64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("RestoreType") && !value["RestoreType"].IsNull())
    {
        if (!value["RestoreType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreType = value["RestoreType"].GetInt64();
        m_restoreTypeHasBeenSet = true;
    }

    if (value.HasMember("RestoreTime") && !value["RestoreTime"].IsNull())
    {
        if (!value["RestoreTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreTime = string(value["RestoreTime"].GetString());
        m_restoreTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetInstanceStatus, allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreId, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_restoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreType, allocator);
    }

    if (m_restoreTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

}


string RestoreTask::GetTargetInstanceId() const
{
    return m_targetInstanceId;
}

void RestoreTask::SetTargetInstanceId(const string& _targetInstanceId)
{
    m_targetInstanceId = _targetInstanceId;
    m_targetInstanceIdHasBeenSet = true;
}

bool RestoreTask::TargetInstanceIdHasBeenSet() const
{
    return m_targetInstanceIdHasBeenSet;
}

string RestoreTask::GetTargetInstanceName() const
{
    return m_targetInstanceName;
}

void RestoreTask::SetTargetInstanceName(const string& _targetInstanceName)
{
    m_targetInstanceName = _targetInstanceName;
    m_targetInstanceNameHasBeenSet = true;
}

bool RestoreTask::TargetInstanceNameHasBeenSet() const
{
    return m_targetInstanceNameHasBeenSet;
}

int64_t RestoreTask::GetTargetInstanceStatus() const
{
    return m_targetInstanceStatus;
}

void RestoreTask::SetTargetInstanceStatus(const int64_t& _targetInstanceStatus)
{
    m_targetInstanceStatus = _targetInstanceStatus;
    m_targetInstanceStatusHasBeenSet = true;
}

bool RestoreTask::TargetInstanceStatusHasBeenSet() const
{
    return m_targetInstanceStatusHasBeenSet;
}

string RestoreTask::GetTargetRegion() const
{
    return m_targetRegion;
}

void RestoreTask::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool RestoreTask::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

int64_t RestoreTask::GetRestoreId() const
{
    return m_restoreId;
}

void RestoreTask::SetRestoreId(const int64_t& _restoreId)
{
    m_restoreId = _restoreId;
    m_restoreIdHasBeenSet = true;
}

bool RestoreTask::RestoreIdHasBeenSet() const
{
    return m_restoreIdHasBeenSet;
}

int64_t RestoreTask::GetTargetType() const
{
    return m_targetType;
}

void RestoreTask::SetTargetType(const int64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RestoreTask::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

int64_t RestoreTask::GetRestoreType() const
{
    return m_restoreType;
}

void RestoreTask::SetRestoreType(const int64_t& _restoreType)
{
    m_restoreType = _restoreType;
    m_restoreTypeHasBeenSet = true;
}

bool RestoreTask::RestoreTypeHasBeenSet() const
{
    return m_restoreTypeHasBeenSet;
}

string RestoreTask::GetRestoreTime() const
{
    return m_restoreTime;
}

void RestoreTask::SetRestoreTime(const string& _restoreTime)
{
    m_restoreTime = _restoreTime;
    m_restoreTimeHasBeenSet = true;
}

bool RestoreTask::RestoreTimeHasBeenSet() const
{
    return m_restoreTimeHasBeenSet;
}

string RestoreTask::GetStartTime() const
{
    return m_startTime;
}

void RestoreTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RestoreTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RestoreTask::GetEndTime() const
{
    return m_endTime;
}

void RestoreTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RestoreTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t RestoreTask::GetStatus() const
{
    return m_status;
}

void RestoreTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RestoreTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RestoreTask::GetFlowId() const
{
    return m_flowId;
}

void RestoreTask::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool RestoreTask::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

