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

#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RevokeMemberRechargeThirdPayRequest::RevokeMemberRechargeThirdPayRequest() :
    m_oldFillFrontSeqNoHasBeenSet(false),
    m_oldFillPayChannelTypeHasBeenSet(false),
    m_oldPayChannelTranSeqNoHasBeenSet(false),
    m_oldFillEjzbOrderNoHasBeenSet(false),
    m_applyCancelMemberAmtHasBeenSet(false),
    m_applyCancelCommissionHasBeenSet(false),
    m_mrchCodeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reservedMsgOneHasBeenSet(false),
    m_reservedMsgTwoHasBeenSet(false),
    m_reservedMsgThreeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string RevokeMemberRechargeThirdPayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_oldFillFrontSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldFillFrontSeqNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldFillFrontSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_oldFillPayChannelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldFillPayChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldFillPayChannelType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldPayChannelTranSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldPayChannelTranSeqNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldPayChannelTranSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_oldFillEjzbOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldFillEjzbOrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldFillEjzbOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_applyCancelMemberAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyCancelMemberAmt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyCancelMemberAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_applyCancelCommissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyCancelCommission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyCancelCommission.c_str(), allocator).Move(), allocator);
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


string RevokeMemberRechargeThirdPayRequest::GetOldFillFrontSeqNo() const
{
    return m_oldFillFrontSeqNo;
}

void RevokeMemberRechargeThirdPayRequest::SetOldFillFrontSeqNo(const string& _oldFillFrontSeqNo)
{
    m_oldFillFrontSeqNo = _oldFillFrontSeqNo;
    m_oldFillFrontSeqNoHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::OldFillFrontSeqNoHasBeenSet() const
{
    return m_oldFillFrontSeqNoHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetOldFillPayChannelType() const
{
    return m_oldFillPayChannelType;
}

void RevokeMemberRechargeThirdPayRequest::SetOldFillPayChannelType(const string& _oldFillPayChannelType)
{
    m_oldFillPayChannelType = _oldFillPayChannelType;
    m_oldFillPayChannelTypeHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::OldFillPayChannelTypeHasBeenSet() const
{
    return m_oldFillPayChannelTypeHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetOldPayChannelTranSeqNo() const
{
    return m_oldPayChannelTranSeqNo;
}

void RevokeMemberRechargeThirdPayRequest::SetOldPayChannelTranSeqNo(const string& _oldPayChannelTranSeqNo)
{
    m_oldPayChannelTranSeqNo = _oldPayChannelTranSeqNo;
    m_oldPayChannelTranSeqNoHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::OldPayChannelTranSeqNoHasBeenSet() const
{
    return m_oldPayChannelTranSeqNoHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetOldFillEjzbOrderNo() const
{
    return m_oldFillEjzbOrderNo;
}

void RevokeMemberRechargeThirdPayRequest::SetOldFillEjzbOrderNo(const string& _oldFillEjzbOrderNo)
{
    m_oldFillEjzbOrderNo = _oldFillEjzbOrderNo;
    m_oldFillEjzbOrderNoHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::OldFillEjzbOrderNoHasBeenSet() const
{
    return m_oldFillEjzbOrderNoHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetApplyCancelMemberAmt() const
{
    return m_applyCancelMemberAmt;
}

void RevokeMemberRechargeThirdPayRequest::SetApplyCancelMemberAmt(const string& _applyCancelMemberAmt)
{
    m_applyCancelMemberAmt = _applyCancelMemberAmt;
    m_applyCancelMemberAmtHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ApplyCancelMemberAmtHasBeenSet() const
{
    return m_applyCancelMemberAmtHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetApplyCancelCommission() const
{
    return m_applyCancelCommission;
}

void RevokeMemberRechargeThirdPayRequest::SetApplyCancelCommission(const string& _applyCancelCommission)
{
    m_applyCancelCommission = _applyCancelCommission;
    m_applyCancelCommissionHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ApplyCancelCommissionHasBeenSet() const
{
    return m_applyCancelCommissionHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetMrchCode() const
{
    return m_mrchCode;
}

void RevokeMemberRechargeThirdPayRequest::SetMrchCode(const string& _mrchCode)
{
    m_mrchCode = _mrchCode;
    m_mrchCodeHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::MrchCodeHasBeenSet() const
{
    return m_mrchCodeHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetRemark() const
{
    return m_remark;
}

void RevokeMemberRechargeThirdPayRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetReservedMsgOne() const
{
    return m_reservedMsgOne;
}

void RevokeMemberRechargeThirdPayRequest::SetReservedMsgOne(const string& _reservedMsgOne)
{
    m_reservedMsgOne = _reservedMsgOne;
    m_reservedMsgOneHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ReservedMsgOneHasBeenSet() const
{
    return m_reservedMsgOneHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetReservedMsgTwo() const
{
    return m_reservedMsgTwo;
}

void RevokeMemberRechargeThirdPayRequest::SetReservedMsgTwo(const string& _reservedMsgTwo)
{
    m_reservedMsgTwo = _reservedMsgTwo;
    m_reservedMsgTwoHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ReservedMsgTwoHasBeenSet() const
{
    return m_reservedMsgTwoHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetReservedMsgThree() const
{
    return m_reservedMsgThree;
}

void RevokeMemberRechargeThirdPayRequest::SetReservedMsgThree(const string& _reservedMsgThree)
{
    m_reservedMsgThree = _reservedMsgThree;
    m_reservedMsgThreeHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ReservedMsgThreeHasBeenSet() const
{
    return m_reservedMsgThreeHasBeenSet;
}

string RevokeMemberRechargeThirdPayRequest::GetProfile() const
{
    return m_profile;
}

void RevokeMemberRechargeThirdPayRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool RevokeMemberRechargeThirdPayRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


