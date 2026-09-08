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

#include <tencentcloud/cls/v20201016/model/ModifyResourceGraphEntityTopicsRelationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyResourceGraphEntityTopicsRelationRequest::ModifyResourceGraphEntityTopicsRelationRequest() :
    m_resourceGraphIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_topicInfosHasBeenSet(false)
{
}

string ModifyResourceGraphEntityTopicsRelationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicInfos.begin(); itr != m_topicInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourceGraphEntityTopicsRelationRequest::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void ModifyResourceGraphEntityTopicsRelationRequest::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool ModifyResourceGraphEntityTopicsRelationRequest::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

string ModifyResourceGraphEntityTopicsRelationRequest::GetEntityId() const
{
    return m_entityId;
}

void ModifyResourceGraphEntityTopicsRelationRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool ModifyResourceGraphEntityTopicsRelationRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

vector<ResourceGraphEntityRelatedTopic> ModifyResourceGraphEntityTopicsRelationRequest::GetTopicInfos() const
{
    return m_topicInfos;
}

void ModifyResourceGraphEntityTopicsRelationRequest::SetTopicInfos(const vector<ResourceGraphEntityRelatedTopic>& _topicInfos)
{
    m_topicInfos = _topicInfos;
    m_topicInfosHasBeenSet = true;
}

bool ModifyResourceGraphEntityTopicsRelationRequest::TopicInfosHasBeenSet() const
{
    return m_topicInfosHasBeenSet;
}


