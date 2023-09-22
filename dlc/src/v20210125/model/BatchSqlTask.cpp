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

#include <tencentcloud/dlc/v20210125/model/BatchSqlTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

BatchSqlTask::BatchSqlTask() :
    m_taskIdHasBeenSet(false),
    m_executeSQLHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome BatchSqlTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSqlTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ExecuteSQL") && !value["ExecuteSQL"].IsNull())
    {
        if (!value["ExecuteSQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSqlTask.ExecuteSQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeSQL = string(value["ExecuteSQL"].GetString());
        m_executeSQLHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSqlTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchSqlTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_executeSQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteSQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeSQL.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string BatchSqlTask::GetTaskId() const
{
    return m_taskId;
}

void BatchSqlTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BatchSqlTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BatchSqlTask::GetExecuteSQL() const
{
    return m_executeSQL;
}

void BatchSqlTask::SetExecuteSQL(const string& _executeSQL)
{
    m_executeSQL = _executeSQL;
    m_executeSQLHasBeenSet = true;
}

bool BatchSqlTask::ExecuteSQLHasBeenSet() const
{
    return m_executeSQLHasBeenSet;
}

string BatchSqlTask::GetMessage() const
{
    return m_message;
}

void BatchSqlTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool BatchSqlTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

