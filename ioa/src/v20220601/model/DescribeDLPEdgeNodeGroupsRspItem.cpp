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
    m_edgeCountHasBeenSet(false),
    m_groupNameI18nHasBeenSet(false)
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

    if (value.HasMember("GroupNameI18n") && !value["GroupNameI18n"].IsNull())
    {
        if (!value["GroupNameI18n"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDLPEdgeNodeGroupsRspItem.GroupNameI18n` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupNameI18n"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            I18nString item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupNameI18n.push_back(item);
        }
        m_groupNameI18nHasBeenSet = true;
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

    if (m_groupNameI18nHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNameI18n";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupNameI18n.begin(); itr != m_groupNameI18n.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

vector<I18nString> DescribeDLPEdgeNodeGroupsRspItem::GetGroupNameI18n() const
{
    return m_groupNameI18n;
}

void DescribeDLPEdgeNodeGroupsRspItem::SetGroupNameI18n(const vector<I18nString>& _groupNameI18n)
{
    m_groupNameI18n = _groupNameI18n;
    m_groupNameI18nHasBeenSet = true;
}

bool DescribeDLPEdgeNodeGroupsRspItem::GroupNameI18nHasBeenSet() const
{
    return m_groupNameI18nHasBeenSet;
}

