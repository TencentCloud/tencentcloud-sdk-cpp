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

#include <tencentcloud/wedata/v20210820/model/TaskTypeExtParamDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTypeExtParamDsVO::TaskTypeExtParamDsVO() :
    m_taskTypeExtKeyHasBeenSet(false),
    m_taskTypeExtValueHasBeenSet(false)
{
}

CoreInternalOutcome TaskTypeExtParamDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskTypeExtKey") && !value["TaskTypeExtKey"].IsNull())
    {
        if (!value["TaskTypeExtKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtParamDsVO.TaskTypeExtKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeExtKey = string(value["TaskTypeExtKey"].GetString());
        m_taskTypeExtKeyHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeExtValue") && !value["TaskTypeExtValue"].IsNull())
    {
        if (!value["TaskTypeExtValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeExtParamDsVO.TaskTypeExtValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskTypeExtValue.Deserialize(value["TaskTypeExtValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeExtValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeExtParamDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeExtKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeExtKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeExtKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeExtValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeExtValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskTypeExtValue.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TaskTypeExtParamDsVO::GetTaskTypeExtKey() const
{
    return m_taskTypeExtKey;
}

void TaskTypeExtParamDsVO::SetTaskTypeExtKey(const string& _taskTypeExtKey)
{
    m_taskTypeExtKey = _taskTypeExtKey;
    m_taskTypeExtKeyHasBeenSet = true;
}

bool TaskTypeExtParamDsVO::TaskTypeExtKeyHasBeenSet() const
{
    return m_taskTypeExtKeyHasBeenSet;
}

TaskTypeExtDsVO TaskTypeExtParamDsVO::GetTaskTypeExtValue() const
{
    return m_taskTypeExtValue;
}

void TaskTypeExtParamDsVO::SetTaskTypeExtValue(const TaskTypeExtDsVO& _taskTypeExtValue)
{
    m_taskTypeExtValue = _taskTypeExtValue;
    m_taskTypeExtValueHasBeenSet = true;
}

bool TaskTypeExtParamDsVO::TaskTypeExtValueHasBeenSet() const
{
    return m_taskTypeExtValueHasBeenSet;
}

