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

#include <tencentcloud/cpdp/v20190820/model/ApplyFlexPaymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyFlexPaymentRequest::ApplyFlexPaymentRequest() :
    m_payeeIdHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_amountBeforeTaxHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_fundingAccountInfoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

string ApplyFlexPaymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_amountBeforeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountBeforeTax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amountBeforeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fundingAccountInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyFlexPaymentRequest::GetPayeeId() const
{
    return m_payeeId;
}

void ApplyFlexPaymentRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string ApplyFlexPaymentRequest::GetIncomeType() const
{
    return m_incomeType;
}

void ApplyFlexPaymentRequest::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string ApplyFlexPaymentRequest::GetAmountBeforeTax() const
{
    return m_amountBeforeTax;
}

void ApplyFlexPaymentRequest::SetAmountBeforeTax(const string& _amountBeforeTax)
{
    m_amountBeforeTax = _amountBeforeTax;
    m_amountBeforeTaxHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::AmountBeforeTaxHasBeenSet() const
{
    return m_amountBeforeTaxHasBeenSet;
}

string ApplyFlexPaymentRequest::GetOutOrderId() const
{
    return m_outOrderId;
}

void ApplyFlexPaymentRequest::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

FlexFundingAccountInfo ApplyFlexPaymentRequest::GetFundingAccountInfo() const
{
    return m_fundingAccountInfo;
}

void ApplyFlexPaymentRequest::SetFundingAccountInfo(const FlexFundingAccountInfo& _fundingAccountInfo)
{
    m_fundingAccountInfo = _fundingAccountInfo;
    m_fundingAccountInfoHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::FundingAccountInfoHasBeenSet() const
{
    return m_fundingAccountInfoHasBeenSet;
}

string ApplyFlexPaymentRequest::GetRemark() const
{
    return m_remark;
}

void ApplyFlexPaymentRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ApplyFlexPaymentRequest::GetEnvironment() const
{
    return m_environment;
}

void ApplyFlexPaymentRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string ApplyFlexPaymentRequest::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void ApplyFlexPaymentRequest::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool ApplyFlexPaymentRequest::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}


