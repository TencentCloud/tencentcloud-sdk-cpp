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

#include <tencentcloud/dayu/v20180709/model/L4DelRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

L4DelRule::L4DelRule() :
    m_idHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ruleIdListHasBeenSet(false)
{
}

CoreInternalOutcome L4DelRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4DelRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4DelRule.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("RuleIdList") && !value["RuleIdList"].IsNull())
    {
        if (!value["RuleIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L4DelRule.RuleIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleIdList.push_back((*itr).GetString());
        }
        m_ruleIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4DelRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIdList.begin(); itr != m_ruleIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string L4DelRule::GetId() const
{
    return m_id;
}

void L4DelRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool L4DelRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string L4DelRule::GetIp() const
{
    return m_ip;
}

void L4DelRule::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool L4DelRule::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<string> L4DelRule::GetRuleIdList() const
{
    return m_ruleIdList;
}

void L4DelRule::SetRuleIdList(const vector<string>& _ruleIdList)
{
    m_ruleIdList = _ruleIdList;
    m_ruleIdListHasBeenSet = true;
}

bool L4DelRule::RuleIdListHasBeenSet() const
{
    return m_ruleIdListHasBeenSet;
}

