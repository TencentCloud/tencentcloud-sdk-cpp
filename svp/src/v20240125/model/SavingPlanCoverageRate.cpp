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

#include <tencentcloud/svp/v20240125/model/SavingPlanCoverageRate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

SavingPlanCoverageRate::SavingPlanCoverageRate() :
    m_datePointHasBeenSet(false),
    m_rateHasBeenSet(false)
{
}

CoreInternalOutcome SavingPlanCoverageRate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatePoint") && !value["DatePoint"].IsNull())
    {
        if (!value["DatePoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageRate.DatePoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datePoint = string(value["DatePoint"].GetString());
        m_datePointHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SavingPlanCoverageRate.Rate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetDouble();
        m_rateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SavingPlanCoverageRate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datePointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatePoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datePoint.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

}


string SavingPlanCoverageRate::GetDatePoint() const
{
    return m_datePoint;
}

void SavingPlanCoverageRate::SetDatePoint(const string& _datePoint)
{
    m_datePoint = _datePoint;
    m_datePointHasBeenSet = true;
}

bool SavingPlanCoverageRate::DatePointHasBeenSet() const
{
    return m_datePointHasBeenSet;
}

double SavingPlanCoverageRate::GetRate() const
{
    return m_rate;
}

void SavingPlanCoverageRate::SetRate(const double& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool SavingPlanCoverageRate::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

