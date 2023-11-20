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

#include <tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DescribeFabricTransactionResponse::DescribeFabricTransactionResponse() :
    m_txIdHasBeenSet(false),
    m_txHashHasBeenSet(false),
    m_txStatusHasBeenSet(false),
    m_joinOrgListHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_transactionDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFabricTransactionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TxId") && !rsp["TxId"].IsNull())
    {
        if (!rsp["TxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txId = string(rsp["TxId"].GetString());
        m_txIdHasBeenSet = true;
    }

    if (rsp.HasMember("TxHash") && !rsp["TxHash"].IsNull())
    {
        if (!rsp["TxHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txHash = string(rsp["TxHash"].GetString());
        m_txHashHasBeenSet = true;
    }

    if (rsp.HasMember("TxStatus") && !rsp["TxStatus"].IsNull())
    {
        if (!rsp["TxStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TxStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txStatus = string(rsp["TxStatus"].GetString());
        m_txStatusHasBeenSet = true;
    }

    if (rsp.HasMember("JoinOrgList") && !rsp["JoinOrgList"].IsNull())
    {
        if (!rsp["JoinOrgList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JoinOrgList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["JoinOrgList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_joinOrgList.push_back((*itr).GetString());
        }
        m_joinOrgListHasBeenSet = true;
    }

    if (rsp.HasMember("Sender") && !rsp["Sender"].IsNull())
    {
        if (!rsp["Sender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sender = string(rsp["Sender"].GetString());
        m_senderHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BlockHeight") && !rsp["BlockHeight"].IsNull())
    {
        if (!rsp["BlockHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = rsp["BlockHeight"].GetInt64();
        m_blockHeightHasBeenSet = true;
    }

    if (rsp.HasMember("ChaincodeName") && !rsp["ChaincodeName"].IsNull())
    {
        if (!rsp["ChaincodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChaincodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chaincodeName = string(rsp["ChaincodeName"].GetString());
        m_chaincodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionData") && !rsp["TransactionData"].IsNull())
    {
        if (!rsp["TransactionData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionData = string(rsp["TransactionData"].GetString());
        m_transactionDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFabricTransactionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_txIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txId.c_str(), allocator).Move(), allocator);
    }

    if (m_txHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txHash.c_str(), allocator).Move(), allocator);
    }

    if (m_txStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_joinOrgListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinOrgList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_joinOrgList.begin(); itr != m_joinOrgList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_senderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sender.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionData.c_str(), allocator).Move(), allocator);
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


string DescribeFabricTransactionResponse::GetTxId() const
{
    return m_txId;
}

bool DescribeFabricTransactionResponse::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

string DescribeFabricTransactionResponse::GetTxHash() const
{
    return m_txHash;
}

bool DescribeFabricTransactionResponse::TxHashHasBeenSet() const
{
    return m_txHashHasBeenSet;
}

string DescribeFabricTransactionResponse::GetTxStatus() const
{
    return m_txStatus;
}

bool DescribeFabricTransactionResponse::TxStatusHasBeenSet() const
{
    return m_txStatusHasBeenSet;
}

vector<string> DescribeFabricTransactionResponse::GetJoinOrgList() const
{
    return m_joinOrgList;
}

bool DescribeFabricTransactionResponse::JoinOrgListHasBeenSet() const
{
    return m_joinOrgListHasBeenSet;
}

string DescribeFabricTransactionResponse::GetSender() const
{
    return m_sender;
}

bool DescribeFabricTransactionResponse::SenderHasBeenSet() const
{
    return m_senderHasBeenSet;
}

string DescribeFabricTransactionResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeFabricTransactionResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeFabricTransactionResponse::GetBlockHeight() const
{
    return m_blockHeight;
}

bool DescribeFabricTransactionResponse::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string DescribeFabricTransactionResponse::GetChaincodeName() const
{
    return m_chaincodeName;
}

bool DescribeFabricTransactionResponse::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string DescribeFabricTransactionResponse::GetTransactionData() const
{
    return m_transactionData;
}

bool DescribeFabricTransactionResponse::TransactionDataHasBeenSet() const
{
    return m_transactionDataHasBeenSet;
}


