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

#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

DescribeFabricBlockResponse::DescribeFabricBlockResponse() :
    m_blockHeightHasBeenSet(false),
    m_blockHashHasBeenSet(false),
    m_preBlockHashHasBeenSet(false),
    m_txCountHasBeenSet(false),
    m_transactionListHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_proposerOrgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFabricBlockResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BlockHeight") && !rsp["BlockHeight"].IsNull())
    {
        if (!rsp["BlockHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = rsp["BlockHeight"].GetInt64();
        m_blockHeightHasBeenSet = true;
    }

    if (rsp.HasMember("BlockHash") && !rsp["BlockHash"].IsNull())
    {
        if (!rsp["BlockHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockHash = string(rsp["BlockHash"].GetString());
        m_blockHashHasBeenSet = true;
    }

    if (rsp.HasMember("PreBlockHash") && !rsp["PreBlockHash"].IsNull())
    {
        if (!rsp["PreBlockHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreBlockHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preBlockHash = string(rsp["PreBlockHash"].GetString());
        m_preBlockHashHasBeenSet = true;
    }

    if (rsp.HasMember("TxCount") && !rsp["TxCount"].IsNull())
    {
        if (!rsp["TxCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TxCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_txCount = rsp["TxCount"].GetInt64();
        m_txCountHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionList") && !rsp["TransactionList"].IsNull())
    {
        if (!rsp["TransactionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransactionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TransactionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Transaction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transactionList.push_back(item);
        }
        m_transactionListHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTimestamp") && !rsp["CreateTimestamp"].IsNull())
    {
        if (!rsp["CreateTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimestamp = string(rsp["CreateTimestamp"].GetString());
        m_createTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("ProposerOrg") && !rsp["ProposerOrg"].IsNull())
    {
        if (!rsp["ProposerOrg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProposerOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proposerOrg = string(rsp["ProposerOrg"].GetString());
        m_proposerOrgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFabricBlockResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_blockHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockHash.c_str(), allocator).Move(), allocator);
    }

    if (m_preBlockHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreBlockHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preBlockHash.c_str(), allocator).Move(), allocator);
    }

    if (m_txCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txCount, allocator);
    }

    if (m_transactionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transactionList.begin(); itr != m_transactionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_proposerOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProposerOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proposerOrg.c_str(), allocator).Move(), allocator);
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


int64_t DescribeFabricBlockResponse::GetBlockHeight() const
{
    return m_blockHeight;
}

bool DescribeFabricBlockResponse::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string DescribeFabricBlockResponse::GetBlockHash() const
{
    return m_blockHash;
}

bool DescribeFabricBlockResponse::BlockHashHasBeenSet() const
{
    return m_blockHashHasBeenSet;
}

string DescribeFabricBlockResponse::GetPreBlockHash() const
{
    return m_preBlockHash;
}

bool DescribeFabricBlockResponse::PreBlockHashHasBeenSet() const
{
    return m_preBlockHashHasBeenSet;
}

int64_t DescribeFabricBlockResponse::GetTxCount() const
{
    return m_txCount;
}

bool DescribeFabricBlockResponse::TxCountHasBeenSet() const
{
    return m_txCountHasBeenSet;
}

vector<Transaction> DescribeFabricBlockResponse::GetTransactionList() const
{
    return m_transactionList;
}

bool DescribeFabricBlockResponse::TransactionListHasBeenSet() const
{
    return m_transactionListHasBeenSet;
}

string DescribeFabricBlockResponse::GetCreateTimestamp() const
{
    return m_createTimestamp;
}

bool DescribeFabricBlockResponse::CreateTimestampHasBeenSet() const
{
    return m_createTimestampHasBeenSet;
}

string DescribeFabricBlockResponse::GetProposerOrg() const
{
    return m_proposerOrg;
}

bool DescribeFabricBlockResponse::ProposerOrgHasBeenSet() const
{
    return m_proposerOrgHasBeenSet;
}


