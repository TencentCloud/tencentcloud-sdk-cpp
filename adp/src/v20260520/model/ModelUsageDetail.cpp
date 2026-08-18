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

#include <tencentcloud/adp/v20260520/model/ModelUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModelUsageDetail::ModelUsageDetail() :
    m_callTypeHasBeenSet(false),
    m_isDefaultKBHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_resourceConsumptionListHasBeenSet(false),
    m_consumptionPUHasBeenSet(false)
{
}

CoreInternalOutcome ModelUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageDetail.CallType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callType = string(value["CallType"].GetString());
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultKB") && !value["IsDefaultKB"].IsNull())
    {
        if (!value["IsDefaultKB"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageDetail.IsDefaultKB` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultKB = value["IsDefaultKB"].GetBool();
        m_isDefaultKBHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUsageDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceConsumptionList") && !value["ResourceConsumptionList"].IsNull())
    {
        if (!value["ResourceConsumptionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelUsageDetail.ResourceConsumptionList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModelUsageDetail.ConsumptionPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_consumptionPU = value["ConsumptionPU"].GetDouble();
        m_consumptionPUHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callType.c_str(), allocator).Move(), allocator);
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


string ModelUsageDetail::GetCallType() const
{
    return m_callType;
}

void ModelUsageDetail::SetCallType(const string& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool ModelUsageDetail::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

bool ModelUsageDetail::GetIsDefaultKB() const
{
    return m_isDefaultKB;
}

void ModelUsageDetail::SetIsDefaultKB(const bool& _isDefaultKB)
{
    m_isDefaultKB = _isDefaultKB;
    m_isDefaultKBHasBeenSet = true;
}

bool ModelUsageDetail::IsDefaultKBHasBeenSet() const
{
    return m_isDefaultKBHasBeenSet;
}

string ModelUsageDetail::GetModelName() const
{
    return m_modelName;
}

void ModelUsageDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelUsageDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<ResourceConsumption> ModelUsageDetail::GetResourceConsumptionList() const
{
    return m_resourceConsumptionList;
}

void ModelUsageDetail::SetResourceConsumptionList(const vector<ResourceConsumption>& _resourceConsumptionList)
{
    m_resourceConsumptionList = _resourceConsumptionList;
    m_resourceConsumptionListHasBeenSet = true;
}

bool ModelUsageDetail::ResourceConsumptionListHasBeenSet() const
{
    return m_resourceConsumptionListHasBeenSet;
}

double ModelUsageDetail::GetConsumptionPU() const
{
    return m_consumptionPU;
}

void ModelUsageDetail::SetConsumptionPU(const double& _consumptionPU)
{
    m_consumptionPU = _consumptionPU;
    m_consumptionPUHasBeenSet = true;
}

bool ModelUsageDetail::ConsumptionPUHasBeenSet() const
{
    return m_consumptionPUHasBeenSet;
}

