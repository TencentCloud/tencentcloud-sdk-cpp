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

#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetTransactionDetailForUserResponse::GetTransactionDetailForUserResponse() :
    m_transactionIdHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_createOrgNameHasBeenSet(false),
    m_transactionTypeHasBeenSet(false),
    m_transactionStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_transactionDataHasBeenSet(false),
    m_blockIdHasBeenSet(false),
    m_blockHashHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_contractNameHasBeenSet(false),
    m_endorserOrgListHasBeenSet(false)
{
}

CoreInternalOutcome GetTransactionDetailForUserResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TransactionId") && !rsp["TransactionId"].IsNull())
    {
        if (!rsp["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(rsp["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionHash") && !rsp["TransactionHash"].IsNull())
    {
        if (!rsp["TransactionHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionHash = string(rsp["TransactionHash"].GetString());
        m_transactionHashHasBeenSet = true;
    }

    if (rsp.HasMember("CreateOrgName") && !rsp["CreateOrgName"].IsNull())
    {
        if (!rsp["CreateOrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createOrgName = string(rsp["CreateOrgName"].GetString());
        m_createOrgNameHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionType") && !rsp["TransactionType"].IsNull())
    {
        if (!rsp["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(rsp["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TransactionStatus") && !rsp["TransactionStatus"].IsNull())
    {
        if (!rsp["TransactionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionStatus = string(rsp["TransactionStatus"].GetString());
        m_transactionStatusHasBeenSet = true;
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

    if (rsp.HasMember("TransactionData") && !rsp["TransactionData"].IsNull())
    {
        if (!rsp["TransactionData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionData = string(rsp["TransactionData"].GetString());
        m_transactionDataHasBeenSet = true;
    }

    if (rsp.HasMember("BlockId") && !rsp["BlockId"].IsNull())
    {
        if (!rsp["BlockId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockId = rsp["BlockId"].GetUint64();
        m_blockIdHasBeenSet = true;
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

    if (rsp.HasMember("BlockHeight") && !rsp["BlockHeight"].IsNull())
    {
        if (!rsp["BlockHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = rsp["BlockHeight"].GetUint64();
        m_blockHeightHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelName") && !rsp["ChannelName"].IsNull())
    {
        if (!rsp["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(rsp["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (rsp.HasMember("ContractName") && !rsp["ContractName"].IsNull())
    {
        if (!rsp["ContractName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContractName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractName = string(rsp["ContractName"].GetString());
        m_contractNameHasBeenSet = true;
    }

    if (rsp.HasMember("EndorserOrgList") && !rsp["EndorserOrgList"].IsNull())
    {
        if (!rsp["EndorserOrgList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndorserOrgList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EndorserOrgList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndorserGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endorserOrgList.push_back(item);
        }
        m_endorserOrgListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetTransactionDetailForUserResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_transactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionHash.c_str(), allocator).Move(), allocator);
    }

    if (m_createOrgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOrgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createOrgName.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionType.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_transactionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionData.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockId, allocator);
    }

    if (m_blockHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockHash.c_str(), allocator).Move(), allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_contractNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractName.c_str(), allocator).Move(), allocator);
    }

    if (m_endorserOrgListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndorserOrgList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endorserOrgList.begin(); itr != m_endorserOrgList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string GetTransactionDetailForUserResponse::GetTransactionId() const
{
    return m_transactionId;
}

bool GetTransactionDetailForUserResponse::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetTransactionHash() const
{
    return m_transactionHash;
}

bool GetTransactionDetailForUserResponse::TransactionHashHasBeenSet() const
{
    return m_transactionHashHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetCreateOrgName() const
{
    return m_createOrgName;
}

bool GetTransactionDetailForUserResponse::CreateOrgNameHasBeenSet() const
{
    return m_createOrgNameHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetTransactionType() const
{
    return m_transactionType;
}

bool GetTransactionDetailForUserResponse::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetTransactionStatus() const
{
    return m_transactionStatus;
}

bool GetTransactionDetailForUserResponse::TransactionStatusHasBeenSet() const
{
    return m_transactionStatusHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetTransactionDetailForUserResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetTransactionData() const
{
    return m_transactionData;
}

bool GetTransactionDetailForUserResponse::TransactionDataHasBeenSet() const
{
    return m_transactionDataHasBeenSet;
}

uint64_t GetTransactionDetailForUserResponse::GetBlockId() const
{
    return m_blockId;
}

bool GetTransactionDetailForUserResponse::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetBlockHash() const
{
    return m_blockHash;
}

bool GetTransactionDetailForUserResponse::BlockHashHasBeenSet() const
{
    return m_blockHashHasBeenSet;
}

uint64_t GetTransactionDetailForUserResponse::GetBlockHeight() const
{
    return m_blockHeight;
}

bool GetTransactionDetailForUserResponse::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetChannelName() const
{
    return m_channelName;
}

bool GetTransactionDetailForUserResponse::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string GetTransactionDetailForUserResponse::GetContractName() const
{
    return m_contractName;
}

bool GetTransactionDetailForUserResponse::ContractNameHasBeenSet() const
{
    return m_contractNameHasBeenSet;
}

vector<EndorserGroup> GetTransactionDetailForUserResponse::GetEndorserOrgList() const
{
    return m_endorserOrgList;
}

bool GetTransactionDetailForUserResponse::EndorserOrgListHasBeenSet() const
{
    return m_endorserOrgListHasBeenSet;
}


