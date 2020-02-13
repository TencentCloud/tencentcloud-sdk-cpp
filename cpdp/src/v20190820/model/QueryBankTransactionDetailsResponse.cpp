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
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TxnReturnCode") && !rsp["TxnReturnCode"].IsNull())
    {
        if (!rsp["TxnReturnCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `TxnReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnCode = string(rsp["TxnReturnCode"].GetString());
        m_txnReturnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("TxnReturnMsg") && !rsp["TxnReturnMsg"].IsNull())
    {
        if (!rsp["TxnReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `TxnReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txnReturnMsg = string(rsp["TxnReturnMsg"].GetString());
        m_txnReturnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("CnsmrSeqNo") && !rsp["CnsmrSeqNo"].IsNull())
    {
        if (!rsp["CnsmrSeqNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CnsmrSeqNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cnsmrSeqNo = string(rsp["CnsmrSeqNo"].GetString());
        m_cnsmrSeqNoHasBeenSet = true;
    }

    if (rsp.HasMember("ResultNum") && !rsp["ResultNum"].IsNull())
    {
        if (!rsp["ResultNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResultNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultNum = string(rsp["ResultNum"].GetString());
        m_resultNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartRecordNo") && !rsp["StartRecordNo"].IsNull())
    {
        if (!rsp["StartRecordNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartRecordNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startRecordNo = string(rsp["StartRecordNo"].GetString());
        m_startRecordNoHasBeenSet = true;
    }

    if (rsp.HasMember("EndFlag") && !rsp["EndFlag"].IsNull())
    {
        if (!rsp["EndFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endFlag = string(rsp["EndFlag"].GetString());
        m_endFlagHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `TotalNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = string(rsp["TotalNum"].GetString());
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("TranItemArray") && !rsp["TranItemArray"].IsNull())
    {
        if (!rsp["TranItemArray"].IsArray())
            return CoreInternalOutcome(Error("response `TranItemArray` is not array type"));

        const Value &tmpValue = rsp["TranItemArray"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ReservedMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMsg = string(rsp["ReservedMsg"].GetString());
        m_reservedMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


