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

#include <tencentcloud/tsf/v20180326/model/InstanceResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

InstanceResourceConfig::InstanceResourceConfig() :
    m_containerHasBeenSet(false),
    m_vmHasBeenSet(false)
{
}

CoreInternalOutcome InstanceResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceResourceConfig.Container` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_container.Deserialize(value["Container"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerHasBeenSet = true;
    }

    if (value.HasMember("Vm") && !value["Vm"].IsNull())
    {
        if (!value["Vm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceResourceConfig.Vm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vm.Deserialize(value["Vm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_container.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vm.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContainerInstanceResourceConfig InstanceResourceConfig::GetContainer() const
{
    return m_container;
}

void InstanceResourceConfig::SetContainer(const ContainerInstanceResourceConfig& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool InstanceResourceConfig::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

VmInstanceResourceConfig InstanceResourceConfig::GetVm() const
{
    return m_vm;
}

void InstanceResourceConfig::SetVm(const VmInstanceResourceConfig& _vm)
{
    m_vm = _vm;
    m_vmHasBeenSet = true;
}

bool InstanceResourceConfig::VmHasBeenSet() const
{
    return m_vmHasBeenSet;
}

