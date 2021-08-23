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

#include <tencentcloud/antiddos/v20200309/model/IPAlarmThresholdRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

IPAlarmThresholdRelation::IPAlarmThresholdRelation() :
    m_alarmTypeHasBeenSet(false),
    m_alarmThresholdHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome IPAlarmThresholdRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPAlarmThresholdRelation.AlarmType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = value["AlarmType"].GetUint64();
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmThreshold") && !value["AlarmThreshold"].IsNull())
    {
        if (!value["AlarmThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPAlarmThresholdRelation.AlarmThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmThreshold = value["AlarmThreshold"].GetUint64();
        m_alarmThresholdHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPAlarmThresholdRelation.InstanceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailList.push_back(item);
        }
        m_instanceDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPAlarmThresholdRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmType, allocator);
    }

    if (m_alarmThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmThreshold, allocator);
    }

    if (m_instanceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailList.begin(); itr != m_instanceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t IPAlarmThresholdRelation::GetAlarmType() const
{
    return m_alarmType;
}

void IPAlarmThresholdRelation::SetAlarmType(const uint64_t& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool IPAlarmThresholdRelation::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

uint64_t IPAlarmThresholdRelation::GetAlarmThreshold() const
{
    return m_alarmThreshold;
}

void IPAlarmThresholdRelation::SetAlarmThreshold(const uint64_t& _alarmThreshold)
{
    m_alarmThreshold = _alarmThreshold;
    m_alarmThresholdHasBeenSet = true;
}

bool IPAlarmThresholdRelation::AlarmThresholdHasBeenSet() const
{
    return m_alarmThresholdHasBeenSet;
}

vector<InstanceRelation> IPAlarmThresholdRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void IPAlarmThresholdRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool IPAlarmThresholdRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

