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

#include <tencentcloud/cpdp/v20190820/model/ContractOrderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ContractOrderResponse::ContractOrderResponse() :
    m_totalAmtHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_payInfoHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_outContractCodeHasBeenSet(false)
{
}

CoreInternalOutcome ContractOrderResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalAmt") && !rsp["TotalAmt"].IsNull())
    {
        if (!rsp["TotalAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmt = rsp["TotalAmt"].GetInt64();
        m_totalAmtHasBeenSet = true;
    }

    if (rsp.HasMember("OutTradeNo") && !rsp["OutTradeNo"].IsNull())
    {
        if (!rsp["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(rsp["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (rsp.HasMember("PayInfo") && !rsp["PayInfo"].IsNull())
    {
        if (!rsp["PayInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payInfo = string(rsp["PayInfo"].GetString());
        m_payInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionId") && !rsp["TransactionId"].IsNull())
    {
        if (!rsp["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(rsp["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (rsp.HasMember("OutContractCode") && !rsp["OutContractCode"].IsNull())
    {
        if (!rsp["OutContractCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutContractCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outContractCode = string(rsp["OutContractCode"].GetString());
        m_outContractCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ContractOrderResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmt, allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outContractCode.c_str(), allocator).Move(), allocator);
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


int64_t ContractOrderResponse::GetTotalAmt() const
{
    return m_totalAmt;
}

bool ContractOrderResponse::TotalAmtHasBeenSet() const
{
    return m_totalAmtHasBeenSet;
}

string ContractOrderResponse::GetOutTradeNo() const
{
    return m_outTradeNo;
}

bool ContractOrderResponse::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string ContractOrderResponse::GetPayInfo() const
{
    return m_payInfo;
}

bool ContractOrderResponse::PayInfoHasBeenSet() const
{
    return m_payInfoHasBeenSet;
}

string ContractOrderResponse::GetTransactionId() const
{
    return m_transactionId;
}

bool ContractOrderResponse::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string ContractOrderResponse::GetOutContractCode() const
{
    return m_outContractCode;
}

bool ContractOrderResponse::OutContractCodeHasBeenSet() const
{
    return m_outContractCodeHasBeenSet;
}


