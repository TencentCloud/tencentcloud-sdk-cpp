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

#include <tencentcloud/bdrc/v20260330/model/BackupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

BackupInfo::BackupInfo() :
    m_backupIdHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_aspInstanceIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_backupPathsHasBeenSet(false),
    m_includeFileTypesHasBeenSet(false),
    m_excludePatternsHasBeenSet(false),
    m_excludeSystemDirectoriesHasBeenSet(false),
    m_vaultIdHasBeenSet(false),
    m_scannedFileCountHasBeenSet(false),
    m_scannedSizeHasBeenSet(false),
    m_scannedSizeFormattedHasBeenSet(false),
    m_backupFileCountHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_backupSizeFormattedHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_nonExistSourcePathsHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome BackupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupId") && !value["BackupId"].IsNull())
    {
        if (!value["BackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupId = string(value["BackupId"].GetString());
        m_backupIdHasBeenSet = true;
    }

    if (value.HasMember("BackupName") && !value["BackupName"].IsNull())
    {
        if (!value["BackupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupName = string(value["BackupName"].GetString());
        m_backupNameHasBeenSet = true;
    }

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("AspInstanceId") && !value["AspInstanceId"].IsNull())
    {
        if (!value["AspInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.AspInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspInstanceId = string(value["AspInstanceId"].GetString());
        m_aspInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BackupPaths") && !value["BackupPaths"].IsNull())
    {
        if (!value["BackupPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupPaths.push_back((*itr).GetString());
        }
        m_backupPathsHasBeenSet = true;
    }

    if (value.HasMember("IncludeFileTypes") && !value["IncludeFileTypes"].IsNull())
    {
        if (!value["IncludeFileTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfo.IncludeFileTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["IncludeFileTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_includeFileTypes.push_back((*itr).GetString());
        }
        m_includeFileTypesHasBeenSet = true;
    }

    if (value.HasMember("ExcludePatterns") && !value["ExcludePatterns"].IsNull())
    {
        if (!value["ExcludePatterns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ExcludePatterns` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludePatterns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludePatterns.push_back((*itr).GetString());
        }
        m_excludePatternsHasBeenSet = true;
    }

    if (value.HasMember("ExcludeSystemDirectories") && !value["ExcludeSystemDirectories"].IsNull())
    {
        if (!value["ExcludeSystemDirectories"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ExcludeSystemDirectories` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeSystemDirectories = value["ExcludeSystemDirectories"].GetBool();
        m_excludeSystemDirectoriesHasBeenSet = true;
    }

    if (value.HasMember("VaultId") && !value["VaultId"].IsNull())
    {
        if (!value["VaultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.VaultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaultId = string(value["VaultId"].GetString());
        m_vaultIdHasBeenSet = true;
    }

    if (value.HasMember("ScannedFileCount") && !value["ScannedFileCount"].IsNull())
    {
        if (!value["ScannedFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ScannedFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scannedFileCount = value["ScannedFileCount"].GetInt64();
        m_scannedFileCountHasBeenSet = true;
    }

    if (value.HasMember("ScannedSize") && !value["ScannedSize"].IsNull())
    {
        if (!value["ScannedSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ScannedSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scannedSize = value["ScannedSize"].GetInt64();
        m_scannedSizeHasBeenSet = true;
    }

    if (value.HasMember("ScannedSizeFormatted") && !value["ScannedSizeFormatted"].IsNull())
    {
        if (!value["ScannedSizeFormatted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ScannedSizeFormatted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scannedSizeFormatted = string(value["ScannedSizeFormatted"].GetString());
        m_scannedSizeFormattedHasBeenSet = true;
    }

    if (value.HasMember("BackupFileCount") && !value["BackupFileCount"].IsNull())
    {
        if (!value["BackupFileCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupFileCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupFileCount = value["BackupFileCount"].GetInt64();
        m_backupFileCountHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupSizeFormatted") && !value["BackupSizeFormatted"].IsNull())
    {
        if (!value["BackupSizeFormatted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.BackupSizeFormatted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSizeFormatted = string(value["BackupSizeFormatted"].GetString());
        m_backupSizeFormattedHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("NonExistSourcePaths") && !value["NonExistSourcePaths"].IsNull())
    {
        if (!value["NonExistSourcePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupInfo.NonExistSourcePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["NonExistSourcePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nonExistSourcePaths.push_back((*itr).GetString());
        }
        m_nonExistSourcePathsHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupName.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_aspInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_backupPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupPaths.begin(); itr != m_backupPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_includeFileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeFileTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeFileTypes.begin(); itr != m_includeFileTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludePatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePatterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludePatterns.begin(); itr != m_excludePatterns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeSystemDirectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeSystemDirectories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeSystemDirectories, allocator);
    }

    if (m_vaultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaultId.c_str(), allocator).Move(), allocator);
    }

    if (m_scannedFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedFileCount, allocator);
    }

    if (m_scannedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scannedSize, allocator);
    }

    if (m_scannedSizeFormattedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScannedSizeFormatted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scannedSizeFormatted.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupFileCount, allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_backupSizeFormattedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSizeFormatted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSizeFormatted.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_nonExistSourcePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonExistSourcePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nonExistSourcePaths.begin(); itr != m_nonExistSourcePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

}


string BackupInfo::GetBackupId() const
{
    return m_backupId;
}

void BackupInfo::SetBackupId(const string& _backupId)
{
    m_backupId = _backupId;
    m_backupIdHasBeenSet = true;
}

bool BackupInfo::BackupIdHasBeenSet() const
{
    return m_backupIdHasBeenSet;
}

string BackupInfo::GetBackupName() const
{
    return m_backupName;
}

void BackupInfo::SetBackupName(const string& _backupName)
{
    m_backupName = _backupName;
    m_backupNameHasBeenSet = true;
}

bool BackupInfo::BackupNameHasBeenSet() const
{
    return m_backupNameHasBeenSet;
}

string BackupInfo::GetPlanId() const
{
    return m_planId;
}

void BackupInfo::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool BackupInfo::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string BackupInfo::GetAspInstanceId() const
{
    return m_aspInstanceId;
}

void BackupInfo::SetAspInstanceId(const string& _aspInstanceId)
{
    m_aspInstanceId = _aspInstanceId;
    m_aspInstanceIdHasBeenSet = true;
}

bool BackupInfo::AspInstanceIdHasBeenSet() const
{
    return m_aspInstanceIdHasBeenSet;
}

string BackupInfo::GetResourceId() const
{
    return m_resourceId;
}

void BackupInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BackupInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t BackupInfo::GetStatus() const
{
    return m_status;
}

void BackupInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> BackupInfo::GetBackupPaths() const
{
    return m_backupPaths;
}

void BackupInfo::SetBackupPaths(const vector<string>& _backupPaths)
{
    m_backupPaths = _backupPaths;
    m_backupPathsHasBeenSet = true;
}

bool BackupInfo::BackupPathsHasBeenSet() const
{
    return m_backupPathsHasBeenSet;
}

vector<string> BackupInfo::GetIncludeFileTypes() const
{
    return m_includeFileTypes;
}

void BackupInfo::SetIncludeFileTypes(const vector<string>& _includeFileTypes)
{
    m_includeFileTypes = _includeFileTypes;
    m_includeFileTypesHasBeenSet = true;
}

bool BackupInfo::IncludeFileTypesHasBeenSet() const
{
    return m_includeFileTypesHasBeenSet;
}

vector<string> BackupInfo::GetExcludePatterns() const
{
    return m_excludePatterns;
}

void BackupInfo::SetExcludePatterns(const vector<string>& _excludePatterns)
{
    m_excludePatterns = _excludePatterns;
    m_excludePatternsHasBeenSet = true;
}

bool BackupInfo::ExcludePatternsHasBeenSet() const
{
    return m_excludePatternsHasBeenSet;
}

bool BackupInfo::GetExcludeSystemDirectories() const
{
    return m_excludeSystemDirectories;
}

void BackupInfo::SetExcludeSystemDirectories(const bool& _excludeSystemDirectories)
{
    m_excludeSystemDirectories = _excludeSystemDirectories;
    m_excludeSystemDirectoriesHasBeenSet = true;
}

bool BackupInfo::ExcludeSystemDirectoriesHasBeenSet() const
{
    return m_excludeSystemDirectoriesHasBeenSet;
}

string BackupInfo::GetVaultId() const
{
    return m_vaultId;
}

void BackupInfo::SetVaultId(const string& _vaultId)
{
    m_vaultId = _vaultId;
    m_vaultIdHasBeenSet = true;
}

bool BackupInfo::VaultIdHasBeenSet() const
{
    return m_vaultIdHasBeenSet;
}

int64_t BackupInfo::GetScannedFileCount() const
{
    return m_scannedFileCount;
}

void BackupInfo::SetScannedFileCount(const int64_t& _scannedFileCount)
{
    m_scannedFileCount = _scannedFileCount;
    m_scannedFileCountHasBeenSet = true;
}

bool BackupInfo::ScannedFileCountHasBeenSet() const
{
    return m_scannedFileCountHasBeenSet;
}

int64_t BackupInfo::GetScannedSize() const
{
    return m_scannedSize;
}

void BackupInfo::SetScannedSize(const int64_t& _scannedSize)
{
    m_scannedSize = _scannedSize;
    m_scannedSizeHasBeenSet = true;
}

bool BackupInfo::ScannedSizeHasBeenSet() const
{
    return m_scannedSizeHasBeenSet;
}

string BackupInfo::GetScannedSizeFormatted() const
{
    return m_scannedSizeFormatted;
}

void BackupInfo::SetScannedSizeFormatted(const string& _scannedSizeFormatted)
{
    m_scannedSizeFormatted = _scannedSizeFormatted;
    m_scannedSizeFormattedHasBeenSet = true;
}

bool BackupInfo::ScannedSizeFormattedHasBeenSet() const
{
    return m_scannedSizeFormattedHasBeenSet;
}

int64_t BackupInfo::GetBackupFileCount() const
{
    return m_backupFileCount;
}

void BackupInfo::SetBackupFileCount(const int64_t& _backupFileCount)
{
    m_backupFileCount = _backupFileCount;
    m_backupFileCountHasBeenSet = true;
}

bool BackupInfo::BackupFileCountHasBeenSet() const
{
    return m_backupFileCountHasBeenSet;
}

int64_t BackupInfo::GetBackupSize() const
{
    return m_backupSize;
}

void BackupInfo::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool BackupInfo::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

string BackupInfo::GetBackupSizeFormatted() const
{
    return m_backupSizeFormatted;
}

void BackupInfo::SetBackupSizeFormatted(const string& _backupSizeFormatted)
{
    m_backupSizeFormatted = _backupSizeFormatted;
    m_backupSizeFormattedHasBeenSet = true;
}

bool BackupInfo::BackupSizeFormattedHasBeenSet() const
{
    return m_backupSizeFormattedHasBeenSet;
}

double BackupInfo::GetProgress() const
{
    return m_progress;
}

void BackupInfo::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool BackupInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string BackupInfo::GetJobId() const
{
    return m_jobId;
}

void BackupInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool BackupInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string BackupInfo::GetStartTime() const
{
    return m_startTime;
}

void BackupInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupInfo::GetEndTime() const
{
    return m_endTime;
}

void BackupInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BackupInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BackupInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void BackupInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BackupInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

bool BackupInfo::GetIsPermanent() const
{
    return m_isPermanent;
}

void BackupInfo::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool BackupInfo::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

string BackupInfo::GetDeadline() const
{
    return m_deadline;
}

void BackupInfo::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool BackupInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

vector<string> BackupInfo::GetNonExistSourcePaths() const
{
    return m_nonExistSourcePaths;
}

void BackupInfo::SetNonExistSourcePaths(const vector<string>& _nonExistSourcePaths)
{
    m_nonExistSourcePaths = _nonExistSourcePaths;
    m_nonExistSourcePathsHasBeenSet = true;
}

bool BackupInfo::NonExistSourcePathsHasBeenSet() const
{
    return m_nonExistSourcePathsHasBeenSet;
}

string BackupInfo::GetFailReason() const
{
    return m_failReason;
}

void BackupInfo::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool BackupInfo::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

int64_t BackupInfo::GetAppId() const
{
    return m_appId;
}

void BackupInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BackupInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BackupInfo::GetResourceType() const
{
    return m_resourceType;
}

void BackupInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool BackupInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

