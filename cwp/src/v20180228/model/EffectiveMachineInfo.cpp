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

#include <tencentcloud/cwp/v20180228/model/EffectiveMachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

EffectiveMachineInfo::EffectiveMachineInfo() :
    m_machineNameHasBeenSet(false),
    m_machinePublicIpHasBeenSet(false),
    m_machinePrivateIpHasBeenSet(false),
    m_machineTagHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

CoreInternalOutcome EffectiveMachineInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EffectiveMachineInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachinePublicIp") && !value["MachinePublicIp"].IsNull())
    {
        if (!value["MachinePublicIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `EffectiveMachineInfo.MachinePublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinePublicIp = string(value["MachinePublicIp"].GetString());
        m_machinePublicIpHasBeenSet = true;
    }

    if (value.HasMember("MachinePrivateIp") && !value["MachinePrivateIp"].IsNull())
    {
        if (!value["MachinePrivateIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `EffectiveMachineInfo.MachinePrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinePrivateIp = string(value["MachinePrivateIp"].GetString());
        m_machinePrivateIpHasBeenSet = true;
    }

    if (value.HasMember("MachineTag") && !value["MachineTag"].IsNull())
    {
        if (!value["MachineTag"].IsArray())
            return CoreInternalOutcome(Error("response `EffectiveMachineInfo.MachineTag` is not array type"));

        const Value &tmpValue = value["MachineTag"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_machineTag.push_back(item);
        }
        m_machineTagHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `EffectiveMachineInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EffectiveMachineInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machinePublicIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachinePublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machinePublicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machinePrivateIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachinePrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machinePrivateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machineTag.begin(); itr != m_machineTag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

}


string EffectiveMachineInfo::GetMachineName() const
{
    return m_machineName;
}

void EffectiveMachineInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool EffectiveMachineInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string EffectiveMachineInfo::GetMachinePublicIp() const
{
    return m_machinePublicIp;
}

void EffectiveMachineInfo::SetMachinePublicIp(const string& _machinePublicIp)
{
    m_machinePublicIp = _machinePublicIp;
    m_machinePublicIpHasBeenSet = true;
}

bool EffectiveMachineInfo::MachinePublicIpHasBeenSet() const
{
    return m_machinePublicIpHasBeenSet;
}

string EffectiveMachineInfo::GetMachinePrivateIp() const
{
    return m_machinePrivateIp;
}

void EffectiveMachineInfo::SetMachinePrivateIp(const string& _machinePrivateIp)
{
    m_machinePrivateIp = _machinePrivateIp;
    m_machinePrivateIpHasBeenSet = true;
}

bool EffectiveMachineInfo::MachinePrivateIpHasBeenSet() const
{
    return m_machinePrivateIpHasBeenSet;
}

vector<MachineTag> EffectiveMachineInfo::GetMachineTag() const
{
    return m_machineTag;
}

void EffectiveMachineInfo::SetMachineTag(const vector<MachineTag>& _machineTag)
{
    m_machineTag = _machineTag;
    m_machineTagHasBeenSet = true;
}

bool EffectiveMachineInfo::MachineTagHasBeenSet() const
{
    return m_machineTagHasBeenSet;
}

string EffectiveMachineInfo::GetQuuid() const
{
    return m_quuid;
}

void EffectiveMachineInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EffectiveMachineInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

