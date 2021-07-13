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

#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseProjectLatestVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteCloudBaseProjectLatestVersionRequest::DeleteCloudBaseProjectLatestVersionRequest() :
    m_envIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_keepResourceHasBeenSet(false)
{
}

string DeleteCloudBaseProjectLatestVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_keepResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepResource, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudBaseProjectLatestVersionRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteCloudBaseProjectLatestVersionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteCloudBaseProjectLatestVersionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DeleteCloudBaseProjectLatestVersionRequest::GetProjectName() const
{
    return m_projectName;
}

void DeleteCloudBaseProjectLatestVersionRequest::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DeleteCloudBaseProjectLatestVersionRequest::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

bool DeleteCloudBaseProjectLatestVersionRequest::GetKeepResource() const
{
    return m_keepResource;
}

void DeleteCloudBaseProjectLatestVersionRequest::SetKeepResource(const bool& _keepResource)
{
    m_keepResource = _keepResource;
    m_keepResourceHasBeenSet = true;
}

bool DeleteCloudBaseProjectLatestVersionRequest::KeepResourceHasBeenSet() const
{
    return m_keepResourceHasBeenSet;
}


