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

#include <tencentcloud/cwp/v20180228/model/OsName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

OsName::OsName() :
    m_nameHasBeenSet(false),
    m_machineOSTypeHasBeenSet(false)
{
}

CoreInternalOutcome OsName::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `OsName.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MachineOSType") && !value["MachineOSType"].IsNull())
    {
        if (!value["MachineOSType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OsName.MachineOSType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineOSType = value["MachineOSType"].GetUint64();
        m_machineOSTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OsName::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOSTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineOSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineOSType, allocator);
    }

}


string OsName::GetName() const
{
    return m_name;
}

void OsName::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OsName::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t OsName::GetMachineOSType() const
{
    return m_machineOSType;
}

void OsName::SetMachineOSType(const uint64_t& _machineOSType)
{
    m_machineOSType = _machineOSType;
    m_machineOSTypeHasBeenSet = true;
}

bool OsName::MachineOSTypeHasBeenSet() const
{
    return m_machineOSTypeHasBeenSet;
}

