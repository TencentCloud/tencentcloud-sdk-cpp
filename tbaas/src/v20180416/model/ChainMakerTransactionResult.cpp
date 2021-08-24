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

#include <tencentcloud/tbaas/v20180416/model/ChainMakerTransactionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ChainMakerTransactionResult::ChainMakerTransactionResult() :
    m_codeHasBeenSet(false),
    m_codeMessageHasBeenSet(false),
    m_txIdHasBeenSet(false),
    m_gasUsedHasBeenSet(false),
    m_blockHeightHasBeenSet(false),
    m_contractEventHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome ChainMakerTransactionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CodeMessage") && !value["CodeMessage"].IsNull())
    {
        if (!value["CodeMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.CodeMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeMessage = string(value["CodeMessage"].GetString());
        m_codeMessageHasBeenSet = true;
    }

    if (value.HasMember("TxId") && !value["TxId"].IsNull())
    {
        if (!value["TxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.TxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txId = string(value["TxId"].GetString());
        m_txIdHasBeenSet = true;
    }

    if (value.HasMember("GasUsed") && !value["GasUsed"].IsNull())
    {
        if (!value["GasUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.GasUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gasUsed = value["GasUsed"].GetInt64();
        m_gasUsedHasBeenSet = true;
    }

    if (value.HasMember("BlockHeight") && !value["BlockHeight"].IsNull())
    {
        if (!value["BlockHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.BlockHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockHeight = value["BlockHeight"].GetInt64();
        m_blockHeightHasBeenSet = true;
    }

    if (value.HasMember("ContractEvent") && !value["ContractEvent"].IsNull())
    {
        if (!value["ContractEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.ContractEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractEvent = string(value["ContractEvent"].GetString());
        m_contractEventHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerTransactionResult.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChainMakerTransactionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_codeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_txIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txId.c_str(), allocator).Move(), allocator);
    }

    if (m_gasUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GasUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gasUsed, allocator);
    }

    if (m_blockHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockHeight, allocator);
    }

    if (m_contractEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


int64_t ChainMakerTransactionResult::GetCode() const
{
    return m_code;
}

void ChainMakerTransactionResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ChainMakerTransactionResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ChainMakerTransactionResult::GetCodeMessage() const
{
    return m_codeMessage;
}

void ChainMakerTransactionResult::SetCodeMessage(const string& _codeMessage)
{
    m_codeMessage = _codeMessage;
    m_codeMessageHasBeenSet = true;
}

bool ChainMakerTransactionResult::CodeMessageHasBeenSet() const
{
    return m_codeMessageHasBeenSet;
}

string ChainMakerTransactionResult::GetTxId() const
{
    return m_txId;
}

void ChainMakerTransactionResult::SetTxId(const string& _txId)
{
    m_txId = _txId;
    m_txIdHasBeenSet = true;
}

bool ChainMakerTransactionResult::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

int64_t ChainMakerTransactionResult::GetGasUsed() const
{
    return m_gasUsed;
}

void ChainMakerTransactionResult::SetGasUsed(const int64_t& _gasUsed)
{
    m_gasUsed = _gasUsed;
    m_gasUsedHasBeenSet = true;
}

bool ChainMakerTransactionResult::GasUsedHasBeenSet() const
{
    return m_gasUsedHasBeenSet;
}

int64_t ChainMakerTransactionResult::GetBlockHeight() const
{
    return m_blockHeight;
}

void ChainMakerTransactionResult::SetBlockHeight(const int64_t& _blockHeight)
{
    m_blockHeight = _blockHeight;
    m_blockHeightHasBeenSet = true;
}

bool ChainMakerTransactionResult::BlockHeightHasBeenSet() const
{
    return m_blockHeightHasBeenSet;
}

string ChainMakerTransactionResult::GetContractEvent() const
{
    return m_contractEvent;
}

void ChainMakerTransactionResult::SetContractEvent(const string& _contractEvent)
{
    m_contractEvent = _contractEvent;
    m_contractEventHasBeenSet = true;
}

bool ChainMakerTransactionResult::ContractEventHasBeenSet() const
{
    return m_contractEventHasBeenSet;
}

string ChainMakerTransactionResult::GetMessage() const
{
    return m_message;
}

void ChainMakerTransactionResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ChainMakerTransactionResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t ChainMakerTransactionResult::GetTimestamp() const
{
    return m_timestamp;
}

void ChainMakerTransactionResult::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ChainMakerTransactionResult::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

