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

#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryMemberTransactionRequest::QueryMemberTransactionRequest() :
    m_mrchCodeHasBeenSet(false),
    m_functionFlagHasBeenSet(false),
    m_outSubAcctNoHasBeenSet(false),
    m_outMemberCodeHasBeenSet(false),
    m_outSubAcctNameHasBeenSet(false),
    m_inSubAcctNoHasBeenSet(false),
    m_inMemberCodeHasBeenSet(false),
    m_inSubAcctNameHasBeenSet(false),
    m_tranAmtHasBeenSet(false),
    m_tranFeeHasBeenSet(false),
    m_tranTypeHasBeenSet(false),
    m_ccyHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_orderContentHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgHasBeenSet(false),
    m_webSignHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryMemberTransactionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_functionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inSubAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_inMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAcctName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inSubAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_tranAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_tranFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranFee.c_str(), allocator).Move(), allocator);
    }

    if (m_tranTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranType.c_str(), allocator).Move(), allocator);
    }

    if (m_ccyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderContent.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_webSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webSign.c_str(), allocator).Move(), allocator);
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


string QueryMemberTransactionRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void QueryMemberTransactionRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool QueryMemberTransactionRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string QueryMemberTransactionRequest::GetFunctionFlag() const
{
    return m_functionFlag;
}

void QueryMemberTransactionRequest::SetFunctionFlag(const string& _functionFlag)
{
    m_functionFlag = _functionFlag;
    m_functionFlagHasBeenSet = true;
}

bool QueryMemberTransactionRequest::FunctionFlagHasBeenSet() const
{
    return m_functionFlagHasBeenSet;
}

string QueryMemberTransactionRequest::GetOutSubAcctNo() const
{
    return m_outSubAcctNo;
}

void QueryMemberTransactionRequest::SetOutSubAcctNo(const string& _outSubAcctNo)
{
    m_outSubAcctNo = _outSubAcctNo;
    m_outSubAcctNoHasBeenSet = true;
}

bool QueryMemberTransactionRequest::OutSubAcctNoHasBeenSet() const
{
    return m_outSubAcctNoHasBeenSet;
}

string QueryMemberTransactionRequest::GetOutMemberCode() const
{
    return m_outMemberCode;
}

void QueryMemberTransactionRequest::SetOutMemberCode(const string& _outMemberCode)
{
    m_outMemberCode = _outMemberCode;
    m_outMemberCodeHasBeenSet = true;
}

bool QueryMemberTransactionRequest::OutMemberCodeHasBeenSet() const
{
    return m_outMemberCodeHasBeenSet;
}

string QueryMemberTransactionRequest::GetOutSubAcctName() const
{
    return m_outSubAcctName;
}

void QueryMemberTransactionRequest::SetOutSubAcctName(const string& _outSubAcctName)
{
    m_outSubAcctName = _outSubAcctName;
    m_outSubAcctNameHasBeenSet = true;
}

bool QueryMemberTransactionRequest::OutSubAcctNameHasBeenSet() const
{
    return m_outSubAcctNameHasBeenSet;
}

string QueryMemberTransactionRequest::GetInSubAcctNo() const
{
    return m_inSubAcctNo;
}

void QueryMemberTransactionRequest::SetInSubAcctNo(const string& _inSubAcctNo)
{
    m_inSubAcctNo = _inSubAcctNo;
    m_inSubAcctNoHasBeenSet = true;
}

bool QueryMemberTransactionRequest::InSubAcctNoHasBeenSet() const
{
    return m_inSubAcctNoHasBeenSet;
}

string QueryMemberTransactionRequest::GetInMemberCode() const
{
    return m_inMemberCode;
}

void QueryMemberTransactionRequest::SetInMemberCode(const string& _inMemberCode)
{
    m_inMemberCode = _inMemberCode;
    m_inMemberCodeHasBeenSet = true;
}

bool QueryMemberTransactionRequest::InMemberCodeHasBeenSet() const
{
    return m_inMemberCodeHasBeenSet;
}

string QueryMemberTransactionRequest::GetInSubAcctName() const
{
    return m_inSubAcctName;
}

void QueryMemberTransactionRequest::SetInSubAcctName(const string& _inSubAcctName)
{
    m_inSubAcctName = _inSubAcctName;
    m_inSubAcctNameHasBeenSet = true;
}

bool QueryMemberTransactionRequest::InSubAcctNameHasBeenSet() const
{
    return m_inSubAcctNameHasBeenSet;
}

string QueryMemberTransactionRequest::GetTranAmt() const
{
    return m_tranAmt;
}

void QueryMemberTransactionRequest::SetTranAmt(const string& _tranAmt)
{
    m_tranAmt = _tranAmt;
    m_tranAmtHasBeenSet = true;
}

bool QueryMemberTransactionRequest::TranAmtHasBeenSet() const
{
    return m_tranAmtHasBeenSet;
}

string QueryMemberTransactionRequest::GetTranFee() const
{
    return m_tranFee;
}

void QueryMemberTransactionRequest::SetTranFee(const string& _tranFee)
{
    m_tranFee = _tranFee;
    m_tranFeeHasBeenSet = true;
}

bool QueryMemberTransactionRequest::TranFeeHasBeenSet() const
{
    return m_tranFeeHasBeenSet;
}

string QueryMemberTransactionRequest::GetTranType() const
{
    return m_tranType;
}

void QueryMemberTransactionRequest::SetTranType(const string& _tranType)
{
    m_tranType = _tranType;
    m_tranTypeHasBeenSet = true;
}

bool QueryMemberTransactionRequest::TranTypeHasBeenSet() const
{
    return m_tranTypeHasBeenSet;
}

string QueryMemberTransactionRequest::GetCcy() const
{
    return m_ccy;
}

void QueryMemberTransactionRequest::SetCcy(const string& _ccy)
{
    m_ccy = _ccy;
    m_ccyHasBeenSet = true;
}

bool QueryMemberTransactionRequest::CcyHasBeenSet() const
{
    return m_ccyHasBeenSet;
}

string QueryMemberTransactionRequest::GetOrderNo() const
{
    return m_orderNo;
}

void QueryMemberTransactionRequest::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool QueryMemberTransactionRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string QueryMemberTransactionRequest::GetOrderContent() const
{
    return m_orderContent;
}

void QueryMemberTransactionRequest::SetOrderContent(const string& _orderContent)
{
    m_orderContent = _orderContent;
    m_orderContentHasBeenSet = true;
}

bool QueryMemberTransactionRequest::OrderContentHasBeenSet() const
{
    return m_orderContentHasBeenSet;
}

string QueryMemberTransactionRequest::GetRemark() const
{
    return m_remark;
}

void QueryMemberTransactionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QueryMemberTransactionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string QueryMemberTransactionRequest::GetReservedMsg() const
{
    return m_reservedMsg;
}

void QueryMemberTransactionRequest::SetReservedMsg(const string& _reservedMsg)
{
    m_reservedMsg = _reservedMsg;
    m_reservedMsgHasBeenSet = true;
}

bool QueryMemberTransactionRequest::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}

string QueryMemberTransactionRequest::GetWebSign() const
{
    return m_webSign;
}

void QueryMemberTransactionRequest::SetWebSign(const string& _webSign)
{
    m_webSign = _webSign;
    m_webSignHasBeenSet = true;
}

bool QueryMemberTransactionRequest::WebSignHasBeenSet() const
{
    return m_webSignHasBeenSet;
}

string QueryMemberTransactionRequest::GetProfile() const
{
    return m_profile;
}

void QueryMemberTransactionRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryMemberTransactionRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


