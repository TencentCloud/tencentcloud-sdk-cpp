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

#include <tencentcloud/tcb/v20180608/model/PlatformResUsageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatformResUsageItem::PlatformResUsageItem() :
    m_resourceTypeHasBeenSet(false),
    m_totalCreditsHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome PlatformResUsageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformResUsageItem.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCredits") && !value["TotalCredits"].IsNull())
    {
        if (!value["TotalCredits"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformResUsageItem.TotalCredits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCredits = value["TotalCredits"].GetUint64();
        m_totalCreditsHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformResUsageItem.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlatformMetricUsageItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformResUsageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCredits, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PlatformResUsageItem::GetResourceType() const
{
    return m_resourceType;
}

void PlatformResUsageItem::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool PlatformResUsageItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t PlatformResUsageItem::GetTotalCredits() const
{
    return m_totalCredits;
}

void PlatformResUsageItem::SetTotalCredits(const uint64_t& _totalCredits)
{
    m_totalCredits = _totalCredits;
    m_totalCreditsHasBeenSet = true;
}

bool PlatformResUsageItem::TotalCreditsHasBeenSet() const
{
    return m_totalCreditsHasBeenSet;
}

vector<PlatformMetricUsageItem> PlatformResUsageItem::GetMetrics() const
{
    return m_metrics;
}

void PlatformResUsageItem::SetMetrics(const vector<PlatformMetricUsageItem>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool PlatformResUsageItem::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

