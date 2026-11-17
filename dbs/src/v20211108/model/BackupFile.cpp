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

#include <tencentcloud/dbs/v20211108/model/BackupFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupFile::BackupFile() :
    m_fileNameHasBeenSet(false),
    m_backupSetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_retentionTypeHasBeenSet(false),
    m_resourceDetailHasBeenSet(false),
    m_backupPoolHasBeenSet(false),
    m_allowedActionsHasBeenSet(false),
    m_allActionsHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

CoreInternalOutcome BackupFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("BackupSetId") && !value["BackupSetId"].IsNull())
    {
        if (!value["BackupSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.BackupSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSetId = string(value["BackupSetId"].GetString());
        m_backupSetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.SourceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInfo = string(value["SourceInfo"].GetString());
        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("RetentionType") && !value["RetentionType"].IsNull())
    {
        if (!value["RetentionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.RetentionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionType = string(value["RetentionType"].GetString());
        m_retentionTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceDetail") && !value["ResourceDetail"].IsNull())
    {
        if (!value["ResourceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.ResourceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceDetail.Deserialize(value["ResourceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceDetailHasBeenSet = true;
    }

    if (value.HasMember("BackupPool") && !value["BackupPool"].IsNull())
    {
        if (!value["BackupPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.BackupPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPool = string(value["BackupPool"].GetString());
        m_backupPoolHasBeenSet = true;
    }

    if (value.HasMember("AllowedActions") && !value["AllowedActions"].IsNull())
    {
        if (!value["AllowedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFile.AllowedActions` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedActions.push_back((*itr).GetString());
        }
        m_allowedActionsHasBeenSet = true;
    }

    if (value.HasMember("AllActions") && !value["AllActions"].IsNull())
    {
        if (!value["AllActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFile.AllActions` is not array type"));

        const rapidjson::Value &tmpValue = value["AllActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allActions.push_back((*itr).GetString());
        }
        m_allActionsHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.LastModified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = string(value["LastModified"].GetString());
        m_lastModifiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInfo.c_str(), allocator).Move(), allocator);
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupSize, allocator);
    }

    if (m_backupMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retentionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPool.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedActions.begin(); itr != m_allowedActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allActions.begin(); itr != m_allActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModified.c_str(), allocator).Move(), allocator);
    }

}


string BackupFile::GetFileName() const
{
    return m_fileName;
}

void BackupFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BackupFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string BackupFile::GetBackupSetId() const
{
    return m_backupSetId;
}

void BackupFile::SetBackupSetId(const string& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool BackupFile::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string BackupFile::GetStatus() const
{
    return m_status;
}

void BackupFile::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BackupFile::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BackupFile::GetSourceInfo() const
{
    return m_sourceInfo;
}

void BackupFile::SetSourceInfo(const string& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool BackupFile::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string BackupFile::GetStartTime() const
{
    return m_startTime;
}

void BackupFile::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BackupFile::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BackupFile::GetEndTime() const
{
    return m_endTime;
}

void BackupFile::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BackupFile::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BackupFile::GetExpireTime() const
{
    return m_expireTime;
}

void BackupFile::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BackupFile::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t BackupFile::GetBackupSize() const
{
    return m_backupSize;
}

void BackupFile::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool BackupFile::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

string BackupFile::GetBackupMethod() const
{
    return m_backupMethod;
}

void BackupFile::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool BackupFile::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string BackupFile::GetStorageType() const
{
    return m_storageType;
}

void BackupFile::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool BackupFile::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string BackupFile::GetRetentionType() const
{
    return m_retentionType;
}

void BackupFile::SetRetentionType(const string& _retentionType)
{
    m_retentionType = _retentionType;
    m_retentionTypeHasBeenSet = true;
}

bool BackupFile::RetentionTypeHasBeenSet() const
{
    return m_retentionTypeHasBeenSet;
}

ResourceDetail BackupFile::GetResourceDetail() const
{
    return m_resourceDetail;
}

void BackupFile::SetResourceDetail(const ResourceDetail& _resourceDetail)
{
    m_resourceDetail = _resourceDetail;
    m_resourceDetailHasBeenSet = true;
}

bool BackupFile::ResourceDetailHasBeenSet() const
{
    return m_resourceDetailHasBeenSet;
}

string BackupFile::GetBackupPool() const
{
    return m_backupPool;
}

void BackupFile::SetBackupPool(const string& _backupPool)
{
    m_backupPool = _backupPool;
    m_backupPoolHasBeenSet = true;
}

bool BackupFile::BackupPoolHasBeenSet() const
{
    return m_backupPoolHasBeenSet;
}

vector<string> BackupFile::GetAllowedActions() const
{
    return m_allowedActions;
}

void BackupFile::SetAllowedActions(const vector<string>& _allowedActions)
{
    m_allowedActions = _allowedActions;
    m_allowedActionsHasBeenSet = true;
}

bool BackupFile::AllowedActionsHasBeenSet() const
{
    return m_allowedActionsHasBeenSet;
}

vector<string> BackupFile::GetAllActions() const
{
    return m_allActions;
}

void BackupFile::SetAllActions(const vector<string>& _allActions)
{
    m_allActions = _allActions;
    m_allActionsHasBeenSet = true;
}

bool BackupFile::AllActionsHasBeenSet() const
{
    return m_allActionsHasBeenSet;
}

string BackupFile::GetLastModified() const
{
    return m_lastModified;
}

void BackupFile::SetLastModified(const string& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool BackupFile::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

