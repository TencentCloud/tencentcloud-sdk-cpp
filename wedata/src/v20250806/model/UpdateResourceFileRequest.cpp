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

#include <tencentcloud/wedata/v20250806/model/UpdateResourceFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateResourceFileRequest::UpdateResourceFileRequest() :
    m_projectIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceFileHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

string UpdateResourceFileRequest::ToJsonString() const
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceFile.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateResourceFileRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateResourceFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateResourceFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateResourceFileRequest::GetResourceId() const
{
    return m_resourceId;
}

void UpdateResourceFileRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool UpdateResourceFileRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string UpdateResourceFileRequest::GetResourceFile() const
{
    return m_resourceFile;
}

void UpdateResourceFileRequest::SetResourceFile(const string& _resourceFile)
{
    m_resourceFile = _resourceFile;
    m_resourceFileHasBeenSet = true;
}

bool UpdateResourceFileRequest::ResourceFileHasBeenSet() const
{
    return m_resourceFileHasBeenSet;
}

string UpdateResourceFileRequest::GetResourceName() const
{
    return m_resourceName;
}

void UpdateResourceFileRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool UpdateResourceFileRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string UpdateResourceFileRequest::GetBundleId() const
{
    return m_bundleId;
}

void UpdateResourceFileRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool UpdateResourceFileRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string UpdateResourceFileRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void UpdateResourceFileRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool UpdateResourceFileRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}


