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

#include <tencentcloud/ioa/v20220601/model/GrantedAccountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantedAccountItem::GrantedAccountItem() :
    m_accountIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupIdPathArrayHasBeenSet(false),
    m_groupNamePathArrayHasBeenSet(false),
    m_menuIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_relationIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantedAccountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.AccountId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = value["AccountId"].GetUint64();
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupIdPathArray") && !value["GroupIdPathArray"].IsNull())
    {
        if (!value["GroupIdPathArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.GroupIdPathArray` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIdPathArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIdPathArray.push_back((*itr).GetUint64());
        }
        m_groupIdPathArrayHasBeenSet = true;
    }

    if (value.HasMember("GroupNamePathArray") && !value["GroupNamePathArray"].IsNull())
    {
        if (!value["GroupNamePathArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.GroupNamePathArray` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupNamePathArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupNamePathArray.push_back((*itr).GetString());
        }
        m_groupNamePathArrayHasBeenSet = true;
    }

    if (value.HasMember("MenuId") && !value["MenuId"].IsNull())
    {
        if (!value["MenuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.MenuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_menuId = value["MenuId"].GetUint64();
        m_menuIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountItem.RelationId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = value["RelationId"].GetUint64();
        m_relationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantedAccountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupIdPathArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdPathArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdPathArray.begin(); itr != m_groupIdPathArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_groupNamePathArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNamePathArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupNamePathArray.begin(); itr != m_groupNamePathArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_menuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_menuId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_relationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relationId, allocator);
    }

}


uint64_t GrantedAccountItem::GetAccountId() const
{
    return m_accountId;
}

void GrantedAccountItem::SetAccountId(const uint64_t& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool GrantedAccountItem::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string GrantedAccountItem::GetUserId() const
{
    return m_userId;
}

void GrantedAccountItem::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GrantedAccountItem::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GrantedAccountItem::GetUserName() const
{
    return m_userName;
}

void GrantedAccountItem::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool GrantedAccountItem::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t GrantedAccountItem::GetGroupId() const
{
    return m_groupId;
}

void GrantedAccountItem::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GrantedAccountItem::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<uint64_t> GrantedAccountItem::GetGroupIdPathArray() const
{
    return m_groupIdPathArray;
}

void GrantedAccountItem::SetGroupIdPathArray(const vector<uint64_t>& _groupIdPathArray)
{
    m_groupIdPathArray = _groupIdPathArray;
    m_groupIdPathArrayHasBeenSet = true;
}

bool GrantedAccountItem::GroupIdPathArrayHasBeenSet() const
{
    return m_groupIdPathArrayHasBeenSet;
}

vector<string> GrantedAccountItem::GetGroupNamePathArray() const
{
    return m_groupNamePathArray;
}

void GrantedAccountItem::SetGroupNamePathArray(const vector<string>& _groupNamePathArray)
{
    m_groupNamePathArray = _groupNamePathArray;
    m_groupNamePathArrayHasBeenSet = true;
}

bool GrantedAccountItem::GroupNamePathArrayHasBeenSet() const
{
    return m_groupNamePathArrayHasBeenSet;
}

uint64_t GrantedAccountItem::GetMenuId() const
{
    return m_menuId;
}

void GrantedAccountItem::SetMenuId(const uint64_t& _menuId)
{
    m_menuId = _menuId;
    m_menuIdHasBeenSet = true;
}

bool GrantedAccountItem::MenuIdHasBeenSet() const
{
    return m_menuIdHasBeenSet;
}

uint64_t GrantedAccountItem::GetExpireTime() const
{
    return m_expireTime;
}

void GrantedAccountItem::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantedAccountItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t GrantedAccountItem::GetRelationId() const
{
    return m_relationId;
}

void GrantedAccountItem::SetRelationId(const uint64_t& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool GrantedAccountItem::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

