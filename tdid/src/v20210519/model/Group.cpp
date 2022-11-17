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

#include <tencentcloud/tdid/v20210519/model/Group.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Group::Group() :
    m_groupIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_nodeCountOfAgencyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_chainIdHasBeenSet(false)
{
}

CoreInternalOutcome Group::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Group.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Group.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("NodeCountOfAgency") && !value["NodeCountOfAgency"].IsNull())
    {
        if (!value["NodeCountOfAgency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Group.NodeCountOfAgency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCountOfAgency = value["NodeCountOfAgency"].GetUint64();
        m_nodeCountOfAgencyHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Group.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Group.RoleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = value["RoleType"].GetUint64();
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("ChainId") && !value["ChainId"].IsNull())
    {
        if (!value["ChainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Group.ChainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainId = string(value["ChainId"].GetString());
        m_chainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Group::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_nodeCountOfAgencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCountOfAgency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCountOfAgency, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleType, allocator);
    }

    if (m_chainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Group::GetGroupId() const
{
    return m_groupId;
}

void Group::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Group::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t Group::GetNodeCount() const
{
    return m_nodeCount;
}

void Group::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool Group::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t Group::GetNodeCountOfAgency() const
{
    return m_nodeCountOfAgency;
}

void Group::SetNodeCountOfAgency(const uint64_t& _nodeCountOfAgency)
{
    m_nodeCountOfAgency = _nodeCountOfAgency;
    m_nodeCountOfAgencyHasBeenSet = true;
}

bool Group::NodeCountOfAgencyHasBeenSet() const
{
    return m_nodeCountOfAgencyHasBeenSet;
}

string Group::GetDescription() const
{
    return m_description;
}

void Group::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Group::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t Group::GetRoleType() const
{
    return m_roleType;
}

void Group::SetRoleType(const uint64_t& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool Group::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string Group::GetChainId() const
{
    return m_chainId;
}

void Group::SetChainId(const string& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool Group::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

