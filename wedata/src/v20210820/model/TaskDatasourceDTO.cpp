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

#include <tencentcloud/wedata/v20210820/model/TaskDatasourceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskDatasourceDTO::TaskDatasourceDTO() :
    m_taskNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskDatasourceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTO.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTO.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTO.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDatasourceDTO.DatasourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = string(value["DatasourceType"].GetString());
        m_datasourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDatasourceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceType.c_str(), allocator).Move(), allocator);
    }

}


string TaskDatasourceDTO::GetTaskName() const
{
    return m_taskName;
}

void TaskDatasourceDTO::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskDatasourceDTO::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskDatasourceDTO::GetTaskId() const
{
    return m_taskId;
}

void TaskDatasourceDTO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskDatasourceDTO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskDatasourceDTO::GetDatasourceName() const
{
    return m_datasourceName;
}

void TaskDatasourceDTO::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool TaskDatasourceDTO::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string TaskDatasourceDTO::GetDatasourceId() const
{
    return m_datasourceId;
}

void TaskDatasourceDTO::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool TaskDatasourceDTO::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string TaskDatasourceDTO::GetDatasourceType() const
{
    return m_datasourceType;
}

void TaskDatasourceDTO::SetDatasourceType(const string& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool TaskDatasourceDTO::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

