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

#include <tencentcloud/tcb/v20180608/model/CloudAppWebHook.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppWebHook::CloudAppWebHook() :
    m_enabledHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppWebHook::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppWebHook.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Branches") && !value["Branches"].IsNull())
    {
        if (!value["Branches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudAppWebHook.Branches` is not array type"));

        const rapidjson::Value &tmpValue = value["Branches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_branches.push_back((*itr).GetString());
        }
        m_branchesHasBeenSet = true;
    }

    if (value.HasMember("Events") && !value["Events"].IsNull())
    {
        if (!value["Events"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudAppWebHook.Events` is not array type"));

        const rapidjson::Value &tmpValue = value["Events"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_events.push_back((*itr).GetString());
        }
        m_eventsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppWebHook::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_branchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_branches.begin(); itr != m_branches.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Events";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_events.begin(); itr != m_events.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool CloudAppWebHook::GetEnabled() const
{
    return m_enabled;
}

void CloudAppWebHook::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CloudAppWebHook::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> CloudAppWebHook::GetBranches() const
{
    return m_branches;
}

void CloudAppWebHook::SetBranches(const vector<string>& _branches)
{
    m_branches = _branches;
    m_branchesHasBeenSet = true;
}

bool CloudAppWebHook::BranchesHasBeenSet() const
{
    return m_branchesHasBeenSet;
}

vector<string> CloudAppWebHook::GetEvents() const
{
    return m_events;
}

void CloudAppWebHook::SetEvents(const vector<string>& _events)
{
    m_events = _events;
    m_eventsHasBeenSet = true;
}

bool CloudAppWebHook::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

