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

#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComplexAdaptiveDynamicStreamingTask::ComplexAdaptiveDynamicStreamingTask() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet(false)
{
}

CoreInternalOutcome ComplexAdaptiveDynamicStreamingTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ComplexAdaptiveDynamicStreamingTaskResultSet") && !value["ComplexAdaptiveDynamicStreamingTaskResultSet"].IsNull())
    {
        if (!value["ComplexAdaptiveDynamicStreamingTaskResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTask.ComplexAdaptiveDynamicStreamingTaskResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplexAdaptiveDynamicStreamingTaskResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComplexAdaptiveDynamicStreamingTaskResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_complexAdaptiveDynamicStreamingTaskResultSet.push_back(item);
        }
        m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexAdaptiveDynamicStreamingTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexAdaptiveDynamicStreamingTaskResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complexAdaptiveDynamicStreamingTaskResultSet.begin(); itr != m_complexAdaptiveDynamicStreamingTaskResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ComplexAdaptiveDynamicStreamingTask::GetTaskId() const
{
    return m_taskId;
}

void ComplexAdaptiveDynamicStreamingTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTask::GetStatus() const
{
    return m_status;
}

void ComplexAdaptiveDynamicStreamingTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ComplexAdaptiveDynamicStreamingTaskResult> ComplexAdaptiveDynamicStreamingTask::GetComplexAdaptiveDynamicStreamingTaskResultSet() const
{
    return m_complexAdaptiveDynamicStreamingTaskResultSet;
}

void ComplexAdaptiveDynamicStreamingTask::SetComplexAdaptiveDynamicStreamingTaskResultSet(const vector<ComplexAdaptiveDynamicStreamingTaskResult>& _complexAdaptiveDynamicStreamingTaskResultSet)
{
    m_complexAdaptiveDynamicStreamingTaskResultSet = _complexAdaptiveDynamicStreamingTaskResultSet;
    m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTask::ComplexAdaptiveDynamicStreamingTaskResultSetHasBeenSet() const
{
    return m_complexAdaptiveDynamicStreamingTaskResultSetHasBeenSet;
}

