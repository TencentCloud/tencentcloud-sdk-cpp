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

#include <tencentcloud/adp/v20260520/model/ModelUsageSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelUsageSummary::ModelUsageSummary() :
    m_callCountHasBeenSet(false),
    m_isDefaultKBHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_resourceConsumptionListHasBeenSet(false),
    m_consumptionPUHasBeenSet(false)
{
}

CoreInternalOutcome ModelUsageSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageSummary.CallCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetDouble();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultKB") && !value["IsDefaultKB"].IsNull())
    {
        if (!value["IsDefaultKB"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageSummary.IsDefaultKB` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultKB = value["IsDefaultKB"].GetBool();
        m_isDefaultKBHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageSummary.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceConsumptionList") && !value["ResourceConsumptionList"].IsNull())
    {
        if (!value["ResourceConsumptionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelUsageSummary.ResourceConsumptionList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceConsumptionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceConsumption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceConsumptionList.push_back(item);
        }
        m_resourceConsumptionListHasBeenSet = true;
    }

    if (value.HasMember("ConsumptionPU") && !value["ConsumptionPU"].IsNull())
    {
        if (!value["ConsumptionPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageSummary.ConsumptionPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionPU = value["ConsumptionPU"].GetDouble();
        m_consumptionPUHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelUsageSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_isDefaultKBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultKB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultKB, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConsumptionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConsumptionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConsumptionList.begin(); itr != m_resourceConsumptionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_consumptionPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumptionPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumptionPU, allocator);
    }

}


double ModelUsageSummary::GetCallCount() const
{
    return m_callCount;
}

void ModelUsageSummary::SetCallCount(const double& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool ModelUsageSummary::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

bool ModelUsageSummary::GetIsDefaultKB() const
{
    return m_isDefaultKB;
}

void ModelUsageSummary::SetIsDefaultKB(const bool& _isDefaultKB)
{
    m_isDefaultKB = _isDefaultKB;
    m_isDefaultKBHasBeenSet = true;
}

bool ModelUsageSummary::IsDefaultKBHasBeenSet() const
{
    return m_isDefaultKBHasBeenSet;
}

string ModelUsageSummary::GetModelName() const
{
    return m_modelName;
}

void ModelUsageSummary::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelUsageSummary::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<ResourceConsumption> ModelUsageSummary::GetResourceConsumptionList() const
{
    return m_resourceConsumptionList;
}

void ModelUsageSummary::SetResourceConsumptionList(const vector<ResourceConsumption>& _resourceConsumptionList)
{
    m_resourceConsumptionList = _resourceConsumptionList;
    m_resourceConsumptionListHasBeenSet = true;
}

bool ModelUsageSummary::ResourceConsumptionListHasBeenSet() const
{
    return m_resourceConsumptionListHasBeenSet;
}

double ModelUsageSummary::GetConsumptionPU() const
{
    return m_consumptionPU;
}

void ModelUsageSummary::SetConsumptionPU(const double& _consumptionPU)
{
    m_consumptionPU = _consumptionPU;
    m_consumptionPUHasBeenSet = true;
}

bool ModelUsageSummary::ConsumptionPUHasBeenSet() const
{
    return m_consumptionPUHasBeenSet;
}

