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

#include <tencentcloud/waf/v20180125/model/LLMHourBillTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMHourBillTrendItem::LLMHourBillTrendItem() :
    m_hourHasBeenSet(false),
    m_feeHasBeenSet(false)
{
}

CoreInternalOutcome LLMHourBillTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillTrendItem.Hour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hour = string(value["Hour"].GetString());
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMHourBillTrendItem.Fee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fee = string(value["Fee"].GetString());
        m_feeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMHourBillTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fee.c_str(), allocator).Move(), allocator);
    }

}


string LLMHourBillTrendItem::GetHour() const
{
    return m_hour;
}

void LLMHourBillTrendItem::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool LLMHourBillTrendItem::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

string LLMHourBillTrendItem::GetFee() const
{
    return m_fee;
}

void LLMHourBillTrendItem::SetFee(const string& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool LLMHourBillTrendItem::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

