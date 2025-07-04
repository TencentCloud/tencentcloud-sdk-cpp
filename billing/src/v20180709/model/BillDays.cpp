/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/BillDays.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillDays::BillDays() :
    m_billDayHasBeenSet(false)
{
}

CoreInternalOutcome BillDays::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillDay") && !value["BillDay"].IsNull())
    {
        if (!value["BillDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDays.BillDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDay = string(value["BillDay"].GetString());
        m_billDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDays::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDay.c_str(), allocator).Move(), allocator);
    }

}


string BillDays::GetBillDay() const
{
    return m_billDay;
}

void BillDays::SetBillDay(const string& _billDay)
{
    m_billDay = _billDay;
    m_billDayHasBeenSet = true;
}

bool BillDays::BillDayHasBeenSet() const
{
    return m_billDayHasBeenSet;
}

