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

#include <tencentcloud/clb/v20180317/model/ModelRouterLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelRouterLog::ModelRouterLog() :
    m_keyIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxRetriesHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_requestDurationHasBeenSet(false),
    m_requesterIpHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome ModelRouterLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaxRetries") && !value["MaxRetries"].IsNull())
    {
        if (!value["MaxRetries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.MaxRetries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetries = value["MaxRetries"].GetUint64();
        m_maxRetriesHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.TotalTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetUint64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.InputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetUint64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.OutputTokens` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetUint64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("RequestDuration") && !value["RequestDuration"].IsNull())
    {
        if (!value["RequestDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.RequestDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestDuration = value["RequestDuration"].GetUint64();
        m_requestDurationHasBeenSet = true;
    }

    if (value.HasMember("RequesterIp") && !value["RequesterIp"].IsNull())
    {
        if (!value["RequesterIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.RequesterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requesterIp = string(value["RequesterIp"].GetString());
        m_requesterIpHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelRouterLog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelRouterLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetries, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_inputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokens, allocator);
    }

    if (m_outputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokens, allocator);
    }

    if (m_requestDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestDuration, allocator);
    }

    if (m_requesterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequesterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requesterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string ModelRouterLog::GetKeyId() const
{
    return m_keyId;
}

void ModelRouterLog::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ModelRouterLog::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ModelRouterLog::GetModel() const
{
    return m_model;
}

void ModelRouterLog::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModelRouterLog::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModelRouterLog::GetProvider() const
{
    return m_provider;
}

void ModelRouterLog::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool ModelRouterLog::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string ModelRouterLog::GetStatus() const
{
    return m_status;
}

void ModelRouterLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelRouterLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModelRouterLog::GetMaxRetries() const
{
    return m_maxRetries;
}

void ModelRouterLog::SetMaxRetries(const uint64_t& _maxRetries)
{
    m_maxRetries = _maxRetries;
    m_maxRetriesHasBeenSet = true;
}

bool ModelRouterLog::MaxRetriesHasBeenSet() const
{
    return m_maxRetriesHasBeenSet;
}

uint64_t ModelRouterLog::GetTotalTokens() const
{
    return m_totalTokens;
}

void ModelRouterLog::SetTotalTokens(const uint64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool ModelRouterLog::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

uint64_t ModelRouterLog::GetInputTokens() const
{
    return m_inputTokens;
}

void ModelRouterLog::SetInputTokens(const uint64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool ModelRouterLog::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

uint64_t ModelRouterLog::GetOutputTokens() const
{
    return m_outputTokens;
}

void ModelRouterLog::SetOutputTokens(const uint64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool ModelRouterLog::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

uint64_t ModelRouterLog::GetRequestDuration() const
{
    return m_requestDuration;
}

void ModelRouterLog::SetRequestDuration(const uint64_t& _requestDuration)
{
    m_requestDuration = _requestDuration;
    m_requestDurationHasBeenSet = true;
}

bool ModelRouterLog::RequestDurationHasBeenSet() const
{
    return m_requestDurationHasBeenSet;
}

string ModelRouterLog::GetRequesterIp() const
{
    return m_requesterIp;
}

void ModelRouterLog::SetRequesterIp(const string& _requesterIp)
{
    m_requesterIp = _requesterIp;
    m_requesterIpHasBeenSet = true;
}

bool ModelRouterLog::RequesterIpHasBeenSet() const
{
    return m_requesterIpHasBeenSet;
}

string ModelRouterLog::GetStartTime() const
{
    return m_startTime;
}

void ModelRouterLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModelRouterLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModelRouterLog::GetEndTime() const
{
    return m_endTime;
}

void ModelRouterLog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModelRouterLog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

