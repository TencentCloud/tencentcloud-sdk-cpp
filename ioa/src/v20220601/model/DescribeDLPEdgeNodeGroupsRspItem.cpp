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

#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodeGroupsRspItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDLPEdgeNodeGroupsRspItem::DescribeDLPEdgeNodeGroupsRspItem() :
    m_idHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_edgeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDLPEdgeNodeGroupsRspItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodeGroupsRspItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodeGroupsRspItem.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodeGroupsRspItem.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("EdgeCount") && !value["EdgeCount"].IsNull())
    {
        if (!value["EdgeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodeGroupsRspItem.EdgeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeCount = value["EdgeCount"].GetInt64();
        m_edgeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDLPEdgeNodeGroupsRspItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeCount, allocator);
    }

}


int64_t DescribeDLPEdgeNodeGroupsRspItem::GetId() const
{
    return m_id;
}

void DescribeDLPEdgeNodeGroupsRspItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDLPEdgeNodeGroupsRspItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDLPEdgeNodeGroupsRspItem::GetGroupName() const
{
    return m_groupName;
}

void DescribeDLPEdgeNodeGroupsRspItem::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeDLPEdgeNodeGroupsRspItem::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeDLPEdgeNodeGroupsRspItem::GetGroupId() const
{
    return m_groupId;
}

void DescribeDLPEdgeNodeGroupsRspItem::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeDLPEdgeNodeGroupsRspItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeDLPEdgeNodeGroupsRspItem::GetEdgeCount() const
{
    return m_edgeCount;
}

void DescribeDLPEdgeNodeGroupsRspItem::SetEdgeCount(const int64_t& _edgeCount)
{
    m_edgeCount = _edgeCount;
    m_edgeCountHasBeenSet = true;
}

bool DescribeDLPEdgeNodeGroupsRspItem::EdgeCountHasBeenSet() const
{
    return m_edgeCountHasBeenSet;
}

