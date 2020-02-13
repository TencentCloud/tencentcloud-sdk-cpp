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

#include <tencentcloud/cpdp/v20190820/model/RevRegisterBillSupportWithdrawRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

RevRegisterBillSupportWithdrawRequest::RevRegisterBillSupportWithdrawRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_oldOrderNoHasBeenSet(false),
    m_cancelAmtHasBeenSet(false),
    m_tranFeeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false),
    m_reservedMsgThreeHasBeenSet(false)
{
}

string RevRegisterBillSupportWithdrawRequest::ToJsonString() const
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

    if (m_tranNetMemberCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_oldOrderNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldOrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_oldOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelAmtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CancelAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cancelAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_tranFeeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tranFee.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgOneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsgOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsgOne.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgTwoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsgTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsgTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgThreeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReservedMsgThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reservedMsgThree.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RevRegisterBillSupportWithdrawRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void RevRegisterBillSupportWithdrawRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void RevRegisterBillSupportWithdrawRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetOldOrderNo() const
{
    return m_oldOrderNo;
}

void RevRegisterBillSupportWithdrawRequest::SetOldOrderNo(const string& _oldOrderNo)
{
    m_oldOrderNo = _oldOrderNo;
    m_oldOrderNoHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::OldOrderNoHasBeenSet() const
{
    return m_oldOrderNoHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetCancelAmt() const
{
    return m_cancelAmt;
}

void RevRegisterBillSupportWithdrawRequest::SetCancelAmt(const string& _cancelAmt)
{
    m_cancelAmt = _cancelAmt;
    m_cancelAmtHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::CancelAmtHasBeenSet() const
{
    return m_cancelAmtHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetTranFee() const
{
    return m_tranFee;
}

void RevRegisterBillSupportWithdrawRequest::SetTranFee(const string& _tranFee)
{
    m_tranFee = _tranFee;
    m_tranFeeHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::TranFeeHasBeenSet() const
{
    return m_tranFeeHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetRemark() const
{
    return m_remark;
}

void RevRegisterBillSupportWithdrawRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

void RevRegisterBillSupportWithdrawRequest::SetReservedMsgOne(const string& _reservedMsgOne)
{
    m_reservedMsgOne = _reservedMsgOne;
    m_reservedMsgOneHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

void RevRegisterBillSupportWithdrawRequest::SetReservedMsgTwo(const string& _reservedMsgTwo)
{
    m_reservedMsgTwo = _reservedMsgTwo;
    m_reservedMsgTwoHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}

string RevRegisterBillSupportWithdrawRequest::GetReservedMsgThree() const
{
    return m_reservedMsgThree;
}

void RevRegisterBillSupportWithdrawRequest::SetReservedMsgThree(const string& _reservedMsgThree)
{
    m_reservedMsgThree = _reservedMsgThree;
    m_reservedMsgThreeHasBeenSet = true;
}

bool RevRegisterBillSupportWithdrawRequest::ReservedMsgThreeHasBeenSet() const
{
    return m_reservedMsgThreeHasBeenSet;
}


