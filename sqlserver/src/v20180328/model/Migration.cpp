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

#include <tencentcloud/sqlserver/v20180328/model/Migration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

Migration::Migration() :
    m_migrationIdHasBeenSet(false),
    m_migrationNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_recoveryTypeHasBeenSet(false),
    m_uploadTypeHasBeenSet(false),
    m_backupFilesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_isRecoveryHasBeenSet(false),
    m_dBRenameHasBeenSet(false)
{
}

CoreInternalOutcome Migration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MigrationId") && !value["MigrationId"].IsNull())
    {
        if (!value["MigrationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.MigrationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrationId = string(value["MigrationId"].GetString());
        m_migrationIdHasBeenSet = true;
    }

    if (value.HasMember("MigrationName") && !value["MigrationName"].IsNull())
    {
        if (!value["MigrationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.MigrationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrationName = string(value["MigrationName"].GetString());
        m_migrationNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("RecoveryType") && !value["RecoveryType"].IsNull())
    {
        if (!value["RecoveryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.RecoveryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoveryType = string(value["RecoveryType"].GetString());
        m_recoveryTypeHasBeenSet = true;
    }

    if (value.HasMember("UploadType") && !value["UploadType"].IsNull())
    {
        if (!value["UploadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.UploadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadType = string(value["UploadType"].GetString());
        m_uploadTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupFiles") && !value["BackupFiles"].IsNull())
    {
        if (!value["BackupFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Migration.BackupFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupFiles.push_back((*itr).GetString());
        }
        m_backupFilesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("IsRecovery") && !value["IsRecovery"].IsNull())
    {
        if (!value["IsRecovery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Migration.IsRecovery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isRecovery = string(value["IsRecovery"].GetString());
        m_isRecoveryHasBeenSet = true;
    }

    if (value.HasMember("DBRename") && !value["DBRename"].IsNull())
    {
        if (!value["DBRename"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Migration.DBRename` is not array type"));

        const rapidjson::Value &tmpValue = value["DBRename"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBRenameRes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBRename.push_back(item);
        }
        m_dBRenameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Migration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_migrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrationName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupFiles.begin(); itr != m_backupFiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isRecoveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecovery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isRecovery.c_str(), allocator).Move(), allocator);
    }

    if (m_dBRenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBRename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBRename.begin(); itr != m_dBRename.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Migration::GetMigrationId() const
{
    return m_migrationId;
}

void Migration::SetMigrationId(const string& _migrationId)
{
    m_migrationId = _migrationId;
    m_migrationIdHasBeenSet = true;
}

bool Migration::MigrationIdHasBeenSet() const
{
    return m_migrationIdHasBeenSet;
}

string Migration::GetMigrationName() const
{
    return m_migrationName;
}

void Migration::SetMigrationName(const string& _migrationName)
{
    m_migrationName = _migrationName;
    m_migrationNameHasBeenSet = true;
}

bool Migration::MigrationNameHasBeenSet() const
{
    return m_migrationNameHasBeenSet;
}

uint64_t Migration::GetAppId() const
{
    return m_appId;
}

void Migration::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Migration::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Migration::GetRegion() const
{
    return m_region;
}

void Migration::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Migration::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Migration::GetInstanceId() const
{
    return m_instanceId;
}

void Migration::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Migration::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Migration::GetRecoveryType() const
{
    return m_recoveryType;
}

void Migration::SetRecoveryType(const string& _recoveryType)
{
    m_recoveryType = _recoveryType;
    m_recoveryTypeHasBeenSet = true;
}

bool Migration::RecoveryTypeHasBeenSet() const
{
    return m_recoveryTypeHasBeenSet;
}

string Migration::GetUploadType() const
{
    return m_uploadType;
}

void Migration::SetUploadType(const string& _uploadType)
{
    m_uploadType = _uploadType;
    m_uploadTypeHasBeenSet = true;
}

bool Migration::UploadTypeHasBeenSet() const
{
    return m_uploadTypeHasBeenSet;
}

vector<string> Migration::GetBackupFiles() const
{
    return m_backupFiles;
}

void Migration::SetBackupFiles(const vector<string>& _backupFiles)
{
    m_backupFiles = _backupFiles;
    m_backupFilesHasBeenSet = true;
}

bool Migration::BackupFilesHasBeenSet() const
{
    return m_backupFilesHasBeenSet;
}

int64_t Migration::GetStatus() const
{
    return m_status;
}

void Migration::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Migration::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Migration::GetCreateTime() const
{
    return m_createTime;
}

void Migration::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Migration::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Migration::GetStartTime() const
{
    return m_startTime;
}

void Migration::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Migration::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Migration::GetEndTime() const
{
    return m_endTime;
}

void Migration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Migration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Migration::GetMessage() const
{
    return m_message;
}

void Migration::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Migration::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

MigrationDetail Migration::GetDetail() const
{
    return m_detail;
}

void Migration::SetDetail(const MigrationDetail& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool Migration::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

MigrationAction Migration::GetAction() const
{
    return m_action;
}

void Migration::SetAction(const MigrationAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Migration::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string Migration::GetIsRecovery() const
{
    return m_isRecovery;
}

void Migration::SetIsRecovery(const string& _isRecovery)
{
    m_isRecovery = _isRecovery;
    m_isRecoveryHasBeenSet = true;
}

bool Migration::IsRecoveryHasBeenSet() const
{
    return m_isRecoveryHasBeenSet;
}

vector<DBRenameRes> Migration::GetDBRename() const
{
    return m_dBRename;
}

void Migration::SetDBRename(const vector<DBRenameRes>& _dBRename)
{
    m_dBRename = _dBRename;
    m_dBRenameHasBeenSet = true;
}

bool Migration::DBRenameHasBeenSet() const
{
    return m_dBRenameHasBeenSet;
}

