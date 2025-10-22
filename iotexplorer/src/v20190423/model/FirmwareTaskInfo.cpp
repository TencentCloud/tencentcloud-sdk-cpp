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

#include <tencentcloud/iotexplorer/v20190423/model/FirmwareTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

FirmwareTaskInfo::FirmwareTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_creatorNickNameHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_cronTimeHasBeenSet(false),
    m_fwTypeHasBeenSet(false)
{
}

CoreInternalOutcome FirmwareTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorNickName") && !value["CreatorNickName"].IsNull())
    {
        if (!value["CreatorNickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.CreatorNickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorNickName = string(value["CreatorNickName"].GetString());
        m_creatorNickNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.CreateUserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = value["CreateUserId"].GetInt64();
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("CronTime") && !value["CronTime"].IsNull())
    {
        if (!value["CronTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.CronTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cronTime = value["CronTime"].GetInt64();
        m_cronTimeHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareTaskInfo.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirmwareTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_creatorNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorNickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorNickName.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUserId, allocator);
    }

    if (m_cronTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cronTime, allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t FirmwareTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void FirmwareTaskInfo::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool FirmwareTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t FirmwareTaskInfo::GetStatus() const
{
    return m_status;
}

void FirmwareTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FirmwareTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t FirmwareTaskInfo::GetType() const
{
    return m_type;
}

void FirmwareTaskInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FirmwareTaskInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t FirmwareTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void FirmwareTaskInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FirmwareTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FirmwareTaskInfo::GetCreatorNickName() const
{
    return m_creatorNickName;
}

void FirmwareTaskInfo::SetCreatorNickName(const string& _creatorNickName)
{
    m_creatorNickName = _creatorNickName;
    m_creatorNickNameHasBeenSet = true;
}

bool FirmwareTaskInfo::CreatorNickNameHasBeenSet() const
{
    return m_creatorNickNameHasBeenSet;
}

int64_t FirmwareTaskInfo::GetCreateUserId() const
{
    return m_createUserId;
}

void FirmwareTaskInfo::SetCreateUserId(const int64_t& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool FirmwareTaskInfo::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

int64_t FirmwareTaskInfo::GetCronTime() const
{
    return m_cronTime;
}

void FirmwareTaskInfo::SetCronTime(const int64_t& _cronTime)
{
    m_cronTime = _cronTime;
    m_cronTimeHasBeenSet = true;
}

bool FirmwareTaskInfo::CronTimeHasBeenSet() const
{
    return m_cronTimeHasBeenSet;
}

string FirmwareTaskInfo::GetFwType() const
{
    return m_fwType;
}

void FirmwareTaskInfo::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool FirmwareTaskInfo::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

