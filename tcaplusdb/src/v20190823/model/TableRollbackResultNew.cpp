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

#include <tencentcloud/tcaplusdb/v20190823/model/TableRollbackResultNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

TableRollbackResultNew::TableRollbackResultNew() :
    m_tableInstanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_succKeyNumHasBeenSet(false),
    m_totalKeyNumHasBeenSet(false)
{
}

CoreInternalOutcome TableRollbackResultNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("SuccKeyNum") && !value["SuccKeyNum"].IsNull())
    {
        if (!value["SuccKeyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.SuccKeyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_succKeyNum = value["SuccKeyNum"].GetUint64();
        m_succKeyNumHasBeenSet = true;
    }

    if (value.HasMember("TotalKeyNum") && !value["TotalKeyNum"].IsNull())
    {
        if (!value["TotalKeyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TableRollbackResultNew.TotalKeyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalKeyNum = value["TotalKeyNum"].GetUint64();
        m_totalKeyNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableRollbackResultNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_succKeyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccKeyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succKeyNum, allocator);
    }

    if (m_totalKeyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalKeyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalKeyNum, allocator);
    }

}


string TableRollbackResultNew::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TableRollbackResultNew::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TableRollbackResultNew::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TableRollbackResultNew::GetTaskId() const
{
    return m_taskId;
}

void TableRollbackResultNew::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TableRollbackResultNew::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TableRollbackResultNew::GetTableName() const
{
    return m_tableName;
}

void TableRollbackResultNew::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableRollbackResultNew::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableRollbackResultNew::GetTableType() const
{
    return m_tableType;
}

void TableRollbackResultNew::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableRollbackResultNew::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableRollbackResultNew::GetTableIdlType() const
{
    return m_tableIdlType;
}

void TableRollbackResultNew::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool TableRollbackResultNew::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string TableRollbackResultNew::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TableRollbackResultNew::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TableRollbackResultNew::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

ErrorInfo TableRollbackResultNew::GetError() const
{
    return m_error;
}

void TableRollbackResultNew::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TableRollbackResultNew::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

vector<string> TableRollbackResultNew::GetTaskIds() const
{
    return m_taskIds;
}

void TableRollbackResultNew::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool TableRollbackResultNew::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string TableRollbackResultNew::GetFileId() const
{
    return m_fileId;
}

void TableRollbackResultNew::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool TableRollbackResultNew::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t TableRollbackResultNew::GetSuccKeyNum() const
{
    return m_succKeyNum;
}

void TableRollbackResultNew::SetSuccKeyNum(const uint64_t& _succKeyNum)
{
    m_succKeyNum = _succKeyNum;
    m_succKeyNumHasBeenSet = true;
}

bool TableRollbackResultNew::SuccKeyNumHasBeenSet() const
{
    return m_succKeyNumHasBeenSet;
}

uint64_t TableRollbackResultNew::GetTotalKeyNum() const
{
    return m_totalKeyNum;
}

void TableRollbackResultNew::SetTotalKeyNum(const uint64_t& _totalKeyNum)
{
    m_totalKeyNum = _totalKeyNum;
    m_totalKeyNumHasBeenSet = true;
}

bool TableRollbackResultNew::TotalKeyNumHasBeenSet() const
{
    return m_totalKeyNumHasBeenSet;
}

