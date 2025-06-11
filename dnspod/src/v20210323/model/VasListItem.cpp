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

#include <tencentcloud/dnspod/v20210323/model/VasListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

VasListItem::VasListItem() :
    m_limitNumberHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_canRenewHasBeenSet(false),
    m_vipDomainHasBeenSet(false)
{
}

CoreInternalOutcome VasListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitNumber") && !value["LimitNumber"].IsNull())
    {
        if (!value["LimitNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.LimitNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitNumber = value["LimitNumber"].GetUint64();
        m_limitNumberHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("EndedAt") && !value["EndedAt"].IsNull())
    {
        if (!value["EndedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.EndedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endedAt = string(value["EndedAt"].GetString());
        m_endedAtHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.AutoRenew` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = string(value["AutoRenew"].GetString());
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.BindType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = string(value["BindType"].GetString());
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CanRenew") && !value["CanRenew"].IsNull())
    {
        if (!value["CanRenew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.CanRenew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRenew = value["CanRenew"].GetBool();
        m_canRenewHasBeenSet = true;
    }

    if (value.HasMember("VipDomain") && !value["VipDomain"].IsNull())
    {
        if (!value["VipDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VasListItem.VipDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_vipDomain = value["VipDomain"].GetBool();
        m_vipDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VasListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitNumber, allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoRenew.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_canRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRenew, allocator);
    }

    if (m_vipDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipDomain, allocator);
    }

}


uint64_t VasListItem::GetLimitNumber() const
{
    return m_limitNumber;
}

void VasListItem::SetLimitNumber(const uint64_t& _limitNumber)
{
    m_limitNumber = _limitNumber;
    m_limitNumberHasBeenSet = true;
}

bool VasListItem::LimitNumberHasBeenSet() const
{
    return m_limitNumberHasBeenSet;
}

string VasListItem::GetStartedAt() const
{
    return m_startedAt;
}

void VasListItem::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool VasListItem::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

string VasListItem::GetEndedAt() const
{
    return m_endedAt;
}

void VasListItem::SetEndedAt(const string& _endedAt)
{
    m_endedAt = _endedAt;
    m_endedAtHasBeenSet = true;
}

bool VasListItem::EndedAtHasBeenSet() const
{
    return m_endedAtHasBeenSet;
}

string VasListItem::GetResourceId() const
{
    return m_resourceId;
}

void VasListItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool VasListItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string VasListItem::GetAutoRenew() const
{
    return m_autoRenew;
}

void VasListItem::SetAutoRenew(const string& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool VasListItem::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string VasListItem::GetDomain() const
{
    return m_domain;
}

void VasListItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool VasListItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string VasListItem::GetBindType() const
{
    return m_bindType;
}

void VasListItem::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool VasListItem::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string VasListItem::GetKey() const
{
    return m_key;
}

void VasListItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool VasListItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string VasListItem::GetName() const
{
    return m_name;
}

void VasListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VasListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool VasListItem::GetCanRenew() const
{
    return m_canRenew;
}

void VasListItem::SetCanRenew(const bool& _canRenew)
{
    m_canRenew = _canRenew;
    m_canRenewHasBeenSet = true;
}

bool VasListItem::CanRenewHasBeenSet() const
{
    return m_canRenewHasBeenSet;
}

bool VasListItem::GetVipDomain() const
{
    return m_vipDomain;
}

void VasListItem::SetVipDomain(const bool& _vipDomain)
{
    m_vipDomain = _vipDomain;
    m_vipDomainHasBeenSet = true;
}

bool VasListItem::VipDomainHasBeenSet() const
{
    return m_vipDomainHasBeenSet;
}

