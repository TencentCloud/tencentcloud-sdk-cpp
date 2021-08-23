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

#include <tencentcloud/chdfs/v20190718/model/RestoreTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

RestoreTask::RestoreTask() :
    m_restoreTaskIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome RestoreTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RestoreTaskId") && !value["RestoreTaskId"].IsNull())
    {
        if (!value["RestoreTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.RestoreTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreTaskId = value["RestoreTaskId"].GetUint64();
        m_restoreTaskIdHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Days` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_days = value["Days"].GetUint64();
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_restoreTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreTaskId, allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
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

}


uint64_t RestoreTask::GetRestoreTaskId() const
{
    return m_restoreTaskId;
}

void RestoreTask::SetRestoreTaskId(const uint64_t& _restoreTaskId)
{
    m_restoreTaskId = _restoreTaskId;
    m_restoreTaskIdHasBeenSet = true;
}

bool RestoreTask::RestoreTaskIdHasBeenSet() const
{
    return m_restoreTaskIdHasBeenSet;
}

string RestoreTask::GetFilePath() const
{
    return m_filePath;
}

void RestoreTask::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RestoreTask::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

uint64_t RestoreTask::GetType() const
{
    return m_type;
}

void RestoreTask::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RestoreTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RestoreTask::GetDays() const
{
    return m_days;
}

void RestoreTask::SetDays(const uint64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool RestoreTask::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

uint64_t RestoreTask::GetStatus() const
{
    return m_status;
}

void RestoreTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RestoreTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RestoreTask::GetCreateTime() const
{
    return m_createTime;
}

void RestoreTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RestoreTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

