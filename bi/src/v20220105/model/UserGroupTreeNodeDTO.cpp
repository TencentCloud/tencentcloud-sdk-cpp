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

#include <tencentcloud/bi/v20220105/model/UserGroupTreeNodeDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserGroupTreeNodeDTO::UserGroupTreeNodeDTO() :
    m_groupIdHasBeenSet(false),
    m_queryChildNodesHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupTreeNodeDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeNodeDTO.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("QueryChildNodes") && !value["QueryChildNodes"].IsNull())
    {
        if (!value["QueryChildNodes"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupTreeNodeDTO.QueryChildNodes` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_queryChildNodes = value["QueryChildNodes"].GetBool();
        m_queryChildNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupTreeNodeDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_queryChildNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryChildNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryChildNodes, allocator);
    }

}


int64_t UserGroupTreeNodeDTO::GetGroupId() const
{
    return m_groupId;
}

void UserGroupTreeNodeDTO::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UserGroupTreeNodeDTO::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

bool UserGroupTreeNodeDTO::GetQueryChildNodes() const
{
    return m_queryChildNodes;
}

void UserGroupTreeNodeDTO::SetQueryChildNodes(const bool& _queryChildNodes)
{
    m_queryChildNodes = _queryChildNodes;
    m_queryChildNodesHasBeenSet = true;
}

bool UserGroupTreeNodeDTO::QueryChildNodesHasBeenSet() const
{
    return m_queryChildNodesHasBeenSet;
}

