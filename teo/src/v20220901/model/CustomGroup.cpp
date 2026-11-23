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

#include <tencentcloud/teo/v20220901/model/CustomGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomGroup::CustomGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_groupItemsHasBeenSet(false),
    m_groupItemTotalCountHasBeenSet(false),
    m_refCountHasBeenSet(false)
{
}

CoreInternalOutcome CustomGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGroup.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupItems") && !value["GroupItems"].IsNull())
    {
        if (!value["GroupItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGroup.GroupItems` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGroupItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupItems.push_back(item);
        }
        m_groupItemsHasBeenSet = true;
    }

    if (value.HasMember("GroupItemTotalCount") && !value["GroupItemTotalCount"].IsNull())
    {
        if (!value["GroupItemTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGroup.GroupItemTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupItemTotalCount = value["GroupItemTotalCount"].GetInt64();
        m_groupItemTotalCountHasBeenSet = true;
    }

    if (value.HasMember("RefCount") && !value["RefCount"].IsNull())
    {
        if (!value["RefCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGroup.RefCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refCount = value["RefCount"].GetInt64();
        m_refCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupItems.begin(); itr != m_groupItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupItemTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItemTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupItemTotalCount, allocator);
    }

    if (m_refCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refCount, allocator);
    }

}


string CustomGroup::GetGroupId() const
{
    return m_groupId;
}

void CustomGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CustomGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CustomGroup::GetGroupName() const
{
    return m_groupName;
}

void CustomGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CustomGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CustomGroup::GetGroupType() const
{
    return m_groupType;
}

void CustomGroup::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool CustomGroup::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<CustomGroupItem> CustomGroup::GetGroupItems() const
{
    return m_groupItems;
}

void CustomGroup::SetGroupItems(const vector<CustomGroupItem>& _groupItems)
{
    m_groupItems = _groupItems;
    m_groupItemsHasBeenSet = true;
}

bool CustomGroup::GroupItemsHasBeenSet() const
{
    return m_groupItemsHasBeenSet;
}

int64_t CustomGroup::GetGroupItemTotalCount() const
{
    return m_groupItemTotalCount;
}

void CustomGroup::SetGroupItemTotalCount(const int64_t& _groupItemTotalCount)
{
    m_groupItemTotalCount = _groupItemTotalCount;
    m_groupItemTotalCountHasBeenSet = true;
}

bool CustomGroup::GroupItemTotalCountHasBeenSet() const
{
    return m_groupItemTotalCountHasBeenSet;
}

int64_t CustomGroup::GetRefCount() const
{
    return m_refCount;
}

void CustomGroup::SetRefCount(const int64_t& _refCount)
{
    m_refCount = _refCount;
    m_refCountHasBeenSet = true;
}

bool CustomGroup::RefCountHasBeenSet() const
{
    return m_refCountHasBeenSet;
}

