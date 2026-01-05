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

#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExploreFileResource::ExploreFileResource() :
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceIdForPathHasBeenSet(false),
    m_resourceCFSPathHasBeenSet(false)
{
}

CoreInternalOutcome ExploreFileResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFileResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFileResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceIdForPath") && !value["ResourceIdForPath"].IsNull())
    {
        if (!value["ResourceIdForPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFileResource.ResourceIdForPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceIdForPath = string(value["ResourceIdForPath"].GetString());
        m_resourceIdForPathHasBeenSet = true;
    }

    if (value.HasMember("ResourceCFSPath") && !value["ResourceCFSPath"].IsNull())
    {
        if (!value["ResourceCFSPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExploreFileResource.ResourceCFSPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCFSPath = string(value["ResourceCFSPath"].GetString());
        m_resourceCFSPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExploreFileResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdForPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdForPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceIdForPath.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCFSPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCFSPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCFSPath.c_str(), allocator).Move(), allocator);
    }

}


string ExploreFileResource::GetResourceType() const
{
    return m_resourceType;
}

void ExploreFileResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ExploreFileResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ExploreFileResource::GetResourceId() const
{
    return m_resourceId;
}

void ExploreFileResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ExploreFileResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ExploreFileResource::GetResourceIdForPath() const
{
    return m_resourceIdForPath;
}

void ExploreFileResource::SetResourceIdForPath(const string& _resourceIdForPath)
{
    m_resourceIdForPath = _resourceIdForPath;
    m_resourceIdForPathHasBeenSet = true;
}

bool ExploreFileResource::ResourceIdForPathHasBeenSet() const
{
    return m_resourceIdForPathHasBeenSet;
}

string ExploreFileResource::GetResourceCFSPath() const
{
    return m_resourceCFSPath;
}

void ExploreFileResource::SetResourceCFSPath(const string& _resourceCFSPath)
{
    m_resourceCFSPath = _resourceCFSPath;
    m_resourceCFSPathHasBeenSet = true;
}

bool ExploreFileResource::ResourceCFSPathHasBeenSet() const
{
    return m_resourceCFSPathHasBeenSet;
}

