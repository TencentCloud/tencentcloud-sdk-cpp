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

#include <tencentcloud/tcaplusdb/v20190823/model/TableResultNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

TableResultNew::TableResultNew() :
    m_tableInstanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_tableGroupIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_taskIdsHasBeenSet(false)
{
}

CoreInternalOutcome TableResultNew::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableResultNew.Error` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TableResultNew.TaskIds` is not array type"));

        const Value &tmpValue = value["TaskIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableResultNew::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_tableGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
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

}


string TableResultNew::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void TableResultNew::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool TableResultNew::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string TableResultNew::GetTaskId() const
{
    return m_taskId;
}

void TableResultNew::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TableResultNew::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TableResultNew::GetTableName() const
{
    return m_tableName;
}

void TableResultNew::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableResultNew::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableResultNew::GetTableType() const
{
    return m_tableType;
}

void TableResultNew::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableResultNew::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableResultNew::GetTableIdlType() const
{
    return m_tableIdlType;
}

void TableResultNew::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool TableResultNew::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string TableResultNew::GetTableGroupId() const
{
    return m_tableGroupId;
}

void TableResultNew::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool TableResultNew::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

ErrorInfo TableResultNew::GetError() const
{
    return m_error;
}

void TableResultNew::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TableResultNew::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

vector<string> TableResultNew::GetTaskIds() const
{
    return m_taskIds;
}

void TableResultNew::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool TableResultNew::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

