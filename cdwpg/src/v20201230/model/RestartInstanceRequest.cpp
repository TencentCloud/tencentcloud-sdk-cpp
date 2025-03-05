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

#include <tencentcloud/cdwpg/v20201230/model/RestartInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

RestartInstanceRequest::RestartInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeTypesHasBeenSet(false),
    m_nodeIdsHasBeenSet(false)
{
}

string RestartInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeTypes.begin(); itr != m_nodeTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RestartInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RestartInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> RestartInstanceRequest::GetNodeTypes() const
{
    return m_nodeTypes;
}

void RestartInstanceRequest::SetNodeTypes(const vector<string>& _nodeTypes)
{
    m_nodeTypes = _nodeTypes;
    m_nodeTypesHasBeenSet = true;
}

bool RestartInstanceRequest::NodeTypesHasBeenSet() const
{
    return m_nodeTypesHasBeenSet;
}

vector<string> RestartInstanceRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void RestartInstanceRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool RestartInstanceRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}


