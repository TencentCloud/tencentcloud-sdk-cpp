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

#include <tencentcloud/cdn/v20180606/model/AccessControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

AccessControl::AccessControl() :
    m_switchHasBeenSet(false),
    m_accessControlRulesHasBeenSet(false),
    m_returnCodeHasBeenSet(false)
{
}

CoreInternalOutcome AccessControl::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessControl.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AccessControlRules") && !value["AccessControlRules"].IsNull())
    {
        if (!value["AccessControlRules"].IsArray())
            return CoreInternalOutcome(Error("response `AccessControl.AccessControlRules` is not array type"));

        const Value &tmpValue = value["AccessControlRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessControlRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessControlRules.push_back(item);
        }
        m_accessControlRulesHasBeenSet = true;
    }

    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AccessControl.ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = value["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControl::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_accessControlRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessControlRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessControlRules.begin(); itr != m_accessControlRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_returnCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

}


string AccessControl::GetSwitch() const
{
    return m_switch;
}

void AccessControl::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AccessControl::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<AccessControlRule> AccessControl::GetAccessControlRules() const
{
    return m_accessControlRules;
}

void AccessControl::SetAccessControlRules(const vector<AccessControlRule>& _accessControlRules)
{
    m_accessControlRules = _accessControlRules;
    m_accessControlRulesHasBeenSet = true;
}

bool AccessControl::AccessControlRulesHasBeenSet() const
{
    return m_accessControlRulesHasBeenSet;
}

int64_t AccessControl::GetReturnCode() const
{
    return m_returnCode;
}

void AccessControl::SetReturnCode(const int64_t& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool AccessControl::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

