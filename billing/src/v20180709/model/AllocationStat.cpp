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

#include <tencentcloud/billing/v20180709/model/AllocationStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationStat::AllocationStat() :
    m_averageHasBeenSet(false)
{
}

CoreInternalOutcome AllocationStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Average") && !value["Average"].IsNull())
    {
        if (!value["Average"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationStat.Average` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_average.Deserialize(value["Average"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_averageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_averageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Average";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_average.ToJsonObject(value[key.c_str()], allocator);
    }

}


AllocationAverageData AllocationStat::GetAverage() const
{
    return m_average;
}

void AllocationStat::SetAverage(const AllocationAverageData& _average)
{
    m_average = _average;
    m_averageHasBeenSet = true;
}

bool AllocationStat::AverageHasBeenSet() const
{
    return m_averageHasBeenSet;
}

