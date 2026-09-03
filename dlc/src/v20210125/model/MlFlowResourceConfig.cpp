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

#include <tencentcloud/dlc/v20210125/model/MlFlowResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MlFlowResourceConfig::MlFlowResourceConfig() :
    m_billingItemHasBeenSet(false),
    m_specHasBeenSet(false),
    m_podCpuHasBeenSet(false),
    m_podMemHasBeenSet(false)
{
}

CoreInternalOutcome MlFlowResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowResourceConfig.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowResourceConfig.Spec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spec = value["Spec"].GetInt64();
        m_specHasBeenSet = true;
    }

    if (value.HasMember("PodCpu") && !value["PodCpu"].IsNull())
    {
        if (!value["PodCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowResourceConfig.PodCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCpu = value["PodCpu"].GetInt64();
        m_podCpuHasBeenSet = true;
    }

    if (value.HasMember("PodMem") && !value["PodMem"].IsNull())
    {
        if (!value["PodMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowResourceConfig.PodMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podMem = value["PodMem"].GetInt64();
        m_podMemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MlFlowResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spec, allocator);
    }

    if (m_podCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCpu, allocator);
    }

    if (m_podMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podMem, allocator);
    }

}


string MlFlowResourceConfig::GetBillingItem() const
{
    return m_billingItem;
}

void MlFlowResourceConfig::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool MlFlowResourceConfig::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

int64_t MlFlowResourceConfig::GetSpec() const
{
    return m_spec;
}

void MlFlowResourceConfig::SetSpec(const int64_t& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool MlFlowResourceConfig::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t MlFlowResourceConfig::GetPodCpu() const
{
    return m_podCpu;
}

void MlFlowResourceConfig::SetPodCpu(const int64_t& _podCpu)
{
    m_podCpu = _podCpu;
    m_podCpuHasBeenSet = true;
}

bool MlFlowResourceConfig::PodCpuHasBeenSet() const
{
    return m_podCpuHasBeenSet;
}

int64_t MlFlowResourceConfig::GetPodMem() const
{
    return m_podMem;
}

void MlFlowResourceConfig::SetPodMem(const int64_t& _podMem)
{
    m_podMem = _podMem;
    m_podMemHasBeenSet = true;
}

bool MlFlowResourceConfig::PodMemHasBeenSet() const
{
    return m_podMemHasBeenSet;
}

