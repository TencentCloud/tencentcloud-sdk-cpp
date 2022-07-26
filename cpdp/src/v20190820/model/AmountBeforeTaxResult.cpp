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

#include <tencentcloud/cpdp/v20190820/model/AmountBeforeTaxResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AmountBeforeTaxResult::AmountBeforeTaxResult() :
    m_amountBeforeTaxHasBeenSet(false),
    m_amountBeforeTaxWithTwoDigitPrecisionHasBeenSet(false)
{
}

CoreInternalOutcome AmountBeforeTaxResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AmountBeforeTax") && !value["AmountBeforeTax"].IsNull())
    {
        if (!value["AmountBeforeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmountBeforeTaxResult.AmountBeforeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTax = string(value["AmountBeforeTax"].GetString());
        m_amountBeforeTaxHasBeenSet = true;
    }

    if (value.HasMember("AmountBeforeTaxWithTwoDigitPrecision") && !value["AmountBeforeTaxWithTwoDigitPrecision"].IsNull())
    {
        if (!value["AmountBeforeTaxWithTwoDigitPrecision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmountBeforeTaxResult.AmountBeforeTaxWithTwoDigitPrecision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountBeforeTaxWithTwoDigitPrecision = string(value["AmountBeforeTaxWithTwoDigitPrecision"].GetString());
        m_amountBeforeTaxWithTwoDigitPrecisionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AmountBeforeTaxResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amountBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_amountBeforeTaxWithTwoDigitPrecisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTaxWithTwoDigitPrecision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountBeforeTaxWithTwoDigitPrecision.c_str(), allocator).Move(), allocator);
    }

}


string AmountBeforeTaxResult::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void AmountBeforeTaxResult::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool AmountBeforeTaxResult::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string AmountBeforeTaxResult::GetAmountBeforeTaxWithTwoDigitPrecision() const
{
    return m_amountBeforeTaxWithTwoDigitPrecision;
}

void AmountBeforeTaxResult::SetAmountBeforeTaxWithTwoDigitPrecision(const string& _amountBeforeTaxWithTwoDigitPrecision)
{
    m_amountBeforeTaxWithTwoDigitPrecision = _amountBeforeTaxWithTwoDigitPrecision;
    m_amountBeforeTaxWithTwoDigitPrecisionHasBeenSet = true;
}

bool AmountBeforeTaxResult::AmountBeforeTaxWithTwoDigitPrecisionHasBeenSet() const
{
    return m_amountBeforeTaxWithTwoDigitPrecisionHasBeenSet;
}

