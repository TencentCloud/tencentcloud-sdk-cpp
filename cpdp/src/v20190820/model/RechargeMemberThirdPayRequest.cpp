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

#include <tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RechargeMemberThirdPayRequest::RechargeMemberThirdPayRequest() :
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberFillAmtHasBeenSet(false),
    m_commissionHasBeenSet(false),
    m_ccyHasBeenSet(false),
    m_payChannelTypeHasBeenSet(false),
    m_payChannelAssignMerNoHasBeenSet(false),
    m_payChannelTranSeqNoHasBeenSet(false),
    m_ejzbOrderNoHasBeenSet(false),
    m_mrchCodeHasBeenSet(false),
    m_ejzbOrderContentHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false),
    m_reservedMsgThreeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string RechargeMemberThirdPayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberFillAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberFillAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberFillAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commission.c_str(), allocator).Move(), allocator);
    }

    if (m_ccyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccy.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannelType.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelAssignMerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannelAssignMerNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannelAssignMerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payChannelTranSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannelTranSeqNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payChannelTranSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_ejzbOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EjzbOrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ejzbOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_ejzbOrderContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EjzbOrderContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ejzbOrderContent.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsgOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsgOne.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsgTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsgTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsgThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsgThree.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RechargeMemberThirdPayRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void RechargeMemberThirdPayRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetMemberFillAmt() const
{
    return m_memberFillAmt;
}

void RechargeMemberThirdPayRequest::SetMemberFillAmt(const string& _memberFillAmt)
{
    m_memberFillAmt = _memberFillAmt;
    m_memberFillAmtHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::MemberFillAmtHasBeenSet() const
{
    return m_memberFillAmtHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetCommission() const
{
    return m_commission;
}

void RechargeMemberThirdPayRequest::SetCommission(const string& _commission)
{
    m_commission = _commission;
    m_commissionHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::CommissionHasBeenSet() const
{
    return m_commissionHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetCcy() const
{
    return m_ccy;
}

void RechargeMemberThirdPayRequest::SetCcy(const string& _ccy)
{
    m_ccy = _ccy;
    m_ccyHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::CcyHasBeenSet() const
{
    return m_ccyHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetPayChannelType() const
{
    return m_payChannelType;
}

void RechargeMemberThirdPayRequest::SetPayChannelType(const string& _payChannelType)
{
    m_payChannelType = _payChannelType;
    m_payChannelTypeHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::PayChannelTypeHasBeenSet() const
{
    return m_payChannelTypeHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetPayChannelAssignMerNo() const
{
    return m_payChannelAssignMerNo;
}

void RechargeMemberThirdPayRequest::SetPayChannelAssignMerNo(const string& _payChannelAssignMerNo)
{
    m_payChannelAssignMerNo = _payChannelAssignMerNo;
    m_payChannelAssignMerNoHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::PayChannelAssignMerNoHasBeenSet() const
{
    return m_payChannelAssignMerNoHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetPayChannelTranSeqNo() const
{
    return m_payChannelTranSeqNo;
}

void RechargeMemberThirdPayRequest::SetPayChannelTranSeqNo(const string& _payChannelTranSeqNo)
{
    m_payChannelTranSeqNo = _payChannelTranSeqNo;
    m_payChannelTranSeqNoHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::PayChannelTranSeqNoHasBeenSet() const
{
    return m_payChannelTranSeqNoHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetEjzbOrderNo() const
{
    return m_ejzbOrderNo;
}

void RechargeMemberThirdPayRequest::SetEjzbOrderNo(const string& _ejzbOrderNo)
{
    m_ejzbOrderNo = _ejzbOrderNo;
    m_ejzbOrderNoHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::EjzbOrderNoHasBeenSet() const
{
    return m_ejzbOrderNoHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void RechargeMemberThirdPayRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetEjzbOrderContent() const
{
    return m_ejzbOrderContent;
}

void RechargeMemberThirdPayRequest::SetEjzbOrderContent(const string& _ejzbOrderContent)
{
    m_ejzbOrderContent = _ejzbOrderContent;
    m_ejzbOrderContentHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::EjzbOrderContentHasBeenSet() const
{
    return m_ejzbOrderContentHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetRemark() const
{
    return m_remark;
}

void RechargeMemberThirdPayRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

void RechargeMemberThirdPayRequest::SetReservedMsgOne(const string& _reservedMsgOne)
{
    m_reservedMsgOne = _reservedMsgOne;
    m_reservedMsgOneHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

void RechargeMemberThirdPayRequest::SetReservedMsgTwo(const string& _reservedMsgTwo)
{
    m_reservedMsgTwo = _reservedMsgTwo;
    m_reservedMsgTwoHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetReservedMsgThree() const
{
    return m_reservedMsgThree;
}

void RechargeMemberThirdPayRequest::SetReservedMsgThree(const string& _reservedMsgThree)
{
    m_reservedMsgThree = _reservedMsgThree;
    m_reservedMsgThreeHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::ReservedMsgThreeHasBeenSet() const
{
    return m_reservedMsgThreeHasBeenSet;
}

string RechargeMemberThirdPayRequest::GetProfile() const
{
    return m_profile;
}

void RechargeMemberThirdPayRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool RechargeMemberThirdPayRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


