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

#include <tencentcloud/yunjing/v20180228/model/ProVersionMachine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ProVersionMachine::ProVersionMachine() :
    m_machineTypeHasBeenSet(false),
    m_machineRegionHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

CoreInternalOutcome ProVersionMachine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionMachine.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineRegion") && !value["MachineRegion"].IsNull())
    {
        if (!value["MachineRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionMachine.MachineRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineRegion = string(value["MachineRegion"].GetString());
        m_machineRegionHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionMachine.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProVersionMachine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

}


string ProVersionMachine::GetMachineType() const
{
    return m_machineType;
}

void ProVersionMachine::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ProVersionMachine::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string ProVersionMachine::GetMachineRegion() const
{
    return m_machineRegion;
}

void ProVersionMachine::SetMachineRegion(const string& _machineRegion)
{
    m_machineRegion = _machineRegion;
    m_machineRegionHasBeenSet = true;
}

bool ProVersionMachine::MachineRegionHasBeenSet() const
{
    return m_machineRegionHasBeenSet;
}

string ProVersionMachine::GetQuuid() const
{
    return m_quuid;
}

void ProVersionMachine::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ProVersionMachine::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

