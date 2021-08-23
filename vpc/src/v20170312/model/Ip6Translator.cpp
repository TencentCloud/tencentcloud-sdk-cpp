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

#include <tencentcloud/vpc/v20170312/model/Ip6Translator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

Ip6Translator::Ip6Translator() :
    m_ip6TranslatorIdHasBeenSet(false),
    m_ip6TranslatorNameHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_ispNameHasBeenSet(false),
    m_translatorStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ip6RuleCountHasBeenSet(false),
    m_iP6RuleSetHasBeenSet(false)
{
}

CoreInternalOutcome Ip6Translator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip6TranslatorId") && !value["Ip6TranslatorId"].IsNull())
    {
        if (!value["Ip6TranslatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.Ip6TranslatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip6TranslatorId = string(value["Ip6TranslatorId"].GetString());
        m_ip6TranslatorIdHasBeenSet = true;
    }

    if (value.HasMember("Ip6TranslatorName") && !value["Ip6TranslatorName"].IsNull())
    {
        if (!value["Ip6TranslatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.Ip6TranslatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip6TranslatorName = string(value["Ip6TranslatorName"].GetString());
        m_ip6TranslatorNameHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("TranslatorStatus") && !value["TranslatorStatus"].IsNull())
    {
        if (!value["TranslatorStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.TranslatorStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translatorStatus = string(value["TranslatorStatus"].GetString());
        m_translatorStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Ip6RuleCount") && !value["Ip6RuleCount"].IsNull())
    {
        if (!value["Ip6RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.Ip6RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ip6RuleCount = value["Ip6RuleCount"].GetInt64();
        m_ip6RuleCountHasBeenSet = true;
    }

    if (value.HasMember("IP6RuleSet") && !value["IP6RuleSet"].IsNull())
    {
        if (!value["IP6RuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Ip6Translator.IP6RuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IP6RuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Ip6Rule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iP6RuleSet.push_back(item);
        }
        m_iP6RuleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Ip6Translator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ip6TranslatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip6TranslatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6TranslatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6TranslatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip6TranslatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_translatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslatorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translatorStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ip6RuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ip6RuleCount, allocator);
    }

    if (m_iP6RuleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP6RuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iP6RuleSet.begin(); itr != m_iP6RuleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Ip6Translator::GetIp6TranslatorId() const
{
    return m_ip6TranslatorId;
}

void Ip6Translator::SetIp6TranslatorId(const string& _ip6TranslatorId)
{
    m_ip6TranslatorId = _ip6TranslatorId;
    m_ip6TranslatorIdHasBeenSet = true;
}

bool Ip6Translator::Ip6TranslatorIdHasBeenSet() const
{
    return m_ip6TranslatorIdHasBeenSet;
}

string Ip6Translator::GetIp6TranslatorName() const
{
    return m_ip6TranslatorName;
}

void Ip6Translator::SetIp6TranslatorName(const string& _ip6TranslatorName)
{
    m_ip6TranslatorName = _ip6TranslatorName;
    m_ip6TranslatorNameHasBeenSet = true;
}

bool Ip6Translator::Ip6TranslatorNameHasBeenSet() const
{
    return m_ip6TranslatorNameHasBeenSet;
}

string Ip6Translator::GetVip6() const
{
    return m_vip6;
}

void Ip6Translator::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool Ip6Translator::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

string Ip6Translator::GetIspName() const
{
    return m_ispName;
}

void Ip6Translator::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool Ip6Translator::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

string Ip6Translator::GetTranslatorStatus() const
{
    return m_translatorStatus;
}

void Ip6Translator::SetTranslatorStatus(const string& _translatorStatus)
{
    m_translatorStatus = _translatorStatus;
    m_translatorStatusHasBeenSet = true;
}

bool Ip6Translator::TranslatorStatusHasBeenSet() const
{
    return m_translatorStatusHasBeenSet;
}

string Ip6Translator::GetCreatedTime() const
{
    return m_createdTime;
}

void Ip6Translator::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Ip6Translator::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t Ip6Translator::GetIp6RuleCount() const
{
    return m_ip6RuleCount;
}

void Ip6Translator::SetIp6RuleCount(const int64_t& _ip6RuleCount)
{
    m_ip6RuleCount = _ip6RuleCount;
    m_ip6RuleCountHasBeenSet = true;
}

bool Ip6Translator::Ip6RuleCountHasBeenSet() const
{
    return m_ip6RuleCountHasBeenSet;
}

vector<Ip6Rule> Ip6Translator::GetIP6RuleSet() const
{
    return m_iP6RuleSet;
}

void Ip6Translator::SetIP6RuleSet(const vector<Ip6Rule>& _iP6RuleSet)
{
    m_iP6RuleSet = _iP6RuleSet;
    m_iP6RuleSetHasBeenSet = true;
}

bool Ip6Translator::IP6RuleSetHasBeenSet() const
{
    return m_iP6RuleSetHasBeenSet;
}

