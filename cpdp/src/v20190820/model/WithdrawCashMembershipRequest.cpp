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

#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

WithdrawCashMembershipRequest::WithdrawCashMembershipRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranWebNameHasBeenSet(false),
    m_memberGlobalTypeHasBeenSet(false),
    m_memberGlobalIdHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_takeCashAcctNoHasBeenSet(false),
    m_outAmtAcctNameHasBeenSet(false),
    m_ccyHasBeenSet(false),
    m_cashAmtHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_webSignHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string WithdrawCashMembershipRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tranWebNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranWebName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranWebName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberGlobalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberGlobalType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberGlobalIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberGlobalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberGlobalId.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_takeCashAcctNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TakeCashAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_takeCashAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outAmtAcctNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutAmtAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_outAmtAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ccy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccy.c_str(), allocator).Move(), allocator);
    }

    if (m_cashAmtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CashAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cashAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_webSignHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WebSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_webSign.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string WithdrawCashMembershipRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void WithdrawCashMembershipRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string WithdrawCashMembershipRequest::GetTranWebName() const
{
    return m_tranWebName;
}

void WithdrawCashMembershipRequest::SetTranWebName(const string& _tranWebName)
{
    m_tranWebName = _tranWebName;
    m_tranWebNameHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::TranWebNameHasBeenSet() const
{
    return m_tranWebNameHasBeenSet;
}

string WithdrawCashMembershipRequest::GetMemberGlobalType() const
{
    return m_memberGlobalType;
}

void WithdrawCashMembershipRequest::SetMemberGlobalType(const string& _memberGlobalType)
{
    m_memberGlobalType = _memberGlobalType;
    m_memberGlobalTypeHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::MemberGlobalTypeHasBeenSet() const
{
    return m_memberGlobalTypeHasBeenSet;
}

string WithdrawCashMembershipRequest::GetMemberGlobalId() const
{
    return m_memberGlobalId;
}

void WithdrawCashMembershipRequest::SetMemberGlobalId(const string& _memberGlobalId)
{
    m_memberGlobalId = _memberGlobalId;
    m_memberGlobalIdHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::MemberGlobalIdHasBeenSet() const
{
    return m_memberGlobalIdHasBeenSet;
}

string WithdrawCashMembershipRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void WithdrawCashMembershipRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string WithdrawCashMembershipRequest::GetMemberName() const
{
    return m_memberName;
}

void WithdrawCashMembershipRequest::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

string WithdrawCashMembershipRequest::GetTakeCashAcctNo() const
{
    return m_takeCashAcctNo;
}

void WithdrawCashMembershipRequest::SetTakeCashAcctNo(const string& _takeCashAcctNo)
{
    m_takeCashAcctNo = _takeCashAcctNo;
    m_takeCashAcctNoHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::TakeCashAcctNoHasBeenSet() const
{
    return m_takeCashAcctNoHasBeenSet;
}

string WithdrawCashMembershipRequest::GetOutAmtAcctName() const
{
    return m_outAmtAcctName;
}

void WithdrawCashMembershipRequest::SetOutAmtAcctName(const string& _outAmtAcctName)
{
    m_outAmtAcctName = _outAmtAcctName;
    m_outAmtAcctNameHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::OutAmtAcctNameHasBeenSet() const
{
    return m_outAmtAcctNameHasBeenSet;
}

string WithdrawCashMembershipRequest::GetCcy() const
{
    return m_ccy;
}

void WithdrawCashMembershipRequest::SetCcy(const string& _ccy)
{
    m_ccy = _ccy;
    m_ccyHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::CcyHasBeenSet() const
{
    return m_ccyHasBeenSet;
}

string WithdrawCashMembershipRequest::GetCashAmt() const
{
    return m_cashAmt;
}

void WithdrawCashMembershipRequest::SetCashAmt(const string& _cashAmt)
{
    m_cashAmt = _cashAmt;
    m_cashAmtHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::CashAmtHasBeenSet() const
{
    return m_cashAmtHasBeenSet;
}

string WithdrawCashMembershipRequest::GetRemark() const
{
    return m_remark;
}

void WithdrawCashMembershipRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string WithdrawCashMembershipRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void WithdrawCashMembershipRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string WithdrawCashMembershipRequest::GetWebSign() const
{
    return m_webSign;
}

void WithdrawCashMembershipRequest::SetWebSign(const string& _webSign)
{
    m_webSign = _webSign;
    m_webSignHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::WebSignHasBeenSet() const
{
    return m_webSignHasBeenSet;
}

string WithdrawCashMembershipRequest::GetProfile() const
{
    return m_profile;
}

void WithdrawCashMembershipRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool WithdrawCashMembershipRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


