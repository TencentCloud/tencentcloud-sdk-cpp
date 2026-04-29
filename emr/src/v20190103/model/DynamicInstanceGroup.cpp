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

#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DynamicInstanceGroup::DynamicInstanceGroup() :
    m_groupTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_podCpuHasBeenSet(false),
    m_podMemHasBeenSet(false),
    m_podGpuTypeHasBeenSet(false),
    m_podGpuHasBeenSet(false),
    m_podNumHasBeenSet(false),
    m_minPodNumHasBeenSet(false),
    m_maxPodNumHasBeenSet(false),
    m_supportPVHasBeenSet(false),
    m_cBSVolumesHasBeenSet(false),
    m_cFSVolumesHasBeenSet(false),
    m_cOSVolumesHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_schedulingPolicyHasBeenSet(false),
    m_resourceLabelHasBeenSet(false),
    m_podGpuResourceKeyHasBeenSet(false),
    m_cFSTurboVolumesHasBeenSet(false)
{
}

CoreInternalOutcome DynamicInstanceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("PodCpu") && !value["PodCpu"].IsNull())
    {
        if (!value["PodCpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodCpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podCpu = value["PodCpu"].GetUint64();
        m_podCpuHasBeenSet = true;
    }

    if (value.HasMember("PodMem") && !value["PodMem"].IsNull())
    {
        if (!value["PodMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podMem = value["PodMem"].GetUint64();
        m_podMemHasBeenSet = true;
    }

    if (value.HasMember("PodGpuType") && !value["PodGpuType"].IsNull())
    {
        if (!value["PodGpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodGpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podGpuType = string(value["PodGpuType"].GetString());
        m_podGpuTypeHasBeenSet = true;
    }

    if (value.HasMember("PodGpu") && !value["PodGpu"].IsNull())
    {
        if (!value["PodGpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodGpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podGpu = value["PodGpu"].GetUint64();
        m_podGpuHasBeenSet = true;
    }

    if (value.HasMember("PodNum") && !value["PodNum"].IsNull())
    {
        if (!value["PodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podNum = value["PodNum"].GetUint64();
        m_podNumHasBeenSet = true;
    }

    if (value.HasMember("MinPodNum") && !value["MinPodNum"].IsNull())
    {
        if (!value["MinPodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.MinPodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minPodNum = value["MinPodNum"].GetUint64();
        m_minPodNumHasBeenSet = true;
    }

    if (value.HasMember("MaxPodNum") && !value["MaxPodNum"].IsNull())
    {
        if (!value["MaxPodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.MaxPodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPodNum = value["MaxPodNum"].GetUint64();
        m_maxPodNumHasBeenSet = true;
    }

    if (value.HasMember("SupportPV") && !value["SupportPV"].IsNull())
    {
        if (!value["SupportPV"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.SupportPV` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportPV = value["SupportPV"].GetBool();
        m_supportPVHasBeenSet = true;
    }

    if (value.HasMember("CBSVolumes") && !value["CBSVolumes"].IsNull())
    {
        if (!value["CBSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.CBSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CBSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CBSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cBSVolumes.push_back(item);
        }
        m_cBSVolumesHasBeenSet = true;
    }

    if (value.HasMember("CFSVolumes") && !value["CFSVolumes"].IsNull())
    {
        if (!value["CFSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.CFSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CFSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSVolumes.push_back(item);
        }
        m_cFSVolumesHasBeenSet = true;
    }

    if (value.HasMember("COSVolumes") && !value["COSVolumes"].IsNull())
    {
        if (!value["COSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.COSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["COSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            COSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cOSVolumes.push_back(item);
        }
        m_cOSVolumesHasBeenSet = true;
    }

    if (value.HasMember("VolumeMounts") && !value["VolumeMounts"].IsNull())
    {
        if (!value["VolumeMounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.VolumeMounts` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMounts.push_back(item);
        }
        m_volumeMountsHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Tolerations") && !value["Tolerations"].IsNull())
    {
        if (!value["Tolerations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.Tolerations` is not array type"));

        const rapidjson::Value &tmpValue = value["Tolerations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Toleration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tolerations.push_back(item);
        }
        m_tolerationsHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("SchedulingPolicy") && !value["SchedulingPolicy"].IsNull())
    {
        if (!value["SchedulingPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.SchedulingPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulingPolicy = string(value["SchedulingPolicy"].GetString());
        m_schedulingPolicyHasBeenSet = true;
    }

    if (value.HasMember("ResourceLabel") && !value["ResourceLabel"].IsNull())
    {
        if (!value["ResourceLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.ResourceLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceLabel = string(value["ResourceLabel"].GetString());
        m_resourceLabelHasBeenSet = true;
    }

    if (value.HasMember("PodGpuResourceKey") && !value["PodGpuResourceKey"].IsNull())
    {
        if (!value["PodGpuResourceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.PodGpuResourceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podGpuResourceKey = string(value["PodGpuResourceKey"].GetString());
        m_podGpuResourceKeyHasBeenSet = true;
    }

    if (value.HasMember("CFSTurboVolumes") && !value["CFSTurboVolumes"].IsNull())
    {
        if (!value["CFSTurboVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroup.CFSTurboVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CFSTurboVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CFSTurboVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFSTurboVolumes.push_back(item);
        }
        m_cFSTurboVolumesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicInstanceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
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

    if (m_podGpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodGpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podGpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_podGpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodGpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podGpu, allocator);
    }

    if (m_podNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNum, allocator);
    }

    if (m_minPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPodNum, allocator);
    }

    if (m_maxPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPodNum, allocator);
    }

    if (m_supportPVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportPV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportPV, allocator);
    }

    if (m_cBSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CBSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cBSVolumes.begin(); itr != m_cBSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSVolumes.begin(); itr != m_cFSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cOSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cOSVolumes.begin(); itr != m_cOSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_volumeMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMounts.begin(); itr != m_volumeMounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tolerationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tolerations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tolerations.begin(); itr != m_tolerations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schedulingPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulingPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_podGpuResourceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodGpuResourceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podGpuResourceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cFSTurboVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSTurboVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFSTurboVolumes.begin(); itr != m_cFSTurboVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DynamicInstanceGroup::GetGroupType() const
{
    return m_groupType;
}

void DynamicInstanceGroup::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool DynamicInstanceGroup::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string DynamicInstanceGroup::GetGroupName() const
{
    return m_groupName;
}

void DynamicInstanceGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DynamicInstanceGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetPodCpu() const
{
    return m_podCpu;
}

void DynamicInstanceGroup::SetPodCpu(const uint64_t& _podCpu)
{
    m_podCpu = _podCpu;
    m_podCpuHasBeenSet = true;
}

bool DynamicInstanceGroup::PodCpuHasBeenSet() const
{
    return m_podCpuHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetPodMem() const
{
    return m_podMem;
}

void DynamicInstanceGroup::SetPodMem(const uint64_t& _podMem)
{
    m_podMem = _podMem;
    m_podMemHasBeenSet = true;
}

bool DynamicInstanceGroup::PodMemHasBeenSet() const
{
    return m_podMemHasBeenSet;
}

string DynamicInstanceGroup::GetPodGpuType() const
{
    return m_podGpuType;
}

void DynamicInstanceGroup::SetPodGpuType(const string& _podGpuType)
{
    m_podGpuType = _podGpuType;
    m_podGpuTypeHasBeenSet = true;
}

bool DynamicInstanceGroup::PodGpuTypeHasBeenSet() const
{
    return m_podGpuTypeHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetPodGpu() const
{
    return m_podGpu;
}

void DynamicInstanceGroup::SetPodGpu(const uint64_t& _podGpu)
{
    m_podGpu = _podGpu;
    m_podGpuHasBeenSet = true;
}

bool DynamicInstanceGroup::PodGpuHasBeenSet() const
{
    return m_podGpuHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetPodNum() const
{
    return m_podNum;
}

void DynamicInstanceGroup::SetPodNum(const uint64_t& _podNum)
{
    m_podNum = _podNum;
    m_podNumHasBeenSet = true;
}

bool DynamicInstanceGroup::PodNumHasBeenSet() const
{
    return m_podNumHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetMinPodNum() const
{
    return m_minPodNum;
}

void DynamicInstanceGroup::SetMinPodNum(const uint64_t& _minPodNum)
{
    m_minPodNum = _minPodNum;
    m_minPodNumHasBeenSet = true;
}

bool DynamicInstanceGroup::MinPodNumHasBeenSet() const
{
    return m_minPodNumHasBeenSet;
}

uint64_t DynamicInstanceGroup::GetMaxPodNum() const
{
    return m_maxPodNum;
}

void DynamicInstanceGroup::SetMaxPodNum(const uint64_t& _maxPodNum)
{
    m_maxPodNum = _maxPodNum;
    m_maxPodNumHasBeenSet = true;
}

bool DynamicInstanceGroup::MaxPodNumHasBeenSet() const
{
    return m_maxPodNumHasBeenSet;
}

bool DynamicInstanceGroup::GetSupportPV() const
{
    return m_supportPV;
}

void DynamicInstanceGroup::SetSupportPV(const bool& _supportPV)
{
    m_supportPV = _supportPV;
    m_supportPVHasBeenSet = true;
}

bool DynamicInstanceGroup::SupportPVHasBeenSet() const
{
    return m_supportPVHasBeenSet;
}

vector<CBSVolume> DynamicInstanceGroup::GetCBSVolumes() const
{
    return m_cBSVolumes;
}

void DynamicInstanceGroup::SetCBSVolumes(const vector<CBSVolume>& _cBSVolumes)
{
    m_cBSVolumes = _cBSVolumes;
    m_cBSVolumesHasBeenSet = true;
}

bool DynamicInstanceGroup::CBSVolumesHasBeenSet() const
{
    return m_cBSVolumesHasBeenSet;
}

vector<CFSVolume> DynamicInstanceGroup::GetCFSVolumes() const
{
    return m_cFSVolumes;
}

void DynamicInstanceGroup::SetCFSVolumes(const vector<CFSVolume>& _cFSVolumes)
{
    m_cFSVolumes = _cFSVolumes;
    m_cFSVolumesHasBeenSet = true;
}

bool DynamicInstanceGroup::CFSVolumesHasBeenSet() const
{
    return m_cFSVolumesHasBeenSet;
}

vector<COSVolume> DynamicInstanceGroup::GetCOSVolumes() const
{
    return m_cOSVolumes;
}

void DynamicInstanceGroup::SetCOSVolumes(const vector<COSVolume>& _cOSVolumes)
{
    m_cOSVolumes = _cOSVolumes;
    m_cOSVolumesHasBeenSet = true;
}

bool DynamicInstanceGroup::COSVolumesHasBeenSet() const
{
    return m_cOSVolumesHasBeenSet;
}

vector<VolumeMount> DynamicInstanceGroup::GetVolumeMounts() const
{
    return m_volumeMounts;
}

void DynamicInstanceGroup::SetVolumeMounts(const vector<VolumeMount>& _volumeMounts)
{
    m_volumeMounts = _volumeMounts;
    m_volumeMountsHasBeenSet = true;
}

bool DynamicInstanceGroup::VolumeMountsHasBeenSet() const
{
    return m_volumeMountsHasBeenSet;
}

vector<TkeLabel> DynamicInstanceGroup::GetLabels() const
{
    return m_labels;
}

void DynamicInstanceGroup::SetLabels(const vector<TkeLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DynamicInstanceGroup::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Toleration> DynamicInstanceGroup::GetTolerations() const
{
    return m_tolerations;
}

void DynamicInstanceGroup::SetTolerations(const vector<Toleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool DynamicInstanceGroup::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

vector<NameValue> DynamicInstanceGroup::GetEnvs() const
{
    return m_envs;
}

void DynamicInstanceGroup::SetEnvs(const vector<NameValue>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool DynamicInstanceGroup::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

string DynamicInstanceGroup::GetSchedulingPolicy() const
{
    return m_schedulingPolicy;
}

void DynamicInstanceGroup::SetSchedulingPolicy(const string& _schedulingPolicy)
{
    m_schedulingPolicy = _schedulingPolicy;
    m_schedulingPolicyHasBeenSet = true;
}

bool DynamicInstanceGroup::SchedulingPolicyHasBeenSet() const
{
    return m_schedulingPolicyHasBeenSet;
}

string DynamicInstanceGroup::GetResourceLabel() const
{
    return m_resourceLabel;
}

void DynamicInstanceGroup::SetResourceLabel(const string& _resourceLabel)
{
    m_resourceLabel = _resourceLabel;
    m_resourceLabelHasBeenSet = true;
}

bool DynamicInstanceGroup::ResourceLabelHasBeenSet() const
{
    return m_resourceLabelHasBeenSet;
}

string DynamicInstanceGroup::GetPodGpuResourceKey() const
{
    return m_podGpuResourceKey;
}

void DynamicInstanceGroup::SetPodGpuResourceKey(const string& _podGpuResourceKey)
{
    m_podGpuResourceKey = _podGpuResourceKey;
    m_podGpuResourceKeyHasBeenSet = true;
}

bool DynamicInstanceGroup::PodGpuResourceKeyHasBeenSet() const
{
    return m_podGpuResourceKeyHasBeenSet;
}

vector<CFSTurboVolume> DynamicInstanceGroup::GetCFSTurboVolumes() const
{
    return m_cFSTurboVolumes;
}

void DynamicInstanceGroup::SetCFSTurboVolumes(const vector<CFSTurboVolume>& _cFSTurboVolumes)
{
    m_cFSTurboVolumes = _cFSTurboVolumes;
    m_cFSTurboVolumesHasBeenSet = true;
}

bool DynamicInstanceGroup::CFSTurboVolumesHasBeenSet() const
{
    return m_cFSTurboVolumesHasBeenSet;
}

