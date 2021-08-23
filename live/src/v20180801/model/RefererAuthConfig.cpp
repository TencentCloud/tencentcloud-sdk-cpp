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

#include <tencentcloud/live/v20180801/model/RefererAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RefererAuthConfig::RefererAuthConfig() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_allowEmptyHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CoreInternalOutcome RefererAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthConfig.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthConfig.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthConfig.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AllowEmpty") && !value["AllowEmpty"].IsNull())
    {
        if (!value["AllowEmpty"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthConfig.AllowEmpty` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowEmpty = value["AllowEmpty"].GetInt64();
        m_allowEmptyHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererAuthConfig.Rules` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rules = string(value["Rules"].GetString());
        m_rulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefererAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_allowEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowEmpty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowEmpty, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rules.c_str(), allocator).Move(), allocator);
    }

}


string RefererAuthConfig::GetDomainName() const
{
    return m_domainName;
}

void RefererAuthConfig::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool RefererAuthConfig::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t RefererAuthConfig::GetEnable() const
{
    return m_enable;
}

void RefererAuthConfig::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool RefererAuthConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t RefererAuthConfig::GetType() const
{
    return m_type;
}

void RefererAuthConfig::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RefererAuthConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RefererAuthConfig::GetAllowEmpty() const
{
    return m_allowEmpty;
}

void RefererAuthConfig::SetAllowEmpty(const int64_t& _allowEmpty)
{
    m_allowEmpty = _allowEmpty;
    m_allowEmptyHasBeenSet = true;
}

bool RefererAuthConfig::AllowEmptyHasBeenSet() const
{
    return m_allowEmptyHasBeenSet;
}

string RefererAuthConfig::GetRules() const
{
    return m_rules;
}

void RefererAuthConfig::SetRules(const string& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool RefererAuthConfig::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

