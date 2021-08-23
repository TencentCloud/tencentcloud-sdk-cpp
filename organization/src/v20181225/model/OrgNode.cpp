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

#include <tencentcloud/organization/v20181225/model/OrgNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20181225::Model;
using namespace std;

OrgNode::OrgNode() :
    m_nodeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNodeIdHasBeenSet(false),
    m_memberCountHasBeenSet(false)
{
}

CoreInternalOutcome OrgNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNode.NodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = value["NodeId"].GetUint64();
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentNodeId") && !value["ParentNodeId"].IsNull())
    {
        if (!value["ParentNodeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNode.ParentNodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentNodeId = value["ParentNodeId"].GetUint64();
        m_parentNodeIdHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNode.MemberCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetUint64();
        m_memberCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentNodeId, allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

}


uint64_t OrgNode::GetNodeId() const
{
    return m_nodeId;
}

void OrgNode::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool OrgNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string OrgNode::GetName() const
{
    return m_name;
}

void OrgNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrgNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t OrgNode::GetParentNodeId() const
{
    return m_parentNodeId;
}

void OrgNode::SetParentNodeId(const uint64_t& _parentNodeId)
{
    m_parentNodeId = _parentNodeId;
    m_parentNodeIdHasBeenSet = true;
}

bool OrgNode::ParentNodeIdHasBeenSet() const
{
    return m_parentNodeIdHasBeenSet;
}

uint64_t OrgNode::GetMemberCount() const
{
    return m_memberCount;
}

void OrgNode::SetMemberCount(const uint64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool OrgNode::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

