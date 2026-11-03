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

#include <tencentcloud/vod/v20180717/model/AigcModelQuotaWithUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcModelQuotaWithUsage::AigcModelQuotaWithUsage() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome AigcModelQuotaWithUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcModelQuotaWithUsage.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcModelQuotaWithUsage.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcModelQuotaWithUsage.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcModelQuotaWithUsage.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcModelQuotaWithUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaLimit, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

}


string AigcModelQuotaWithUsage::GetModelName() const
{
    return m_modelName;
}

void AigcModelQuotaWithUsage::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AigcModelQuotaWithUsage::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AigcModelQuotaWithUsage::GetModelVersion() const
{
    return m_modelVersion;
}

void AigcModelQuotaWithUsage::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool AigcModelQuotaWithUsage::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

uint64_t AigcModelQuotaWithUsage::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AigcModelQuotaWithUsage::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AigcModelQuotaWithUsage::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

uint64_t AigcModelQuotaWithUsage::GetUsage() const
{
    return m_usage;
}

void AigcModelQuotaWithUsage::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool AigcModelQuotaWithUsage::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

