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

#include <tencentcloud/pts/v20210728/model/DeleteScenariosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DeleteScenariosRequest::DeleteScenariosRequest() :
    m_scenarioIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deleteJobsHasBeenSet(false)
{
}

string DeleteScenariosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenarioIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenarioIds.begin(); itr != m_scenarioIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteJobs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteJobs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteScenariosRequest::GetScenarioIds() const
{
    return m_scenarioIds;
}

void DeleteScenariosRequest::SetScenarioIds(const vector<string>& _scenarioIds)
{
    m_scenarioIds = _scenarioIds;
    m_scenarioIdsHasBeenSet = true;
}

bool DeleteScenariosRequest::ScenarioIdsHasBeenSet() const
{
    return m_scenarioIdsHasBeenSet;
}

string DeleteScenariosRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteScenariosRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteScenariosRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DeleteScenariosRequest::GetDeleteJobs() const
{
    return m_deleteJobs;
}

void DeleteScenariosRequest::SetDeleteJobs(const bool& _deleteJobs)
{
    m_deleteJobs = _deleteJobs;
    m_deleteJobsHasBeenSet = true;
}

bool DeleteScenariosRequest::DeleteJobsHasBeenSet() const
{
    return m_deleteJobsHasBeenSet;
}


