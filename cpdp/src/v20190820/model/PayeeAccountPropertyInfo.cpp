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

#include <tencentcloud/cpdp/v20190820/model/PayeeAccountPropertyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeAccountPropertyInfo::PayeeAccountPropertyInfo() :
    m_settleRightStatusHasBeenSet(false),
    m_paymentRightStatusHasBeenSet(false)
{
}

CoreInternalOutcome PayeeAccountPropertyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SettleRightStatus") && !value["SettleRightStatus"].IsNull())
    {
        if (!value["SettleRightStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountPropertyInfo.SettleRightStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleRightStatus = string(value["SettleRightStatus"].GetString());
        m_settleRightStatusHasBeenSet = true;
    }

    if (value.HasMember("PaymentRightStatus") && !value["PaymentRightStatus"].IsNull())
    {
        if (!value["PaymentRightStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountPropertyInfo.PaymentRightStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentRightStatus = string(value["PaymentRightStatus"].GetString());
        m_paymentRightStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeAccountPropertyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_settleRightStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleRightStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleRightStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentRightStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentRightStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentRightStatus.c_str(), allocator).Move(), allocator);
    }

}


string PayeeAccountPropertyInfo::GetSettleRightStatus() const
{
    return m_settleRightStatus;
}

void PayeeAccountPropertyInfo::SetSettleRightStatus(const string& _settleRightStatus)
{
    m_settleRightStatus = _settleRightStatus;
    m_settleRightStatusHasBeenSet = true;
}

bool PayeeAccountPropertyInfo::SettleRightStatusHasBeenSet() const
{
    return m_settleRightStatusHasBeenSet;
}

string PayeeAccountPropertyInfo::GetPaymentRightStatus() const
{
    return m_paymentRightStatus;
}

void PayeeAccountPropertyInfo::SetPaymentRightStatus(const string& _paymentRightStatus)
{
    m_paymentRightStatus = _paymentRightStatus;
    m_paymentRightStatusHasBeenSet = true;
}

bool PayeeAccountPropertyInfo::PaymentRightStatusHasBeenSet() const
{
    return m_paymentRightStatusHasBeenSet;
}

