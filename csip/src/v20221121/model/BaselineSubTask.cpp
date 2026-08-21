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

#include <tencentcloud/csip/v20221121/model/BaselineSubTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineSubTask::BaselineSubTask() :
    m_iDHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_hostAssetHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMessageHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_clusterAssetHasBeenSet(false)
{
}

CoreInternalOutcome BaselineSubTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.TaskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = value["TaskID"].GetUint64();
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckAssetType") && !value["CheckAssetType"].IsNull())
    {
        if (!value["CheckAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.CheckAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssetType = string(value["CheckAssetType"].GetString());
        m_checkAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("HostAsset") && !value["HostAsset"].IsNull())
    {
        if (!value["HostAsset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.HostAsset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostAsset.Deserialize(value["HostAsset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostAssetHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMessage") && !value["ErrMessage"].IsNull())
    {
        if (!value["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(value["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("ClusterAsset") && !value["ClusterAsset"].IsNull())
    {
        if (!value["ClusterAsset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineSubTask.ClusterAsset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterAsset.Deserialize(value["ClusterAsset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineSubTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskID, allocator);
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

    if (m_hostAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostAsset.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_clusterAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterAsset.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t BaselineSubTask::GetID() const
{
    return m_iD;
}

void BaselineSubTask::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineSubTask::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t BaselineSubTask::GetTaskID() const
{
    return m_taskID;
}

void BaselineSubTask::SetTaskID(const uint64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool BaselineSubTask::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string BaselineSubTask::GetStatus() const
{
    return m_status;
}

void BaselineSubTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineSubTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BaselineSubTask::GetAppid() const
{
    return m_appid;
}

void BaselineSubTask::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselineSubTask::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string BaselineSubTask::GetStartTime() const
{
    return m_startTime;
}

void BaselineSubTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BaselineSubTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BaselineSubTask::GetFinishTime() const
{
    return m_finishTime;
}

void BaselineSubTask::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BaselineSubTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BaselineSubTask::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void BaselineSubTask::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool BaselineSubTask::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

BaselineHostAsset BaselineSubTask::GetHostAsset() const
{
    return m_hostAsset;
}

void BaselineSubTask::SetHostAsset(const BaselineHostAsset& _hostAsset)
{
    m_hostAsset = _hostAsset;
    m_hostAssetHasBeenSet = true;
}

bool BaselineSubTask::HostAssetHasBeenSet() const
{
    return m_hostAssetHasBeenSet;
}

string BaselineSubTask::GetErrCode() const
{
    return m_errCode;
}

void BaselineSubTask::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool BaselineSubTask::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string BaselineSubTask::GetErrMessage() const
{
    return m_errMessage;
}

void BaselineSubTask::SetErrMessage(const string& _errMessage)
{
    m_errMessage = _errMessage;
    m_errMessageHasBeenSet = true;
}

bool BaselineSubTask::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

string BaselineSubTask::GetSolution() const
{
    return m_solution;
}

void BaselineSubTask::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool BaselineSubTask::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

BaselineClusterAsset BaselineSubTask::GetClusterAsset() const
{
    return m_clusterAsset;
}

void BaselineSubTask::SetClusterAsset(const BaselineClusterAsset& _clusterAsset)
{
    m_clusterAsset = _clusterAsset;
    m_clusterAssetHasBeenSet = true;
}

bool BaselineSubTask::ClusterAssetHasBeenSet() const
{
    return m_clusterAssetHasBeenSet;
}

