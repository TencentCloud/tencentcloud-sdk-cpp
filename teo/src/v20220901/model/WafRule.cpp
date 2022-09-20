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

#include <tencentcloud/teo/v20220901/model/WafRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WafRule::WafRule() :
    m_switchHasBeenSet(false),
    m_blockRuleIDsHasBeenSet(false),
    m_observeRuleIDsHasBeenSet(false)
{
}

CoreInternalOutcome WafRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BlockRuleIDs") && !value["BlockRuleIDs"].IsNull())
    {
        if (!value["BlockRuleIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafRule.BlockRuleIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["BlockRuleIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_blockRuleIDs.push_back((*itr).GetInt64());
        }
        m_blockRuleIDsHasBeenSet = true;
    }

    if (value.HasMember("ObserveRuleIDs") && !value["ObserveRuleIDs"].IsNull())
    {
        if (!value["ObserveRuleIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafRule.ObserveRuleIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ObserveRuleIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_observeRuleIDs.push_back((*itr).GetInt64());
        }
        m_observeRuleIDsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_blockRuleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockRuleIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blockRuleIDs.begin(); itr != m_blockRuleIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_observeRuleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObserveRuleIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_observeRuleIDs.begin(); itr != m_observeRuleIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string WafRule::GetSwitch() const
{
    return m_switch;
}

void WafRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool WafRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<int64_t> WafRule::GetBlockRuleIDs() const
{
    return m_blockRuleIDs;
}

void WafRule::SetBlockRuleIDs(const vector<int64_t>& _blockRuleIDs)
{
    m_blockRuleIDs = _blockRuleIDs;
    m_blockRuleIDsHasBeenSet = true;
}

bool WafRule::BlockRuleIDsHasBeenSet() const
{
    return m_blockRuleIDsHasBeenSet;
}

vector<int64_t> WafRule::GetObserveRuleIDs() const
{
    return m_observeRuleIDs;
}

void WafRule::SetObserveRuleIDs(const vector<int64_t>& _observeRuleIDs)
{
    m_observeRuleIDs = _observeRuleIDs;
    m_observeRuleIDsHasBeenSet = true;
}

bool WafRule::ObserveRuleIDsHasBeenSet() const
{
    return m_observeRuleIDsHasBeenSet;
}

