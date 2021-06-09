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

#include <tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RegisterBillSupportWithdrawRequest::RegisterBillSupportWithdrawRequest() :
    m_tranNetMemberCodeHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_suspendAmtHasBeenSet(false),
    m_tranFeeHasBeenSet(false),
    m_mrchCodeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false),
    m_reservedMsgThreeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string RegisterBillSupportWithdrawRequest::ToJsonString() const
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

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_suspendAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspendAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_suspendAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_tranFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranFee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tranFee.c_str(), allocator).Move(), allocator);
    }

    if (m_mrchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MrchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mrchCode.c_str(), allocator).Move(), allocator);
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


string RegisterBillSupportWithdrawRequest::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void RegisterBillSupportWithdrawRequest::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetOrderNo() const
{
    return m_orderNo;
}

void RegisterBillSupportWithdrawRequest::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetSuspendAmt() const
{
    return m_suspendAmt;
}

void RegisterBillSupportWithdrawRequest::SetSuspendAmt(const string& _suspendAmt)
{
    m_suspendAmt = _suspendAmt;
    m_suspendAmtHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::SuspendAmtHasBeenSet() const
{
    return m_suspendAmtHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetTranFee() const
{
    return m_tranFee;
}

void RegisterBillSupportWithdrawRequest::SetTranFee(const string& _tranFee)
{
    m_tranFee = _tranFee;
    m_tranFeeHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::TranFeeHasBeenSet() const
{
    return m_tranFeeHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void RegisterBillSupportWithdrawRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetRemark() const
{
    return m_remark;
}

void RegisterBillSupportWithdrawRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

void RegisterBillSupportWithdrawRequest::SetReservedMsgOne(const string& _reservedMsgOne)
{
    m_reservedMsgOne = _reservedMsgOne;
    m_reservedMsgOneHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

void RegisterBillSupportWithdrawRequest::SetReservedMsgTwo(const string& _reservedMsgTwo)
{
    m_reservedMsgTwo = _reservedMsgTwo;
    m_reservedMsgTwoHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetReservedMsgThree() const
{
    return m_reservedMsgThree;
}

void RegisterBillSupportWithdrawRequest::SetReservedMsgThree(const string& _reservedMsgThree)
{
    m_reservedMsgThree = _reservedMsgThree;
    m_reservedMsgThreeHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::ReservedMsgThreeHasBeenSet() const
{
    return m_reservedMsgThreeHasBeenSet;
}

string RegisterBillSupportWithdrawRequest::GetProfile() const
{
    return m_profile;
}

void RegisterBillSupportWithdrawRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool RegisterBillSupportWithdrawRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


