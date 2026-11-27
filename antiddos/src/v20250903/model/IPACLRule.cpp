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

#include <tencentcloud/antiddos/v20250903/model/IPACLRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

IPACLRule::IPACLRule() :
    m_actionHasBeenSet(false),
    m_iPsHasBeenSet(false)
{
}

CoreInternalOutcome IPACLRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPACLRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("IPs") && !value["IPs"].IsNull())
    {
        if (!value["IPs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPACLRule.IPs` is not array type"));

        const rapidjson::Value &tmpValue = value["IPs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPs.push_back((*itr).GetString());
        }
        m_iPsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPACLRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_iPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPs.begin(); itr != m_iPs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IPACLRule::GetAction() const
{
    return m_action;
}

void IPACLRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool IPACLRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

vector<string> IPACLRule::GetIPs() const
{
    return m_iPs;
}

void IPACLRule::SetIPs(const vector<string>& _iPs)
{
    m_iPs = _iPs;
    m_iPsHasBeenSet = true;
}

bool IPACLRule::IPsHasBeenSet() const
{
    return m_iPsHasBeenSet;
}

