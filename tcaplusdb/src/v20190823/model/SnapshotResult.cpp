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

#include <tencentcloud/tcaplusdb/v20190823/model/SnapshotResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

SnapshotResult::SnapshotResult() :
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_snapshotDeadTimeHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_snapshotSizeHasBeenSet(false),
    m_snapshotStatusHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotDeadTime") && !value["SnapshotDeadTime"].IsNull())
    {
        if (!value["SnapshotDeadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotDeadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotDeadTime = string(value["SnapshotDeadTime"].GetString());
        m_snapshotDeadTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotCreateTime") && !value["SnapshotCreateTime"].IsNull())
    {
        if (!value["SnapshotCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotCreateTime = string(value["SnapshotCreateTime"].GetString());
        m_snapshotCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotSize") && !value["SnapshotSize"].IsNull())
    {
        if (!value["SnapshotSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotSize = value["SnapshotSize"].GetUint64();
        m_snapshotSizeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotStatus") && !value["SnapshotStatus"].IsNull())
    {
        if (!value["SnapshotStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.SnapshotStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotStatus = value["SnapshotStatus"].GetUint64();
        m_snapshotStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotDeadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotDeadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotDeadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotSize, allocator);
    }

    if (m_snapshotStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotStatus, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

}


string SnapshotResult::GetTableGroupId() const
{
    return m_tableGroupId;
}

void SnapshotResult::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool SnapshotResult::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string SnapshotResult::GetTableName() const
{
    return m_tableName;
}

void SnapshotResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SnapshotResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SnapshotResult::GetTaskId() const
{
    return m_taskId;
}

void SnapshotResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SnapshotResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

ErrorInfo SnapshotResult::GetError() const
{
    return m_error;
}

void SnapshotResult::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool SnapshotResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

string SnapshotResult::GetSnapshotName() const
{
    return m_snapshotName;
}

void SnapshotResult::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool SnapshotResult::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string SnapshotResult::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void SnapshotResult::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool SnapshotResult::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

string SnapshotResult::GetSnapshotDeadTime() const
{
    return m_snapshotDeadTime;
}

void SnapshotResult::SetSnapshotDeadTime(const string& _snapshotDeadTime)
{
    m_snapshotDeadTime = _snapshotDeadTime;
    m_snapshotDeadTimeHasBeenSet = true;
}

bool SnapshotResult::SnapshotDeadTimeHasBeenSet() const
{
    return m_snapshotDeadTimeHasBeenSet;
}

string SnapshotResult::GetSnapshotCreateTime() const
{
    return m_snapshotCreateTime;
}

void SnapshotResult::SetSnapshotCreateTime(const string& _snapshotCreateTime)
{
    m_snapshotCreateTime = _snapshotCreateTime;
    m_snapshotCreateTimeHasBeenSet = true;
}

bool SnapshotResult::SnapshotCreateTimeHasBeenSet() const
{
    return m_snapshotCreateTimeHasBeenSet;
}

uint64_t SnapshotResult::GetSnapshotSize() const
{
    return m_snapshotSize;
}

void SnapshotResult::SetSnapshotSize(const uint64_t& _snapshotSize)
{
    m_snapshotSize = _snapshotSize;
    m_snapshotSizeHasBeenSet = true;
}

bool SnapshotResult::SnapshotSizeHasBeenSet() const
{
    return m_snapshotSizeHasBeenSet;
}

uint64_t SnapshotResult::GetSnapshotStatus() const
{
    return m_snapshotStatus;
}

void SnapshotResult::SetSnapshotStatus(const uint64_t& _snapshotStatus)
{
    m_snapshotStatus = _snapshotStatus;
    m_snapshotStatusHasBeenSet = true;
}

bool SnapshotResult::SnapshotStatusHasBeenSet() const
{
    return m_snapshotStatusHasBeenSet;
}

string SnapshotResult::GetApplicationId() const
{
    return m_applicationId;
}

void SnapshotResult::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SnapshotResult::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

