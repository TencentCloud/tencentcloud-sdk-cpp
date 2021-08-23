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

#include <tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QuerySingleTransactionStatusResponse::QuerySingleTransactionStatusResponse() :
    m_txnReturnCodeHasBeenSet(false),
    m_txnReturnMsgHasBeenSet(false),
    m_cnsmrSeqNoHasBeenSet(false),
    m_bookingFlagHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_tranAmtHasBeenSet(false),
    m_tranDateHasBeenSet(false),
    m_tranTimeHasBeenSet(false),
    m_inSubAcctNoHasBeenSet(false),
    m_outSubAcctNoHasBeenSet(false),
    m_failMsgHasBeenSet(false),
    m_oldTranFrontSeqNoHasBeenSet(false)
{
}

CoreInternalOutcome QuerySingleTransactionStatusResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TxnReturnCode") && !rsp["TxnReturnCode"].IsNull())
    {
        if (!rsp["TxnReturnCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxnReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnCode = string(rsp["TxnReturnCode"].GetString());
        m_txnReturnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TxnReturnMsg") && !rsp["TxnReturnMsg"].IsNull())
    {
        if (!rsp["TxnReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxnReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnMsg = string(rsp["TxnReturnMsg"].GetString());
        m_txnReturnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("CnsmrSeqNo") && !rsp["CnsmrSeqNo"].IsNull())
    {
        if (!rsp["CnsmrSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CnsmrSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnsmrSeqNo = string(rsp["CnsmrSeqNo"].GetString());
        m_cnsmrSeqNoHasBeenSet = true;
    }

    if (rsp.HasMember("BookingFlag") && !rsp["BookingFlag"].IsNull())
    {
        if (!rsp["BookingFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BookingFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingFlag = string(rsp["BookingFlag"].GetString());
        m_bookingFlagHasBeenSet = true;
    }

    if (rsp.HasMember("TranStatus") && !rsp["TranStatus"].IsNull())
    {
        if (!rsp["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(rsp["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TranAmt") && !rsp["TranAmt"].IsNull())
    {
        if (!rsp["TranAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranAmt = string(rsp["TranAmt"].GetString());
        m_tranAmtHasBeenSet = true;
    }

    if (rsp.HasMember("TranDate") && !rsp["TranDate"].IsNull())
    {
        if (!rsp["TranDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranDate = string(rsp["TranDate"].GetString());
        m_tranDateHasBeenSet = true;
    }

    if (rsp.HasMember("TranTime") && !rsp["TranTime"].IsNull())
    {
        if (!rsp["TranTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranTime = string(rsp["TranTime"].GetString());
        m_tranTimeHasBeenSet = true;
    }

    if (rsp.HasMember("InSubAcctNo") && !rsp["InSubAcctNo"].IsNull())
    {
        if (!rsp["InSubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InSubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSubAcctNo = string(rsp["InSubAcctNo"].GetString());
        m_inSubAcctNoHasBeenSet = true;
    }

    if (rsp.HasMember("OutSubAcctNo") && !rsp["OutSubAcctNo"].IsNull())
    {
        if (!rsp["OutSubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubAcctNo = string(rsp["OutSubAcctNo"].GetString());
        m_outSubAcctNoHasBeenSet = true;
    }

    if (rsp.HasMember("FailMsg") && !rsp["FailMsg"].IsNull())
    {
        if (!rsp["FailMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMsg = string(rsp["FailMsg"].GetString());
        m_failMsgHasBeenSet = true;
    }

    if (rsp.HasMember("OldTranFrontSeqNo") && !rsp["OldTranFrontSeqNo"].IsNull())
    {
        if (!rsp["OldTranFrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldTranFrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldTranFrontSeqNo = string(rsp["OldTranFrontSeqNo"].GetString());
        m_oldTranFrontSeqNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QuerySingleTransactionStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_txnReturnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxnReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txnReturnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_txnReturnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxnReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txnReturnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_cnsmrSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnsmrSeqNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cnsmrSeqNo.c_str(), allocator).Move(), allocator);
    }

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

    if (m_failMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_oldTranFrontSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldTranFrontSeqNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldTranFrontSeqNo.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string QuerySingleTransactionStatusResponse::GetTxnReturnCode() const
{
    return m_txnReturnCode;
}

bool QuerySingleTransactionStatusResponse::TxnReturnCodeHasBeenSet() const
{
    return m_txnReturnCodeHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetTxnReturnMsg() const
{
    return m_txnReturnMsg;
}

bool QuerySingleTransactionStatusResponse::TxnReturnMsgHasBeenSet() const
{
    return m_txnReturnMsgHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetCnsmrSeqNo() const
{
    return m_cnsmrSeqNo;
}

bool QuerySingleTransactionStatusResponse::CnsmrSeqNoHasBeenSet() const
{
    return m_cnsmrSeqNoHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetBookingFlag() const
{
    return m_bookingFlag;
}

bool QuerySingleTransactionStatusResponse::BookingFlagHasBeenSet() const
{
    return m_bookingFlagHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetTranStatus() const
{
    return m_tranStatus;
}

bool QuerySingleTransactionStatusResponse::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetTranAmt() const
{
    return m_tranAmt;
}

bool QuerySingleTransactionStatusResponse::TranAmtHasBeenSet() const
{
    return m_tranAmtHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetTranDate() const
{
    return m_tranDate;
}

bool QuerySingleTransactionStatusResponse::TranDateHasBeenSet() const
{
    return m_tranDateHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetTranTime() const
{
    return m_tranTime;
}

bool QuerySingleTransactionStatusResponse::TranTimeHasBeenSet() const
{
    return m_tranTimeHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetInSubAcctNo() const
{
    return m_inSubAcctNo;
}

bool QuerySingleTransactionStatusResponse::InSubAcctNoHasBeenSet() const
{
    return m_inSubAcctNoHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetOutSubAcctNo() const
{
    return m_outSubAcctNo;
}

bool QuerySingleTransactionStatusResponse::OutSubAcctNoHasBeenSet() const
{
    return m_outSubAcctNoHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetFailMsg() const
{
    return m_failMsg;
}

bool QuerySingleTransactionStatusResponse::FailMsgHasBeenSet() const
{
    return m_failMsgHasBeenSet;
}

string QuerySingleTransactionStatusResponse::GetOldTranFrontSeqNo() const
{
    return m_oldTranFrontSeqNo;
}

bool QuerySingleTransactionStatusResponse::OldTranFrontSeqNoHasBeenSet() const
{
    return m_oldTranFrontSeqNoHasBeenSet;
}


