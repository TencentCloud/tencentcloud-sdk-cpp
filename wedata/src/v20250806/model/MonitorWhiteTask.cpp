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

#include <tencentcloud/wedata/v20250806/model/MonitorWhiteTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

MonitorWhiteTask::MonitorWhiteTask() :
    m_monitorObjectIdHasBeenSet(false),
    m_taskIdsHasBeenSet(false)
{
}

CoreInternalOutcome MonitorWhiteTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorObjectId") && !value["MonitorObjectId"].IsNull())
    {
        if (!value["MonitorObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorWhiteTask.MonitorObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorObjectId = string(value["MonitorObjectId"].GetString());
        m_monitorObjectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorWhiteTask.TaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorWhiteTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorObjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorObjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MonitorWhiteTask::GetMonitorObjectId() const
{
    return m_monitorObjectId;
}

void MonitorWhiteTask::SetMonitorObjectId(const string& _monitorObjectId)
{
    m_monitorObjectId = _monitorObjectId;
    m_monitorObjectIdHasBeenSet = true;
}

bool MonitorWhiteTask::MonitorObjectIdHasBeenSet() const
{
    return m_monitorObjectIdHasBeenSet;
}

vector<string> MonitorWhiteTask::GetTaskIds() const
{
    return m_taskIds;
}

void MonitorWhiteTask::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool MonitorWhiteTask::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

