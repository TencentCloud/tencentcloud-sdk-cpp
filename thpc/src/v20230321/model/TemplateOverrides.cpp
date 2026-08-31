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

#include <tencentcloud/thpc/v20230321/model/TemplateOverrides.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

TemplateOverrides::TemplateOverrides() :
    m_instanceFamiliesHasBeenSet(false),
    m_gpuCountPerNodeHasBeenSet(false),
    m_enableMixedGpuCountHasBeenSet(false),
    m_enableMultiZoneHasBeenSet(false)
{
}

CoreInternalOutcome TemplateOverrides::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamilies") && !value["InstanceFamilies"].IsNull())
    {
        if (!value["InstanceFamilies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateOverrides.InstanceFamilies` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceFamilies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceFamilies.push_back((*itr).GetString());
        }
        m_instanceFamiliesHasBeenSet = true;
    }

    if (value.HasMember("GpuCountPerNode") && !value["GpuCountPerNode"].IsNull())
    {
        if (!value["GpuCountPerNode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOverrides.GpuCountPerNode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCountPerNode = value["GpuCountPerNode"].GetInt64();
        m_gpuCountPerNodeHasBeenSet = true;
    }

    if (value.HasMember("EnableMixedGpuCount") && !value["EnableMixedGpuCount"].IsNull())
    {
        if (!value["EnableMixedGpuCount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOverrides.EnableMixedGpuCount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMixedGpuCount = value["EnableMixedGpuCount"].GetBool();
        m_enableMixedGpuCountHasBeenSet = true;
    }

    if (value.HasMember("EnableMultiZone") && !value["EnableMultiZone"].IsNull())
    {
        if (!value["EnableMultiZone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateOverrides.EnableMultiZone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMultiZone = value["EnableMultiZone"].GetBool();
        m_enableMultiZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateOverrides::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamiliesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceFamilies.begin(); itr != m_instanceFamilies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gpuCountPerNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCountPerNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuCountPerNode, allocator);
    }

    if (m_enableMixedGpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMixedGpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMixedGpuCount, allocator);
    }

    if (m_enableMultiZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMultiZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMultiZone, allocator);
    }

}


vector<string> TemplateOverrides::GetInstanceFamilies() const
{
    return m_instanceFamilies;
}

void TemplateOverrides::SetInstanceFamilies(const vector<string>& _instanceFamilies)
{
    m_instanceFamilies = _instanceFamilies;
    m_instanceFamiliesHasBeenSet = true;
}

bool TemplateOverrides::InstanceFamiliesHasBeenSet() const
{
    return m_instanceFamiliesHasBeenSet;
}

int64_t TemplateOverrides::GetGpuCountPerNode() const
{
    return m_gpuCountPerNode;
}

void TemplateOverrides::SetGpuCountPerNode(const int64_t& _gpuCountPerNode)
{
    m_gpuCountPerNode = _gpuCountPerNode;
    m_gpuCountPerNodeHasBeenSet = true;
}

bool TemplateOverrides::GpuCountPerNodeHasBeenSet() const
{
    return m_gpuCountPerNodeHasBeenSet;
}

bool TemplateOverrides::GetEnableMixedGpuCount() const
{
    return m_enableMixedGpuCount;
}

void TemplateOverrides::SetEnableMixedGpuCount(const bool& _enableMixedGpuCount)
{
    m_enableMixedGpuCount = _enableMixedGpuCount;
    m_enableMixedGpuCountHasBeenSet = true;
}

bool TemplateOverrides::EnableMixedGpuCountHasBeenSet() const
{
    return m_enableMixedGpuCountHasBeenSet;
}

bool TemplateOverrides::GetEnableMultiZone() const
{
    return m_enableMultiZone;
}

void TemplateOverrides::SetEnableMultiZone(const bool& _enableMultiZone)
{
    m_enableMultiZone = _enableMultiZone;
    m_enableMultiZoneHasBeenSet = true;
}

bool TemplateOverrides::EnableMultiZoneHasBeenSet() const
{
    return m_enableMultiZoneHasBeenSet;
}

