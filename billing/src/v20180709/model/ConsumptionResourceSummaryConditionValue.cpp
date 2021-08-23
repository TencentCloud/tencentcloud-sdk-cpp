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

#include <tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryConditionValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ConsumptionResourceSummaryConditionValue::ConsumptionResourceSummaryConditionValue() :
    m_businessHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome ConsumptionResourceSummaryConditionValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryConditionValue.Business` is not array type"));

        const rapidjson::Value &tmpValue = value["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConditionBusiness item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_business.push_back(item);
        }
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("Project") && !value["Project"].IsNull())
    {
        if (!value["Project"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryConditionValue.Project` is not array type"));

        const rapidjson::Value &tmpValue = value["Project"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConditionProject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_project.push_back(item);
        }
        m_projectHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryConditionValue.Region` is not array type"));

        const rapidjson::Value &tmpValue = value["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConditionRegion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_region.push_back(item);
        }
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumptionResourceSummaryConditionValue.PayMode` is not array type"));

        const rapidjson::Value &tmpValue = value["PayMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConditionPayMode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_payMode.push_back(item);
        }
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumptionResourceSummaryConditionValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_project.begin(); itr != m_project.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_payMode.begin(); itr != m_payMode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ConditionBusiness> ConsumptionResourceSummaryConditionValue::GetBusiness() const
{
    return m_business;
}

void ConsumptionResourceSummaryConditionValue::SetBusiness(const vector<ConditionBusiness>& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ConsumptionResourceSummaryConditionValue::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<ConditionProject> ConsumptionResourceSummaryConditionValue::GetProject() const
{
    return m_project;
}

void ConsumptionResourceSummaryConditionValue::SetProject(const vector<ConditionProject>& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool ConsumptionResourceSummaryConditionValue::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<ConditionRegion> ConsumptionResourceSummaryConditionValue::GetRegion() const
{
    return m_region;
}

void ConsumptionResourceSummaryConditionValue::SetRegion(const vector<ConditionRegion>& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ConsumptionResourceSummaryConditionValue::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<ConditionPayMode> ConsumptionResourceSummaryConditionValue::GetPayMode() const
{
    return m_payMode;
}

void ConsumptionResourceSummaryConditionValue::SetPayMode(const vector<ConditionPayMode>& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ConsumptionResourceSummaryConditionValue::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

