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

#include <tencentcloud/csip/v20221121/model/VulFixTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixTaskInfo::VulFixTaskInfo() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_fixingCountHasBeenSet(false),
    m_queueCountHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_successVulCountHasBeenSet(false),
    m_failVulCountHasBeenSet(false),
    m_vulNamesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_vulFixStatusListHasBeenSet(false)
{
}

CoreInternalOutcome VulFixTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.FixStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetInt64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("FixingCount") && !value["FixingCount"].IsNull())
    {
        if (!value["FixingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.FixingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixingCount = value["FixingCount"].GetInt64();
        m_fixingCountHasBeenSet = true;
    }

    if (value.HasMember("QueueCount") && !value["QueueCount"].IsNull())
    {
        if (!value["QueueCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.QueueCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueCount = value["QueueCount"].GetInt64();
        m_queueCountHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("SuccessVulCount") && !value["SuccessVulCount"].IsNull())
    {
        if (!value["SuccessVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.SuccessVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successVulCount = value["SuccessVulCount"].GetInt64();
        m_successVulCountHasBeenSet = true;
    }

    if (value.HasMember("FailVulCount") && !value["FailVulCount"].IsNull())
    {
        if (!value["FailVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.FailVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failVulCount = value["FailVulCount"].GetInt64();
        m_failVulCountHasBeenSet = true;
    }

    if (value.HasMember("VulNames") && !value["VulNames"].IsNull())
    {
        if (!value["VulNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.VulNames` is not array type"));

        const rapidjson::Value &tmpValue = value["VulNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulNames.push_back((*itr).GetString());
        }
        m_vulNamesHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("VulFixStatusList") && !value["VulFixStatusList"].IsNull())
    {
        if (!value["VulFixStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskInfo.VulFixStatusList` is not array type"));

        const rapidjson::Value &tmpValue = value["VulFixStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulFixStatusItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulFixStatusList.push_back(item);
        }
        m_vulFixStatusListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_fixingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixingCount, allocator);
    }

    if (m_queueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueCount, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_successVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successVulCount, allocator);
    }

    if (m_failVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failVulCount, allocator);
    }

    if (m_vulNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulNames.begin(); itr != m_vulNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_vulFixStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulFixStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulFixStatusList.begin(); itr != m_vulFixStatusList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t VulFixTaskInfo::GetId() const
{
    return m_id;
}

void VulFixTaskInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulFixTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t VulFixTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void VulFixTaskInfo::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VulFixTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t VulFixTaskInfo::GetFixStatus() const
{
    return m_fixStatus;
}

void VulFixTaskInfo::SetFixStatus(const int64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool VulFixTaskInfo::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

int64_t VulFixTaskInfo::GetAssetCount() const
{
    return m_assetCount;
}

void VulFixTaskInfo::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool VulFixTaskInfo::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetSuccessCount() const
{
    return m_successCount;
}

void VulFixTaskInfo::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool VulFixTaskInfo::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetFailCount() const
{
    return m_failCount;
}

void VulFixTaskInfo::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool VulFixTaskInfo::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetFixingCount() const
{
    return m_fixingCount;
}

void VulFixTaskInfo::SetFixingCount(const int64_t& _fixingCount)
{
    m_fixingCount = _fixingCount;
    m_fixingCountHasBeenSet = true;
}

bool VulFixTaskInfo::FixingCountHasBeenSet() const
{
    return m_fixingCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetQueueCount() const
{
    return m_queueCount;
}

void VulFixTaskInfo::SetQueueCount(const int64_t& _queueCount)
{
    m_queueCount = _queueCount;
    m_queueCountHasBeenSet = true;
}

bool VulFixTaskInfo::QueueCountHasBeenSet() const
{
    return m_queueCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetProgress() const
{
    return m_progress;
}

void VulFixTaskInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool VulFixTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t VulFixTaskInfo::GetSuccessVulCount() const
{
    return m_successVulCount;
}

void VulFixTaskInfo::SetSuccessVulCount(const int64_t& _successVulCount)
{
    m_successVulCount = _successVulCount;
    m_successVulCountHasBeenSet = true;
}

bool VulFixTaskInfo::SuccessVulCountHasBeenSet() const
{
    return m_successVulCountHasBeenSet;
}

int64_t VulFixTaskInfo::GetFailVulCount() const
{
    return m_failVulCount;
}

void VulFixTaskInfo::SetFailVulCount(const int64_t& _failVulCount)
{
    m_failVulCount = _failVulCount;
    m_failVulCountHasBeenSet = true;
}

bool VulFixTaskInfo::FailVulCountHasBeenSet() const
{
    return m_failVulCountHasBeenSet;
}

vector<string> VulFixTaskInfo::GetVulNames() const
{
    return m_vulNames;
}

void VulFixTaskInfo::SetVulNames(const vector<string>& _vulNames)
{
    m_vulNames = _vulNames;
    m_vulNamesHasBeenSet = true;
}

bool VulFixTaskInfo::VulNamesHasBeenSet() const
{
    return m_vulNamesHasBeenSet;
}

string VulFixTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void VulFixTaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VulFixTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string VulFixTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void VulFixTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VulFixTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<VulFixStatusItem> VulFixTaskInfo::GetVulFixStatusList() const
{
    return m_vulFixStatusList;
}

void VulFixTaskInfo::SetVulFixStatusList(const vector<VulFixStatusItem>& _vulFixStatusList)
{
    m_vulFixStatusList = _vulFixStatusList;
    m_vulFixStatusListHasBeenSet = true;
}

bool VulFixTaskInfo::VulFixStatusListHasBeenSet() const
{
    return m_vulFixStatusListHasBeenSet;
}

