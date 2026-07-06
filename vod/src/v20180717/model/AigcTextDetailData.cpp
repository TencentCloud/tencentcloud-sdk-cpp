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

#include <tencentcloud/vod/v20180717/model/AigcTextDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcTextDetailData::AigcTextDetailData() :
    m_timestampHasBeenSet(false),
    m_reqIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_inputTokensHasBeenSet(false),
    m_outputTokensHasBeenSet(false),
    m_cacheInputTokensHasBeenSet(false),
    m_totalTokensHasBeenSet(false),
    m_tPSHasBeenSet(false),
    m_tTFTHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_apiTypeHasBeenSet(false)
{
}

CoreInternalOutcome AigcTextDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("ReqId") && !value["ReqId"].IsNull())
    {
        if (!value["ReqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.ReqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqId = string(value["ReqId"].GetString());
        m_reqIdHasBeenSet = true;
    }

    if (value.HasMember("ChatId") && !value["ChatId"].IsNull())
    {
        if (!value["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(value["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.StatusCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetUint64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("Stream") && !value["Stream"].IsNull())
    {
        if (!value["Stream"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.Stream` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stream = value["Stream"].GetBool();
        m_streamHasBeenSet = true;
    }

    if (value.HasMember("InputTokens") && !value["InputTokens"].IsNull())
    {
        if (!value["InputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.InputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokens = value["InputTokens"].GetInt64();
        m_inputTokensHasBeenSet = true;
    }

    if (value.HasMember("OutputTokens") && !value["OutputTokens"].IsNull())
    {
        if (!value["OutputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.OutputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokens = value["OutputTokens"].GetInt64();
        m_outputTokensHasBeenSet = true;
    }

    if (value.HasMember("CacheInputTokens") && !value["CacheInputTokens"].IsNull())
    {
        if (!value["CacheInputTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.CacheInputTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheInputTokens = value["CacheInputTokens"].GetInt64();
        m_cacheInputTokensHasBeenSet = true;
    }

    if (value.HasMember("TotalTokens") && !value["TotalTokens"].IsNull())
    {
        if (!value["TotalTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.TotalTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokens = value["TotalTokens"].GetInt64();
        m_totalTokensHasBeenSet = true;
    }

    if (value.HasMember("TPS") && !value["TPS"].IsNull())
    {
        if (!value["TPS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.TPS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tPS = value["TPS"].GetDouble();
        m_tPSHasBeenSet = true;
    }

    if (value.HasMember("TTFT") && !value["TTFT"].IsNull())
    {
        if (!value["TTFT"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.TTFT` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tTFT = value["TTFT"].GetDouble();
        m_tTFTHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.Total` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetDouble();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcTextDetailData.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcTextDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_reqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stream, allocator);
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

    if (m_cacheInputTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheInputTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheInputTokens, allocator);
    }

    if (m_totalTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokens, allocator);
    }

    if (m_tPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tPS, allocator);
    }

    if (m_tTFTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTFT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTFT, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

}


string AigcTextDetailData::GetTimestamp() const
{
    return m_timestamp;
}

void AigcTextDetailData::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AigcTextDetailData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string AigcTextDetailData::GetReqId() const
{
    return m_reqId;
}

void AigcTextDetailData::SetReqId(const string& _reqId)
{
    m_reqId = _reqId;
    m_reqIdHasBeenSet = true;
}

bool AigcTextDetailData::ReqIdHasBeenSet() const
{
    return m_reqIdHasBeenSet;
}

string AigcTextDetailData::GetChatId() const
{
    return m_chatId;
}

void AigcTextDetailData::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool AigcTextDetailData::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

uint64_t AigcTextDetailData::GetStatusCode() const
{
    return m_statusCode;
}

void AigcTextDetailData::SetStatusCode(const uint64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AigcTextDetailData::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string AigcTextDetailData::GetModel() const
{
    return m_model;
}

void AigcTextDetailData::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AigcTextDetailData::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

uint64_t AigcTextDetailData::GetSubAppId() const
{
    return m_subAppId;
}

void AigcTextDetailData::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool AigcTextDetailData::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string AigcTextDetailData::GetApiKey() const
{
    return m_apiKey;
}

void AigcTextDetailData::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool AigcTextDetailData::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

bool AigcTextDetailData::GetStream() const
{
    return m_stream;
}

void AigcTextDetailData::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool AigcTextDetailData::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

int64_t AigcTextDetailData::GetInputTokens() const
{
    return m_inputTokens;
}

void AigcTextDetailData::SetInputTokens(const int64_t& _inputTokens)
{
    m_inputTokens = _inputTokens;
    m_inputTokensHasBeenSet = true;
}

bool AigcTextDetailData::InputTokensHasBeenSet() const
{
    return m_inputTokensHasBeenSet;
}

int64_t AigcTextDetailData::GetOutputTokens() const
{
    return m_outputTokens;
}

void AigcTextDetailData::SetOutputTokens(const int64_t& _outputTokens)
{
    m_outputTokens = _outputTokens;
    m_outputTokensHasBeenSet = true;
}

bool AigcTextDetailData::OutputTokensHasBeenSet() const
{
    return m_outputTokensHasBeenSet;
}

int64_t AigcTextDetailData::GetCacheInputTokens() const
{
    return m_cacheInputTokens;
}

void AigcTextDetailData::SetCacheInputTokens(const int64_t& _cacheInputTokens)
{
    m_cacheInputTokens = _cacheInputTokens;
    m_cacheInputTokensHasBeenSet = true;
}

bool AigcTextDetailData::CacheInputTokensHasBeenSet() const
{
    return m_cacheInputTokensHasBeenSet;
}

int64_t AigcTextDetailData::GetTotalTokens() const
{
    return m_totalTokens;
}

void AigcTextDetailData::SetTotalTokens(const int64_t& _totalTokens)
{
    m_totalTokens = _totalTokens;
    m_totalTokensHasBeenSet = true;
}

bool AigcTextDetailData::TotalTokensHasBeenSet() const
{
    return m_totalTokensHasBeenSet;
}

double AigcTextDetailData::GetTPS() const
{
    return m_tPS;
}

void AigcTextDetailData::SetTPS(const double& _tPS)
{
    m_tPS = _tPS;
    m_tPSHasBeenSet = true;
}

bool AigcTextDetailData::TPSHasBeenSet() const
{
    return m_tPSHasBeenSet;
}

double AigcTextDetailData::GetTTFT() const
{
    return m_tTFT;
}

void AigcTextDetailData::SetTTFT(const double& _tTFT)
{
    m_tTFT = _tTFT;
    m_tTFTHasBeenSet = true;
}

bool AigcTextDetailData::TTFTHasBeenSet() const
{
    return m_tTFTHasBeenSet;
}

double AigcTextDetailData::GetTotal() const
{
    return m_total;
}

void AigcTextDetailData::SetTotal(const double& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AigcTextDetailData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string AigcTextDetailData::GetApiType() const
{
    return m_apiType;
}

void AigcTextDetailData::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool AigcTextDetailData::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

