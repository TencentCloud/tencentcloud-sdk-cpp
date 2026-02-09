/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/DestroyMySQLResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DestroyMySQLResult::DestroyMySQLResult() :
    m_isSuccessHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false)
{
}

CoreInternalOutcome DestroyMySQLResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSuccess") && !value["IsSuccess"].IsNull())
    {
        if (!value["IsSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyMySQLResult.IsSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSuccess = value["IsSuccess"].GetBool();
        m_isSuccessHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyMySQLResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyMySQLResult.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestroyMySQLResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuccess, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

}


bool DestroyMySQLResult::GetIsSuccess() const
{
    return m_isSuccess;
}

void DestroyMySQLResult::SetIsSuccess(const bool& _isSuccess)
{
    m_isSuccess = _isSuccess;
    m_isSuccessHasBeenSet = true;
}

bool DestroyMySQLResult::IsSuccessHasBeenSet() const
{
    return m_isSuccessHasBeenSet;
}

string DestroyMySQLResult::GetTaskId() const
{
    return m_taskId;
}

void DestroyMySQLResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DestroyMySQLResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DestroyMySQLResult::GetTaskName() const
{
    return m_taskName;
}

void DestroyMySQLResult::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DestroyMySQLResult::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

