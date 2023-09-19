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

#include <tencentcloud/mps/v20190612/model/ComposeTransitionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeTransitionItem::ComposeTransitionItem() :
    m_durationHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
}

CoreInternalOutcome ComposeTransitionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTransitionItem.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Transitions") && !value["Transitions"].IsNull())
    {
        if (!value["Transitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeTransitionItem.Transitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Transitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeTransitionOperation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transitions.push_back(item);
        }
        m_transitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeTransitionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_transitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transitions.begin(); itr != m_transitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ComposeTransitionItem::GetDuration() const
{
    return m_duration;
}

void ComposeTransitionItem::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ComposeTransitionItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<ComposeTransitionOperation> ComposeTransitionItem::GetTransitions() const
{
    return m_transitions;
}

void ComposeTransitionItem::SetTransitions(const vector<ComposeTransitionOperation>& _transitions)
{
    m_transitions = _transitions;
    m_transitionsHasBeenSet = true;
}

bool ComposeTransitionItem::TransitionsHasBeenSet() const
{
    return m_transitionsHasBeenSet;
}

