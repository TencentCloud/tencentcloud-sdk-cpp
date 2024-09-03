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

#include <tencentcloud/cfg/v20210820/model/TaskOrg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskOrg::TaskOrg() :
    m_taskRoleHasBeenSet(false),
    m_taskOperatorHasBeenSet(false)
{
}

CoreInternalOutcome TaskOrg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskRole") && !value["TaskRole"].IsNull())
    {
        if (!value["TaskRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOrg.TaskRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskRole = string(value["TaskRole"].GetString());
        m_taskRoleHasBeenSet = true;
    }

    if (value.HasMember("TaskOperator") && !value["TaskOperator"].IsNull())
    {
        if (!value["TaskOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskOrg.TaskOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOperator = string(value["TaskOperator"].GetString());
        m_taskOperatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskOrg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskRole.c_str(), allocator).Move(), allocator);
    }

    if (m_taskOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOperator.c_str(), allocator).Move(), allocator);
    }

}


string TaskOrg::GetTaskRole() const
{
    return m_taskRole;
}

void TaskOrg::SetTaskRole(const string& _taskRole)
{
    m_taskRole = _taskRole;
    m_taskRoleHasBeenSet = true;
}

bool TaskOrg::TaskRoleHasBeenSet() const
{
    return m_taskRoleHasBeenSet;
}

string TaskOrg::GetTaskOperator() const
{
    return m_taskOperator;
}

void TaskOrg::SetTaskOperator(const string& _taskOperator)
{
    m_taskOperator = _taskOperator;
    m_taskOperatorHasBeenSet = true;
}

bool TaskOrg::TaskOperatorHasBeenSet() const
{
    return m_taskOperatorHasBeenSet;
}

