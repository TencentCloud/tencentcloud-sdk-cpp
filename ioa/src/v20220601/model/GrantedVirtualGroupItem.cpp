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

#include <tencentcloud/ioa/v20220601/model/GrantedVirtualGroupItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

GrantedVirtualGroupItem::GrantedVirtualGroupItem() :
    m_virtualGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_accountCountHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_relationIdHasBeenSet(false)
{
}

CoreInternalOutcome GrantedVirtualGroupItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VirtualGroupId") && !value["VirtualGroupId"].IsNull())
    {
        if (!value["VirtualGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.VirtualGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGroupId = value["VirtualGroupId"].GetUint64();
        m_virtualGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AccountCount") && !value["AccountCount"].IsNull())
    {
        if (!value["AccountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.AccountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountCount = value["AccountCount"].GetUint64();
        m_accountCountHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("RelationId") && !value["RelationId"].IsNull())
    {
        if (!value["RelationId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GrantedVirtualGroupItem.RelationId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relationId = value["RelationId"].GetUint64();
        m_relationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrantedVirtualGroupItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_virtualGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


uint64_t GrantedVirtualGroupItem::GetVirtualGroupId() const
{
    return m_virtualGroupId;
}

void GrantedVirtualGroupItem::SetVirtualGroupId(const uint64_t& _virtualGroupId)
{
    m_virtualGroupId = _virtualGroupId;
    m_virtualGroupIdHasBeenSet = true;
}

bool GrantedVirtualGroupItem::VirtualGroupIdHasBeenSet() const
{
    return m_virtualGroupIdHasBeenSet;
}

string GrantedVirtualGroupItem::GetName() const
{
    return m_name;
}

void GrantedVirtualGroupItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GrantedVirtualGroupItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GrantedVirtualGroupItem::GetDescription() const
{
    return m_description;
}

void GrantedVirtualGroupItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GrantedVirtualGroupItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t GrantedVirtualGroupItem::GetAccountCount() const
{
    return m_accountCount;
}

void GrantedVirtualGroupItem::SetAccountCount(const uint64_t& _accountCount)
{
    m_accountCount = _accountCount;
    m_accountCountHasBeenSet = true;
}

bool GrantedVirtualGroupItem::AccountCountHasBeenSet() const
{
    return m_accountCountHasBeenSet;
}

uint64_t GrantedVirtualGroupItem::GetExpireTime() const
{
    return m_expireTime;
}

void GrantedVirtualGroupItem::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool GrantedVirtualGroupItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t GrantedVirtualGroupItem::GetRelationId() const
{
    return m_relationId;
}

void GrantedVirtualGroupItem::SetRelationId(const uint64_t& _relationId)
{
    m_relationId = _relationId;
    m_relationIdHasBeenSet = true;
}

bool GrantedVirtualGroupItem::RelationIdHasBeenSet() const
{
    return m_relationIdHasBeenSet;
}

