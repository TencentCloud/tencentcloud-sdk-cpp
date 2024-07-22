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

#include <tencentcloud/ccc/v20200210/model/SkillGroupInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SkillGroupInfoItem::SkillGroupInfoItem() :
    m_skillGroupIdHasBeenSet(false),
    m_skillGroupNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_routePolicyHasBeenSet(false),
    m_usingLastSeatHasBeenSet(false),
    m_maxConcurrencyHasBeenSet(false),
    m_lastModifyTimestampHasBeenSet(false),
    m_skillGroupTypeHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

CoreInternalOutcome SkillGroupInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupName") && !value["SkillGroupName"].IsNull())
    {
        if (!value["SkillGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.SkillGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupName = string(value["SkillGroupName"].GetString());
        m_skillGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicy") && !value["RoutePolicy"].IsNull())
    {
        if (!value["RoutePolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.RoutePolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicy = string(value["RoutePolicy"].GetString());
        m_routePolicyHasBeenSet = true;
    }

    if (value.HasMember("UsingLastSeat") && !value["UsingLastSeat"].IsNull())
    {
        if (!value["UsingLastSeat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.UsingLastSeat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usingLastSeat = value["UsingLastSeat"].GetInt64();
        m_usingLastSeatHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrency") && !value["MaxConcurrency"].IsNull())
    {
        if (!value["MaxConcurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.MaxConcurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrency = value["MaxConcurrency"].GetInt64();
        m_maxConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTimestamp") && !value["LastModifyTimestamp"].IsNull())
    {
        if (!value["LastModifyTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.LastModifyTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTimestamp = value["LastModifyTimestamp"].GetInt64();
        m_lastModifyTimestampHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupType") && !value["SkillGroupType"].IsNull())
    {
        if (!value["SkillGroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.SkillGroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupType = value["SkillGroupType"].GetInt64();
        m_skillGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillGroupInfoItem.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillGroupInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_skillGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_usingLastSeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsingLastSeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usingLastSeat, allocator);
    }

    if (m_maxConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrency, allocator);
    }

    if (m_lastModifyTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTimestamp, allocator);
    }

    if (m_skillGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupType, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

}


int64_t SkillGroupInfoItem::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void SkillGroupInfoItem::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool SkillGroupInfoItem::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string SkillGroupInfoItem::GetSkillGroupName() const
{
    return m_skillGroupName;
}

void SkillGroupInfoItem::SetSkillGroupName(const string& _skillGroupName)
{
    m_skillGroupName = _skillGroupName;
    m_skillGroupNameHasBeenSet = true;
}

bool SkillGroupInfoItem::SkillGroupNameHasBeenSet() const
{
    return m_skillGroupNameHasBeenSet;
}

string SkillGroupInfoItem::GetType() const
{
    return m_type;
}

void SkillGroupInfoItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SkillGroupInfoItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SkillGroupInfoItem::GetRoutePolicy() const
{
    return m_routePolicy;
}

void SkillGroupInfoItem::SetRoutePolicy(const string& _routePolicy)
{
    m_routePolicy = _routePolicy;
    m_routePolicyHasBeenSet = true;
}

bool SkillGroupInfoItem::RoutePolicyHasBeenSet() const
{
    return m_routePolicyHasBeenSet;
}

int64_t SkillGroupInfoItem::GetUsingLastSeat() const
{
    return m_usingLastSeat;
}

void SkillGroupInfoItem::SetUsingLastSeat(const int64_t& _usingLastSeat)
{
    m_usingLastSeat = _usingLastSeat;
    m_usingLastSeatHasBeenSet = true;
}

bool SkillGroupInfoItem::UsingLastSeatHasBeenSet() const
{
    return m_usingLastSeatHasBeenSet;
}

int64_t SkillGroupInfoItem::GetMaxConcurrency() const
{
    return m_maxConcurrency;
}

void SkillGroupInfoItem::SetMaxConcurrency(const int64_t& _maxConcurrency)
{
    m_maxConcurrency = _maxConcurrency;
    m_maxConcurrencyHasBeenSet = true;
}

bool SkillGroupInfoItem::MaxConcurrencyHasBeenSet() const
{
    return m_maxConcurrencyHasBeenSet;
}

int64_t SkillGroupInfoItem::GetLastModifyTimestamp() const
{
    return m_lastModifyTimestamp;
}

void SkillGroupInfoItem::SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp)
{
    m_lastModifyTimestamp = _lastModifyTimestamp;
    m_lastModifyTimestampHasBeenSet = true;
}

bool SkillGroupInfoItem::LastModifyTimestampHasBeenSet() const
{
    return m_lastModifyTimestampHasBeenSet;
}

int64_t SkillGroupInfoItem::GetSkillGroupType() const
{
    return m_skillGroupType;
}

void SkillGroupInfoItem::SetSkillGroupType(const int64_t& _skillGroupType)
{
    m_skillGroupType = _skillGroupType;
    m_skillGroupTypeHasBeenSet = true;
}

bool SkillGroupInfoItem::SkillGroupTypeHasBeenSet() const
{
    return m_skillGroupTypeHasBeenSet;
}

string SkillGroupInfoItem::GetAlias() const
{
    return m_alias;
}

void SkillGroupInfoItem::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool SkillGroupInfoItem::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

