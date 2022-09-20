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

#include <tencentcloud/teo/v20220901/model/BotPortraitRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotPortraitRule::BotPortraitRule() :
    m_switchHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_algManagedIdsHasBeenSet(false),
    m_capManagedIdsHasBeenSet(false),
    m_monManagedIdsHasBeenSet(false),
    m_dropManagedIdsHasBeenSet(false)
{
}

CoreInternalOutcome BotPortraitRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("AlgManagedIds") && !value["AlgManagedIds"].IsNull())
    {
        if (!value["AlgManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.AlgManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlgManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_algManagedIds.push_back((*itr).GetInt64());
        }
        m_algManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("CapManagedIds") && !value["CapManagedIds"].IsNull())
    {
        if (!value["CapManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.CapManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CapManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_capManagedIds.push_back((*itr).GetInt64());
        }
        m_capManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("MonManagedIds") && !value["MonManagedIds"].IsNull())
    {
        if (!value["MonManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.MonManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MonManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monManagedIds.push_back((*itr).GetInt64());
        }
        m_monManagedIdsHasBeenSet = true;
    }

    if (value.HasMember("DropManagedIds") && !value["DropManagedIds"].IsNull())
    {
        if (!value["DropManagedIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotPortraitRule.DropManagedIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DropManagedIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dropManagedIds.push_back((*itr).GetInt64());
        }
        m_dropManagedIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotPortraitRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_algManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_algManagedIds.begin(); itr != m_algManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_capManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_capManagedIds.begin(); itr != m_capManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_monManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monManagedIds.begin(); itr != m_monManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dropManagedIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropManagedIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dropManagedIds.begin(); itr != m_dropManagedIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string BotPortraitRule::GetSwitch() const
{
    return m_switch;
}

void BotPortraitRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool BotPortraitRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t BotPortraitRule::GetRuleID() const
{
    return m_ruleID;
}

void BotPortraitRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool BotPortraitRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

vector<int64_t> BotPortraitRule::GetAlgManagedIds() const
{
    return m_algManagedIds;
}

void BotPortraitRule::SetAlgManagedIds(const vector<int64_t>& _algManagedIds)
{
    m_algManagedIds = _algManagedIds;
    m_algManagedIdsHasBeenSet = true;
}

bool BotPortraitRule::AlgManagedIdsHasBeenSet() const
{
    return m_algManagedIdsHasBeenSet;
}

vector<int64_t> BotPortraitRule::GetCapManagedIds() const
{
    return m_capManagedIds;
}

void BotPortraitRule::SetCapManagedIds(const vector<int64_t>& _capManagedIds)
{
    m_capManagedIds = _capManagedIds;
    m_capManagedIdsHasBeenSet = true;
}

bool BotPortraitRule::CapManagedIdsHasBeenSet() const
{
    return m_capManagedIdsHasBeenSet;
}

vector<int64_t> BotPortraitRule::GetMonManagedIds() const
{
    return m_monManagedIds;
}

void BotPortraitRule::SetMonManagedIds(const vector<int64_t>& _monManagedIds)
{
    m_monManagedIds = _monManagedIds;
    m_monManagedIdsHasBeenSet = true;
}

bool BotPortraitRule::MonManagedIdsHasBeenSet() const
{
    return m_monManagedIdsHasBeenSet;
}

vector<int64_t> BotPortraitRule::GetDropManagedIds() const
{
    return m_dropManagedIds;
}

void BotPortraitRule::SetDropManagedIds(const vector<int64_t>& _dropManagedIds)
{
    m_dropManagedIds = _dropManagedIds;
    m_dropManagedIdsHasBeenSet = true;
}

bool BotPortraitRule::DropManagedIdsHasBeenSet() const
{
    return m_dropManagedIdsHasBeenSet;
}

