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

#include <tencentcloud/tsf/v20180326/model/SchedulingStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

SchedulingStrategy::SchedulingStrategy() :
    m_typeHasBeenSet(false),
    m_nodeScheduleStrategyTypeHasBeenSet(false),
    m_nodeScheduleOptionsHasBeenSet(false),
    m_strongAffinityListHasBeenSet(false),
    m_weakAffinityListHasBeenSet(false),
    m_weakAffinityWeightHasBeenSet(false),
    m_availableZoneScatterScheduleTypeHasBeenSet(false),
    m_availableZoneScatterScheduleRulesHasBeenSet(false),
    m_podScheduleStrategyTypeHasBeenSet(false),
    m_customPodScheduleHasBeenSet(false),
    m_tolerateScheduleTypeHasBeenSet(false),
    m_customTolerateSchedulesHasBeenSet(false)
{
}

CoreInternalOutcome SchedulingStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NodeScheduleStrategyType") && !value["NodeScheduleStrategyType"].IsNull())
    {
        if (!value["NodeScheduleStrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.NodeScheduleStrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeScheduleStrategyType = string(value["NodeScheduleStrategyType"].GetString());
        m_nodeScheduleStrategyTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeScheduleOptions") && !value["NodeScheduleOptions"].IsNull())
    {
        if (!value["NodeScheduleOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.NodeScheduleOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeScheduleOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeScheduleOptions.push_back(item);
        }
        m_nodeScheduleOptionsHasBeenSet = true;
    }

    if (value.HasMember("StrongAffinityList") && !value["StrongAffinityList"].IsNull())
    {
        if (!value["StrongAffinityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.StrongAffinityList` is not array type"));

        const rapidjson::Value &tmpValue = value["StrongAffinityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strongAffinityList.push_back(item);
        }
        m_strongAffinityListHasBeenSet = true;
    }

    if (value.HasMember("WeakAffinityList") && !value["WeakAffinityList"].IsNull())
    {
        if (!value["WeakAffinityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.WeakAffinityList` is not array type"));

        const rapidjson::Value &tmpValue = value["WeakAffinityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weakAffinityList.push_back(item);
        }
        m_weakAffinityListHasBeenSet = true;
    }

    if (value.HasMember("WeakAffinityWeight") && !value["WeakAffinityWeight"].IsNull())
    {
        if (!value["WeakAffinityWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.WeakAffinityWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weakAffinityWeight = value["WeakAffinityWeight"].GetInt64();
        m_weakAffinityWeightHasBeenSet = true;
    }

    if (value.HasMember("AvailableZoneScatterScheduleType") && !value["AvailableZoneScatterScheduleType"].IsNull())
    {
        if (!value["AvailableZoneScatterScheduleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.AvailableZoneScatterScheduleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableZoneScatterScheduleType = string(value["AvailableZoneScatterScheduleType"].GetString());
        m_availableZoneScatterScheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("AvailableZoneScatterScheduleRules") && !value["AvailableZoneScatterScheduleRules"].IsNull())
    {
        if (!value["AvailableZoneScatterScheduleRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.AvailableZoneScatterScheduleRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailableZoneScatterScheduleRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvailableZoneScatterScheduleRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_availableZoneScatterScheduleRules.push_back(item);
        }
        m_availableZoneScatterScheduleRulesHasBeenSet = true;
    }

    if (value.HasMember("PodScheduleStrategyType") && !value["PodScheduleStrategyType"].IsNull())
    {
        if (!value["PodScheduleStrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.PodScheduleStrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podScheduleStrategyType = string(value["PodScheduleStrategyType"].GetString());
        m_podScheduleStrategyTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomPodSchedule") && !value["CustomPodSchedule"].IsNull())
    {
        if (!value["CustomPodSchedule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.CustomPodSchedule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customPodSchedule.Deserialize(value["CustomPodSchedule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customPodScheduleHasBeenSet = true;
    }

    if (value.HasMember("TolerateScheduleType") && !value["TolerateScheduleType"].IsNull())
    {
        if (!value["TolerateScheduleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.TolerateScheduleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tolerateScheduleType = string(value["TolerateScheduleType"].GetString());
        m_tolerateScheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomTolerateSchedules") && !value["CustomTolerateSchedules"].IsNull())
    {
        if (!value["CustomTolerateSchedules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulingStrategy.CustomTolerateSchedules` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomTolerateSchedules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomTolerateSchedule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customTolerateSchedules.push_back(item);
        }
        m_customTolerateSchedulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulingStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeScheduleStrategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeScheduleStrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeScheduleStrategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeScheduleOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeScheduleOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeScheduleOptions.begin(); itr != m_nodeScheduleOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_strongAffinityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrongAffinityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strongAffinityList.begin(); itr != m_strongAffinityList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weakAffinityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakAffinityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weakAffinityList.begin(); itr != m_weakAffinityList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weakAffinityWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakAffinityWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weakAffinityWeight, allocator);
    }

    if (m_availableZoneScatterScheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZoneScatterScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableZoneScatterScheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_availableZoneScatterScheduleRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZoneScatterScheduleRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availableZoneScatterScheduleRules.begin(); itr != m_availableZoneScatterScheduleRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_podScheduleStrategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodScheduleStrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podScheduleStrategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_customPodScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPodSchedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customPodSchedule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tolerateScheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TolerateScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tolerateScheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_customTolerateSchedulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTolerateSchedules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customTolerateSchedules.begin(); itr != m_customTolerateSchedules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SchedulingStrategy::GetType() const
{
    return m_type;
}

void SchedulingStrategy::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SchedulingStrategy::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SchedulingStrategy::GetNodeScheduleStrategyType() const
{
    return m_nodeScheduleStrategyType;
}

void SchedulingStrategy::SetNodeScheduleStrategyType(const string& _nodeScheduleStrategyType)
{
    m_nodeScheduleStrategyType = _nodeScheduleStrategyType;
    m_nodeScheduleStrategyTypeHasBeenSet = true;
}

bool SchedulingStrategy::NodeScheduleStrategyTypeHasBeenSet() const
{
    return m_nodeScheduleStrategyTypeHasBeenSet;
}

vector<CommonOption> SchedulingStrategy::GetNodeScheduleOptions() const
{
    return m_nodeScheduleOptions;
}

void SchedulingStrategy::SetNodeScheduleOptions(const vector<CommonOption>& _nodeScheduleOptions)
{
    m_nodeScheduleOptions = _nodeScheduleOptions;
    m_nodeScheduleOptionsHasBeenSet = true;
}

bool SchedulingStrategy::NodeScheduleOptionsHasBeenSet() const
{
    return m_nodeScheduleOptionsHasBeenSet;
}

vector<CommonOption> SchedulingStrategy::GetStrongAffinityList() const
{
    return m_strongAffinityList;
}

void SchedulingStrategy::SetStrongAffinityList(const vector<CommonOption>& _strongAffinityList)
{
    m_strongAffinityList = _strongAffinityList;
    m_strongAffinityListHasBeenSet = true;
}

bool SchedulingStrategy::StrongAffinityListHasBeenSet() const
{
    return m_strongAffinityListHasBeenSet;
}

vector<CommonOption> SchedulingStrategy::GetWeakAffinityList() const
{
    return m_weakAffinityList;
}

void SchedulingStrategy::SetWeakAffinityList(const vector<CommonOption>& _weakAffinityList)
{
    m_weakAffinityList = _weakAffinityList;
    m_weakAffinityListHasBeenSet = true;
}

bool SchedulingStrategy::WeakAffinityListHasBeenSet() const
{
    return m_weakAffinityListHasBeenSet;
}

int64_t SchedulingStrategy::GetWeakAffinityWeight() const
{
    return m_weakAffinityWeight;
}

void SchedulingStrategy::SetWeakAffinityWeight(const int64_t& _weakAffinityWeight)
{
    m_weakAffinityWeight = _weakAffinityWeight;
    m_weakAffinityWeightHasBeenSet = true;
}

bool SchedulingStrategy::WeakAffinityWeightHasBeenSet() const
{
    return m_weakAffinityWeightHasBeenSet;
}

string SchedulingStrategy::GetAvailableZoneScatterScheduleType() const
{
    return m_availableZoneScatterScheduleType;
}

void SchedulingStrategy::SetAvailableZoneScatterScheduleType(const string& _availableZoneScatterScheduleType)
{
    m_availableZoneScatterScheduleType = _availableZoneScatterScheduleType;
    m_availableZoneScatterScheduleTypeHasBeenSet = true;
}

bool SchedulingStrategy::AvailableZoneScatterScheduleTypeHasBeenSet() const
{
    return m_availableZoneScatterScheduleTypeHasBeenSet;
}

vector<AvailableZoneScatterScheduleRule> SchedulingStrategy::GetAvailableZoneScatterScheduleRules() const
{
    return m_availableZoneScatterScheduleRules;
}

void SchedulingStrategy::SetAvailableZoneScatterScheduleRules(const vector<AvailableZoneScatterScheduleRule>& _availableZoneScatterScheduleRules)
{
    m_availableZoneScatterScheduleRules = _availableZoneScatterScheduleRules;
    m_availableZoneScatterScheduleRulesHasBeenSet = true;
}

bool SchedulingStrategy::AvailableZoneScatterScheduleRulesHasBeenSet() const
{
    return m_availableZoneScatterScheduleRulesHasBeenSet;
}

string SchedulingStrategy::GetPodScheduleStrategyType() const
{
    return m_podScheduleStrategyType;
}

void SchedulingStrategy::SetPodScheduleStrategyType(const string& _podScheduleStrategyType)
{
    m_podScheduleStrategyType = _podScheduleStrategyType;
    m_podScheduleStrategyTypeHasBeenSet = true;
}

bool SchedulingStrategy::PodScheduleStrategyTypeHasBeenSet() const
{
    return m_podScheduleStrategyTypeHasBeenSet;
}

CustomPodSchedule SchedulingStrategy::GetCustomPodSchedule() const
{
    return m_customPodSchedule;
}

void SchedulingStrategy::SetCustomPodSchedule(const CustomPodSchedule& _customPodSchedule)
{
    m_customPodSchedule = _customPodSchedule;
    m_customPodScheduleHasBeenSet = true;
}

bool SchedulingStrategy::CustomPodScheduleHasBeenSet() const
{
    return m_customPodScheduleHasBeenSet;
}

string SchedulingStrategy::GetTolerateScheduleType() const
{
    return m_tolerateScheduleType;
}

void SchedulingStrategy::SetTolerateScheduleType(const string& _tolerateScheduleType)
{
    m_tolerateScheduleType = _tolerateScheduleType;
    m_tolerateScheduleTypeHasBeenSet = true;
}

bool SchedulingStrategy::TolerateScheduleTypeHasBeenSet() const
{
    return m_tolerateScheduleTypeHasBeenSet;
}

vector<CustomTolerateSchedule> SchedulingStrategy::GetCustomTolerateSchedules() const
{
    return m_customTolerateSchedules;
}

void SchedulingStrategy::SetCustomTolerateSchedules(const vector<CustomTolerateSchedule>& _customTolerateSchedules)
{
    m_customTolerateSchedules = _customTolerateSchedules;
    m_customTolerateSchedulesHasBeenSet = true;
}

bool SchedulingStrategy::CustomTolerateSchedulesHasBeenSet() const
{
    return m_customTolerateSchedulesHasBeenSet;
}

