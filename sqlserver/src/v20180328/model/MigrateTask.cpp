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

#include <tencentcloud/sqlserver/v20180328/model/MigrateTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

MigrateTask::MigrateTask() :
    m_migrateIdHasBeenSet(false),
    m_migrateNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_checkFlagHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_migrateDetailHasBeenSet(false)
{
}

CoreInternalOutcome MigrateTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MigrateId") && !value["MigrateId"].IsNull())
    {
        if (!value["MigrateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.MigrateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_migrateId = value["MigrateId"].GetUint64();
        m_migrateIdHasBeenSet = true;
    }

    if (value.HasMember("MigrateName") && !value["MigrateName"].IsNull())
    {
        if (!value["MigrateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.MigrateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrateName = string(value["MigrateName"].GetString());
        m_migrateNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("CheckFlag") && !value["CheckFlag"].IsNull())
    {
        if (!value["CheckFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.CheckFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkFlag = value["CheckFlag"].GetUint64();
        m_checkFlagHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("MigrateDetail") && !value["MigrateDetail"].IsNull())
    {
        if (!value["MigrateDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTask.MigrateDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_migrateDetail.Deserialize(value["MigrateDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_migrateDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_migrateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_migrateId, allocator);
    }

    if (m_migrateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrateName.c_str(), allocator).Move(), allocator);
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

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_checkFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkFlag, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_migrateDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t MigrateTask::GetMigrateId() const
{
    return m_migrateId;
}

void MigrateTask::SetMigrateId(const uint64_t& _migrateId)
{
    m_migrateId = _migrateId;
    m_migrateIdHasBeenSet = true;
}

bool MigrateTask::MigrateIdHasBeenSet() const
{
    return m_migrateIdHasBeenSet;
}

string MigrateTask::GetMigrateName() const
{
    return m_migrateName;
}

void MigrateTask::SetMigrateName(const string& _migrateName)
{
    m_migrateName = _migrateName;
    m_migrateNameHasBeenSet = true;
}

bool MigrateTask::MigrateNameHasBeenSet() const
{
    return m_migrateNameHasBeenSet;
}

uint64_t MigrateTask::GetAppId() const
{
    return m_appId;
}

void MigrateTask::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MigrateTask::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MigrateTask::GetRegion() const
{
    return m_region;
}

void MigrateTask::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MigrateTask::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t MigrateTask::GetSourceType() const
{
    return m_sourceType;
}

void MigrateTask::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool MigrateTask::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string MigrateTask::GetCreateTime() const
{
    return m_createTime;
}

void MigrateTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MigrateTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MigrateTask::GetStartTime() const
{
    return m_startTime;
}

void MigrateTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MigrateTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MigrateTask::GetEndTime() const
{
    return m_endTime;
}

void MigrateTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MigrateTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t MigrateTask::GetStatus() const
{
    return m_status;
}

void MigrateTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrateTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MigrateTask::GetMessage() const
{
    return m_message;
}

void MigrateTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MigrateTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t MigrateTask::GetCheckFlag() const
{
    return m_checkFlag;
}

void MigrateTask::SetCheckFlag(const uint64_t& _checkFlag)
{
    m_checkFlag = _checkFlag;
    m_checkFlagHasBeenSet = true;
}

bool MigrateTask::CheckFlagHasBeenSet() const
{
    return m_checkFlagHasBeenSet;
}

int64_t MigrateTask::GetProgress() const
{
    return m_progress;
}

void MigrateTask::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MigrateTask::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

MigrateDetail MigrateTask::GetMigrateDetail() const
{
    return m_migrateDetail;
}

void MigrateTask::SetMigrateDetail(const MigrateDetail& _migrateDetail)
{
    m_migrateDetail = _migrateDetail;
    m_migrateDetailHasBeenSet = true;
}

bool MigrateTask::MigrateDetailHasBeenSet() const
{
    return m_migrateDetailHasBeenSet;
}

