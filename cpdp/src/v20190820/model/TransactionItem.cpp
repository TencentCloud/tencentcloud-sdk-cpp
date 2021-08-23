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

#include <tencentcloud/cpdp/v20190820/model/TransactionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransactionItem::TransactionItem() :
    m_bookingFlagHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_tranAmtHasBeenSet(false),
    m_tranDateHasBeenSet(false),
    m_tranTimeHasBeenSet(false),
    m_frontSeqNoHasBeenSet(false),
    m_bookingTypeHasBeenSet(false),
    m_inSubAcctNoHasBeenSet(false),
    m_outSubAcctNoHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome TransactionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BookingFlag") && !value["BookingFlag"].IsNull())
    {
        if (!value["BookingFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.BookingFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingFlag = string(value["BookingFlag"].GetString());
        m_bookingFlagHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("TranAmt") && !value["TranAmt"].IsNull())
    {
        if (!value["TranAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TranAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranAmt = string(value["TranAmt"].GetString());
        m_tranAmtHasBeenSet = true;
    }

    if (value.HasMember("TranDate") && !value["TranDate"].IsNull())
    {
        if (!value["TranDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TranDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranDate = string(value["TranDate"].GetString());
        m_tranDateHasBeenSet = true;
    }

    if (value.HasMember("TranTime") && !value["TranTime"].IsNull())
    {
        if (!value["TranTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TranTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranTime = string(value["TranTime"].GetString());
        m_tranTimeHasBeenSet = true;
    }

    if (value.HasMember("FrontSeqNo") && !value["FrontSeqNo"].IsNull())
    {
        if (!value["FrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.FrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSeqNo = string(value["FrontSeqNo"].GetString());
        m_frontSeqNoHasBeenSet = true;
    }

    if (value.HasMember("BookingType") && !value["BookingType"].IsNull())
    {
        if (!value["BookingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.BookingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingType = string(value["BookingType"].GetString());
        m_bookingTypeHasBeenSet = true;
    }

    if (value.HasMember("InSubAcctNo") && !value["InSubAcctNo"].IsNull())
    {
        if (!value["InSubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.InSubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSubAcctNo = string(value["InSubAcctNo"].GetString());
        m_inSubAcctNoHasBeenSet = true;
    }

    if (value.HasMember("OutSubAcctNo") && !value["OutSubAcctNo"].IsNull())
    {
        if (!value["OutSubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.OutSubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubAcctNo = string(value["OutSubAcctNo"].GetString());
        m_outSubAcctNoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransactionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tranAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranAmt.c_str(), allocator).Move(), allocator);
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

    if (m_bookingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingType.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inSubAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSubAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string TransactionItem::GetBookingFlag() const
{
    return m_bookingFlag;
}

void TransactionItem::SetBookingFlag(const string& _bookingFlag)
{
    m_bookingFlag = _bookingFlag;
    m_bookingFlagHasBeenSet = true;
}

bool TransactionItem::BookingFlagHasBeenSet() const
{
    return m_bookingFlagHasBeenSet;
}

string TransactionItem::GetTranStatus() const
{
    return m_tranStatus;
}

void TransactionItem::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool TransactionItem::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string TransactionItem::GetTranAmt() const
{
    return m_tranAmt;
}

void TransactionItem::SetTranAmt(const string& _tranAmt)
{
    m_tranAmt = _tranAmt;
    m_tranAmtHasBeenSet = true;
}

bool TransactionItem::TranAmtHasBeenSet() const
{
    return m_tranAmtHasBeenSet;
}

string TransactionItem::GetTranDate() const
{
    return m_tranDate;
}

void TransactionItem::SetTranDate(const string& _tranDate)
{
    m_tranDate = _tranDate;
    m_tranDateHasBeenSet = true;
}

bool TransactionItem::TranDateHasBeenSet() const
{
    return m_tranDateHasBeenSet;
}

string TransactionItem::GetTranTime() const
{
    return m_tranTime;
}

void TransactionItem::SetTranTime(const string& _tranTime)
{
    m_tranTime = _tranTime;
    m_tranTimeHasBeenSet = true;
}

bool TransactionItem::TranTimeHasBeenSet() const
{
    return m_tranTimeHasBeenSet;
}

string TransactionItem::GetFrontSeqNo() const
{
    return m_frontSeqNo;
}

void TransactionItem::SetFrontSeqNo(const string& _frontSeqNo)
{
    m_frontSeqNo = _frontSeqNo;
    m_frontSeqNoHasBeenSet = true;
}

bool TransactionItem::FrontSeqNoHasBeenSet() const
{
    return m_frontSeqNoHasBeenSet;
}

string TransactionItem::GetBookingType() const
{
    return m_bookingType;
}

void TransactionItem::SetBookingType(const string& _bookingType)
{
    m_bookingType = _bookingType;
    m_bookingTypeHasBeenSet = true;
}

bool TransactionItem::BookingTypeHasBeenSet() const
{
    return m_bookingTypeHasBeenSet;
}

string TransactionItem::GetInSubAcctNo() const
{
    return m_inSubAcctNo;
}

void TransactionItem::SetInSubAcctNo(const string& _inSubAcctNo)
{
    m_inSubAcctNo = _inSubAcctNo;
    m_inSubAcctNoHasBeenSet = true;
}

bool TransactionItem::InSubAcctNoHasBeenSet() const
{
    return m_inSubAcctNoHasBeenSet;
}

string TransactionItem::GetOutSubAcctNo() const
{
    return m_outSubAcctNo;
}

void TransactionItem::SetOutSubAcctNo(const string& _outSubAcctNo)
{
    m_outSubAcctNo = _outSubAcctNo;
    m_outSubAcctNoHasBeenSet = true;
}

bool TransactionItem::OutSubAcctNoHasBeenSet() const
{
    return m_outSubAcctNoHasBeenSet;
}

string TransactionItem::GetRemark() const
{
    return m_remark;
}

void TransactionItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TransactionItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

