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

#include <tencentcloud/emr/v20190103/model/CloudResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CloudResource::CloudResource() :
    m_componentNameHasBeenSet(false),
    m_podNumberHasBeenSet(false),
    m_limitCpuHasBeenSet(false),
    m_limitMemoryHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_volumeDirHasBeenSet(false),
    m_externalAccessHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_disksHasBeenSet(false)
{
}

CoreInternalOutcome CloudResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentName") && !value["ComponentName"].IsNull())
    {
        if (!value["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(value["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (value.HasMember("PodNumber") && !value["PodNumber"].IsNull())
    {
        if (!value["PodNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.PodNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podNumber = value["PodNumber"].GetInt64();
        m_podNumberHasBeenSet = true;
    }

    if (value.HasMember("LimitCpu") && !value["LimitCpu"].IsNull())
    {
        if (!value["LimitCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.LimitCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitCpu = value["LimitCpu"].GetInt64();
        m_limitCpuHasBeenSet = true;
    }

    if (value.HasMember("LimitMemory") && !value["LimitMemory"].IsNull())
    {
        if (!value["LimitMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.LimitMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitMemory = value["LimitMemory"].GetInt64();
        m_limitMemoryHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("VolumeDir") && !value["VolumeDir"].IsNull())
    {
        if (!value["VolumeDir"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.VolumeDir` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeDir.Deserialize(value["VolumeDir"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeDirHasBeenSet = true;
    }

    if (value.HasMember("ExternalAccess") && !value["ExternalAccess"].IsNull())
    {
        if (!value["ExternalAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.ExternalAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalAccess.Deserialize(value["ExternalAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalAccessHasBeenSet = true;
    }

    if (value.HasMember("Affinity") && !value["Affinity"].IsNull())
    {
        if (!value["Affinity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudResource.Affinity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_affinity.Deserialize(value["Affinity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_affinityHasBeenSet = true;
    }

    if (value.HasMember("Disks") && !value["Disks"].IsNull())
    {
        if (!value["Disks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudResource.Disks` is not array type"));

        const rapidjson::Value &tmpValue = value["Disks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Disk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disks.push_back(item);
        }
        m_disksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNumber, allocator);
    }

    if (m_limitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCpu, allocator);
    }

    if (m_limitMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitMemory, allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeDir.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_affinity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disks.begin(); itr != m_disks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudResource::GetComponentName() const
{
    return m_componentName;
}

void CloudResource::SetComponentName(const string& _componentName)
{
    m_componentName = _componentName;
    m_componentNameHasBeenSet = true;
}

bool CloudResource::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

int64_t CloudResource::GetPodNumber() const
{
    return m_podNumber;
}

void CloudResource::SetPodNumber(const int64_t& _podNumber)
{
    m_podNumber = _podNumber;
    m_podNumberHasBeenSet = true;
}

bool CloudResource::PodNumberHasBeenSet() const
{
    return m_podNumberHasBeenSet;
}

int64_t CloudResource::GetLimitCpu() const
{
    return m_limitCpu;
}

void CloudResource::SetLimitCpu(const int64_t& _limitCpu)
{
    m_limitCpu = _limitCpu;
    m_limitCpuHasBeenSet = true;
}

bool CloudResource::LimitCpuHasBeenSet() const
{
    return m_limitCpuHasBeenSet;
}

int64_t CloudResource::GetLimitMemory() const
{
    return m_limitMemory;
}

void CloudResource::SetLimitMemory(const int64_t& _limitMemory)
{
    m_limitMemory = _limitMemory;
    m_limitMemoryHasBeenSet = true;
}

bool CloudResource::LimitMemoryHasBeenSet() const
{
    return m_limitMemoryHasBeenSet;
}

string CloudResource::GetService() const
{
    return m_service;
}

void CloudResource::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool CloudResource::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

VolumeSetting CloudResource::GetVolumeDir() const
{
    return m_volumeDir;
}

void CloudResource::SetVolumeDir(const VolumeSetting& _volumeDir)
{
    m_volumeDir = _volumeDir;
    m_volumeDirHasBeenSet = true;
}

bool CloudResource::VolumeDirHasBeenSet() const
{
    return m_volumeDirHasBeenSet;
}

ExternalAccess CloudResource::GetExternalAccess() const
{
    return m_externalAccess;
}

void CloudResource::SetExternalAccess(const ExternalAccess& _externalAccess)
{
    m_externalAccess = _externalAccess;
    m_externalAccessHasBeenSet = true;
}

bool CloudResource::ExternalAccessHasBeenSet() const
{
    return m_externalAccessHasBeenSet;
}

NodeAffinity CloudResource::GetAffinity() const
{
    return m_affinity;
}

void CloudResource::SetAffinity(const NodeAffinity& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool CloudResource::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

vector<Disk> CloudResource::GetDisks() const
{
    return m_disks;
}

void CloudResource::SetDisks(const vector<Disk>& _disks)
{
    m_disks = _disks;
    m_disksHasBeenSet = true;
}

bool CloudResource::DisksHasBeenSet() const
{
    return m_disksHasBeenSet;
}

