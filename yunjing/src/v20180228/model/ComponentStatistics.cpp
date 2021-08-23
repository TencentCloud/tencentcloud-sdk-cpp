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

#include <tencentcloud/yunjing/v20180228/model/ComponentStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ComponentStatistics::ComponentStatistics() :
    m_idHasBeenSet(false),
    m_machineNumHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ComponentStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentStatistics.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineNum") && !value["MachineNum"].IsNull())
    {
        if (!value["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentStatistics.MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = value["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
    }

    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentStatistics.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("ComponentType") && !value["ComponentType"].IsNull())
    {
        if (!value["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentStatistics.ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(value["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentStatistics.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComponentStatistics::GetId() const
{
    return m_id;
}

void ComponentStatistics::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ComponentStatistics::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ComponentStatistics::GetMachineNum() const
{
    return m_machineNum;
}

void ComponentStatistics::SetMachineNum(const uint64_t& _machineNum)
{
    m_machineNum = _machineNum;
    m_machineNumHasBeenSet = true;
}

bool ComponentStatistics::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

string ComponentStatistics::GetComponentName() const
{
    return m_componentName;
}

void ComponentStatistics::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool ComponentStatistics::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string ComponentStatistics::GetComponentType() const
{
    return m_componentType;
}

void ComponentStatistics::SetComponentType(const string& _componentType)
{
    m_componentType = _componentType;
    m_componentTypeHasBeenSet = true;
}

bool ComponentStatistics::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

string ComponentStatistics::GetDescription() const
{
    return m_description;
}

void ComponentStatistics::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComponentStatistics::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

