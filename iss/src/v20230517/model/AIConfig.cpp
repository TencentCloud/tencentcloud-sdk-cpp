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

#include <tencentcloud/iss/v20230517/model/AIConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AIConfig::AIConfig() :
    m_detectTypeHasBeenSet(false),
    m_timeIntervalHasBeenSet(false),
    m_operTimeSlotHasBeenSet(false)
{
}

CoreInternalOutcome AIConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectType") && !value["DetectType"].IsNull())
    {
        if (!value["DetectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIConfig.DetectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectType = string(value["DetectType"].GetString());
        m_detectTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeInterval") && !value["TimeInterval"].IsNull())
    {
        if (!value["TimeInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIConfig.TimeInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeInterval = value["TimeInterval"].GetUint64();
        m_timeIntervalHasBeenSet = true;
    }

    if (value.HasMember("OperTimeSlot") && !value["OperTimeSlot"].IsNull())
    {
        if (!value["OperTimeSlot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIConfig.OperTimeSlot` is not array type"));

        const rapidjson::Value &tmpValue = value["OperTimeSlot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OperTimeSlot item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operTimeSlot.push_back(item);
        }
        m_operTimeSlotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeInterval, allocator);
    }

    if (m_operTimeSlotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperTimeSlot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operTimeSlot.begin(); itr != m_operTimeSlot.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AIConfig::GetDetectType() const
{
    return m_detectType;
}

void AIConfig::SetDetectType(const string& _detectType)
{
    m_detectType = _detectType;
    m_detectTypeHasBeenSet = true;
}

bool AIConfig::DetectTypeHasBeenSet() const
{
    return m_detectTypeHasBeenSet;
}

uint64_t AIConfig::GetTimeInterval() const
{
    return m_timeInterval;
}

void AIConfig::SetTimeInterval(const uint64_t& _timeInterval)
{
    m_timeInterval = _timeInterval;
    m_timeIntervalHasBeenSet = true;
}

bool AIConfig::TimeIntervalHasBeenSet() const
{
    return m_timeIntervalHasBeenSet;
}

vector<OperTimeSlot> AIConfig::GetOperTimeSlot() const
{
    return m_operTimeSlot;
}

void AIConfig::SetOperTimeSlot(const vector<OperTimeSlot>& _operTimeSlot)
{
    m_operTimeSlot = _operTimeSlot;
    m_operTimeSlotHasBeenSet = true;
}

bool AIConfig::OperTimeSlotHasBeenSet() const
{
    return m_operTimeSlotHasBeenSet;
}

