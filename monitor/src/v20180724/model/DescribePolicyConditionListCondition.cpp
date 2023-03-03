/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListCondition::DescribePolicyConditionListCondition() :
    m_policyViewNameHasBeenSet(false),
    m_eventMetricsHasBeenSet(false),
    m_isSupportMultiRegionHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_supportDefaultHasBeenSet(false),
    m_supportRegionsHasBeenSet(false),
    m_deprecatingInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyViewName") && !value["PolicyViewName"].IsNull())
    {
        if (!value["PolicyViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.PolicyViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyViewName = string(value["PolicyViewName"].GetString());
        m_policyViewNameHasBeenSet = true;
    }

    if (value.HasMember("EventMetrics") && !value["EventMetrics"].IsNull())
    {
        if (!value["EventMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.EventMetrics` is not array type"));

        const rapidjson::Value &tmpValue = value["EventMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyConditionListEventMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventMetrics.push_back(item);
        }
        m_eventMetricsHasBeenSet = true;
    }

    if (value.HasMember("IsSupportMultiRegion") && !value["IsSupportMultiRegion"].IsNull())
    {
        if (!value["IsSupportMultiRegion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.IsSupportMultiRegion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportMultiRegion = value["IsSupportMultiRegion"].GetBool();
        m_isSupportMultiRegionHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyConditionListMetric item;
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

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.SortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = value["SortId"].GetInt64();
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("SupportDefault") && !value["SupportDefault"].IsNull())
    {
        if (!value["SupportDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.SupportDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefault = value["SupportDefault"].GetBool();
        m_supportDefaultHasBeenSet = true;
    }

    if (value.HasMember("SupportRegions") && !value["SupportRegions"].IsNull())
    {
        if (!value["SupportRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.SupportRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportRegions.push_back((*itr).GetString());
        }
        m_supportRegionsHasBeenSet = true;
    }

    if (value.HasMember("DeprecatingInfo") && !value["DeprecatingInfo"].IsNull())
    {
        if (!value["DeprecatingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListCondition.DeprecatingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deprecatingInfo.Deserialize(value["DeprecatingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deprecatingInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyViewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyViewName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventMetrics.begin(); itr != m_eventMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isSupportMultiRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportMultiRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportMultiRegion, allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortId, allocator);
    }

    if (m_supportDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefault, allocator);
    }

    if (m_supportRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportRegions.begin(); itr != m_supportRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deprecatingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeprecatingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deprecatingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribePolicyConditionListCondition::GetPolicyViewName() const
{
    return m_policyViewName;
}

void DescribePolicyConditionListCondition::SetPolicyViewName(const string& _policyViewName)
{
    m_policyViewName = _policyViewName;
    m_policyViewNameHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::PolicyViewNameHasBeenSet() const
{
    return m_policyViewNameHasBeenSet;
}

vector<DescribePolicyConditionListEventMetric> DescribePolicyConditionListCondition::GetEventMetrics() const
{
    return m_eventMetrics;
}

void DescribePolicyConditionListCondition::SetEventMetrics(const vector<DescribePolicyConditionListEventMetric>& _eventMetrics)
{
    m_eventMetrics = _eventMetrics;
    m_eventMetricsHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::EventMetricsHasBeenSet() const
{
    return m_eventMetricsHasBeenSet;
}

bool DescribePolicyConditionListCondition::GetIsSupportMultiRegion() const
{
    return m_isSupportMultiRegion;
}

void DescribePolicyConditionListCondition::SetIsSupportMultiRegion(const bool& _isSupportMultiRegion)
{
    m_isSupportMultiRegion = _isSupportMultiRegion;
    m_isSupportMultiRegionHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::IsSupportMultiRegionHasBeenSet() const
{
    return m_isSupportMultiRegionHasBeenSet;
}

vector<DescribePolicyConditionListMetric> DescribePolicyConditionListCondition::GetMetrics() const
{
    return m_metrics;
}

void DescribePolicyConditionListCondition::SetMetrics(const vector<DescribePolicyConditionListMetric>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribePolicyConditionListCondition::GetName() const
{
    return m_name;
}

void DescribePolicyConditionListCondition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribePolicyConditionListCondition::GetSortId() const
{
    return m_sortId;
}

void DescribePolicyConditionListCondition::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

bool DescribePolicyConditionListCondition::GetSupportDefault() const
{
    return m_supportDefault;
}

void DescribePolicyConditionListCondition::SetSupportDefault(const bool& _supportDefault)
{
    m_supportDefault = _supportDefault;
    m_supportDefaultHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::SupportDefaultHasBeenSet() const
{
    return m_supportDefaultHasBeenSet;
}

vector<string> DescribePolicyConditionListCondition::GetSupportRegions() const
{
    return m_supportRegions;
}

void DescribePolicyConditionListCondition::SetSupportRegions(const vector<string>& _supportRegions)
{
    m_supportRegions = _supportRegions;
    m_supportRegionsHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::SupportRegionsHasBeenSet() const
{
    return m_supportRegionsHasBeenSet;
}

DescribePolicyConditionListResponseDeprecatingInfo DescribePolicyConditionListCondition::GetDeprecatingInfo() const
{
    return m_deprecatingInfo;
}

void DescribePolicyConditionListCondition::SetDeprecatingInfo(const DescribePolicyConditionListResponseDeprecatingInfo& _deprecatingInfo)
{
    m_deprecatingInfo = _deprecatingInfo;
    m_deprecatingInfoHasBeenSet = true;
}

bool DescribePolicyConditionListCondition::DeprecatingInfoHasBeenSet() const
{
    return m_deprecatingInfoHasBeenSet;
}

