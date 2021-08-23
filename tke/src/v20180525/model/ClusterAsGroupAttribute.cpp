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

#include <tencentcloud/tke/v20180525/model/ClusterAsGroupAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterAsGroupAttribute::ClusterAsGroupAttribute() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_autoScalingGroupEnabledHasBeenSet(false),
    m_autoScalingGroupRangeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterAsGroupAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAsGroupAttribute.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupEnabled") && !value["AutoScalingGroupEnabled"].IsNull())
    {
        if (!value["AutoScalingGroupEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAsGroupAttribute.AutoScalingGroupEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupEnabled = value["AutoScalingGroupEnabled"].GetBool();
        m_autoScalingGroupEnabledHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupRange") && !value["AutoScalingGroupRange"].IsNull())
    {
        if (!value["AutoScalingGroupRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterAsGroupAttribute.AutoScalingGroupRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoScalingGroupRange.Deserialize(value["AutoScalingGroupRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoScalingGroupRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterAsGroupAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScalingGroupEnabled, allocator);
    }

    if (m_autoScalingGroupRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScalingGroupRange.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClusterAsGroupAttribute::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ClusterAsGroupAttribute::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ClusterAsGroupAttribute::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

bool ClusterAsGroupAttribute::GetAutoScalingGroupEnabled() const
{
    return m_autoScalingGroupEnabled;
}

void ClusterAsGroupAttribute::SetAutoScalingGroupEnabled(const bool& _autoScalingGroupEnabled)
{
    m_autoScalingGroupEnabled = _autoScalingGroupEnabled;
    m_autoScalingGroupEnabledHasBeenSet = true;
}

bool ClusterAsGroupAttribute::AutoScalingGroupEnabledHasBeenSet() const
{
    return m_autoScalingGroupEnabledHasBeenSet;
}

AutoScalingGroupRange ClusterAsGroupAttribute::GetAutoScalingGroupRange() const
{
    return m_autoScalingGroupRange;
}

void ClusterAsGroupAttribute::SetAutoScalingGroupRange(const AutoScalingGroupRange& _autoScalingGroupRange)
{
    m_autoScalingGroupRange = _autoScalingGroupRange;
    m_autoScalingGroupRangeHasBeenSet = true;
}

bool ClusterAsGroupAttribute::AutoScalingGroupRangeHasBeenSet() const
{
    return m_autoScalingGroupRangeHasBeenSet;
}

