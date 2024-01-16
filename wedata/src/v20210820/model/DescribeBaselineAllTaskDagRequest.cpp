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

#include <tencentcloud/wedata/v20210820/model/DescribeBaselineAllTaskDagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeBaselineAllTaskDagRequest::DescribeBaselineAllTaskDagRequest() :
    m_baselineIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_baselineTaskIdHasBeenSet(false)
{
}

string DescribeBaselineAllTaskDagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBaselineAllTaskDagRequest::GetBaselineId() const
{
    return m_baselineId;
}

void DescribeBaselineAllTaskDagRequest::SetBaselineId(const string& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool DescribeBaselineAllTaskDagRequest::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string DescribeBaselineAllTaskDagRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeBaselineAllTaskDagRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeBaselineAllTaskDagRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeBaselineAllTaskDagRequest::GetBaselineTaskId() const
{
    return m_baselineTaskId;
}

void DescribeBaselineAllTaskDagRequest::SetBaselineTaskId(const string& _baselineTaskId)
{
    m_baselineTaskId = _baselineTaskId;
    m_baselineTaskIdHasBeenSet = true;
}

bool DescribeBaselineAllTaskDagRequest::BaselineTaskIdHasBeenSet() const
{
    return m_baselineTaskIdHasBeenSet;
}


