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

#include <tencentcloud/tcaplusdb/v20190823/model/TableRollbackResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

TableRollbackResult::TableRollbackResult() :
    m_tableInstanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_logicZoneIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_succKeyNumHasBeenSet(false),
    m_totalKeyNumHasBeenSet(false)
{
}

CoreInternalOutcome TableRollbackResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("LogicZoneId") && !value["LogicZoneId"].IsNull())
    {
        if (!value["LogicZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.LogicZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicZoneId = string(value["LogicZoneId"].GetString());
        m_logicZoneIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.Error` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TableRollbackResult.TaskIds` is not array type"));

        const Value &tmpValue = value["TaskIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("SuccKeyNum") && !value["SuccKeyNum"].IsNull())
    {
        if (!value["SuccKeyNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.SuccKeyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_succKeyNum = value["SuccKeyNum"].GetUint64();
        m_succKeyNumHasBeenSet = true;
    }

    if (value.HasMember("TotalKeyNum") && !value["TotalKeyNum"].IsNull())
    {
        if (!value["TotalKeyNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TableRollbackResult.TotalKeyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalKeyNum = value["TotalKeyNum"].GetUint64();
        m_totalKeyNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableRollbackResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_logicZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogicZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_logicZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_succKeyNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SuccKeyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succKeyNum, allocator);
    }

    if (m_totalKeyNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalKeyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalKeyNum, allocator);
    }

}


string TableRollbackResult::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TableRollbackResult::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TableRollbackResult::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TableRollbackResult::GetTaskId() const
{
    return m_taskId;
}

void TableRollbackResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TableRollbackResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TableRollbackResult::GetTableName() const
{
    return m_tableName;
}

void TableRollbackResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableRollbackResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableRollbackResult::GetTableType() const
{
    return m_tableType;
}

void TableRollbackResult::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableRollbackResult::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableRollbackResult::GetTableIdlType() const
{
    return m_tableIdlType;
}

void TableRollbackResult::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool TableRollbackResult::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string TableRollbackResult::GetLogicZoneId() const
{
    return m_logicZoneId;
}

void TableRollbackResult::SetLogicZoneId(const string& _logicZoneId)
{
    m_logicZoneId = _logicZoneId;
    m_logicZoneIdHasBeenSet = true;
}

bool TableRollbackResult::LogicZoneIdHasBeenSet() const
{
    return m_logicZoneIdHasBeenSet;
}

ErrorInfo TableRollbackResult::GetError() const
{
    return m_error;
}

void TableRollbackResult::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TableRollbackResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

vector<string> TableRollbackResult::GetTaskIds() const
{
    return m_taskIds;
}

void TableRollbackResult::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool TableRollbackResult::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string TableRollbackResult::GetFileId() const
{
    return m_fileId;
}

void TableRollbackResult::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool TableRollbackResult::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t TableRollbackResult::GetSuccKeyNum() const
{
    return m_succKeyNum;
}

void TableRollbackResult::SetSuccKeyNum(const uint64_t& _succKeyNum)
{
    m_succKeyNum = _succKeyNum;
    m_succKeyNumHasBeenSet = true;
}

bool TableRollbackResult::SuccKeyNumHasBeenSet() const
{
    return m_succKeyNumHasBeenSet;
}

uint64_t TableRollbackResult::GetTotalKeyNum() const
{
    return m_totalKeyNum;
}

void TableRollbackResult::SetTotalKeyNum(const uint64_t& _totalKeyNum)
{
    m_totalKeyNum = _totalKeyNum;
    m_totalKeyNumHasBeenSet = true;
}

bool TableRollbackResult::TotalKeyNumHasBeenSet() const
{
    return m_totalKeyNumHasBeenSet;
}

