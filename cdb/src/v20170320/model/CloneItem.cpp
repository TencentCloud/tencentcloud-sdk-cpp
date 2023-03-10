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

#include <tencentcloud/cdb/v20170320/model/CloneItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CloneItem::CloneItem() :
    m_srcInstanceIdHasBeenSet(false),
    m_dstInstanceIdHasBeenSet(false),
    m_cloneJobIdHasBeenSet(false),
    m_rollbackStrategyHasBeenSet(false),
    m_rollbackTargetTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_newRegionIdHasBeenSet(false),
    m_srcRegionIdHasBeenSet(false)
{
}

CoreInternalOutcome CloneItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceId") && !value["SrcInstanceId"].IsNull())
    {
        if (!value["SrcInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.SrcInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceId = string(value["SrcInstanceId"].GetString());
        m_srcInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DstInstanceId") && !value["DstInstanceId"].IsNull())
    {
        if (!value["DstInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.DstInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstInstanceId = string(value["DstInstanceId"].GetString());
        m_dstInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CloneJobId") && !value["CloneJobId"].IsNull())
    {
        if (!value["CloneJobId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.CloneJobId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloneJobId = value["CloneJobId"].GetInt64();
        m_cloneJobIdHasBeenSet = true;
    }

    if (value.HasMember("RollbackStrategy") && !value["RollbackStrategy"].IsNull())
    {
        if (!value["RollbackStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.RollbackStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackStrategy = string(value["RollbackStrategy"].GetString());
        m_rollbackStrategyHasBeenSet = true;
    }

    if (value.HasMember("RollbackTargetTime") && !value["RollbackTargetTime"].IsNull())
    {
        if (!value["RollbackTargetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.RollbackTargetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackTargetTime = string(value["RollbackTargetTime"].GetString());
        m_rollbackTargetTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("NewRegionId") && !value["NewRegionId"].IsNull())
    {
        if (!value["NewRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.NewRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newRegionId = value["NewRegionId"].GetInt64();
        m_newRegionIdHasBeenSet = true;
    }

    if (value.HasMember("SrcRegionId") && !value["SrcRegionId"].IsNull())
    {
        if (!value["SrcRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloneItem.SrcRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcRegionId = value["SrcRegionId"].GetInt64();
        m_srcRegionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloneJobId, allocator);
    }

    if (m_rollbackStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollbackStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackTargetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTargetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollbackTargetTime.c_str(), allocator).Move(), allocator);
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

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_newRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newRegionId, allocator);
    }

    if (m_srcRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcRegionId, allocator);
    }

}


string CloneItem::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void CloneItem::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool CloneItem::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string CloneItem::GetDstInstanceId() const
{
    return m_dstInstanceId;
}

void CloneItem::SetDstInstanceId(const string& _dstInstanceId)
{
    m_dstInstanceId = _dstInstanceId;
    m_dstInstanceIdHasBeenSet = true;
}

bool CloneItem::DstInstanceIdHasBeenSet() const
{
    return m_dstInstanceIdHasBeenSet;
}

int64_t CloneItem::GetCloneJobId() const
{
    return m_cloneJobId;
}

void CloneItem::SetCloneJobId(const int64_t& _cloneJobId)
{
    m_cloneJobId = _cloneJobId;
    m_cloneJobIdHasBeenSet = true;
}

bool CloneItem::CloneJobIdHasBeenSet() const
{
    return m_cloneJobIdHasBeenSet;
}

string CloneItem::GetRollbackStrategy() const
{
    return m_rollbackStrategy;
}

void CloneItem::SetRollbackStrategy(const string& _rollbackStrategy)
{
    m_rollbackStrategy = _rollbackStrategy;
    m_rollbackStrategyHasBeenSet = true;
}

bool CloneItem::RollbackStrategyHasBeenSet() const
{
    return m_rollbackStrategyHasBeenSet;
}

string CloneItem::GetRollbackTargetTime() const
{
    return m_rollbackTargetTime;
}

void CloneItem::SetRollbackTargetTime(const string& _rollbackTargetTime)
{
    m_rollbackTargetTime = _rollbackTargetTime;
    m_rollbackTargetTimeHasBeenSet = true;
}

bool CloneItem::RollbackTargetTimeHasBeenSet() const
{
    return m_rollbackTargetTimeHasBeenSet;
}

string CloneItem::GetStartTime() const
{
    return m_startTime;
}

void CloneItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CloneItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CloneItem::GetEndTime() const
{
    return m_endTime;
}

void CloneItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CloneItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CloneItem::GetTaskStatus() const
{
    return m_taskStatus;
}

void CloneItem::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool CloneItem::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

int64_t CloneItem::GetNewRegionId() const
{
    return m_newRegionId;
}

void CloneItem::SetNewRegionId(const int64_t& _newRegionId)
{
    m_newRegionId = _newRegionId;
    m_newRegionIdHasBeenSet = true;
}

bool CloneItem::NewRegionIdHasBeenSet() const
{
    return m_newRegionIdHasBeenSet;
}

int64_t CloneItem::GetSrcRegionId() const
{
    return m_srcRegionId;
}

void CloneItem::SetSrcRegionId(const int64_t& _srcRegionId)
{
    m_srcRegionId = _srcRegionId;
    m_srcRegionIdHasBeenSet = true;
}

bool CloneItem::SrcRegionIdHasBeenSet() const
{
    return m_srcRegionIdHasBeenSet;
}

