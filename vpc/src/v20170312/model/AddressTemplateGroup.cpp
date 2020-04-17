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

#include <tencentcloud/vpc/v20170312/model/AddressTemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AddressTemplateGroup::AddressTemplateGroup() :
    m_addressTemplateGroupNameHasBeenSet(false),
    m_addressTemplateGroupIdHasBeenSet(false),
    m_addressTemplateIdSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_addressTemplateSetHasBeenSet(false)
{
}

CoreInternalOutcome AddressTemplateGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressTemplateGroupName") && !value["AddressTemplateGroupName"].IsNull())
    {
        if (!value["AddressTemplateGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplateGroup.AddressTemplateGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateGroupName = string(value["AddressTemplateGroupName"].GetString());
        m_addressTemplateGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateGroupId") && !value["AddressTemplateGroupId"].IsNull())
    {
        if (!value["AddressTemplateGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplateGroup.AddressTemplateGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateGroupId = string(value["AddressTemplateGroupId"].GetString());
        m_addressTemplateGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateIdSet") && !value["AddressTemplateIdSet"].IsNull())
    {
        if (!value["AddressTemplateIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `AddressTemplateGroup.AddressTemplateIdSet` is not array type"));

        const Value &tmpValue = value["AddressTemplateIdSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressTemplateIdSet.push_back((*itr).GetString());
        }
        m_addressTemplateIdSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AddressTemplateGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateSet") && !value["AddressTemplateSet"].IsNull())
    {
        if (!value["AddressTemplateSet"].IsArray())
            return CoreInternalOutcome(Error("response `AddressTemplateGroup.AddressTemplateSet` is not array type"));

        const Value &tmpValue = value["AddressTemplateSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddressTemplateItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addressTemplateSet.push_back(item);
        }
        m_addressTemplateSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressTemplateGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addressTemplateGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressTemplateGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addressTemplateGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_addressTemplateIdSet.begin(); itr != m_addressTemplateIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTemplateSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressTemplateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressTemplateSet.begin(); itr != m_addressTemplateSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AddressTemplateGroup::GetAddressTemplateGroupName() const
{
    return m_addressTemplateGroupName;
}

void AddressTemplateGroup::SetAddressTemplateGroupName(const string& _addressTemplateGroupName)
{
    m_addressTemplateGroupName = _addressTemplateGroupName;
    m_addressTemplateGroupNameHasBeenSet = true;
}

bool AddressTemplateGroup::AddressTemplateGroupNameHasBeenSet() const
{
    return m_addressTemplateGroupNameHasBeenSet;
}

string AddressTemplateGroup::GetAddressTemplateGroupId() const
{
    return m_addressTemplateGroupId;
}

void AddressTemplateGroup::SetAddressTemplateGroupId(const string& _addressTemplateGroupId)
{
    m_addressTemplateGroupId = _addressTemplateGroupId;
    m_addressTemplateGroupIdHasBeenSet = true;
}

bool AddressTemplateGroup::AddressTemplateGroupIdHasBeenSet() const
{
    return m_addressTemplateGroupIdHasBeenSet;
}

vector<string> AddressTemplateGroup::GetAddressTemplateIdSet() const
{
    return m_addressTemplateIdSet;
}

void AddressTemplateGroup::SetAddressTemplateIdSet(const vector<string>& _addressTemplateIdSet)
{
    m_addressTemplateIdSet = _addressTemplateIdSet;
    m_addressTemplateIdSetHasBeenSet = true;
}

bool AddressTemplateGroup::AddressTemplateIdSetHasBeenSet() const
{
    return m_addressTemplateIdSetHasBeenSet;
}

string AddressTemplateGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void AddressTemplateGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AddressTemplateGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<AddressTemplateItem> AddressTemplateGroup::GetAddressTemplateSet() const
{
    return m_addressTemplateSet;
}

void AddressTemplateGroup::SetAddressTemplateSet(const vector<AddressTemplateItem>& _addressTemplateSet)
{
    m_addressTemplateSet = _addressTemplateSet;
    m_addressTemplateSetHasBeenSet = true;
}

bool AddressTemplateGroup::AddressTemplateSetHasBeenSet() const
{
    return m_addressTemplateSetHasBeenSet;
}

