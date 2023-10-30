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

#include <tencentcloud/omics/v20221128/model/TerminateRunGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

TerminateRunGroupRequest::TerminateRunGroupRequest() :
    m_runGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string TerminateRunGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateRunGroupRequest::GetRunGroupId() const
{
    return m_runGroupId;
}

void TerminateRunGroupRequest::SetRunGroupId(const string& _runGroupId)
{
    m_runGroupId = _runGroupId;
    m_runGroupIdHasBeenSet = true;
}

bool TerminateRunGroupRequest::RunGroupIdHasBeenSet() const
{
    return m_runGroupIdHasBeenSet;
}

string TerminateRunGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void TerminateRunGroupRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TerminateRunGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


