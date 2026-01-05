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

#include <tencentcloud/wedata/v20250806/model/TriggerTaskDAGBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTaskDAGBrief::TriggerTaskDAGBrief() :
    m_triggerTasksHasBeenSet(false),
    m_triggerTaskLinksHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTaskDAGBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerTasks") && !value["TriggerTasks"].IsNull())
    {
        if (!value["TriggerTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerTaskDAGBrief.TriggerTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerTaskBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerTasks.push_back(item);
        }
        m_triggerTasksHasBeenSet = true;
    }

    if (value.HasMember("TriggerTaskLinks") && !value["TriggerTaskLinks"].IsNull())
    {
        if (!value["TriggerTaskLinks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerTaskDAGBrief.TriggerTaskLinks` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerTaskLinks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerTaskLinkBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerTaskLinks.push_back(item);
        }
        m_triggerTaskLinksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTaskDAGBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTasks.begin(); itr != m_triggerTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerTaskLinksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskLinks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTaskLinks.begin(); itr != m_triggerTaskLinks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TriggerTaskBrief> TriggerTaskDAGBrief::GetTriggerTasks() const
{
    return m_triggerTasks;
}

void TriggerTaskDAGBrief::SetTriggerTasks(const vector<TriggerTaskBrief>& _triggerTasks)
{
    m_triggerTasks = _triggerTasks;
    m_triggerTasksHasBeenSet = true;
}

bool TriggerTaskDAGBrief::TriggerTasksHasBeenSet() const
{
    return m_triggerTasksHasBeenSet;
}

vector<TriggerTaskLinkBrief> TriggerTaskDAGBrief::GetTriggerTaskLinks() const
{
    return m_triggerTaskLinks;
}

void TriggerTaskDAGBrief::SetTriggerTaskLinks(const vector<TriggerTaskLinkBrief>& _triggerTaskLinks)
{
    m_triggerTaskLinks = _triggerTaskLinks;
    m_triggerTaskLinksHasBeenSet = true;
}

bool TriggerTaskDAGBrief::TriggerTaskLinksHasBeenSet() const
{
    return m_triggerTaskLinksHasBeenSet;
}

