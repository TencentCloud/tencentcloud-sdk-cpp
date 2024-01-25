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

#include <tencentcloud/wedata/v20210820/model/AnalyzeDependentTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AnalyzeDependentTasksRequest::AnalyzeDependentTasksRequest() :
    m_projectIdHasBeenSet(false),
    m_analyzeTasksHasBeenSet(false)
{
}

string AnalyzeDependentTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_analyzeTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyzeTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analyzeTasks.begin(); itr != m_analyzeTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AnalyzeDependentTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void AnalyzeDependentTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AnalyzeDependentTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<AnalyzeDependentTask> AnalyzeDependentTasksRequest::GetAnalyzeTasks() const
{
    return m_analyzeTasks;
}

void AnalyzeDependentTasksRequest::SetAnalyzeTasks(const vector<AnalyzeDependentTask>& _analyzeTasks)
{
    m_analyzeTasks = _analyzeTasks;
    m_analyzeTasksHasBeenSet = true;
}

bool AnalyzeDependentTasksRequest::AnalyzeTasksHasBeenSet() const
{
    return m_analyzeTasksHasBeenSet;
}


