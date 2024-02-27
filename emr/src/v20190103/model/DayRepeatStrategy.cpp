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

#include <tencentcloud/emr/v20190103/model/DayRepeatStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DayRepeatStrategy::DayRepeatStrategy() :
    m_executeAtTimeOfDayHasBeenSet(false),
    m_stepHasBeenSet(false)
{
}

CoreInternalOutcome DayRepeatStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecuteAtTimeOfDay") && !value["ExecuteAtTimeOfDay"].IsNull())
    {
        if (!value["ExecuteAtTimeOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DayRepeatStrategy.ExecuteAtTimeOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeAtTimeOfDay = string(value["ExecuteAtTimeOfDay"].GetString());
        m_executeAtTimeOfDayHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DayRepeatStrategy.Step` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_step = value["Step"].GetUint64();
        m_stepHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DayRepeatStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executeAtTimeOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteAtTimeOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeAtTimeOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_step, allocator);
    }

}


string DayRepeatStrategy::GetExecuteAtTimeOfDay() const
{
    return m_executeAtTimeOfDay;
}

void DayRepeatStrategy::SetExecuteAtTimeOfDay(const string& _executeAtTimeOfDay)
{
    m_executeAtTimeOfDay = _executeAtTimeOfDay;
    m_executeAtTimeOfDayHasBeenSet = true;
}

bool DayRepeatStrategy::ExecuteAtTimeOfDayHasBeenSet() const
{
    return m_executeAtTimeOfDayHasBeenSet;
}

uint64_t DayRepeatStrategy::GetStep() const
{
    return m_step;
}

void DayRepeatStrategy::SetStep(const uint64_t& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool DayRepeatStrategy::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

