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

#include <tencentcloud/adp/v20260520/model/ModelStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelStatus::ModelStatus() :
    m_concurrencyHasBeenSet(false),
    m_isExclusiveHasBeenSet(false),
    m_isExperienceSupportedHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_rpmLimitHasBeenSet(false),
    m_tpmLimitHasBeenSet(false)
{
}

CoreInternalOutcome ModelStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Concurrency") && !value["Concurrency"].IsNull())
    {
        if (!value["Concurrency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.Concurrency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concurrency = value["Concurrency"].GetInt64();
        m_concurrencyHasBeenSet = true;
    }

    if (value.HasMember("IsExclusive") && !value["IsExclusive"].IsNull())
    {
        if (!value["IsExclusive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.IsExclusive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExclusive = value["IsExclusive"].GetBool();
        m_isExclusiveHasBeenSet = true;
    }

    if (value.HasMember("IsExperienceSupported") && !value["IsExperienceSupported"].IsNull())
    {
        if (!value["IsExperienceSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.IsExperienceSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExperienceSupported = value["IsExperienceSupported"].GetBool();
        m_isExperienceSupportedHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.ResourceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetInt64();
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("RpmLimit") && !value["RpmLimit"].IsNull())
    {
        if (!value["RpmLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.RpmLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rpmLimit = string(value["RpmLimit"].GetString());
        m_rpmLimitHasBeenSet = true;
    }

    if (value.HasMember("TpmLimit") && !value["TpmLimit"].IsNull())
    {
        if (!value["TpmLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStatus.TpmLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tpmLimit = string(value["TpmLimit"].GetString());
        m_tpmLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrency, allocator);
    }

    if (m_isExclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExclusive, allocator);
    }

    if (m_isExperienceSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExperienceSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExperienceSupported, allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

    if (m_rpmLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpmLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rpmLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_tpmLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpmLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tpmLimit.c_str(), allocator).Move(), allocator);
    }

}


int64_t ModelStatus::GetConcurrency() const
{
    return m_concurrency;
}

void ModelStatus::SetConcurrency(const int64_t& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool ModelStatus::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

bool ModelStatus::GetIsExclusive() const
{
    return m_isExclusive;
}

void ModelStatus::SetIsExclusive(const bool& _isExclusive)
{
    m_isExclusive = _isExclusive;
    m_isExclusiveHasBeenSet = true;
}

bool ModelStatus::IsExclusiveHasBeenSet() const
{
    return m_isExclusiveHasBeenSet;
}

bool ModelStatus::GetIsExperienceSupported() const
{
    return m_isExperienceSupported;
}

void ModelStatus::SetIsExperienceSupported(const bool& _isExperienceSupported)
{
    m_isExperienceSupported = _isExperienceSupported;
    m_isExperienceSupportedHasBeenSet = true;
}

bool ModelStatus::IsExperienceSupportedHasBeenSet() const
{
    return m_isExperienceSupportedHasBeenSet;
}

int64_t ModelStatus::GetResourceStatus() const
{
    return m_resourceStatus;
}

void ModelStatus::SetResourceStatus(const int64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool ModelStatus::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

string ModelStatus::GetRpmLimit() const
{
    return m_rpmLimit;
}

void ModelStatus::SetRpmLimit(const string& _rpmLimit)
{
    m_rpmLimit = _rpmLimit;
    m_rpmLimitHasBeenSet = true;
}

bool ModelStatus::RpmLimitHasBeenSet() const
{
    return m_rpmLimitHasBeenSet;
}

string ModelStatus::GetTpmLimit() const
{
    return m_tpmLimit;
}

void ModelStatus::SetTpmLimit(const string& _tpmLimit)
{
    m_tpmLimit = _tpmLimit;
    m_tpmLimitHasBeenSet = true;
}

bool ModelStatus::TpmLimitHasBeenSet() const
{
    return m_tpmLimitHasBeenSet;
}

