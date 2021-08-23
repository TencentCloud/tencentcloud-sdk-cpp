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

#include <tencentcloud/apcas/v20201127/model/CallStatItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace std;

CallStatItem::CallStatItem() :
    m_dateHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome CallStatItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallStatItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallStatItem.Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallStatItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

}


string CallStatItem::GetDate() const
{
    return m_date;
}

void CallStatItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool CallStatItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t CallStatItem::GetAmount() const
{
    return m_amount;
}

void CallStatItem::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CallStatItem::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

