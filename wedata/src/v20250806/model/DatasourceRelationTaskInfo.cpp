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

#include <tencentcloud/wedata/v20250806/model/DatasourceRelationTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DatasourceRelationTaskInfo::DatasourceRelationTaskInfo() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_taskInfoHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceRelationTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceRelationTaskInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceRelationTaskInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("TaskInfo") && !value["TaskInfo"].IsNull())
    {
        if (!value["TaskInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceRelationTaskInfo.TaskInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelateTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInfo.push_back(item);
        }
        m_taskInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceRelationTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfo.begin(); itr != m_taskInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DatasourceRelationTaskInfo::GetProjectId() const
{
    return m_projectId;
}

void DatasourceRelationTaskInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DatasourceRelationTaskInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DatasourceRelationTaskInfo::GetProjectName() const
{
    return m_projectName;
}

void DatasourceRelationTaskInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DatasourceRelationTaskInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

vector<RelateTask> DatasourceRelationTaskInfo::GetTaskInfo() const
{
    return m_taskInfo;
}

void DatasourceRelationTaskInfo::SetTaskInfo(const vector<RelateTask>& _taskInfo)
{
    m_taskInfo = _taskInfo;
    m_taskInfoHasBeenSet = true;
}

bool DatasourceRelationTaskInfo::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

