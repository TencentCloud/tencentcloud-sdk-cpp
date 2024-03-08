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

#include <tencentcloud/billing/v20180709/model/AllocationAverageData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationAverageData::AllocationAverageData() :
    m_beginMonthHasBeenSet(false),
    m_endMonthHasBeenSet(false),
    m_realTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome AllocationAverageData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginMonth") && !value["BeginMonth"].IsNull())
    {
        if (!value["BeginMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationAverageData.BeginMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginMonth = string(value["BeginMonth"].GetString());
        m_beginMonthHasBeenSet = true;
    }

    if (value.HasMember("EndMonth") && !value["EndMonth"].IsNull())
    {
        if (!value["EndMonth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationAverageData.EndMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endMonth = string(value["EndMonth"].GetString());
        m_endMonthHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationAverageData.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationAverageData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_endMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

}


string AllocationAverageData::GetBeginMonth() const
{
    return m_beginMonth;
}

void AllocationAverageData::SetBeginMonth(const string& _beginMonth)
{
    m_beginMonth = _beginMonth;
    m_beginMonthHasBeenSet = true;
}

bool AllocationAverageData::BeginMonthHasBeenSet() const
{
    return m_beginMonthHasBeenSet;
}

string AllocationAverageData::GetEndMonth() const
{
    return m_endMonth;
}

void AllocationAverageData::SetEndMonth(const string& _endMonth)
{
    m_endMonth = _endMonth;
    m_endMonthHasBeenSet = true;
}

bool AllocationAverageData::EndMonthHasBeenSet() const
{
    return m_endMonthHasBeenSet;
}

string AllocationAverageData::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void AllocationAverageData::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool AllocationAverageData::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

