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

#include <tencentcloud/billing/v20180709/model/AnalyseTimeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseTimeDetail::AnalyseTimeDetail() :
    m_timeHasBeenSet(false),
    m_moneyHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseTimeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseTimeDetail.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Money") && !value["Money"].IsNull())
    {
        if (!value["Money"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseTimeDetail.Money` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_money = string(value["Money"].GetString());
        m_moneyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseTimeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_moneyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Money";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_money.c_str(), allocator).Move(), allocator);
    }

}


string AnalyseTimeDetail::GetTime() const
{
    return m_time;
}

void AnalyseTimeDetail::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool AnalyseTimeDetail::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string AnalyseTimeDetail::GetMoney() const
{
    return m_money;
}

void AnalyseTimeDetail::SetMoney(const string& _money)
{
    m_money = _money;
    m_moneyHasBeenSet = true;
}

bool AnalyseTimeDetail::MoneyHasBeenSet() const
{
    return m_moneyHasBeenSet;
}

