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

#include <tencentcloud/tokenhub/v20260322/model/UsageDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

UsageDetailItem::UsageDetailItem() :
    m_uinHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_apiKeyIdHasBeenSet(false),
    m_apiKeyNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_inputTokenHasBeenSet(false),
    m_cacheTokenHasBeenSet(false),
    m_outputTokenHasBeenSet(false),
    m_totalTokenHasBeenSet(false),
    m_inputQuotaHasBeenSet(false),
    m_cacheQuotaHasBeenSet(false),
    m_outputQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyId") && !value["ApiKeyId"].IsNull())
    {
        if (!value["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(value["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyName") && !value["ApiKeyName"].IsNull())
    {
        if (!value["ApiKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.ApiKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyName = string(value["ApiKeyName"].GetString());
        m_apiKeyNameHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("RequestTime") && !value["RequestTime"].IsNull())
    {
        if (!value["RequestTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.RequestTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestTime = string(value["RequestTime"].GetString());
        m_requestTimeHasBeenSet = true;
    }

    if (value.HasMember("InputToken") && !value["InputToken"].IsNull())
    {
        if (!value["InputToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.InputToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputToken = value["InputToken"].GetInt64();
        m_inputTokenHasBeenSet = true;
    }

    if (value.HasMember("CacheToken") && !value["CacheToken"].IsNull())
    {
        if (!value["CacheToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.CacheToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheToken = value["CacheToken"].GetInt64();
        m_cacheTokenHasBeenSet = true;
    }

    if (value.HasMember("OutputToken") && !value["OutputToken"].IsNull())
    {
        if (!value["OutputToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.OutputToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputToken = value["OutputToken"].GetInt64();
        m_outputTokenHasBeenSet = true;
    }

    if (value.HasMember("TotalToken") && !value["TotalToken"].IsNull())
    {
        if (!value["TotalToken"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.TotalToken` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalToken = value["TotalToken"].GetInt64();
        m_totalTokenHasBeenSet = true;
    }

    if (value.HasMember("InputQuota") && !value["InputQuota"].IsNull())
    {
        if (!value["InputQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.InputQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputQuota = string(value["InputQuota"].GetString());
        m_inputQuotaHasBeenSet = true;
    }

    if (value.HasMember("CacheQuota") && !value["CacheQuota"].IsNull())
    {
        if (!value["CacheQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.CacheQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheQuota = string(value["CacheQuota"].GetString());
        m_cacheQuotaHasBeenSet = true;
    }

    if (value.HasMember("OutputQuota") && !value["OutputQuota"].IsNull())
    {
        if (!value["OutputQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.OutputQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputQuota = string(value["OutputQuota"].GetString());
        m_outputQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetailItem.TotalQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = string(value["TotalQuota"].GetString());
        m_totalQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputToken, allocator);
    }

    if (m_cacheTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheToken, allocator);
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

    if (m_inputQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_outputQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalQuota.c_str(), allocator).Move(), allocator);
    }

}


string UsageDetailItem::GetUin() const
{
    return m_uin;
}

void UsageDetailItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UsageDetailItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UsageDetailItem::GetModelName() const
{
    return m_modelName;
}

void UsageDetailItem::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool UsageDetailItem::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string UsageDetailItem::GetApiKeyId() const
{
    return m_apiKeyId;
}

void UsageDetailItem::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool UsageDetailItem::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string UsageDetailItem::GetApiKeyName() const
{
    return m_apiKeyName;
}

void UsageDetailItem::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool UsageDetailItem::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

string UsageDetailItem::GetRequestId() const
{
    return m_requestId;
}

void UsageDetailItem::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool UsageDetailItem::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string UsageDetailItem::GetRequestTime() const
{
    return m_requestTime;
}

void UsageDetailItem::SetRequestTime(const string& _requestTime)
{
    m_requestTime = _requestTime;
    m_requestTimeHasBeenSet = true;
}

bool UsageDetailItem::RequestTimeHasBeenSet() const
{
    return m_requestTimeHasBeenSet;
}

int64_t UsageDetailItem::GetInputToken() const
{
    return m_inputToken;
}

void UsageDetailItem::SetInputToken(const int64_t& _inputToken)
{
    m_inputToken = _inputToken;
    m_inputTokenHasBeenSet = true;
}

bool UsageDetailItem::InputTokenHasBeenSet() const
{
    return m_inputTokenHasBeenSet;
}

int64_t UsageDetailItem::GetCacheToken() const
{
    return m_cacheToken;
}

void UsageDetailItem::SetCacheToken(const int64_t& _cacheToken)
{
    m_cacheToken = _cacheToken;
    m_cacheTokenHasBeenSet = true;
}

bool UsageDetailItem::CacheTokenHasBeenSet() const
{
    return m_cacheTokenHasBeenSet;
}

int64_t UsageDetailItem::GetOutputToken() const
{
    return m_outputToken;
}

void UsageDetailItem::SetOutputToken(const int64_t& _outputToken)
{
    m_outputToken = _outputToken;
    m_outputTokenHasBeenSet = true;
}

bool UsageDetailItem::OutputTokenHasBeenSet() const
{
    return m_outputTokenHasBeenSet;
}

int64_t UsageDetailItem::GetTotalToken() const
{
    return m_totalToken;
}

void UsageDetailItem::SetTotalToken(const int64_t& _totalToken)
{
    m_totalToken = _totalToken;
    m_totalTokenHasBeenSet = true;
}

bool UsageDetailItem::TotalTokenHasBeenSet() const
{
    return m_totalTokenHasBeenSet;
}

string UsageDetailItem::GetInputQuota() const
{
    return m_inputQuota;
}

void UsageDetailItem::SetInputQuota(const string& _inputQuota)
{
    m_inputQuota = _inputQuota;
    m_inputQuotaHasBeenSet = true;
}

bool UsageDetailItem::InputQuotaHasBeenSet() const
{
    return m_inputQuotaHasBeenSet;
}

string UsageDetailItem::GetCacheQuota() const
{
    return m_cacheQuota;
}

void UsageDetailItem::SetCacheQuota(const string& _cacheQuota)
{
    m_cacheQuota = _cacheQuota;
    m_cacheQuotaHasBeenSet = true;
}

bool UsageDetailItem::CacheQuotaHasBeenSet() const
{
    return m_cacheQuotaHasBeenSet;
}

string UsageDetailItem::GetOutputQuota() const
{
    return m_outputQuota;
}

void UsageDetailItem::SetOutputQuota(const string& _outputQuota)
{
    m_outputQuota = _outputQuota;
    m_outputQuotaHasBeenSet = true;
}

bool UsageDetailItem::OutputQuotaHasBeenSet() const
{
    return m_outputQuotaHasBeenSet;
}

string UsageDetailItem::GetTotalQuota() const
{
    return m_totalQuota;
}

void UsageDetailItem::SetTotalQuota(const string& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool UsageDetailItem::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

