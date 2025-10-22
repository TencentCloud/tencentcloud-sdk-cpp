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

#include <tencentcloud/lowcode/v20210108/model/RoleGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

RoleGroup::RoleGroup() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupIdentityHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_roleListHasBeenSet(false)
{
}

CoreInternalOutcome RoleGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("GroupIdentity") && !value["GroupIdentity"].IsNull())
    {
        if (!value["GroupIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.GroupIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupIdentity = string(value["GroupIdentity"].GetString());
        m_groupIdentityHasBeenSet = true;
    }

    if (value.HasMember("GroupDesc") && !value["GroupDesc"].IsNull())
    {
        if (!value["GroupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.GroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDesc = string(value["GroupDesc"].GetString());
        m_groupDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RoleList") && !value["RoleList"].IsNull())
    {
        if (!value["RoleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleGroup.RoleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RoleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WedaRole item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roleList.push_back(item);
        }
        m_roleListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_groupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roleList.begin(); itr != m_roleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RoleGroup::GetId() const
{
    return m_id;
}

void RoleGroup::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RoleGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RoleGroup::GetName() const
{
    return m_name;
}

void RoleGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoleGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RoleGroup::GetGroupIdentity() const
{
    return m_groupIdentity;
}

void RoleGroup::SetGroupIdentity(const string& _groupIdentity)
{
    m_groupIdentity = _groupIdentity;
    m_groupIdentityHasBeenSet = true;
}

bool RoleGroup::GroupIdentityHasBeenSet() const
{
    return m_groupIdentityHasBeenSet;
}

string RoleGroup::GetGroupDesc() const
{
    return m_groupDesc;
}

void RoleGroup::SetGroupDesc(const string& _groupDesc)
{
    m_groupDesc = _groupDesc;
    m_groupDescHasBeenSet = true;
}

bool RoleGroup::GroupDescHasBeenSet() const
{
    return m_groupDescHasBeenSet;
}

string RoleGroup::GetCreateTime() const
{
    return m_createTime;
}

void RoleGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoleGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<WedaRole> RoleGroup::GetRoleList() const
{
    return m_roleList;
}

void RoleGroup::SetRoleList(const vector<WedaRole>& _roleList)
{
    m_roleList = _roleList;
    m_roleListHasBeenSet = true;
}

bool RoleGroup::RoleListHasBeenSet() const
{
    return m_roleListHasBeenSet;
}

