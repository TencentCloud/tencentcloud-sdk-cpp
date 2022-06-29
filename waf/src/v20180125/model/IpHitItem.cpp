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

#include <tencentcloud/waf/v20180125/model/IpHitItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IpHitItem::IpHitItem() :
    m_actionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_validTsHasBeenSet(false)
{
}

CoreInternalOutcome IpHitItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.Action` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetUint64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.TsVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetUint64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("ValidTs") && !value["ValidTs"].IsNull())
    {
        if (!value["ValidTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpHitItem.ValidTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTs = value["ValidTs"].GetUint64();
        m_validTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpHitItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_validTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTs, allocator);
    }

}


uint64_t IpHitItem::GetAction() const
{
    return m_action;
}

void IpHitItem::SetAction(const uint64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool IpHitItem::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string IpHitItem::GetCategory() const
{
    return m_category;
}

void IpHitItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool IpHitItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string IpHitItem::GetIp() const
{
    return m_ip;
}

void IpHitItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpHitItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string IpHitItem::GetName() const
{
    return m_name;
}

void IpHitItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IpHitItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t IpHitItem::GetTsVersion() const
{
    return m_tsVersion;
}

void IpHitItem::SetTsVersion(const uint64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool IpHitItem::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

uint64_t IpHitItem::GetValidTs() const
{
    return m_validTs;
}

void IpHitItem::SetValidTs(const uint64_t& _validTs)
{
    m_validTs = _validTs;
    m_validTsHasBeenSet = true;
}

bool IpHitItem::ValidTsHasBeenSet() const
{
    return m_validTsHasBeenSet;
}

