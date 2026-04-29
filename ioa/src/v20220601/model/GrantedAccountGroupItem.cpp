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

#include <tencentcloud/ioa/v20220601/model/GrantedAccountGroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantedAccountGroupItem::GrantedAccountGroupItem() :
    m_accountGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idPathArrayHasBeenSet(false),
    m_namePathArrayHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_relationIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantedAccountGroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.AccountGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetUint64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdPathArray") && !value["IdPathArray"].IsNull())
    {
        if (!value["IdPathArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.IdPathArray` is not array type"));

        const rapidjson::Value &tmpValue = value["IdPathArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_idPathArray.push_back((*itr).GetUint64());
        }
        m_idPathArrayHasBeenSet = true;
    }

    if (value.HasMember("NamePathArray") && !value["NamePathArray"].IsNull())
    {
        if (!value["NamePathArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.NamePathArray` is not array type"));

        const rapidjson::Value &tmpValue = value["NamePathArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namePathArray.push_back((*itr).GetString());
        }
        m_namePathArrayHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = value["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedAccountGroupItem.RelationId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = value["RelationId"].GetUint64();
        m_relationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantedAccountGroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idPathArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdPathArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idPathArray.begin(); itr != m_idPathArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_namePathArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePathArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namePathArray.begin(); itr != m_namePathArray.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountCount, allocator);
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


uint64_t GrantedAccountGroupItem::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void GrantedAccountGroupItem::SetAccountGroupId(const uint64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool GrantedAccountGroupItem::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string GrantedAccountGroupItem::GetName() const
{
    return m_name;
}

void GrantedAccountGroupItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GrantedAccountGroupItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<uint64_t> GrantedAccountGroupItem::GetIdPathArray() const
{
    return m_idPathArray;
}

void GrantedAccountGroupItem::SetIdPathArray(const vector<uint64_t>& _idPathArray)
{
    m_idPathArray = _idPathArray;
    m_idPathArrayHasBeenSet = true;
}

bool GrantedAccountGroupItem::IdPathArrayHasBeenSet() const
{
    return m_idPathArrayHasBeenSet;
}

vector<string> GrantedAccountGroupItem::GetNamePathArray() const
{
    return m_namePathArray;
}

void GrantedAccountGroupItem::SetNamePathArray(const vector<string>& _namePathArray)
{
    m_namePathArray = _namePathArray;
    m_namePathArrayHasBeenSet = true;
}

bool GrantedAccountGroupItem::NamePathArrayHasBeenSet() const
{
    return m_namePathArrayHasBeenSet;
}

uint64_t GrantedAccountGroupItem::GetAccountCount() const
{
    return m_accountCount;
}

void GrantedAccountGroupItem::SetAccountCount(const uint64_t& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool GrantedAccountGroupItem::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

uint64_t GrantedAccountGroupItem::GetExpireTime() const
{
    return m_expireTime;
}

void GrantedAccountGroupItem::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantedAccountGroupItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t GrantedAccountGroupItem::GetRelationId() const
{
    return m_relationId;
}

void GrantedAccountGroupItem::SetRelationId(const uint64_t& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool GrantedAccountGroupItem::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

