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

#include <tencentcloud/vod/v20180717/model/AigcQuotaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcQuotaItem::AigcQuotaItem() :
    m_quotaTypeHasBeenSet(false),
    m_apiTokenHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome AigcQuotaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiToken") && !value["ApiToken"].IsNull())
    {
        if (!value["ApiToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.ApiToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiToken = string(value["ApiToken"].GetString());
        m_apiTokenHasBeenSet = true;
    }

    if (value.HasMember("QuotaLimit") && !value["QuotaLimit"].IsNull())
    {
        if (!value["QuotaLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.QuotaLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaLimit = value["QuotaLimit"].GetUint64();
        m_quotaLimitHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcQuotaItem.Usage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetUint64();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcQuotaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiToken.c_str(), allocator).Move(), allocator);
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


string AigcQuotaItem::GetQuotaType() const
{
    return m_quotaType;
}

void AigcQuotaItem::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool AigcQuotaItem::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string AigcQuotaItem::GetApiToken() const
{
    return m_apiToken;
}

void AigcQuotaItem::SetApiToken(const string& _apiToken)
{
    m_apiToken = _apiToken;
    m_apiTokenHasBeenSet = true;
}

bool AigcQuotaItem::ApiTokenHasBeenSet() const
{
    return m_apiTokenHasBeenSet;
}

uint64_t AigcQuotaItem::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void AigcQuotaItem::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool AigcQuotaItem::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

uint64_t AigcQuotaItem::GetUsage() const
{
    return m_usage;
}

void AigcQuotaItem::SetUsage(const uint64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool AigcQuotaItem::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

