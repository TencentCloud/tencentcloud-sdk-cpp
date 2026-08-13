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

#include <tencentcloud/csip/v20221121/model/EDRScanRecordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EDRScanRecordItem::EDRScanRecordItem() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_scheduleDescHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_targetAppIDsHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_assetSelectionTypeHasBeenSet(false),
    m_totalAssetCountHasBeenSet(false),
    m_createAppIDHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_creatorCloudTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome EDRScanRecordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleDesc") && !value["ScheduleDesc"].IsNull())
    {
        if (!value["ScheduleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.ScheduleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleDesc = string(value["ScheduleDesc"].GetString());
        m_scheduleDescHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetAppIDs") && !value["TargetAppIDs"].IsNull())
    {
        if (!value["TargetAppIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TargetAppIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetAppIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetAppIDs.push_back((*itr).GetUint64());
        }
        m_targetAppIDsHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetSelectionType") && !value["AssetSelectionType"].IsNull())
    {
        if (!value["AssetSelectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.AssetSelectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetSelectionType = string(value["AssetSelectionType"].GetString());
        m_assetSelectionTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalAssetCount") && !value["TotalAssetCount"].IsNull())
    {
        if (!value["TotalAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.TotalAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAssetCount = value["TotalAssetCount"].GetInt64();
        m_totalAssetCountHasBeenSet = true;
    }

    if (value.HasMember("CreateAppID") && !value["CreateAppID"].IsNull())
    {
        if (!value["CreateAppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.CreateAppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createAppID = value["CreateAppID"].GetUint64();
        m_createAppIDHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreatorCloudType") && !value["CreatorCloudType"].IsNull())
    {
        if (!value["CreatorCloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.CreatorCloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorCloudType = value["CreatorCloudType"].GetInt64();
        m_creatorCloudTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanRecordItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EDRScanRecordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAppIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetAppIDs.begin(); itr != m_targetAppIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_assetSelectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSelectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetSelectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAssetCount, allocator);
    }

    if (m_createAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createAppID, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorCloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorCloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorCloudType, allocator);
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

}


uint64_t EDRScanRecordItem::GetTaskId() const
{
    return m_taskId;
}

void EDRScanRecordItem::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EDRScanRecordItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string EDRScanRecordItem::GetTaskName() const
{
    return m_taskName;
}

void EDRScanRecordItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool EDRScanRecordItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string EDRScanRecordItem::GetTriggerType() const
{
    return m_triggerType;
}

void EDRScanRecordItem::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool EDRScanRecordItem::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string EDRScanRecordItem::GetScheduleDesc() const
{
    return m_scheduleDesc;
}

void EDRScanRecordItem::SetScheduleDesc(const string& _scheduleDesc)
{
    m_scheduleDesc = _scheduleDesc;
    m_scheduleDescHasBeenSet = true;
}

bool EDRScanRecordItem::ScheduleDescHasBeenSet() const
{
    return m_scheduleDescHasBeenSet;
}

string EDRScanRecordItem::GetTaskType() const
{
    return m_taskType;
}

void EDRScanRecordItem::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool EDRScanRecordItem::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<uint64_t> EDRScanRecordItem::GetTargetAppIDs() const
{
    return m_targetAppIDs;
}

void EDRScanRecordItem::SetTargetAppIDs(const vector<uint64_t>& _targetAppIDs)
{
    m_targetAppIDs = _targetAppIDs;
    m_targetAppIDsHasBeenSet = true;
}

bool EDRScanRecordItem::TargetAppIDsHasBeenSet() const
{
    return m_targetAppIDsHasBeenSet;
}

string EDRScanRecordItem::GetAccountName() const
{
    return m_accountName;
}

void EDRScanRecordItem::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool EDRScanRecordItem::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

int64_t EDRScanRecordItem::GetCloudType() const
{
    return m_cloudType;
}

void EDRScanRecordItem::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool EDRScanRecordItem::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string EDRScanRecordItem::GetAssetSelectionType() const
{
    return m_assetSelectionType;
}

void EDRScanRecordItem::SetAssetSelectionType(const string& _assetSelectionType)
{
    m_assetSelectionType = _assetSelectionType;
    m_assetSelectionTypeHasBeenSet = true;
}

bool EDRScanRecordItem::AssetSelectionTypeHasBeenSet() const
{
    return m_assetSelectionTypeHasBeenSet;
}

int64_t EDRScanRecordItem::GetTotalAssetCount() const
{
    return m_totalAssetCount;
}

void EDRScanRecordItem::SetTotalAssetCount(const int64_t& _totalAssetCount)
{
    m_totalAssetCount = _totalAssetCount;
    m_totalAssetCountHasBeenSet = true;
}

bool EDRScanRecordItem::TotalAssetCountHasBeenSet() const
{
    return m_totalAssetCountHasBeenSet;
}

uint64_t EDRScanRecordItem::GetCreateAppID() const
{
    return m_createAppID;
}

void EDRScanRecordItem::SetCreateAppID(const uint64_t& _createAppID)
{
    m_createAppID = _createAppID;
    m_createAppIDHasBeenSet = true;
}

bool EDRScanRecordItem::CreateAppIDHasBeenSet() const
{
    return m_createAppIDHasBeenSet;
}

string EDRScanRecordItem::GetCreator() const
{
    return m_creator;
}

void EDRScanRecordItem::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool EDRScanRecordItem::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string EDRScanRecordItem::GetCreatorName() const
{
    return m_creatorName;
}

void EDRScanRecordItem::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool EDRScanRecordItem::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

int64_t EDRScanRecordItem::GetCreatorCloudType() const
{
    return m_creatorCloudType;
}

void EDRScanRecordItem::SetCreatorCloudType(const int64_t& _creatorCloudType)
{
    m_creatorCloudType = _creatorCloudType;
    m_creatorCloudTypeHasBeenSet = true;
}

bool EDRScanRecordItem::CreatorCloudTypeHasBeenSet() const
{
    return m_creatorCloudTypeHasBeenSet;
}

string EDRScanRecordItem::GetStartTime() const
{
    return m_startTime;
}

void EDRScanRecordItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EDRScanRecordItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string EDRScanRecordItem::GetEndTime() const
{
    return m_endTime;
}

void EDRScanRecordItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EDRScanRecordItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string EDRScanRecordItem::GetStatus() const
{
    return m_status;
}

void EDRScanRecordItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EDRScanRecordItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

