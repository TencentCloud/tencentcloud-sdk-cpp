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

#include <tencentcloud/ags/v20250920/model/GPUResourceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GPUResourceGroup::GPUResourceGroup() :
    m_resourceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome GPUResourceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroup.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroup.Spec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spec.Deserialize(value["Spec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroup.Statistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statistics.Deserialize(value["Statistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUResourceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statistics.ToJsonObject(value[key.c_str()], allocator);
    }

}


string GPUResourceGroup::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void GPUResourceGroup::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool GPUResourceGroup::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string GPUResourceGroup::GetName() const
{
    return m_name;
}

void GPUResourceGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GPUResourceGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

GPUResourceGroupSpec GPUResourceGroup::GetSpec() const
{
    return m_spec;
}

void GPUResourceGroup::SetSpec(const GPUResourceGroupSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool GPUResourceGroup::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

GPUResourceGroupStatistics GPUResourceGroup::GetStatistics() const
{
    return m_statistics;
}

void GPUResourceGroup::SetStatistics(const GPUResourceGroupStatistics& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool GPUResourceGroup::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

