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

#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTasksRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeDatahubTasksRes::DescribeDatahubTasksRes() :
    m_totalCountHasBeenSet(false),
    m_taskListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatahubTasksRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTasksRes.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TaskList") && !value["TaskList"].IsNull())
    {
        if (!value["TaskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTasksRes.TaskList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatahubTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDatahubTasksRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_taskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskList.begin(); itr != m_taskList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeDatahubTasksRes::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeDatahubTasksRes::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeDatahubTasksRes::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DatahubTaskInfo> DescribeDatahubTasksRes::GetTaskList() const
{
    return m_taskList;
}

void DescribeDatahubTasksRes::SetTaskList(const vector<DatahubTaskInfo>& _taskList)
{
    m_taskList = _taskList;
    m_taskListHasBeenSet = true;
}

bool DescribeDatahubTasksRes::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

