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

#include <tencentcloud/cdn/v20180606/model/WafSubRuleStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

WafSubRuleStatus::WafSubRuleStatus() :
    m_switchHasBeenSet(false),
    m_subIdsHasBeenSet(false)
{
}

CoreInternalOutcome WafSubRuleStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafSubRuleStatus.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("SubIds") && !value["SubIds"].IsNull())
    {
        if (!value["SubIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafSubRuleStatus.SubIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subIds.push_back((*itr).GetInt64());
        }
        m_subIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafSubRuleStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_subIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subIds.begin(); itr != m_subIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string WafSubRuleStatus::GetSwitch() const
{
    return m_switch;
}

void WafSubRuleStatus::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool WafSubRuleStatus::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<int64_t> WafSubRuleStatus::GetSubIds() const
{
    return m_subIds;
}

void WafSubRuleStatus::SetSubIds(const vector<int64_t>& _subIds)
{
    m_subIds = _subIds;
    m_subIdsHasBeenSet = true;
}

bool WafSubRuleStatus::SubIdsHasBeenSet() const
{
    return m_subIdsHasBeenSet;
}

