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

#include <tencentcloud/bdrc/v20260330/model/ProtectedResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ProtectedResource::ProtectedResource() :
    m_resourceTypeHasBeenSet(false),
    m_resourceIdSetHasBeenSet(false)
{
}

CoreInternalOutcome ProtectedResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResource.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceIdSet") && !value["ResourceIdSet"].IsNull())
    {
        if (!value["ResourceIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectedResource.ResourceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIdSet.push_back((*itr).GetString());
        }
        m_resourceIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectedResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdSet.begin(); itr != m_resourceIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ProtectedResource::GetResourceType() const
{
    return m_resourceType;
}

void ProtectedResource::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ProtectedResource::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> ProtectedResource::GetResourceIdSet() const
{
    return m_resourceIdSet;
}

void ProtectedResource::SetResourceIdSet(const vector<string>& _resourceIdSet)
{
    m_resourceIdSet = _resourceIdSet;
    m_resourceIdSetHasBeenSet = true;
}

bool ProtectedResource::ResourceIdSetHasBeenSet() const
{
    return m_resourceIdSetHasBeenSet;
}

