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

#include <tencentcloud/es/v20180416/model/TaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

TaskDetail::TaskDetail() :
    m_nameHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_subTasksHasBeenSet(false)
{
}

CoreInternalOutcome TaskDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `TaskDetail.Progress` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskDetail.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("SubTasks") && !value["SubTasks"].IsNull())
    {
        if (!value["SubTasks"].IsArray())
            return CoreInternalOutcome(Error("response `TaskDetail.SubTasks` is not array type"));

        const Value &tmpValue = value["SubTasks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubTaskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subTasks.push_back(item);
        }
        m_subTasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subTasksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subTasks.begin(); itr != m_subTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TaskDetail::GetName() const
{
    return m_name;
}

void TaskDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TaskDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double TaskDetail::GetProgress() const
{
    return m_progress;
}

void TaskDetail::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool TaskDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string TaskDetail::GetFinishTime() const
{
    return m_finishTime;
}

void TaskDetail::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool TaskDetail::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

vector<SubTaskDetail> TaskDetail::GetSubTasks() const
{
    return m_subTasks;
}

void TaskDetail::SetSubTasks(const vector<SubTaskDetail>& _subTasks)
{
    m_subTasks = _subTasks;
    m_subTasksHasBeenSet = true;
}

bool TaskDetail::SubTasksHasBeenSet() const
{
    return m_subTasksHasBeenSet;
}

