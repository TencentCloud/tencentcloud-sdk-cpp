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

#include <tencentcloud/wedata/v20210820/model/SubmitIntegrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitIntegrationTaskRequest::SubmitIntegrationTaskRequest() :
    m_groupIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_resourceBucketHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_runParamsHasBeenSet(false)
{
}

string SubmitIntegrationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_runParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitIntegrationTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void SubmitIntegrationTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void SubmitIntegrationTaskRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetRemotePath() const
{
    return m_remotePath;
}

void SubmitIntegrationTaskRequest::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitIntegrationTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetResourceBucket() const
{
    return m_resourceBucket;
}

void SubmitIntegrationTaskRequest::SetResourceBucket(const string& _resourceBucket)
{
    m_resourceBucket = _resourceBucket;
    m_resourceBucketHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::ResourceBucketHasBeenSet() const
{
    return m_resourceBucketHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetResourceId() const
{
    return m_resourceId;
}

void SubmitIntegrationTaskRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string SubmitIntegrationTaskRequest::GetRunParams() const
{
    return m_runParams;
}

void SubmitIntegrationTaskRequest::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool SubmitIntegrationTaskRequest::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}


