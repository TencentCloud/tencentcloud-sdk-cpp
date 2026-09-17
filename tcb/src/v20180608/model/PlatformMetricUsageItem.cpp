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

#include <tencentcloud/tcb/v20180608/model/PlatformMetricUsageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatformMetricUsageItem::PlatformMetricUsageItem() :
    m_metricNameHasBeenSet(false),
    m_originalResourceTypeHasBeenSet(false),
    m_originalMetricNameHasBeenSet(false),
    m_usageValueHasBeenSet(false),
    m_usageUnitHasBeenSet(false),
    m_creditsHasBeenSet(false),
    m_dailyUsageListHasBeenSet(false)
{
}

CoreInternalOutcome PlatformMetricUsageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalResourceType") && !value["OriginalResourceType"].IsNull())
    {
        if (!value["OriginalResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.OriginalResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalResourceType = string(value["OriginalResourceType"].GetString());
        m_originalResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginalMetricName") && !value["OriginalMetricName"].IsNull())
    {
        if (!value["OriginalMetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.OriginalMetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalMetricName = string(value["OriginalMetricName"].GetString());
        m_originalMetricNameHasBeenSet = true;
    }

    if (value.HasMember("UsageValue") && !value["UsageValue"].IsNull())
    {
        if (!value["UsageValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.UsageValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usageValue = value["UsageValue"].GetUint64();
        m_usageValueHasBeenSet = true;
    }

    if (value.HasMember("UsageUnit") && !value["UsageUnit"].IsNull())
    {
        if (!value["UsageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.UsageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageUnit = string(value["UsageUnit"].GetString());
        m_usageUnitHasBeenSet = true;
    }

    if (value.HasMember("Credits") && !value["Credits"].IsNull())
    {
        if (!value["Credits"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.Credits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_credits = value["Credits"].GetUint64();
        m_creditsHasBeenSet = true;
    }

    if (value.HasMember("DailyUsageList") && !value["DailyUsageList"].IsNull())
    {
        if (!value["DailyUsageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformMetricUsageItem.DailyUsageList` is not array type"));

        const rapidjson::Value &tmpValue = value["DailyUsageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DailyUsageList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dailyUsageList.push_back(item);
        }
        m_dailyUsageListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformMetricUsageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_originalMetricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalMetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalMetricName.c_str(), allocator).Move(), allocator);
    }

    if (m_usageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageValue, allocator);
    }

    if (m_usageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_creditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credits, allocator);
    }

    if (m_dailyUsageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyUsageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dailyUsageList.begin(); itr != m_dailyUsageList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PlatformMetricUsageItem::GetMetricName() const
{
    return m_metricName;
}

void PlatformMetricUsageItem::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool PlatformMetricUsageItem::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string PlatformMetricUsageItem::GetOriginalResourceType() const
{
    return m_originalResourceType;
}

void PlatformMetricUsageItem::SetOriginalResourceType(const string& _originalResourceType)
{
    m_originalResourceType = _originalResourceType;
    m_originalResourceTypeHasBeenSet = true;
}

bool PlatformMetricUsageItem::OriginalResourceTypeHasBeenSet() const
{
    return m_originalResourceTypeHasBeenSet;
}

string PlatformMetricUsageItem::GetOriginalMetricName() const
{
    return m_originalMetricName;
}

void PlatformMetricUsageItem::SetOriginalMetricName(const string& _originalMetricName)
{
    m_originalMetricName = _originalMetricName;
    m_originalMetricNameHasBeenSet = true;
}

bool PlatformMetricUsageItem::OriginalMetricNameHasBeenSet() const
{
    return m_originalMetricNameHasBeenSet;
}

uint64_t PlatformMetricUsageItem::GetUsageValue() const
{
    return m_usageValue;
}

void PlatformMetricUsageItem::SetUsageValue(const uint64_t& _usageValue)
{
    m_usageValue = _usageValue;
    m_usageValueHasBeenSet = true;
}

bool PlatformMetricUsageItem::UsageValueHasBeenSet() const
{
    return m_usageValueHasBeenSet;
}

string PlatformMetricUsageItem::GetUsageUnit() const
{
    return m_usageUnit;
}

void PlatformMetricUsageItem::SetUsageUnit(const string& _usageUnit)
{
    m_usageUnit = _usageUnit;
    m_usageUnitHasBeenSet = true;
}

bool PlatformMetricUsageItem::UsageUnitHasBeenSet() const
{
    return m_usageUnitHasBeenSet;
}

uint64_t PlatformMetricUsageItem::GetCredits() const
{
    return m_credits;
}

void PlatformMetricUsageItem::SetCredits(const uint64_t& _credits)
{
    m_credits = _credits;
    m_creditsHasBeenSet = true;
}

bool PlatformMetricUsageItem::CreditsHasBeenSet() const
{
    return m_creditsHasBeenSet;
}

vector<DailyUsageList> PlatformMetricUsageItem::GetDailyUsageList() const
{
    return m_dailyUsageList;
}

void PlatformMetricUsageItem::SetDailyUsageList(const vector<DailyUsageList>& _dailyUsageList)
{
    m_dailyUsageList = _dailyUsageList;
    m_dailyUsageListHasBeenSet = true;
}

bool PlatformMetricUsageItem::DailyUsageListHasBeenSet() const
{
    return m_dailyUsageListHasBeenSet;
}

