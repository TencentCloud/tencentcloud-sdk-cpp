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

#include <tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryBankTransactionDetailsResponse::QueryBankTransactionDetailsResponse() :
    m_txnReturnCodeHasBeenSet(false),
    m_txnReturnMsgHasBeenSet(false),
    m_cnsmrSeqNoHasBeenSet(false),
    m_resultNumHasBeenSet(false),
    m_startRecordNoHasBeenSet(false),
    m_endFlagHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_tranItemArrayHasBeenSet(false),
    m_reservedMsgHasBeenSet(false)
{
}

CoreInternalOutcome QueryBankTransactionDetailsResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ResultNum") && !rsp["ResultNum"].IsNull())
    {
        if (!rsp["ResultNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultNum = string(rsp["ResultNum"].GetString());
        m_resultNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartRecordNo") && !rsp["StartRecordNo"].IsNull())
    {
        if (!rsp["StartRecordNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartRecordNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startRecordNo = string(rsp["StartRecordNo"].GetString());
        m_startRecordNoHasBeenSet = true;
    }

    if (rsp.HasMember("EndFlag") && !rsp["EndFlag"].IsNull())
    {
        if (!rsp["EndFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = string(rsp["EndFlag"].GetString());
        m_endFlagHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = string(rsp["TotalNum"].GetString());
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TranItemArray") && !rsp["TranItemArray"].IsNull())
    {
        if (!rsp["TranItemArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranItemArray` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TranItemArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TransactionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tranItemArray.push_back(item);
        }
        m_tranItemArrayHasBeenSet = true;
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

string QueryBankTransactionDetailsResponse::ToJsonString() const
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

    if (m_resultNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultNum.c_str(), allocator).Move(), allocator);
    }

    if (m_startRecordNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartRecordNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startRecordNo.c_str(), allocator).Move(), allocator);
    }

    if (m_endFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalNum.c_str(), allocator).Move(), allocator);
    }

    if (m_tranItemArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranItemArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tranItemArray.begin(); itr != m_tranItemArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string QueryBankTransactionDetailsResponse::GetTxnReturnCode() const
{
    return m_txnReturnCode;
}

bool QueryBankTransactionDetailsResponse::TxnReturnCodeHasBeenSet() const
{
    return m_txnReturnCodeHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetTxnReturnMsg() const
{
    return m_txnReturnMsg;
}

bool QueryBankTransactionDetailsResponse::TxnReturnMsgHasBeenSet() const
{
    return m_txnReturnMsgHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetCnsmrSeqNo() const
{
    return m_cnsmrSeqNo;
}

bool QueryBankTransactionDetailsResponse::CnsmrSeqNoHasBeenSet() const
{
    return m_cnsmrSeqNoHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetResultNum() const
{
    return m_resultNum;
}

bool QueryBankTransactionDetailsResponse::ResultNumHasBeenSet() const
{
    return m_resultNumHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetStartRecordNo() const
{
    return m_startRecordNo;
}

bool QueryBankTransactionDetailsResponse::StartRecordNoHasBeenSet() const
{
    return m_startRecordNoHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetEndFlag() const
{
    return m_endFlag;
}

bool QueryBankTransactionDetailsResponse::EndFlagHasBeenSet() const
{
    return m_endFlagHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool QueryBankTransactionDetailsResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

vector<TransactionItem> QueryBankTransactionDetailsResponse::GetTranItemArray() const
{
    return m_tranItemArray;
}

bool QueryBankTransactionDetailsResponse::TranItemArrayHasBeenSet() const
{
    return m_tranItemArrayHasBeenSet;
}

string QueryBankTransactionDetailsResponse::GetReservedMsg() const
{
    return m_reservedMsg;
}

bool QueryBankTransactionDetailsResponse::ReservedMsgHasBeenSet() const
{
    return m_reservedMsgHasBeenSet;
}


