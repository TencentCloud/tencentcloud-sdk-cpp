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

#include <tencentcloud/thpc/v20230321/model/TaskDependence.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

TaskDependence::TaskDependence() :
    m_startTaskHasBeenSet(false),
    m_endTaskHasBeenSet(false)
{
}

CoreInternalOutcome TaskDependence::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTask") && !value["StartTask"].IsNull())
    {
        if (!value["StartTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDependence.StartTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTask = string(value["StartTask"].GetString());
        m_startTaskHasBeenSet = true;
    }

    if (value.HasMember("EndTask") && !value["EndTask"].IsNull())
    {
        if (!value["EndTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskDependence.EndTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTask = string(value["EndTask"].GetString());
        m_endTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDependence::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTask.c_str(), allocator).Move(), allocator);
    }

    if (m_endTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTask.c_str(), allocator).Move(), allocator);
    }

}


string TaskDependence::GetStartTask() const
{
    return m_startTask;
}

void TaskDependence::SetStartTask(const string& _startTask)
{
    m_startTask = _startTask;
    m_startTaskHasBeenSet = true;
}

bool TaskDependence::StartTaskHasBeenSet() const
{
    return m_startTaskHasBeenSet;
}

string TaskDependence::GetEndTask() const
{
    return m_endTask;
}

void TaskDependence::SetEndTask(const string& _endTask)
{
    m_endTask = _endTask;
    m_endTaskHasBeenSet = true;
}

bool TaskDependence::EndTaskHasBeenSet() const
{
    return m_endTaskHasBeenSet;
}

