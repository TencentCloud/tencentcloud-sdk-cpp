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

#include <tencentcloud/organization/v20181225/model/UpdateOrganizationNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

UpdateOrganizationNodeRequest::UpdateOrganizationNodeRequest() :
    m_nodeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNodeIdHasBeenSet(false)
{
}

string UpdateOrganizationNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentNodeId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateOrganizationNodeRequest::GetNodeId() const
{
    return m_nodeId;
}

void UpdateOrganizationNodeRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool UpdateOrganizationNodeRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string UpdateOrganizationNodeRequest::GetName() const
{
    return m_name;
}

void UpdateOrganizationNodeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateOrganizationNodeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t UpdateOrganizationNodeRequest::GetParentNodeId() const
{
    return m_parentNodeId;
}

void UpdateOrganizationNodeRequest::SetParentNodeId(const uint64_t& _parentNodeId)
{
    m_parentNodeId = _parentNodeId;
    m_parentNodeIdHasBeenSet = true;
}

bool UpdateOrganizationNodeRequest::ParentNodeIdHasBeenSet() const
{
    return m_parentNodeIdHasBeenSet;
}


