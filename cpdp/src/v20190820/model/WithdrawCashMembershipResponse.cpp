/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

WithdrawCashMembershipResponse::WithdrawCashMembershipResponse() :
    m_txnReturnCodeHasBeenSet(false),
    m_txnReturnMsgHasBeenSet(false),
    m_cnsmrSeqNoHasBeenSet(false),
    m_frontSeqNoHasBeenSet(false),
    m_transferFeeHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

CoreInternalOutcome WithdrawCashMembershipResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("FrontSeqNo") && !rsp["FrontSeqNo"].IsNull())
    {
        if (!rsp["FrontSeqNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrontSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSeqNo = string(rsp["FrontSeqNo"].GetString());
        m_frontSeqNoHasBeenSet = true;
    }

    if (rsp.HasMember("TransferFee") && !rsp["TransferFee"].IsNull())
    {
        if (!rsp["TransferFee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferFee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferFee = string(rsp["TransferFee"].GetString());
        m_transferFeeHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedMsg") && !rsp["ReservedMsg"].IsNull())
    {
        if (!rsp["ReservedMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMsg = string(rsp["ReservedMsg"].GetString());
        m_reservedMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string WithdrawCashMembershipResponse::ToJsonString() const
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

    if (m_frontSeqNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontSeqNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontSeqNo.c_str(), allocator).Move(), allocator);
    }

    if (m_transferFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferFee.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedMsg.c_str(), allocator).Move(), allocator);
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


string WithdrawCashMembershipResponse::GetTxnReturnCode() const
{
    return m_txnReturnCode;
}

bool WithdrawCashMembershipResponse::TxnReturnCodeHasBeenSet() const
{
    return m_txnReturnCodeHasBeenSet;
}

string WithdrawCashMembershipResponse::GetTxnReturnMsg() const
{
    return m_txnReturnMsg;
}

bool WithdrawCashMembershipResponse::TxnReturnMsgHasBeenSet() const
{
    return m_txnReturnMsgHasBeenSet;
}

string WithdrawCashMembershipResponse::GetCnsmrSeqNo() const
{
    return m_cnsmrSeqNo;
}

bool WithdrawCashMembershipResponse::CnsmrSeqNoHasBeenSet() const
{
    return m_cnsmrSeqNoHasBeenSet;
}

string WithdrawCashMembershipResponse::GetFrontSeqNo() const
{
    return m_frontSeqNo;
}

bool WithdrawCashMembershipResponse::FrontSeqNoHasBeenSet() const
{
    return m_frontSeqNoHasBeenSet;
}

string WithdrawCashMembershipResponse::GetTransferFee() const
{
    return m_transferFee;
}

bool WithdrawCashMembershipResponse::TransferFeeHasBeenSet() const
{
    return m_transferFeeHasBeenSet;
}

string WithdrawCashMembershipResponse::GetReservedMsg() const
{
    return m_reservedMsg;
}

bool WithdrawCashMembershipResponse::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


