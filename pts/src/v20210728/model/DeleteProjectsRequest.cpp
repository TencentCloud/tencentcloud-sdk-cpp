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

#include <tencentcloud/pts/v20210728/model/DeleteProjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DeleteProjectsRequest::DeleteProjectsRequest() :
    m_projectIdsHasBeenSet(false),
    m_deleteScenariosHasBeenSet(false),
    m_deleteJobsHasBeenSet(false)
{
}

string DeleteProjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteScenariosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteScenarios";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteScenarios, allocator);
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


vector<string> DeleteProjectsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DeleteProjectsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DeleteProjectsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

bool DeleteProjectsRequest::GetDeleteScenarios() const
{
    return m_deleteScenarios;
}

void DeleteProjectsRequest::SetDeleteScenarios(const bool& _deleteScenarios)
{
    m_deleteScenarios = _deleteScenarios;
    m_deleteScenariosHasBeenSet = true;
}

bool DeleteProjectsRequest::DeleteScenariosHasBeenSet() const
{
    return m_deleteScenariosHasBeenSet;
}

bool DeleteProjectsRequest::GetDeleteJobs() const
{
    return m_deleteJobs;
}

void DeleteProjectsRequest::SetDeleteJobs(const bool& _deleteJobs)
{
    m_deleteJobs = _deleteJobs;
    m_deleteJobsHasBeenSet = true;
}

bool DeleteProjectsRequest::DeleteJobsHasBeenSet() const
{
    return m_deleteJobsHasBeenSet;
}


