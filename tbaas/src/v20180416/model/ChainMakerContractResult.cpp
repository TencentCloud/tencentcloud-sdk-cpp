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

#include <tencentcloud/tbaas/v20180416/model/ChainMakerContractResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ChainMakerContractResult::ChainMakerContractResult() :
    m_codeHasBeenSet(false),
    m_codeMessageHasBeenSet(false),
    m_txIdHasBeenSet(false),
    m_gasUsedHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome ChainMakerContractResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CodeMessage") && !value["CodeMessage"].IsNull())
    {
        if (!value["CodeMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.CodeMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeMessage = string(value["CodeMessage"].GetString());
        m_codeMessageHasBeenSet = true;
    }

    if (value.HasMember("TxId") && !value["TxId"].IsNull())
    {
        if (!value["TxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.TxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txId = string(value["TxId"].GetString());
        m_txIdHasBeenSet = true;
    }

    if (value.HasMember("GasUsed") && !value["GasUsed"].IsNull())
    {
        if (!value["GasUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.GasUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gasUsed = value["GasUsed"].GetInt64();
        m_gasUsedHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainMakerContractResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChainMakerContractResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

}


int64_t ChainMakerContractResult::GetCode() const
{
    return m_code;
}

void ChainMakerContractResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ChainMakerContractResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ChainMakerContractResult::GetCodeMessage() const
{
    return m_codeMessage;
}

void ChainMakerContractResult::SetCodeMessage(const string& _codeMessage)
{
    m_codeMessage = _codeMessage;
    m_codeMessageHasBeenSet = true;
}

bool ChainMakerContractResult::CodeMessageHasBeenSet() const
{
    return m_codeMessageHasBeenSet;
}

string ChainMakerContractResult::GetTxId() const
{
    return m_txId;
}

void ChainMakerContractResult::SetTxId(const string& _txId)
{
    m_txId = _txId;
    m_txIdHasBeenSet = true;
}

bool ChainMakerContractResult::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

int64_t ChainMakerContractResult::GetGasUsed() const
{
    return m_gasUsed;
}

void ChainMakerContractResult::SetGasUsed(const int64_t& _gasUsed)
{
    m_gasUsed = _gasUsed;
    m_gasUsedHasBeenSet = true;
}

bool ChainMakerContractResult::GasUsedHasBeenSet() const
{
    return m_gasUsedHasBeenSet;
}

string ChainMakerContractResult::GetMessage() const
{
    return m_message;
}

void ChainMakerContractResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ChainMakerContractResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ChainMakerContractResult::GetResult() const
{
    return m_result;
}

void ChainMakerContractResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ChainMakerContractResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

