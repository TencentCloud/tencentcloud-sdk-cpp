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

#include <tencentcloud/adp/v20260520/model/MsgRecordResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MsgRecordResult::MsgRecordResult() :
    m_callResultHasBeenSet(false),
    m_customerVariableHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_firstTokenLatencyHasBeenSet(false),
    m_inputTokenHasBeenSet(false),
    m_outputTokenHasBeenSet(false),
    m_totalTokenHasBeenSet(false),
    m_totalTokenLatencyHasBeenSet(false)
{
}

CoreInternalOutcome MsgRecordResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallResult") && !value["CallResult"].IsNull())
    {
        if (!value["CallResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.CallResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callResult = value["CallResult"].GetInt64();
        m_callResultHasBeenSet = true;
    }

    if (value.HasMember("CustomerVariable") && !value["CustomerVariable"].IsNull())
    {
        if (!value["CustomerVariable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.CustomerVariable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerVariable = string(value["CustomerVariable"].GetString());
        m_customerVariableHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("FirstTokenLatency") && !value["FirstTokenLatency"].IsNull())
    {
        if (!value["FirstTokenLatency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.FirstTokenLatency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstTokenLatency = value["FirstTokenLatency"].GetUint64();
        m_firstTokenLatencyHasBeenSet = true;
    }

    if (value.HasMember("InputToken") && !value["InputToken"].IsNull())
    {
        if (!value["InputToken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.InputToken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputToken = value["InputToken"].GetUint64();
        m_inputTokenHasBeenSet = true;
    }

    if (value.HasMember("OutputToken") && !value["OutputToken"].IsNull())
    {
        if (!value["OutputToken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.OutputToken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputToken = value["OutputToken"].GetUint64();
        m_outputTokenHasBeenSet = true;
    }

    if (value.HasMember("TotalToken") && !value["TotalToken"].IsNull())
    {
        if (!value["TotalToken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.TotalToken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalToken = value["TotalToken"].GetUint64();
        m_totalTokenHasBeenSet = true;
    }

    if (value.HasMember("TotalTokenLatency") && !value["TotalTokenLatency"].IsNull())
    {
        if (!value["TotalTokenLatency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordResult.TotalTokenLatency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokenLatency = value["TotalTokenLatency"].GetUint64();
        m_totalTokenLatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgRecordResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callResult, allocator);
    }

    if (m_customerVariableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerVariable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerVariable.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTokenLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTokenLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstTokenLatency, allocator);
    }

    if (m_inputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputToken, allocator);
    }

    if (m_outputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputToken, allocator);
    }

    if (m_totalTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalToken, allocator);
    }

    if (m_totalTokenLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokenLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokenLatency, allocator);
    }

}


int64_t MsgRecordResult::GetCallResult() const
{
    return m_callResult;
}

void MsgRecordResult::SetCallResult(const int64_t& _callResult)
{
    m_callResult = _callResult;
    m_callResultHasBeenSet = true;
}

bool MsgRecordResult::CallResultHasBeenSet() const
{
    return m_callResultHasBeenSet;
}

string MsgRecordResult::GetCustomerVariable() const
{
    return m_customerVariable;
}

void MsgRecordResult::SetCustomerVariable(const string& _customerVariable)
{
    m_customerVariable = _customerVariable;
    m_customerVariableHasBeenSet = true;
}

bool MsgRecordResult::CustomerVariableHasBeenSet() const
{
    return m_customerVariableHasBeenSet;
}

string MsgRecordResult::GetFailReason() const
{
    return m_failReason;
}

void MsgRecordResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool MsgRecordResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

uint64_t MsgRecordResult::GetFirstTokenLatency() const
{
    return m_firstTokenLatency;
}

void MsgRecordResult::SetFirstTokenLatency(const uint64_t& _firstTokenLatency)
{
    m_firstTokenLatency = _firstTokenLatency;
    m_firstTokenLatencyHasBeenSet = true;
}

bool MsgRecordResult::FirstTokenLatencyHasBeenSet() const
{
    return m_firstTokenLatencyHasBeenSet;
}

uint64_t MsgRecordResult::GetInputToken() const
{
    return m_inputToken;
}

void MsgRecordResult::SetInputToken(const uint64_t& _inputToken)
{
    m_inputToken = _inputToken;
    m_inputTokenHasBeenSet = true;
}

bool MsgRecordResult::InputTokenHasBeenSet() const
{
    return m_inputTokenHasBeenSet;
}

uint64_t MsgRecordResult::GetOutputToken() const
{
    return m_outputToken;
}

void MsgRecordResult::SetOutputToken(const uint64_t& _outputToken)
{
    m_outputToken = _outputToken;
    m_outputTokenHasBeenSet = true;
}

bool MsgRecordResult::OutputTokenHasBeenSet() const
{
    return m_outputTokenHasBeenSet;
}

uint64_t MsgRecordResult::GetTotalToken() const
{
    return m_totalToken;
}

void MsgRecordResult::SetTotalToken(const uint64_t& _totalToken)
{
    m_totalToken = _totalToken;
    m_totalTokenHasBeenSet = true;
}

bool MsgRecordResult::TotalTokenHasBeenSet() const
{
    return m_totalTokenHasBeenSet;
}

uint64_t MsgRecordResult::GetTotalTokenLatency() const
{
    return m_totalTokenLatency;
}

void MsgRecordResult::SetTotalTokenLatency(const uint64_t& _totalTokenLatency)
{
    m_totalTokenLatency = _totalTokenLatency;
    m_totalTokenLatencyHasBeenSet = true;
}

bool MsgRecordResult::TotalTokenLatencyHasBeenSet() const
{
    return m_totalTokenLatencyHasBeenSet;
}

