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

#include <tencentcloud/csip/v20221121/model/VulScanTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulScanTask::VulScanTask() :
    m_idHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_kbNameHasBeenSet(false),
    m_emergencyHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_assetListHasBeenSet(false),
    m_assetRangeHasBeenSet(false)
{
}

CoreInternalOutcome VulScanTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.VulCategory` is not array type"));

        const rapidjson::Value &tmpValue = value["VulCategory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulCategory.push_back((*itr).GetString());
        }
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.VulName` is not array type"));

        const rapidjson::Value &tmpValue = value["VulName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulName.push_back((*itr).GetString());
        }
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("KbName") && !value["KbName"].IsNull())
    {
        if (!value["KbName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.KbName` is not array type"));

        const rapidjson::Value &tmpValue = value["KbName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kbName.push_back((*itr).GetString());
        }
        m_kbNameHasBeenSet = true;
    }

    if (value.HasMember("Emergency") && !value["Emergency"].IsNull())
    {
        if (!value["Emergency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Emergency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emergency = value["Emergency"].GetUint64();
        m_emergencyHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Account` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_account = value["Account"].GetUint64();
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Level` is not array type"));

        const rapidjson::Value &tmpValue = value["Level"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_level.push_back((*itr).GetString());
        }
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.Method` is not array type"));

        const rapidjson::Value &tmpValue = value["Method"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_method.push_back((*itr).GetString());
        }
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("AssetList") && !value["AssetList"].IsNull())
    {
        if (!value["AssetList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulScanTask.AssetList` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetList.push_back((*itr).GetString());
        }
        m_assetListHasBeenSet = true;
    }

    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulScanTask.AssetRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = value["AssetRange"].GetUint64();
        m_assetRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulScanTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCategory.begin(); itr != m_vulCategory.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulName.begin(); itr != m_vulName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kbName.begin(); itr != m_kbName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_emergencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Emergency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emergency, allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_account, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_method.begin(); itr != m_method.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetList.begin(); itr != m_assetList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRange, allocator);
    }

}


uint64_t VulScanTask::GetId() const
{
    return m_id;
}

void VulScanTask::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulScanTask::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VulScanTask::GetJobId() const
{
    return m_jobId;
}

void VulScanTask::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool VulScanTask::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

uint64_t VulScanTask::GetAppId() const
{
    return m_appId;
}

void VulScanTask::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VulScanTask::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t VulScanTask::GetTaskType() const
{
    return m_taskType;
}

void VulScanTask::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool VulScanTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> VulScanTask::GetVulCategory() const
{
    return m_vulCategory;
}

void VulScanTask::SetVulCategory(const vector<string>& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulScanTask::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

vector<string> VulScanTask::GetVulName() const
{
    return m_vulName;
}

void VulScanTask::SetVulName(const vector<string>& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulScanTask::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

vector<string> VulScanTask::GetKbName() const
{
    return m_kbName;
}

void VulScanTask::SetKbName(const vector<string>& _kbName)
{
    m_kbName = _kbName;
    m_kbNameHasBeenSet = true;
}

bool VulScanTask::KbNameHasBeenSet() const
{
    return m_kbNameHasBeenSet;
}

uint64_t VulScanTask::GetEmergency() const
{
    return m_emergency;
}

void VulScanTask::SetEmergency(const uint64_t& _emergency)
{
    m_emergency = _emergency;
    m_emergencyHasBeenSet = true;
}

bool VulScanTask::EmergencyHasBeenSet() const
{
    return m_emergencyHasBeenSet;
}

uint64_t VulScanTask::GetAccount() const
{
    return m_account;
}

void VulScanTask::SetAccount(const uint64_t& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool VulScanTask::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string VulScanTask::GetStartTime() const
{
    return m_startTime;
}

void VulScanTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VulScanTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string VulScanTask::GetEndTime() const
{
    return m_endTime;
}

void VulScanTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VulScanTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VulScanTask::GetStatus() const
{
    return m_status;
}

void VulScanTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulScanTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> VulScanTask::GetLevel() const
{
    return m_level;
}

void VulScanTask::SetLevel(const vector<string>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulScanTask::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> VulScanTask::GetMethod() const
{
    return m_method;
}

void VulScanTask::SetMethod(const vector<string>& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool VulScanTask::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<string> VulScanTask::GetAssetList() const
{
    return m_assetList;
}

void VulScanTask::SetAssetList(const vector<string>& _assetList)
{
    m_assetList = _assetList;
    m_assetListHasBeenSet = true;
}

bool VulScanTask::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

uint64_t VulScanTask::GetAssetRange() const
{
    return m_assetRange;
}

void VulScanTask::SetAssetRange(const uint64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool VulScanTask::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

