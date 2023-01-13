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

#include <tencentcloud/oceanus/v20190422/model/Savepoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

Savepoint::Savepoint() :
    m_idHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_jobRuntimeIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_serialIdHasBeenSet(false),
    m_timeConsumingHasBeenSet(false),
    m_pathStatusHasBeenSet(false)
{
}

CoreInternalOutcome Savepoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.VersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = value["VersionId"].GetInt64();
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.RecordType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = value["RecordType"].GetInt64();
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("JobRuntimeId") && !value["JobRuntimeId"].IsNull())
    {
        if (!value["JobRuntimeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.JobRuntimeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobRuntimeId = value["JobRuntimeId"].GetInt64();
        m_jobRuntimeIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("SerialId") && !value["SerialId"].IsNull())
    {
        if (!value["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(value["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (value.HasMember("TimeConsuming") && !value["TimeConsuming"].IsNull())
    {
        if (!value["TimeConsuming"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.TimeConsuming` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeConsuming = value["TimeConsuming"].GetInt64();
        m_timeConsumingHasBeenSet = true;
    }

    if (value.HasMember("PathStatus") && !value["PathStatus"].IsNull())
    {
        if (!value["PathStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Savepoint.PathStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pathStatus = value["PathStatus"].GetInt64();
        m_pathStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Savepoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionId, allocator);
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
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordType, allocator);
    }

    if (m_jobRuntimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRuntimeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobRuntimeId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeConsumingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeConsuming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeConsuming, allocator);
    }

    if (m_pathStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pathStatus, allocator);
    }

}


int64_t Savepoint::GetId() const
{
    return m_id;
}

void Savepoint::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Savepoint::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t Savepoint::GetVersionId() const
{
    return m_versionId;
}

void Savepoint::SetVersionId(const int64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool Savepoint::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

int64_t Savepoint::GetStatus() const
{
    return m_status;
}

void Savepoint::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Savepoint::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Savepoint::GetCreateTime() const
{
    return m_createTime;
}

void Savepoint::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Savepoint::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Savepoint::GetUpdateTime() const
{
    return m_updateTime;
}

void Savepoint::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Savepoint::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Savepoint::GetPath() const
{
    return m_path;
}

void Savepoint::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool Savepoint::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t Savepoint::GetSize() const
{
    return m_size;
}

void Savepoint::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Savepoint::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t Savepoint::GetRecordType() const
{
    return m_recordType;
}

void Savepoint::SetRecordType(const int64_t& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool Savepoint::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

int64_t Savepoint::GetJobRuntimeId() const
{
    return m_jobRuntimeId;
}

void Savepoint::SetJobRuntimeId(const int64_t& _jobRuntimeId)
{
    m_jobRuntimeId = _jobRuntimeId;
    m_jobRuntimeIdHasBeenSet = true;
}

bool Savepoint::JobRuntimeIdHasBeenSet() const
{
    return m_jobRuntimeIdHasBeenSet;
}

string Savepoint::GetDescription() const
{
    return m_description;
}

void Savepoint::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Savepoint::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t Savepoint::GetTimeout() const
{
    return m_timeout;
}

void Savepoint::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Savepoint::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string Savepoint::GetSerialId() const
{
    return m_serialId;
}

void Savepoint::SetSerialId(const string& _serialId)
{
    m_serialId = _serialId;
    m_serialIdHasBeenSet = true;
}

bool Savepoint::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t Savepoint::GetTimeConsuming() const
{
    return m_timeConsuming;
}

void Savepoint::SetTimeConsuming(const int64_t& _timeConsuming)
{
    m_timeConsuming = _timeConsuming;
    m_timeConsumingHasBeenSet = true;
}

bool Savepoint::TimeConsumingHasBeenSet() const
{
    return m_timeConsumingHasBeenSet;
}

int64_t Savepoint::GetPathStatus() const
{
    return m_pathStatus;
}

void Savepoint::SetPathStatus(const int64_t& _pathStatus)
{
    m_pathStatus = _pathStatus;
    m_pathStatusHasBeenSet = true;
}

bool Savepoint::PathStatusHasBeenSet() const
{
    return m_pathStatusHasBeenSet;
}

