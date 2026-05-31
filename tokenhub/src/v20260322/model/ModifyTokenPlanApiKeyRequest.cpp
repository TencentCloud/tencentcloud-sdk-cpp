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

#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModifyTokenPlanApiKeyRequest::ModifyTokenPlanApiKeyRequest() :
    m_apiKeyIdHasBeenSet(false),
    m_allowedModelsHasBeenSet(false),
    m_exclusiveQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_useStatusHasBeenSet(false),
    m_tPMHasBeenSet(false)
{
}

string ModifyTokenPlanApiKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedModels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedModels.begin(); itr != m_allowedModels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exclusiveQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusiveQuota, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_useStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_useStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tPM, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTokenPlanApiKeyRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void ModifyTokenPlanApiKeyRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

vector<string> ModifyTokenPlanApiKeyRequest::GetAllowedModels() const
{
    return m_allowedModels;
}

void ModifyTokenPlanApiKeyRequest::SetAllowedModels(const vector<string>& _allowedModels)
{
    m_allowedModels = _allowedModels;
    m_allowedModelsHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::AllowedModelsHasBeenSet() const
{
    return m_allowedModelsHasBeenSet;
}

int64_t ModifyTokenPlanApiKeyRequest::GetExclusiveQuota() const
{
    return m_exclusiveQuota;
}

void ModifyTokenPlanApiKeyRequest::SetExclusiveQuota(const int64_t& _exclusiveQuota)
{
    m_exclusiveQuota = _exclusiveQuota;
    m_exclusiveQuotaHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::ExclusiveQuotaHasBeenSet() const
{
    return m_exclusiveQuotaHasBeenSet;
}

int64_t ModifyTokenPlanApiKeyRequest::GetTotalQuota() const
{
    return m_totalQuota;
}

void ModifyTokenPlanApiKeyRequest::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

string ModifyTokenPlanApiKeyRequest::GetUseStatus() const
{
    return m_useStatus;
}

void ModifyTokenPlanApiKeyRequest::SetUseStatus(const string& _useStatus)
{
    m_useStatus = _useStatus;
    m_useStatusHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::UseStatusHasBeenSet() const
{
    return m_useStatusHasBeenSet;
}

int64_t ModifyTokenPlanApiKeyRequest::GetTPM() const
{
    return m_tPM;
}

void ModifyTokenPlanApiKeyRequest::SetTPM(const int64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool ModifyTokenPlanApiKeyRequest::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}


