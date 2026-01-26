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

#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

PrivilegeResource::PrivilegeResource() :
    m_resourceTypeHasBeenSet(false),
    m_resourceUriHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceUri") && !value["ResourceUri"].IsNull())
    {
        if (!value["ResourceUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeResource.ResourceUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUri = string(value["ResourceUri"].GetString());
        m_resourceUriHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUri.c_str(), allocator).Move(), allocator);
    }

}


string PrivilegeResource::GetResourceType() const
{
    return m_resourceType;
}

void PrivilegeResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool PrivilegeResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string PrivilegeResource::GetResourceUri() const
{
    return m_resourceUri;
}

void PrivilegeResource::SetResourceUri(const string& _resourceUri)
{
    m_resourceUri = _resourceUri;
    m_resourceUriHasBeenSet = true;
}

bool PrivilegeResource::ResourceUriHasBeenSet() const
{
    return m_resourceUriHasBeenSet;
}

