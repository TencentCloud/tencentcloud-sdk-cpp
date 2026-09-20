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

#include <tencentcloud/ags/v20250920/model/EventActionsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

EventActionsInfo::EventActionsInfo() :
    m_stateDeltaHasBeenSet(false)
{
}

CoreInternalOutcome EventActionsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StateDelta") && !value["StateDelta"].IsNull())
    {
        if (!value["StateDelta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventActionsInfo.StateDelta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateDelta = string(value["StateDelta"].GetString());
        m_stateDeltaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventActionsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateDelta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateDelta.c_str(), allocator).Move(), allocator);
    }

}


string EventActionsInfo::GetStateDelta() const
{
    return m_stateDelta;
}

void EventActionsInfo::SetStateDelta(const string& _stateDelta)
{
    m_stateDelta = _stateDelta;
    m_stateDeltaHasBeenSet = true;
}

bool EventActionsInfo::StateDeltaHasBeenSet() const
{
    return m_stateDeltaHasBeenSet;
}

