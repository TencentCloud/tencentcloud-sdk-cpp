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

#include <tencentcloud/cpdp/v20190820/model/RevResigterBillSupportWithdrawRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RevResigterBillSupportWithdrawRequest::RevResigterBillSupportWithdrawRequest() :
    m_mrchCodeHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_oldOrderNoHasBeenSet(false),
    m_cancelAmtHasBeenSet(false),
    m_tranFeeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false),
    m_reservedMsgThreeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string RevResigterBillSupportWithdrawRequest::ToJsonString() const
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

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_oldOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldOrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_tranFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranFee.c_str(), allocator).Move(), allocator);
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


string RevResigterBillSupportWithdrawRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void RevResigterBillSupportWithdrawRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void RevResigterBillSupportWithdrawRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetOldOrderNo() const
{
    return m_oldOrderNo;
}

void RevResigterBillSupportWithdrawRequest::SetOldOrderNo(const string& _oldOrderNo)
{
    m_oldOrderNo = _oldOrderNo;
    m_oldOrderNoHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::OldOrderNoHasBeenSet() const
{
    return m_oldOrderNoHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetCancelAmt() const
{
    return m_cancelAmt;
}

void RevResigterBillSupportWithdrawRequest::SetCancelAmt(const string& _cancelAmt)
{
    m_cancelAmt = _cancelAmt;
    m_cancelAmtHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::CancelAmtHasBeenSet() const
{
    return m_cancelAmtHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetTranFee() const
{
    return m_tranFee;
}

void RevResigterBillSupportWithdrawRequest::SetTranFee(const string& _tranFee)
{
    m_tranFee = _tranFee;
    m_tranFeeHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::TranFeeHasBeenSet() const
{
    return m_tranFeeHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetRemark() const
{
    return m_remark;
}

void RevResigterBillSupportWithdrawRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

void RevResigterBillSupportWithdrawRequest::SetReservedMsgOne(const string& _reservedMsgOne)
{
    m_reservedMsgOne = _reservedMsgOne;
    m_reservedMsgOneHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

void RevResigterBillSupportWithdrawRequest::SetReservedMsgTwo(const string& _reservedMsgTwo)
{
    m_reservedMsgTwo = _reservedMsgTwo;
    m_reservedMsgTwoHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetReservedMsgThree() const
{
    return m_reservedMsgThree;
}

void RevResigterBillSupportWithdrawRequest::SetReservedMsgThree(const string& _reservedMsgThree)
{
    m_reservedMsgThree = _reservedMsgThree;
    m_reservedMsgThreeHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::ReservedMsgThreeHasBeenSet() const
{
    return m_reservedMsgThreeHasBeenSet;
}

string RevResigterBillSupportWithdrawRequest::GetProfile() const
{
    return m_profile;
}

void RevResigterBillSupportWithdrawRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool RevResigterBillSupportWithdrawRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


