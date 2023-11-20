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

#include <tencentcloud/tbaas/v20180416/model/Transaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

Transaction::Transaction() :
    m_txIdHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_senderHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_txIndexHasBeenSet(false)
{
}

CoreInternalOutcome Transaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TxId") && !value["TxId"].IsNull())
    {
        if (!value["TxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txId = string(value["TxId"].GetString());
        m_txIdHasBeenSet = true;
    }

    if (value.HasMember("ChaincodeName") && !value["ChaincodeName"].IsNull())
    {
        if (!value["ChaincodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.ChaincodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chaincodeName = string(value["ChaincodeName"].GetString());
        m_chaincodeNameHasBeenSet = true;
    }

    if (value.HasMember("Sender") && !value["Sender"].IsNull())
    {
        if (!value["Sender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.Sender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sender = string(value["Sender"].GetString());
        m_senderHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BlockHeight") && !value["BlockHeight"].IsNull())
    {
        if (!value["BlockHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.BlockHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = value["BlockHeight"].GetInt64();
        m_blockHeightHasBeenSet = true;
    }

    if (value.HasMember("TxIndex") && !value["TxIndex"].IsNull())
    {
        if (!value["TxIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Transaction.TxIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_txIndex = value["TxIndex"].GetInt64();
        m_txIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Transaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_txIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txId.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
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

    if (m_txIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_txIndex, allocator);
    }

}


string Transaction::GetTxId() const
{
    return m_txId;
}

void Transaction::SetTxId(const string& _txId)
{
    m_txId = _txId;
    m_txIdHasBeenSet = true;
}

bool Transaction::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

string Transaction::GetChaincodeName() const
{
    return m_chaincodeName;
}

void Transaction::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool Transaction::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string Transaction::GetSender() const
{
    return m_sender;
}

void Transaction::SetSender(const string& _sender)
{
    m_sender = _sender;
    m_senderHasBeenSet = true;
}

bool Transaction::SenderHasBeenSet() const
{
    return m_senderHasBeenSet;
}

string Transaction::GetCreateTime() const
{
    return m_createTime;
}

void Transaction::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Transaction::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Transaction::GetBlockHeight() const
{
    return m_blockHeight;
}

void Transaction::SetBlockHeight(const int64_t& _blockHeight)
{
    m_blockHeight = _blockHeight;
    m_blockHeightHasBeenSet = true;
}

bool Transaction::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

int64_t Transaction::GetTxIndex() const
{
    return m_txIndex;
}

void Transaction::SetTxIndex(const int64_t& _txIndex)
{
    m_txIndex = _txIndex;
    m_txIndexHasBeenSet = true;
}

bool Transaction::TxIndexHasBeenSet() const
{
    return m_txIndexHasBeenSet;
}

