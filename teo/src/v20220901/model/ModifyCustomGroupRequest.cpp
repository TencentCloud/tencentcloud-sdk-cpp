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

#include <tencentcloud/teo/v20220901/model/ModifyCustomGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyCustomGroupRequest::ModifyCustomGroupRequest() :
    m_zoneIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupItemOperationHasBeenSet(false),
    m_groupItemsHasBeenSet(false)
{
}

string ModifyCustomGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupItemOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItemOperation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupItemOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_groupItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupItems.begin(); itr != m_groupItems.end(); ++itr, ++i)
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


string ModifyCustomGroupRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyCustomGroupRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyCustomGroupRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyCustomGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyCustomGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyCustomGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyCustomGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifyCustomGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifyCustomGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ModifyCustomGroupRequest::GetGroupItemOperation() const
{
    return m_groupItemOperation;
}

void ModifyCustomGroupRequest::SetGroupItemOperation(const string& _groupItemOperation)
{
    m_groupItemOperation = _groupItemOperation;
    m_groupItemOperationHasBeenSet = true;
}

bool ModifyCustomGroupRequest::GroupItemOperationHasBeenSet() const
{
    return m_groupItemOperationHasBeenSet;
}

vector<CustomGroupItem> ModifyCustomGroupRequest::GetGroupItems() const
{
    return m_groupItems;
}

void ModifyCustomGroupRequest::SetGroupItems(const vector<CustomGroupItem>& _groupItems)
{
    m_groupItems = _groupItems;
    m_groupItemsHasBeenSet = true;
}

bool ModifyCustomGroupRequest::GroupItemsHasBeenSet() const
{
    return m_groupItemsHasBeenSet;
}


