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

#include <tencentcloud/csip/v20221121/model/VulFixTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulFixTaskItem::VulFixTaskItem() :
    m_idHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_vulIdsHasBeenSet(false),
    m_kBIdsHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_targetAppIdsCountHasBeenSet(false),
    m_fixStatusHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vulNamesHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome VulFixTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("VulIds") && !value["VulIds"].IsNull())
    {
        if (!value["VulIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.VulIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VulIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulIds.push_back((*itr).GetInt64());
        }
        m_vulIdsHasBeenSet = true;
    }

    if (value.HasMember("KBIds") && !value["KBIds"].IsNull())
    {
        if (!value["KBIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.KBIds` is not array type"));

        const rapidjson::Value &tmpValue = value["KBIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kBIds.push_back((*itr).GetInt64());
        }
        m_kBIdsHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("TargetAppIdsCount") && !value["TargetAppIdsCount"].IsNull())
    {
        if (!value["TargetAppIdsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.TargetAppIdsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetAppIdsCount = value["TargetAppIdsCount"].GetInt64();
        m_targetAppIdsCountHasBeenSet = true;
    }

    if (value.HasMember("FixStatus") && !value["FixStatus"].IsNull())
    {
        if (!value["FixStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.FixStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixStatus = value["FixStatus"].GetInt64();
        m_fixStatusHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VulNames") && !value["VulNames"].IsNull())
    {
        if (!value["VulNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.VulNames` is not array type"));

        const rapidjson::Value &tmpValue = value["VulNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulNames.push_back((*itr).GetString());
        }
        m_vulNamesHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.VulCategory` is not array type"));

        const rapidjson::Value &tmpValue = value["VulCategory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulCategory.push_back((*itr).GetString());
        }
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixTaskItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulIds.begin(); itr != m_vulIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_kBIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kBIds.begin(); itr != m_kBIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_targetAppIdsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppIdsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetAppIdsCount, allocator);
    }

    if (m_fixStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixStatus, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

}


int64_t VulFixTaskItem::GetId() const
{
    return m_id;
}

void VulFixTaskItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulFixTaskItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t VulFixTaskItem::GetTaskId() const
{
    return m_taskId;
}

void VulFixTaskItem::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VulFixTaskItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string VulFixTaskItem::GetJobId() const
{
    return m_jobId;
}

void VulFixTaskItem::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool VulFixTaskItem::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<int64_t> VulFixTaskItem::GetVulIds() const
{
    return m_vulIds;
}

void VulFixTaskItem::SetVulIds(const vector<int64_t>& _vulIds)
{
    m_vulIds = _vulIds;
    m_vulIdsHasBeenSet = true;
}

bool VulFixTaskItem::VulIdsHasBeenSet() const
{
    return m_vulIdsHasBeenSet;
}

vector<int64_t> VulFixTaskItem::GetKBIds() const
{
    return m_kBIds;
}

void VulFixTaskItem::SetKBIds(const vector<int64_t>& _kBIds)
{
    m_kBIds = _kBIds;
    m_kBIdsHasBeenSet = true;
}

bool VulFixTaskItem::KBIdsHasBeenSet() const
{
    return m_kBIdsHasBeenSet;
}

int64_t VulFixTaskItem::GetAssetCount() const
{
    return m_assetCount;
}

void VulFixTaskItem::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool VulFixTaskItem::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t VulFixTaskItem::GetSuccessCount() const
{
    return m_successCount;
}

void VulFixTaskItem::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool VulFixTaskItem::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t VulFixTaskItem::GetFailCount() const
{
    return m_failCount;
}

void VulFixTaskItem::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool VulFixTaskItem::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

int64_t VulFixTaskItem::GetProgress() const
{
    return m_progress;
}

void VulFixTaskItem::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool VulFixTaskItem::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t VulFixTaskItem::GetTargetAppIdsCount() const
{
    return m_targetAppIdsCount;
}

void VulFixTaskItem::SetTargetAppIdsCount(const int64_t& _targetAppIdsCount)
{
    m_targetAppIdsCount = _targetAppIdsCount;
    m_targetAppIdsCountHasBeenSet = true;
}

bool VulFixTaskItem::TargetAppIdsCountHasBeenSet() const
{
    return m_targetAppIdsCountHasBeenSet;
}

int64_t VulFixTaskItem::GetFixStatus() const
{
    return m_fixStatus;
}

void VulFixTaskItem::SetFixStatus(const int64_t& _fixStatus)
{
    m_fixStatus = _fixStatus;
    m_fixStatusHasBeenSet = true;
}

bool VulFixTaskItem::FixStatusHasBeenSet() const
{
    return m_fixStatusHasBeenSet;
}

int64_t VulFixTaskItem::GetTimeout() const
{
    return m_timeout;
}

void VulFixTaskItem::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool VulFixTaskItem::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string VulFixTaskItem::GetStartTime() const
{
    return m_startTime;
}

void VulFixTaskItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VulFixTaskItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string VulFixTaskItem::GetEndTime() const
{
    return m_endTime;
}

void VulFixTaskItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VulFixTaskItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VulFixTaskItem::GetCreateTime() const
{
    return m_createTime;
}

void VulFixTaskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VulFixTaskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> VulFixTaskItem::GetVulNames() const
{
    return m_vulNames;
}

void VulFixTaskItem::SetVulNames(const vector<string>& _vulNames)
{
    m_vulNames = _vulNames;
    m_vulNamesHasBeenSet = true;
}

bool VulFixTaskItem::VulNamesHasBeenSet() const
{
    return m_vulNamesHasBeenSet;
}

vector<string> VulFixTaskItem::GetVulCategory() const
{
    return m_vulCategory;
}

void VulFixTaskItem::SetVulCategory(const vector<string>& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulFixTaskItem::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

uint64_t VulFixTaskItem::GetAppId() const
{
    return m_appId;
}

void VulFixTaskItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VulFixTaskItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

