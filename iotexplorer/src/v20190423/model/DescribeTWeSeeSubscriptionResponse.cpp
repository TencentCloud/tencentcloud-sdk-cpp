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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeSubscriptionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeTWeSeeSubscriptionResponse::DescribeTWeSeeSubscriptionResponse() :
    m_resourceIdHasBeenSet(false),
    m_serviceTierHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_comprehensionConfigHasBeenSet(false),
    m_compHighlightConfigHasBeenSet(false),
    m_eventIdFilterConfigHasBeenSet(false),
    m_quotaBasicHasBeenSet(false),
    m_quotaUsedBasicHasBeenSet(false),
    m_quotaAdvancedHasBeenSet(false),
    m_quotaUsedAdvancedHasBeenSet(false),
    m_quotaRefreshTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTWeSeeSubscriptionResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceTier") && !rsp["ServiceTier"].IsNull())
    {
        if (!rsp["ServiceTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTier = string(rsp["ServiceTier"].GetString());
        m_serviceTierHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Enabled") && !rsp["Enabled"].IsNull())
    {
        if (!rsp["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = rsp["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ComprehensionConfig") && !rsp["ComprehensionConfig"].IsNull())
    {
        if (!rsp["ComprehensionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComprehensionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_comprehensionConfig.Deserialize(rsp["ComprehensionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_comprehensionConfigHasBeenSet = true;
    }

    if (rsp.HasMember("CompHighlightConfig") && !rsp["CompHighlightConfig"].IsNull())
    {
        if (!rsp["CompHighlightConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CompHighlightConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compHighlightConfig.Deserialize(rsp["CompHighlightConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compHighlightConfigHasBeenSet = true;
    }

    if (rsp.HasMember("EventIdFilterConfig") && !rsp["EventIdFilterConfig"].IsNull())
    {
        if (!rsp["EventIdFilterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventIdFilterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventIdFilterConfig.Deserialize(rsp["EventIdFilterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventIdFilterConfigHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaBasic") && !rsp["QuotaBasic"].IsNull())
    {
        if (!rsp["QuotaBasic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaBasic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaBasic = rsp["QuotaBasic"].GetInt64();
        m_quotaBasicHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaUsedBasic") && !rsp["QuotaUsedBasic"].IsNull())
    {
        if (!rsp["QuotaUsedBasic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaUsedBasic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaUsedBasic = rsp["QuotaUsedBasic"].GetInt64();
        m_quotaUsedBasicHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaAdvanced") && !rsp["QuotaAdvanced"].IsNull())
    {
        if (!rsp["QuotaAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaAdvanced = rsp["QuotaAdvanced"].GetInt64();
        m_quotaAdvancedHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaUsedAdvanced") && !rsp["QuotaUsedAdvanced"].IsNull())
    {
        if (!rsp["QuotaUsedAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaUsedAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaUsedAdvanced = rsp["QuotaUsedAdvanced"].GetInt64();
        m_quotaUsedAdvancedHasBeenSet = true;
    }

    if (rsp.HasMember("QuotaRefreshTime") && !rsp["QuotaRefreshTime"].IsNull())
    {
        if (!rsp["QuotaRefreshTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaRefreshTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaRefreshTime = rsp["QuotaRefreshTime"].GetInt64();
        m_quotaRefreshTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTWeSeeSubscriptionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTier.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_comprehensionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compHighlightConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompHighlightConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compHighlightConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventIdFilterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdFilterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventIdFilterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quotaBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaBasic, allocator);
    }

    if (m_quotaUsedBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaUsedBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaUsedBasic, allocator);
    }

    if (m_quotaAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaAdvanced, allocator);
    }

    if (m_quotaUsedAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaUsedAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaUsedAdvanced, allocator);
    }

    if (m_quotaRefreshTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaRefreshTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaRefreshTime, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeTWeSeeSubscriptionResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeTWeSeeSubscriptionResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeTWeSeeSubscriptionResponse::GetServiceTier() const
{
    return m_serviceTier;
}

bool DescribeTWeSeeSubscriptionResponse::ServiceTierHasBeenSet() const
{
    return m_serviceTierHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeTWeSeeSubscriptionResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

bool DescribeTWeSeeSubscriptionResponse::GetEnabled() const
{
    return m_enabled;
}

bool DescribeTWeSeeSubscriptionResponse::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string DescribeTWeSeeSubscriptionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTWeSeeSubscriptionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

SeeComprehensionConfig DescribeTWeSeeSubscriptionResponse::GetComprehensionConfig() const
{
    return m_comprehensionConfig;
}

bool DescribeTWeSeeSubscriptionResponse::ComprehensionConfigHasBeenSet() const
{
    return m_comprehensionConfigHasBeenSet;
}

SeeCompHighlightConfig DescribeTWeSeeSubscriptionResponse::GetCompHighlightConfig() const
{
    return m_compHighlightConfig;
}

bool DescribeTWeSeeSubscriptionResponse::CompHighlightConfigHasBeenSet() const
{
    return m_compHighlightConfigHasBeenSet;
}

SeeEventIdFilterConfig DescribeTWeSeeSubscriptionResponse::GetEventIdFilterConfig() const
{
    return m_eventIdFilterConfig;
}

bool DescribeTWeSeeSubscriptionResponse::EventIdFilterConfigHasBeenSet() const
{
    return m_eventIdFilterConfigHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetQuotaBasic() const
{
    return m_quotaBasic;
}

bool DescribeTWeSeeSubscriptionResponse::QuotaBasicHasBeenSet() const
{
    return m_quotaBasicHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetQuotaUsedBasic() const
{
    return m_quotaUsedBasic;
}

bool DescribeTWeSeeSubscriptionResponse::QuotaUsedBasicHasBeenSet() const
{
    return m_quotaUsedBasicHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetQuotaAdvanced() const
{
    return m_quotaAdvanced;
}

bool DescribeTWeSeeSubscriptionResponse::QuotaAdvancedHasBeenSet() const
{
    return m_quotaAdvancedHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetQuotaUsedAdvanced() const
{
    return m_quotaUsedAdvanced;
}

bool DescribeTWeSeeSubscriptionResponse::QuotaUsedAdvancedHasBeenSet() const
{
    return m_quotaUsedAdvancedHasBeenSet;
}

int64_t DescribeTWeSeeSubscriptionResponse::GetQuotaRefreshTime() const
{
    return m_quotaRefreshTime;
}

bool DescribeTWeSeeSubscriptionResponse::QuotaRefreshTimeHasBeenSet() const
{
    return m_quotaRefreshTimeHasBeenSet;
}


