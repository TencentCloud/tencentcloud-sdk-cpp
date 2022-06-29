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

#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerDemoBlockTransactionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

QueryChainMakerDemoBlockTransactionResponse::QueryChainMakerDemoBlockTransactionResponse() :
    m_resultHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_txCountHasBeenSet(false),
    m_blockTimestampHasBeenSet(false)
{
}

CoreInternalOutcome QueryChainMakerDemoBlockTransactionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Result` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChainMakerTransactionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_result.push_back(item);
        }
        m_resultHasBeenSet = true;
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

    if (rsp.HasMember("TxCount") && !rsp["TxCount"].IsNull())
    {
        if (!rsp["TxCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TxCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_txCount = rsp["TxCount"].GetInt64();
        m_txCountHasBeenSet = true;
    }

    if (rsp.HasMember("BlockTimestamp") && !rsp["BlockTimestamp"].IsNull())
    {
        if (!rsp["BlockTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockTimestamp = rsp["BlockTimestamp"].GetInt64();
        m_blockTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryChainMakerDemoBlockTransactionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_txCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txCount, allocator);
    }

    if (m_blockTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockTimestamp, allocator);
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


vector<ChainMakerTransactionResult> QueryChainMakerDemoBlockTransactionResponse::GetResult() const
{
    return m_result;
}

bool QueryChainMakerDemoBlockTransactionResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t QueryChainMakerDemoBlockTransactionResponse::GetBlockHeight() const
{
    return m_blockHeight;
}

bool QueryChainMakerDemoBlockTransactionResponse::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

int64_t QueryChainMakerDemoBlockTransactionResponse::GetTxCount() const
{
    return m_txCount;
}

bool QueryChainMakerDemoBlockTransactionResponse::TxCountHasBeenSet() const
{
    return m_txCountHasBeenSet;
}

int64_t QueryChainMakerDemoBlockTransactionResponse::GetBlockTimestamp() const
{
    return m_blockTimestamp;
}

bool QueryChainMakerDemoBlockTransactionResponse::BlockTimestampHasBeenSet() const
{
    return m_blockTimestampHasBeenSet;
}


