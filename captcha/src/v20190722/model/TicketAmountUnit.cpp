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

#include <tencentcloud/captcha/v20190722/model/TicketAmountUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

TicketAmountUnit::TicketAmountUnit() :
    m_dateKeyHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome TicketAmountUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateKey") && !value["DateKey"].IsNull())
    {
        if (!value["DateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TicketAmountUnit.DateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateKey = string(value["DateKey"].GetString());
        m_dateKeyHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TicketAmountUnit.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TicketAmountUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

}


string TicketAmountUnit::GetDateKey() const
{
    return m_dateKey;
}

void TicketAmountUnit::SetDateKey(const string& _dateKey)
{
    m_dateKey = _dateKey;
    m_dateKeyHasBeenSet = true;
}

bool TicketAmountUnit::DateKeyHasBeenSet() const
{
    return m_dateKeyHasBeenSet;
}

int64_t TicketAmountUnit::GetAmount() const
{
    return m_amount;
}

void TicketAmountUnit::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool TicketAmountUnit::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

