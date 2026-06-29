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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstanceQuotaDetail::PrometheusInstanceQuotaDetail() :
    m_limitHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceQuotaDetail.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceQuotaDetail.Usage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetInt64();
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceQuotaDetail.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


int64_t PrometheusInstanceQuotaDetail::GetLimit() const
{
    return m_limit;
}

void PrometheusInstanceQuotaDetail::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PrometheusInstanceQuotaDetail::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t PrometheusInstanceQuotaDetail::GetUsage() const
{
    return m_usage;
}

void PrometheusInstanceQuotaDetail::SetUsage(const int64_t& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool PrometheusInstanceQuotaDetail::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

int64_t PrometheusInstanceQuotaDetail::GetAvailable() const
{
    return m_available;
}

void PrometheusInstanceQuotaDetail::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool PrometheusInstanceQuotaDetail::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

