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

#include <tencentcloud/tcaplusdb/v20190823/model/MergeTableResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

MergeTableResult::MergeTableResult() :
    m_taskIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

CoreInternalOutcome MergeTableResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTableResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTableResult.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTableResult.Table` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_table.Deserialize(value["Table"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MergeTableResult.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MergeTableResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_table.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

}


string MergeTableResult::GetTaskId() const
{
    return m_taskId;
}

void MergeTableResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool MergeTableResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

ErrorInfo MergeTableResult::GetError() const
{
    return m_error;
}

void MergeTableResult::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool MergeTableResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

CompareTablesInfo MergeTableResult::GetTable() const
{
    return m_table;
}

void MergeTableResult::SetTable(const CompareTablesInfo& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool MergeTableResult::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string MergeTableResult::GetApplicationId() const
{
    return m_applicationId;
}

void MergeTableResult::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool MergeTableResult::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

