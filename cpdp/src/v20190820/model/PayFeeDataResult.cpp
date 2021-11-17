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

#include <tencentcloud/cpdp/v20190820/model/PayFeeDataResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayFeeDataResult::PayFeeDataResult() :
    m_organizationFeeHasBeenSet(false),
    m_paymentClassificationLimitHasBeenSet(false),
    m_organizationFeeTypeHasBeenSet(false),
    m_paymentClassificationMaxFeeHasBeenSet(false),
    m_paymentClassificationMinFeeHasBeenSet(false),
    m_paymentClassificationIdHasBeenSet(false),
    m_paymentClassificationNameHasBeenSet(false)
{
}

CoreInternalOutcome PayFeeDataResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationFee") && !value["OrganizationFee"].IsNull())
    {
        if (!value["OrganizationFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.OrganizationFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationFee = string(value["OrganizationFee"].GetString());
        m_organizationFeeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationLimit") && !value["PaymentClassificationLimit"].IsNull())
    {
        if (!value["PaymentClassificationLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.PaymentClassificationLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationLimit = string(value["PaymentClassificationLimit"].GetString());
        m_paymentClassificationLimitHasBeenSet = true;
    }

    if (value.HasMember("OrganizationFeeType") && !value["OrganizationFeeType"].IsNull())
    {
        if (!value["OrganizationFeeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.OrganizationFeeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationFeeType = string(value["OrganizationFeeType"].GetString());
        m_organizationFeeTypeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationMaxFee") && !value["PaymentClassificationMaxFee"].IsNull())
    {
        if (!value["PaymentClassificationMaxFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.PaymentClassificationMaxFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationMaxFee = string(value["PaymentClassificationMaxFee"].GetString());
        m_paymentClassificationMaxFeeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationMinFee") && !value["PaymentClassificationMinFee"].IsNull())
    {
        if (!value["PaymentClassificationMinFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.PaymentClassificationMinFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationMinFee = string(value["PaymentClassificationMinFee"].GetString());
        m_paymentClassificationMinFeeHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationId") && !value["PaymentClassificationId"].IsNull())
    {
        if (!value["PaymentClassificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.PaymentClassificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationId = string(value["PaymentClassificationId"].GetString());
        m_paymentClassificationIdHasBeenSet = true;
    }

    if (value.HasMember("PaymentClassificationName") && !value["PaymentClassificationName"].IsNull())
    {
        if (!value["PaymentClassificationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayFeeDataResult.PaymentClassificationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymentClassificationName = string(value["PaymentClassificationName"].GetString());
        m_paymentClassificationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayFeeDataResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationFee.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationFeeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationFeeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationFeeType.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationMaxFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationMaxFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationMaxFee.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationMinFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationMinFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationMinFee.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentClassificationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentClassificationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymentClassificationName.c_str(), allocator).Move(), allocator);
    }

}


string PayFeeDataResult::GetOrganizationFee() const
{
    return m_organizationFee;
}

void PayFeeDataResult::SetOrganizationFee(const string& _organizationFee)
{
    m_organizationFee = _organizationFee;
    m_organizationFeeHasBeenSet = true;
}

bool PayFeeDataResult::OrganizationFeeHasBeenSet() const
{
    return m_organizationFeeHasBeenSet;
}

string PayFeeDataResult::GetPaymentClassificationLimit() const
{
    return m_paymentClassificationLimit;
}

void PayFeeDataResult::SetPaymentClassificationLimit(const string& _paymentClassificationLimit)
{
    m_paymentClassificationLimit = _paymentClassificationLimit;
    m_paymentClassificationLimitHasBeenSet = true;
}

bool PayFeeDataResult::PaymentClassificationLimitHasBeenSet() const
{
    return m_paymentClassificationLimitHasBeenSet;
}

string PayFeeDataResult::GetOrganizationFeeType() const
{
    return m_organizationFeeType;
}

void PayFeeDataResult::SetOrganizationFeeType(const string& _organizationFeeType)
{
    m_organizationFeeType = _organizationFeeType;
    m_organizationFeeTypeHasBeenSet = true;
}

bool PayFeeDataResult::OrganizationFeeTypeHasBeenSet() const
{
    return m_organizationFeeTypeHasBeenSet;
}

string PayFeeDataResult::GetPaymentClassificationMaxFee() const
{
    return m_paymentClassificationMaxFee;
}

void PayFeeDataResult::SetPaymentClassificationMaxFee(const string& _paymentClassificationMaxFee)
{
    m_paymentClassificationMaxFee = _paymentClassificationMaxFee;
    m_paymentClassificationMaxFeeHasBeenSet = true;
}

bool PayFeeDataResult::PaymentClassificationMaxFeeHasBeenSet() const
{
    return m_paymentClassificationMaxFeeHasBeenSet;
}

string PayFeeDataResult::GetPaymentClassificationMinFee() const
{
    return m_paymentClassificationMinFee;
}

void PayFeeDataResult::SetPaymentClassificationMinFee(const string& _paymentClassificationMinFee)
{
    m_paymentClassificationMinFee = _paymentClassificationMinFee;
    m_paymentClassificationMinFeeHasBeenSet = true;
}

bool PayFeeDataResult::PaymentClassificationMinFeeHasBeenSet() const
{
    return m_paymentClassificationMinFeeHasBeenSet;
}

string PayFeeDataResult::GetPaymentClassificationId() const
{
    return m_paymentClassificationId;
}

void PayFeeDataResult::SetPaymentClassificationId(const string& _paymentClassificationId)
{
    m_paymentClassificationId = _paymentClassificationId;
    m_paymentClassificationIdHasBeenSet = true;
}

bool PayFeeDataResult::PaymentClassificationIdHasBeenSet() const
{
    return m_paymentClassificationIdHasBeenSet;
}

string PayFeeDataResult::GetPaymentClassificationName() const
{
    return m_paymentClassificationName;
}

void PayFeeDataResult::SetPaymentClassificationName(const string& _paymentClassificationName)
{
    m_paymentClassificationName = _paymentClassificationName;
    m_paymentClassificationNameHasBeenSet = true;
}

bool PayFeeDataResult::PaymentClassificationNameHasBeenSet() const
{
    return m_paymentClassificationNameHasBeenSet;
}

