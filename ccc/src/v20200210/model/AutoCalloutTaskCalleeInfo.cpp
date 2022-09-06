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

#include <tencentcloud/ccc/v20200210/model/AutoCalloutTaskCalleeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AutoCalloutTaskCalleeInfo::AutoCalloutTaskCalleeInfo() :
    m_calleeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sessionsHasBeenSet(false)
{
}

CoreInternalOutcome AutoCalloutTaskCalleeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskCalleeInfo.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskCalleeInfo.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Sessions") && !value["Sessions"].IsNull())
    {
        if (!value["Sessions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoCalloutTaskCalleeInfo.Sessions` is not array type"));

        const rapidjson::Value &tmpValue = value["Sessions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sessions.push_back((*itr).GetString());
        }
        m_sessionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoCalloutTaskCalleeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_sessionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sessions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sessions.begin(); itr != m_sessions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AutoCalloutTaskCalleeInfo::GetCallee() const
{
    return m_callee;
}

void AutoCalloutTaskCalleeInfo::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool AutoCalloutTaskCalleeInfo::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

uint64_t AutoCalloutTaskCalleeInfo::GetState() const
{
    return m_state;
}

void AutoCalloutTaskCalleeInfo::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AutoCalloutTaskCalleeInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> AutoCalloutTaskCalleeInfo::GetSessions() const
{
    return m_sessions;
}

void AutoCalloutTaskCalleeInfo::SetSessions(const vector<string>& _sessions)
{
    m_sessions = _sessions;
    m_sessionsHasBeenSet = true;
}

bool AutoCalloutTaskCalleeInfo::SessionsHasBeenSet() const
{
    return m_sessionsHasBeenSet;
}

