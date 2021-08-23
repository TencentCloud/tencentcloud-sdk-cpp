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

#include <tencentcloud/cpdp/v20190820/model/WithdrawItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

WithdrawItem::WithdrawItem() :
    m_bookingFlagHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_bookingMsgHasBeenSet(false),
    m_tranNetMemberCodeHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_subAcctNameHasBeenSet(false),
    m_tranAmtHasBeenSet(false),
    m_commissionHasBeenSet(false),
    m_tranDateHasBeenSet(false),
    m_tranTimeHasBeenSet(false),
    m_frontSeqNoHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome WithdrawItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BookingFlag") && !value["BookingFlag"].IsNull())
    {
        if (!value["BookingFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.BookingFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingFlag = string(value["BookingFlag"].GetString());
        m_bookingFlagHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("BookingMsg") && !value["BookingMsg"].IsNull())
    {
        if (!value["BookingMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.BookingMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingMsg = string(value["BookingMsg"].GetString());
        m_bookingMsgHasBeenSet = true;
    }

    if (value.HasMember("TranNetMemberCode") && !value["TranNetMemberCode"].IsNull())
    {
        if (!value["TranNetMemberCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.TranNetMemberCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranNetMemberCode = string(value["TranNetMemberCode"].GetString());
        m_tranNetMemberCodeHasBeenSet = true;
    }

    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("SubAcctName") && !value["SubAcctName"].IsNull())
    {
        if (!value["SubAcctName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.SubAcctName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctName = string(value["SubAcctName"].GetString());
        m_subAcctNameHasBeenSet = true;
    }

    if (value.HasMember("TranAmt") && !value["TranAmt"].IsNull())
    {
        if (!value["TranAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.TranAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranAmt = string(value["TranAmt"].GetString());
        m_tranAmtHasBeenSet = true;
    }

    if (value.HasMember("Commission") && !value["Commission"].IsNull())
    {
        if (!value["Commission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.Commission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commission = string(value["Commission"].GetString());
        m_commissionHasBeenSet = true;
    }

    if (value.HasMember("TranDate") && !value["TranDate"].IsNull())
    {
        if (!value["TranDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.TranDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranDate = string(value["TranDate"].GetString());
        m_tranDateHasBeenSet = true;
    }

    if (value.HasMember("TranTime") && !value["TranTime"].IsNull())
    {
        if (!value["TranTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.TranTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranTime = string(value["TranTime"].GetString());
        m_tranTimeHasBeenSet = true;
    }

    if (value.HasMember("FrontSeqNo") && !value["FrontSeqNo"].IsNull())
    {
        if (!value["FrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.FrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSeqNo = string(value["FrontSeqNo"].GetString());
        m_frontSeqNoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WithdrawItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WithdrawItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bookingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_bookingMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_tranNetMemberCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranNetMemberCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranNetMemberCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctName.c_str(), allocator).Move(), allocator);
    }

    if (m_tranAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranAmt.c_str(), allocator).Move(), allocator);
    }

    if (m_commissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commission.c_str(), allocator).Move(), allocator);
    }

    if (m_tranDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranDate.c_str(), allocator).Move(), allocator);
    }

    if (m_tranTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranTime.c_str(), allocator).Move(), allocator);
    }

    if (m_frontSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontSeqNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string WithdrawItem::GetBookingFlag() const
{
    return m_bookingFlag;
}

void WithdrawItem::SetBookingFlag(const string& _bookingFlag)
{
    m_bookingFlag = _bookingFlag;
    m_bookingFlagHasBeenSet = true;
}

bool WithdrawItem::BookingFlagHasBeenSet() const
{
    return m_bookingFlagHasBeenSet;
}

string WithdrawItem::GetTranStatus() const
{
    return m_tranStatus;
}

void WithdrawItem::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool WithdrawItem::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string WithdrawItem::GetBookingMsg() const
{
    return m_bookingMsg;
}

void WithdrawItem::SetBookingMsg(const string& _bookingMsg)
{
    m_bookingMsg = _bookingMsg;
    m_bookingMsgHasBeenSet = true;
}

bool WithdrawItem::BookingMsgHasBeenSet() const
{
    return m_bookingMsgHasBeenSet;
}

string WithdrawItem::GetTranNetMemberCode() const
{
    return m_tranNetMemberCode;
}

void WithdrawItem::SetTranNetMemberCode(const string& _tranNetMemberCode)
{
    m_tranNetMemberCode = _tranNetMemberCode;
    m_tranNetMemberCodeHasBeenSet = true;
}

bool WithdrawItem::TranNetMemberCodeHasBeenSet() const
{
    return m_tranNetMemberCodeHasBeenSet;
}

string WithdrawItem::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void WithdrawItem::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool WithdrawItem::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string WithdrawItem::GetSubAcctName() const
{
    return m_subAcctName;
}

void WithdrawItem::SetSubAcctName(const string& _subAcctName)
{
    m_subAcctName = _subAcctName;
    m_subAcctNameHasBeenSet = true;
}

bool WithdrawItem::SubAcctNameHasBeenSet() const
{
    return m_subAcctNameHasBeenSet;
}

string WithdrawItem::GetTranAmt() const
{
    return m_tranAmt;
}

void WithdrawItem::SetTranAmt(const string& _tranAmt)
{
    m_tranAmt = _tranAmt;
    m_tranAmtHasBeenSet = true;
}

bool WithdrawItem::TranAmtHasBeenSet() const
{
    return m_tranAmtHasBeenSet;
}

string WithdrawItem::GetCommission() const
{
    return m_commission;
}

void WithdrawItem::SetCommission(const string& _commission)
{
    m_commission = _commission;
    m_commissionHasBeenSet = true;
}

bool WithdrawItem::CommissionHasBeenSet() const
{
    return m_commissionHasBeenSet;
}

string WithdrawItem::GetTranDate() const
{
    return m_tranDate;
}

void WithdrawItem::SetTranDate(const string& _tranDate)
{
    m_tranDate = _tranDate;
    m_tranDateHasBeenSet = true;
}

bool WithdrawItem::TranDateHasBeenSet() const
{
    return m_tranDateHasBeenSet;
}

string WithdrawItem::GetTranTime() const
{
    return m_tranTime;
}

void WithdrawItem::SetTranTime(const string& _tranTime)
{
    m_tranTime = _tranTime;
    m_tranTimeHasBeenSet = true;
}

bool WithdrawItem::TranTimeHasBeenSet() const
{
    return m_tranTimeHasBeenSet;
}

string WithdrawItem::GetFrontSeqNo() const
{
    return m_frontSeqNo;
}

void WithdrawItem::SetFrontSeqNo(const string& _frontSeqNo)
{
    m_frontSeqNo = _frontSeqNo;
    m_frontSeqNoHasBeenSet = true;
}

bool WithdrawItem::FrontSeqNoHasBeenSet() const
{
    return m_frontSeqNoHasBeenSet;
}

string WithdrawItem::GetRemark() const
{
    return m_remark;
}

void WithdrawItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool WithdrawItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

