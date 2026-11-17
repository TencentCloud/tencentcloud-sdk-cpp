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

#include <tencentcloud/dbs/v20211108/model/FullBackupSetDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

FullBackupSetDetail::FullBackupSetDetail() :
    m_backupSetIdHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_backupSizeHasBeenSet(false),
    m_backupMethodHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_backupPoolHasBeenSet(false),
    m_retentionTypeHasBeenSet(false),
    m_resourceDetailHasBeenSet(false),
    m_sourceEndpointHasBeenSet(false),
    m_backupObjectHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_backupSetOptionHasBeenSet(false)
{
}

CoreInternalOutcome FullBackupSetDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupSetId") && !value["BackupSetId"].IsNull())
    {
        if (!value["BackupSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupSetId = string(value["BackupSetId"].GetString());
        m_backupSetIdHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.SourceInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInfo = string(value["SourceInfo"].GetString());
        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupSize") && !value["BackupSize"].IsNull())
    {
        if (!value["BackupSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupSize = value["BackupSize"].GetInt64();
        m_backupSizeHasBeenSet = true;
    }

    if (value.HasMember("BackupMethod") && !value["BackupMethod"].IsNull())
    {
        if (!value["BackupMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMethod = string(value["BackupMethod"].GetString());
        m_backupMethodHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupPool") && !value["BackupPool"].IsNull())
    {
        if (!value["BackupPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupPool = string(value["BackupPool"].GetString());
        m_backupPoolHasBeenSet = true;
    }

    if (value.HasMember("RetentionType") && !value["RetentionType"].IsNull())
    {
        if (!value["RetentionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.RetentionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionType = string(value["RetentionType"].GetString());
        m_retentionTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceDetail") && !value["ResourceDetail"].IsNull())
    {
        if (!value["ResourceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.ResourceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceDetail.Deserialize(value["ResourceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceDetailHasBeenSet = true;
    }

    if (value.HasMember("SourceEndpoint") && !value["SourceEndpoint"].IsNull())
    {
        if (!value["SourceEndpoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.SourceEndpoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceEndpoint.Deserialize(value["SourceEndpoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceEndpointHasBeenSet = true;
    }

    if (value.HasMember("BackupObject") && !value["BackupObject"].IsNull())
    {
        if (!value["BackupObject"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupObject` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupObject.Deserialize(value["BackupObject"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupObjectHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.Progress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_progress.Deserialize(value["Progress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_progressHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.ErrorMessage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorMessage.Deserialize(value["ErrorMessage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("BackupSetOption") && !value["BackupSetOption"].IsNull())
    {
        if (!value["BackupSetOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FullBackupSetDetail.BackupSetOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupSetOption.Deserialize(value["BackupSetOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupSetOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FullBackupSetDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_backupPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupPool.c_str(), allocator).Move(), allocator);
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

    if (m_sourceEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceEndpoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupObject.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_progress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorMessage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupSetOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSetOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupSetOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FullBackupSetDetail::GetBackupSetId() const
{
    return m_backupSetId;
}

void FullBackupSetDetail::SetBackupSetId(const string& _backupSetId)
{
    m_backupSetId = _backupSetId;
    m_backupSetIdHasBeenSet = true;
}

bool FullBackupSetDetail::BackupSetIdHasBeenSet() const
{
    return m_backupSetIdHasBeenSet;
}

string FullBackupSetDetail::GetSourceInfo() const
{
    return m_sourceInfo;
}

void FullBackupSetDetail::SetSourceInfo(const string& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool FullBackupSetDetail::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string FullBackupSetDetail::GetStatus() const
{
    return m_status;
}

void FullBackupSetDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FullBackupSetDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FullBackupSetDetail::GetStartTime() const
{
    return m_startTime;
}

void FullBackupSetDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool FullBackupSetDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string FullBackupSetDetail::GetEndTime() const
{
    return m_endTime;
}

void FullBackupSetDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool FullBackupSetDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string FullBackupSetDetail::GetExpireTime() const
{
    return m_expireTime;
}

void FullBackupSetDetail::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool FullBackupSetDetail::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t FullBackupSetDetail::GetBackupSize() const
{
    return m_backupSize;
}

void FullBackupSetDetail::SetBackupSize(const int64_t& _backupSize)
{
    m_backupSize = _backupSize;
    m_backupSizeHasBeenSet = true;
}

bool FullBackupSetDetail::BackupSizeHasBeenSet() const
{
    return m_backupSizeHasBeenSet;
}

string FullBackupSetDetail::GetBackupMethod() const
{
    return m_backupMethod;
}

void FullBackupSetDetail::SetBackupMethod(const string& _backupMethod)
{
    m_backupMethod = _backupMethod;
    m_backupMethodHasBeenSet = true;
}

bool FullBackupSetDetail::BackupMethodHasBeenSet() const
{
    return m_backupMethodHasBeenSet;
}

string FullBackupSetDetail::GetStorageType() const
{
    return m_storageType;
}

void FullBackupSetDetail::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool FullBackupSetDetail::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string FullBackupSetDetail::GetBackupPool() const
{
    return m_backupPool;
}

void FullBackupSetDetail::SetBackupPool(const string& _backupPool)
{
    m_backupPool = _backupPool;
    m_backupPoolHasBeenSet = true;
}

bool FullBackupSetDetail::BackupPoolHasBeenSet() const
{
    return m_backupPoolHasBeenSet;
}

string FullBackupSetDetail::GetRetentionType() const
{
    return m_retentionType;
}

void FullBackupSetDetail::SetRetentionType(const string& _retentionType)
{
    m_retentionType = _retentionType;
    m_retentionTypeHasBeenSet = true;
}

bool FullBackupSetDetail::RetentionTypeHasBeenSet() const
{
    return m_retentionTypeHasBeenSet;
}

ResourceDetail FullBackupSetDetail::GetResourceDetail() const
{
    return m_resourceDetail;
}

void FullBackupSetDetail::SetResourceDetail(const ResourceDetail& _resourceDetail)
{
    m_resourceDetail = _resourceDetail;
    m_resourceDetailHasBeenSet = true;
}

bool FullBackupSetDetail::ResourceDetailHasBeenSet() const
{
    return m_resourceDetailHasBeenSet;
}

Endpoint FullBackupSetDetail::GetSourceEndpoint() const
{
    return m_sourceEndpoint;
}

void FullBackupSetDetail::SetSourceEndpoint(const Endpoint& _sourceEndpoint)
{
    m_sourceEndpoint = _sourceEndpoint;
    m_sourceEndpointHasBeenSet = true;
}

bool FullBackupSetDetail::SourceEndpointHasBeenSet() const
{
    return m_sourceEndpointHasBeenSet;
}

BackupObject FullBackupSetDetail::GetBackupObject() const
{
    return m_backupObject;
}

void FullBackupSetDetail::SetBackupObject(const BackupObject& _backupObject)
{
    m_backupObject = _backupObject;
    m_backupObjectHasBeenSet = true;
}

bool FullBackupSetDetail::BackupObjectHasBeenSet() const
{
    return m_backupObjectHasBeenSet;
}

FullBackupProgress FullBackupSetDetail::GetProgress() const
{
    return m_progress;
}

void FullBackupSetDetail::SetProgress(const FullBackupProgress& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool FullBackupSetDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

FullBackupErrorMessage FullBackupSetDetail::GetErrorMessage() const
{
    return m_errorMessage;
}

void FullBackupSetDetail::SetErrorMessage(const FullBackupErrorMessage& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool FullBackupSetDetail::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

BackupSetOption FullBackupSetDetail::GetBackupSetOption() const
{
    return m_backupSetOption;
}

void FullBackupSetDetail::SetBackupSetOption(const BackupSetOption& _backupSetOption)
{
    m_backupSetOption = _backupSetOption;
    m_backupSetOptionHasBeenSet = true;
}

bool FullBackupSetDetail::BackupSetOptionHasBeenSet() const
{
    return m_backupSetOptionHasBeenSet;
}

