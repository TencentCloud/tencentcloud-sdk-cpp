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

#include <tencentcloud/tbaas/v20180416/model/TransactionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

TransactionItem::TransactionItem() :
    m_transactionIdHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_createOrgNameHasBeenSet(false),
    m_blockIdHasBeenSet(false),
    m_transactionTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_transactionStatusHasBeenSet(false)
{
}

CoreInternalOutcome TransactionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransactionId") && !value["TransactionId"].IsNull())
    {
        if (!value["TransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionId = string(value["TransactionId"].GetString());
        m_transactionIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionHash") && !value["TransactionHash"].IsNull())
    {
        if (!value["TransactionHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TransactionHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionHash = string(value["TransactionHash"].GetString());
        m_transactionHashHasBeenSet = true;
    }

    if (value.HasMember("CreateOrgName") && !value["CreateOrgName"].IsNull())
    {
        if (!value["CreateOrgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.CreateOrgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createOrgName = string(value["CreateOrgName"].GetString());
        m_createOrgNameHasBeenSet = true;
    }

    if (value.HasMember("BlockId") && !value["BlockId"].IsNull())
    {
        if (!value["BlockId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.BlockId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockId = value["BlockId"].GetUint64();
        m_blockIdHasBeenSet = true;
    }

    if (value.HasMember("TransactionType") && !value["TransactionType"].IsNull())
    {
        if (!value["TransactionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TransactionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionType = string(value["TransactionType"].GetString());
        m_transactionTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BlockHeight") && !value["BlockHeight"].IsNull())
    {
        if (!value["BlockHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.BlockHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = value["BlockHeight"].GetUint64();
        m_blockHeightHasBeenSet = true;
    }

    if (value.HasMember("TransactionStatus") && !value["TransactionStatus"].IsNull())
    {
        if (!value["TransactionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionItem.TransactionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionStatus = string(value["TransactionStatus"].GetString());
        m_transactionStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransactionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_blockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockId, allocator);
    }

    if (m_transactionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionType.c_str(), allocator).Move(), allocator);
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

    if (m_transactionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionStatus.c_str(), allocator).Move(), allocator);
    }

}


string TransactionItem::GetTransactionId() const
{
    return m_transactionId;
}

void TransactionItem::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool TransactionItem::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}

string TransactionItem::GetTransactionHash() const
{
    return m_transactionHash;
}

void TransactionItem::SetTransactionHash(const string& _transactionHash)
{
    m_transactionHash = _transactionHash;
    m_transactionHashHasBeenSet = true;
}

bool TransactionItem::TransactionHashHasBeenSet() const
{
    return m_transactionHashHasBeenSet;
}

string TransactionItem::GetCreateOrgName() const
{
    return m_createOrgName;
}

void TransactionItem::SetCreateOrgName(const string& _createOrgName)
{
    m_createOrgName = _createOrgName;
    m_createOrgNameHasBeenSet = true;
}

bool TransactionItem::CreateOrgNameHasBeenSet() const
{
    return m_createOrgNameHasBeenSet;
}

uint64_t TransactionItem::GetBlockId() const
{
    return m_blockId;
}

void TransactionItem::SetBlockId(const uint64_t& _blockId)
{
    m_blockId = _blockId;
    m_blockIdHasBeenSet = true;
}

bool TransactionItem::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}

string TransactionItem::GetTransactionType() const
{
    return m_transactionType;
}

void TransactionItem::SetTransactionType(const string& _transactionType)
{
    m_transactionType = _transactionType;
    m_transactionTypeHasBeenSet = true;
}

bool TransactionItem::TransactionTypeHasBeenSet() const
{
    return m_transactionTypeHasBeenSet;
}

string TransactionItem::GetCreateTime() const
{
    return m_createTime;
}

void TransactionItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TransactionItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t TransactionItem::GetBlockHeight() const
{
    return m_blockHeight;
}

void TransactionItem::SetBlockHeight(const uint64_t& _blockHeight)
{
    m_blockHeight = _blockHeight;
    m_blockHeightHasBeenSet = true;
}

bool TransactionItem::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string TransactionItem::GetTransactionStatus() const
{
    return m_transactionStatus;
}

void TransactionItem::SetTransactionStatus(const string& _transactionStatus)
{
    m_transactionStatus = _transactionStatus;
    m_transactionStatusHasBeenSet = true;
}

bool TransactionItem::TransactionStatusHasBeenSet() const
{
    return m_transactionStatusHasBeenSet;
}

