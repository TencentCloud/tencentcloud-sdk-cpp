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

#include <tencentcloud/wedata/v20250806/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_projectHasBeenSet(false),
    m_dLCInfoHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_project.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dLCInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DLCInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dLCInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ProjectRequest CreateProjectRequest::GetProject() const
{
    return m_project;
}

void CreateProjectRequest::SetProject(const ProjectRequest& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool CreateProjectRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

DLCClusterInfo CreateProjectRequest::GetDLCInfo() const
{
    return m_dLCInfo;
}

void CreateProjectRequest::SetDLCInfo(const DLCClusterInfo& _dLCInfo)
{
    m_dLCInfo = _dLCInfo;
    m_dLCInfoHasBeenSet = true;
}

bool CreateProjectRequest::DLCInfoHasBeenSet() const
{
    return m_dLCInfoHasBeenSet;
}

vector<string> CreateProjectRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void CreateProjectRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool CreateProjectRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}


