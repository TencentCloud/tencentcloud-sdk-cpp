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

#include <tencentcloud/tke/v20220501/model/ManagementConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

ManagementConfig::ManagementConfig() :
    m_nameserversHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_kernelArgsHasBeenSet(false)
{
}

CoreInternalOutcome ManagementConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nameservers") && !value["Nameservers"].IsNull())
    {
        if (!value["Nameservers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagementConfig.Nameservers` is not array type"));

        const rapidjson::Value &tmpValue = value["Nameservers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameservers.push_back((*itr).GetString());
        }
        m_nameserversHasBeenSet = true;
    }

    if (value.HasMember("Hosts") && !value["Hosts"].IsNull())
    {
        if (!value["Hosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagementConfig.Hosts` is not array type"));

        const rapidjson::Value &tmpValue = value["Hosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hosts.push_back((*itr).GetString());
        }
        m_hostsHasBeenSet = true;
    }

    if (value.HasMember("KernelArgs") && !value["KernelArgs"].IsNull())
    {
        if (!value["KernelArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ManagementConfig.KernelArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["KernelArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kernelArgs.push_back((*itr).GetString());
        }
        m_kernelArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagementConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameserversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nameservers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameservers.begin(); itr != m_nameservers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kernelArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kernelArgs.begin(); itr != m_kernelArgs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ManagementConfig::GetNameservers() const
{
    return m_nameservers;
}

void ManagementConfig::SetNameservers(const vector<string>& _nameservers)
{
    m_nameservers = _nameservers;
    m_nameserversHasBeenSet = true;
}

bool ManagementConfig::NameserversHasBeenSet() const
{
    return m_nameserversHasBeenSet;
}

vector<string> ManagementConfig::GetHosts() const
{
    return m_hosts;
}

void ManagementConfig::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool ManagementConfig::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

vector<string> ManagementConfig::GetKernelArgs() const
{
    return m_kernelArgs;
}

void ManagementConfig::SetKernelArgs(const vector<string>& _kernelArgs)
{
    m_kernelArgs = _kernelArgs;
    m_kernelArgsHasBeenSet = true;
}

bool ManagementConfig::KernelArgsHasBeenSet() const
{
    return m_kernelArgsHasBeenSet;
}

