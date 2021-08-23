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

#include <tencentcloud/tke/v20180525/model/NodeCountSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

NodeCountSummary::NodeCountSummary() :
    m_manuallyAddedHasBeenSet(false),
    m_autoscalingAddedHasBeenSet(false)
{
}

CoreInternalOutcome NodeCountSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ManuallyAdded") && !value["ManuallyAdded"].IsNull())
    {
        if (!value["ManuallyAdded"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCountSummary.ManuallyAdded` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manuallyAdded.Deserialize(value["ManuallyAdded"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manuallyAddedHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingAdded") && !value["AutoscalingAdded"].IsNull())
    {
        if (!value["AutoscalingAdded"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCountSummary.AutoscalingAdded` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoscalingAdded.Deserialize(value["AutoscalingAdded"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoscalingAddedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeCountSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_manuallyAddedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManuallyAdded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manuallyAdded.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoscalingAddedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingAdded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoscalingAdded.ToJsonObject(value[key.c_str()], allocator);
    }

}


ManuallyAdded NodeCountSummary::GetManuallyAdded() const
{
    return m_manuallyAdded;
}

void NodeCountSummary::SetManuallyAdded(const ManuallyAdded& _manuallyAdded)
{
    m_manuallyAdded = _manuallyAdded;
    m_manuallyAddedHasBeenSet = true;
}

bool NodeCountSummary::ManuallyAddedHasBeenSet() const
{
    return m_manuallyAddedHasBeenSet;
}

AutoscalingAdded NodeCountSummary::GetAutoscalingAdded() const
{
    return m_autoscalingAdded;
}

void NodeCountSummary::SetAutoscalingAdded(const AutoscalingAdded& _autoscalingAdded)
{
    m_autoscalingAdded = _autoscalingAdded;
    m_autoscalingAddedHasBeenSet = true;
}

bool NodeCountSummary::AutoscalingAddedHasBeenSet() const
{
    return m_autoscalingAddedHasBeenSet;
}

