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

#include <tencentcloud/wedata/v20210820/model/CreateFileVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateFileVersionRequest::CreateFileVersionRequest() :
    m_resourceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_objectRegionHasBeenSet(false),
    m_objectBucketNameHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskVersionNumHasBeenSet(false),
    m_taskVersionIdHasBeenSet(false)
{
}

string CreateFileVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_objectRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_objectBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectBucketName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskVersionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_taskVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskVersionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileVersionRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateFileVersionRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateFileVersionRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateFileVersionRequest::GetCreateTime() const
{
    return m_createTime;
}

void CreateFileVersionRequest::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CreateFileVersionRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CreateFileVersionRequest::GetUserName() const
{
    return m_userName;
}

void CreateFileVersionRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateFileVersionRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateFileVersionRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateFileVersionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateFileVersionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateFileVersionRequest::GetRemotePath() const
{
    return m_remotePath;
}

void CreateFileVersionRequest::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool CreateFileVersionRequest::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string CreateFileVersionRequest::GetObjectRegion() const
{
    return m_objectRegion;
}

void CreateFileVersionRequest::SetObjectRegion(const string& _objectRegion)
{
    m_objectRegion = _objectRegion;
    m_objectRegionHasBeenSet = true;
}

bool CreateFileVersionRequest::ObjectRegionHasBeenSet() const
{
    return m_objectRegionHasBeenSet;
}

string CreateFileVersionRequest::GetObjectBucketName() const
{
    return m_objectBucketName;
}

void CreateFileVersionRequest::SetObjectBucketName(const string& _objectBucketName)
{
    m_objectBucketName = _objectBucketName;
    m_objectBucketNameHasBeenSet = true;
}

bool CreateFileVersionRequest::ObjectBucketNameHasBeenSet() const
{
    return m_objectBucketNameHasBeenSet;
}

string CreateFileVersionRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void CreateFileVersionRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool CreateFileVersionRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

string CreateFileVersionRequest::GetDescription() const
{
    return m_description;
}

void CreateFileVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateFileVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateFileVersionRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateFileVersionRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateFileVersionRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateFileVersionRequest::GetTaskVersionNum() const
{
    return m_taskVersionNum;
}

void CreateFileVersionRequest::SetTaskVersionNum(const string& _taskVersionNum)
{
    m_taskVersionNum = _taskVersionNum;
    m_taskVersionNumHasBeenSet = true;
}

bool CreateFileVersionRequest::TaskVersionNumHasBeenSet() const
{
    return m_taskVersionNumHasBeenSet;
}

string CreateFileVersionRequest::GetTaskVersionId() const
{
    return m_taskVersionId;
}

void CreateFileVersionRequest::SetTaskVersionId(const string& _taskVersionId)
{
    m_taskVersionId = _taskVersionId;
    m_taskVersionIdHasBeenSet = true;
}

bool CreateFileVersionRequest::TaskVersionIdHasBeenSet() const
{
    return m_taskVersionIdHasBeenSet;
}


