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

#include <tencentcloud/bi/v20220105/model/ResourceListDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ResourceListDTO::ResourceListDTO() :
    m_entityIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_resourceListHasBeenSet(false)
{
}

CoreInternalOutcome ResourceListDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListDTO.EntityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = value["EntityId"].GetInt64();
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceListDTO.NodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetInt64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceList") && !value["ResourceList"].IsNull())
    {
        if (!value["ResourceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceListDTO.ResourceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceList.push_back(item);
        }
        m_resourceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceListDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entityId, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_resourceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceList.begin(); itr != m_resourceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ResourceListDTO::GetEntityId() const
{
    return m_entityId;
}

void ResourceListDTO::SetEntityId(const int64_t& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool ResourceListDTO::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

int64_t ResourceListDTO::GetNodeType() const
{
    return m_nodeType;
}

void ResourceListDTO::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ResourceListDTO::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<ResourceItem> ResourceListDTO::GetResourceList() const
{
    return m_resourceList;
}

void ResourceListDTO::SetResourceList(const vector<ResourceItem>& _resourceList)
{
    m_resourceList = _resourceList;
    m_resourceListHasBeenSet = true;
}

bool ResourceListDTO::ResourceListHasBeenSet() const
{
    return m_resourceListHasBeenSet;
}

