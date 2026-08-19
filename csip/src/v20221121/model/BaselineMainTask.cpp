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

#include <tencentcloud/csip/v20221121/model/BaselineMainTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineMainTask::BaselineMainTask() :
    m_jobIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMessageHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_scanSuccessCountHasBeenSet(false),
    m_scanFailedCountHasBeenSet(false),
    m_scanTotalCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineMainTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckAssetType") && !value["CheckAssetType"].IsNull())
    {
        if (!value["CheckAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.CheckAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssetType = string(value["CheckAssetType"].GetString());
        m_checkAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMessage") && !value["ErrMessage"].IsNull())
    {
        if (!value["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(value["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("ScanSuccessCount") && !value["ScanSuccessCount"].IsNull())
    {
        if (!value["ScanSuccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ScanSuccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanSuccessCount = value["ScanSuccessCount"].GetUint64();
        m_scanSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("ScanFailedCount") && !value["ScanFailedCount"].IsNull())
    {
        if (!value["ScanFailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ScanFailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanFailedCount = value["ScanFailedCount"].GetUint64();
        m_scanFailedCountHasBeenSet = true;
    }

    if (value.HasMember("ScanTotalCount") && !value["ScanTotalCount"].IsNull())
    {
        if (!value["ScanTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineMainTask.ScanTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanTotalCount = value["ScanTotalCount"].GetUint64();
        m_scanTotalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineMainTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_scanSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanSuccessCount, allocator);
    }

    if (m_scanFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanFailedCount, allocator);
    }

    if (m_scanTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanTotalCount, allocator);
    }

}


string BaselineMainTask::GetJobID() const
{
    return m_jobID;
}

void BaselineMainTask::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool BaselineMainTask::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

uint64_t BaselineMainTask::GetID() const
{
    return m_iD;
}

void BaselineMainTask::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineMainTask::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BaselineMainTask::GetStatus() const
{
    return m_status;
}

void BaselineMainTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineMainTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BaselineMainTask::GetAppid() const
{
    return m_appid;
}

void BaselineMainTask::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselineMainTask::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string BaselineMainTask::GetTaskType() const
{
    return m_taskType;
}

void BaselineMainTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool BaselineMainTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string BaselineMainTask::GetStartTime() const
{
    return m_startTime;
}

void BaselineMainTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BaselineMainTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BaselineMainTask::GetFinishTime() const
{
    return m_finishTime;
}

void BaselineMainTask::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BaselineMainTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BaselineMainTask::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void BaselineMainTask::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool BaselineMainTask::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

string BaselineMainTask::GetErrCode() const
{
    return m_errCode;
}

void BaselineMainTask::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool BaselineMainTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string BaselineMainTask::GetErrMessage() const
{
    return m_errMessage;
}

void BaselineMainTask::SetErrMessage(const string& _errMessage)
{
    m_errMessage = _errMessage;
    m_errMessageHasBeenSet = true;
}

bool BaselineMainTask::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

string BaselineMainTask::GetSolution() const
{
    return m_solution;
}

void BaselineMainTask::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool BaselineMainTask::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

uint64_t BaselineMainTask::GetScanSuccessCount() const
{
    return m_scanSuccessCount;
}

void BaselineMainTask::SetScanSuccessCount(const uint64_t& _scanSuccessCount)
{
    m_scanSuccessCount = _scanSuccessCount;
    m_scanSuccessCountHasBeenSet = true;
}

bool BaselineMainTask::ScanSuccessCountHasBeenSet() const
{
    return m_scanSuccessCountHasBeenSet;
}

uint64_t BaselineMainTask::GetScanFailedCount() const
{
    return m_scanFailedCount;
}

void BaselineMainTask::SetScanFailedCount(const uint64_t& _scanFailedCount)
{
    m_scanFailedCount = _scanFailedCount;
    m_scanFailedCountHasBeenSet = true;
}

bool BaselineMainTask::ScanFailedCountHasBeenSet() const
{
    return m_scanFailedCountHasBeenSet;
}

uint64_t BaselineMainTask::GetScanTotalCount() const
{
    return m_scanTotalCount;
}

void BaselineMainTask::SetScanTotalCount(const uint64_t& _scanTotalCount)
{
    m_scanTotalCount = _scanTotalCount;
    m_scanTotalCountHasBeenSet = true;
}

bool BaselineMainTask::ScanTotalCountHasBeenSet() const
{
    return m_scanTotalCountHasBeenSet;
}

