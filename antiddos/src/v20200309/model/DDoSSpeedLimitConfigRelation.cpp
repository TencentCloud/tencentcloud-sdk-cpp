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

#include <tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfigRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DDoSSpeedLimitConfigRelation::DDoSSpeedLimitConfigRelation() :
    m_speedLimitConfigHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome DDoSSpeedLimitConfigRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpeedLimitConfig") && !value["SpeedLimitConfig"].IsNull())
    {
        if (!value["SpeedLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfigRelation.SpeedLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_speedLimitConfig.Deserialize(value["SpeedLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_speedLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSSpeedLimitConfigRelation.InstanceDetailList` is not array type"));

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

void DDoSSpeedLimitConfigRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_speedLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_speedLimitConfig.ToJsonObject(value[key.c_str()], allocator);
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


DDoSSpeedLimitConfig DDoSSpeedLimitConfigRelation::GetSpeedLimitConfig() const
{
    return m_speedLimitConfig;
}

void DDoSSpeedLimitConfigRelation::SetSpeedLimitConfig(const DDoSSpeedLimitConfig& _speedLimitConfig)
{
    m_speedLimitConfig = _speedLimitConfig;
    m_speedLimitConfigHasBeenSet = true;
}

bool DDoSSpeedLimitConfigRelation::SpeedLimitConfigHasBeenSet() const
{
    return m_speedLimitConfigHasBeenSet;
}

vector<InstanceRelation> DDoSSpeedLimitConfigRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void DDoSSpeedLimitConfigRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool DDoSSpeedLimitConfigRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

