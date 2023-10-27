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

#include <tencentcloud/omics/v20221128/model/GetRunCallsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

GetRunCallsRequest::GetRunCallsRequest() :
    m_runUuidHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string GetRunCallsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
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


string GetRunCallsRequest::GetRunUuid() const
{
    return m_runUuid;
}

void GetRunCallsRequest::SetRunUuid(const string& _runUuid)
{
    m_runUuid = _runUuid;
    m_runUuidHasBeenSet = true;
}

bool GetRunCallsRequest::RunUuidHasBeenSet() const
{
    return m_runUuidHasBeenSet;
}

string GetRunCallsRequest::GetPath() const
{
    return m_path;
}

void GetRunCallsRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool GetRunCallsRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string GetRunCallsRequest::GetProjectId() const
{
    return m_projectId;
}

void GetRunCallsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetRunCallsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


