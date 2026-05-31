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

#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

CreateTokenPlanApiKeysRequest::CreateTokenPlanApiKeysRequest() :
    m_teamIdHasBeenSet(false),
    m_apiKeyNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_allowedModelsHasBeenSet(false),
    m_exclusiveQuotaHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_tPMHasBeenSet(false)
{
}

string CreateTokenPlanApiKeysRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
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


string CreateTokenPlanApiKeysRequest::GetTeamId() const
{
    return m_teamId;
}

void CreateTokenPlanApiKeysRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string CreateTokenPlanApiKeysRequest::GetApiKeyName() const
{
    return m_apiKeyName;
}

void CreateTokenPlanApiKeysRequest::SetApiKeyName(const string& _apiKeyName)
{
    m_apiKeyName = _apiKeyName;
    m_apiKeyNameHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::ApiKeyNameHasBeenSet() const
{
    return m_apiKeyNameHasBeenSet;
}

int64_t CreateTokenPlanApiKeysRequest::GetCount() const
{
    return m_count;
}

void CreateTokenPlanApiKeysRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> CreateTokenPlanApiKeysRequest::GetAllowedModels() const
{
    return m_allowedModels;
}

void CreateTokenPlanApiKeysRequest::SetAllowedModels(const vector<string>& _allowedModels)
{
    m_allowedModels = _allowedModels;
    m_allowedModelsHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::AllowedModelsHasBeenSet() const
{
    return m_allowedModelsHasBeenSet;
}

int64_t CreateTokenPlanApiKeysRequest::GetExclusiveQuota() const
{
    return m_exclusiveQuota;
}

void CreateTokenPlanApiKeysRequest::SetExclusiveQuota(const int64_t& _exclusiveQuota)
{
    m_exclusiveQuota = _exclusiveQuota;
    m_exclusiveQuotaHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::ExclusiveQuotaHasBeenSet() const
{
    return m_exclusiveQuotaHasBeenSet;
}

int64_t CreateTokenPlanApiKeysRequest::GetTotalQuota() const
{
    return m_totalQuota;
}

void CreateTokenPlanApiKeysRequest::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

int64_t CreateTokenPlanApiKeysRequest::GetTPM() const
{
    return m_tPM;
}

void CreateTokenPlanApiKeysRequest::SetTPM(const int64_t& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool CreateTokenPlanApiKeysRequest::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}


