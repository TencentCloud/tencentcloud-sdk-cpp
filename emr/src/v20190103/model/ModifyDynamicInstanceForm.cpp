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

#include <tencentcloud/emr/v20190103/model/ModifyDynamicInstanceForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyDynamicInstanceForm::ModifyDynamicInstanceForm() :
    m_modifyScopeHasBeenSet(false),
    m_addDynamicInstanceGroupHasBeenSet(false),
    m_supportPVHasBeenSet(false),
    m_cBSVolumesHasBeenSet(false),
    m_cFSVolumesHasBeenSet(false),
    m_cOSVolumesHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_dependServicesHasBeenSet(false),
    m_supportNewTokenHasBeenSet(false),
    m_modifyDynamicInstanceGroupHasBeenSet(false),
    m_cFSTurboVolumesHasBeenSet(false),
    m_customImageHasBeenSet(false),
    m_imageInfoV2HasBeenSet(false),
    m_gooseFSVolumesHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDynamicInstanceForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModifyScope") && !value["ModifyScope"].IsNull())
    {
        if (!value["ModifyScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.ModifyScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyScope = value["ModifyScope"].GetInt64();
        m_modifyScopeHasBeenSet = true;
    }

    if (value.HasMember("AddDynamicInstanceGroup") && !value["AddDynamicInstanceGroup"].IsNull())
    {
        if (!value["AddDynamicInstanceGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.AddDynamicInstanceGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addDynamicInstanceGroup.Deserialize(value["AddDynamicInstanceGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addDynamicInstanceGroupHasBeenSet = true;
    }

    if (value.HasMember("SupportPV") && !value["SupportPV"].IsNull())
    {
        if (!value["SupportPV"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.SupportPV` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportPV = value["SupportPV"].GetBool();
        m_supportPVHasBeenSet = true;
    }

    if (value.HasMember("CBSVolumes") && !value["CBSVolumes"].IsNull())
    {
        if (!value["CBSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.CBSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.CFSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.COSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.VolumeMounts` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.Labels` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.Tolerations` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.Envs` is not array type"));

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

    if (value.HasMember("DependServices") && !value["DependServices"].IsNull())
    {
        if (!value["DependServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.DependServices` is not array type"));

        const rapidjson::Value &tmpValue = value["DependServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependServices.push_back(item);
        }
        m_dependServicesHasBeenSet = true;
    }

    if (value.HasMember("SupportNewToken") && !value["SupportNewToken"].IsNull())
    {
        if (!value["SupportNewToken"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.SupportNewToken` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportNewToken = value["SupportNewToken"].GetBool();
        m_supportNewTokenHasBeenSet = true;
    }

    if (value.HasMember("ModifyDynamicInstanceGroup") && !value["ModifyDynamicInstanceGroup"].IsNull())
    {
        if (!value["ModifyDynamicInstanceGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.ModifyDynamicInstanceGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyDynamicInstanceGroup.Deserialize(value["ModifyDynamicInstanceGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyDynamicInstanceGroupHasBeenSet = true;
    }

    if (value.HasMember("CFSTurboVolumes") && !value["CFSTurboVolumes"].IsNull())
    {
        if (!value["CFSTurboVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.CFSTurboVolumes` is not array type"));

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

    if (value.HasMember("CustomImage") && !value["CustomImage"].IsNull())
    {
        if (!value["CustomImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.CustomImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customImage.Deserialize(value["CustomImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customImageHasBeenSet = true;
    }

    if (value.HasMember("ImageInfoV2") && !value["ImageInfoV2"].IsNull())
    {
        if (!value["ImageInfoV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.ImageInfoV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfoV2.Deserialize(value["ImageInfoV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoV2HasBeenSet = true;
    }

    if (value.HasMember("GooseFSVolumes") && !value["GooseFSVolumes"].IsNull())
    {
        if (!value["GooseFSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyDynamicInstanceForm.GooseFSVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["GooseFSVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GooseFSVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gooseFSVolumes.push_back(item);
        }
        m_gooseFSVolumesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDynamicInstanceForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modifyScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyScope, allocator);
    }

    if (m_addDynamicInstanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddDynamicInstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addDynamicInstanceGroup.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_dependServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependServices.begin(); itr != m_dependServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportNewTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportNewToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportNewToken, allocator);
    }

    if (m_modifyDynamicInstanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDynamicInstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyDynamicInstanceGroup.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_customImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageInfoV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfoV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfoV2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gooseFSVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gooseFSVolumes.begin(); itr != m_gooseFSVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ModifyDynamicInstanceForm::GetModifyScope() const
{
    return m_modifyScope;
}

void ModifyDynamicInstanceForm::SetModifyScope(const int64_t& _modifyScope)
{
    m_modifyScope = _modifyScope;
    m_modifyScopeHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::ModifyScopeHasBeenSet() const
{
    return m_modifyScopeHasBeenSet;
}

DynamicInstanceGroup ModifyDynamicInstanceForm::GetAddDynamicInstanceGroup() const
{
    return m_addDynamicInstanceGroup;
}

void ModifyDynamicInstanceForm::SetAddDynamicInstanceGroup(const DynamicInstanceGroup& _addDynamicInstanceGroup)
{
    m_addDynamicInstanceGroup = _addDynamicInstanceGroup;
    m_addDynamicInstanceGroupHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::AddDynamicInstanceGroupHasBeenSet() const
{
    return m_addDynamicInstanceGroupHasBeenSet;
}

bool ModifyDynamicInstanceForm::GetSupportPV() const
{
    return m_supportPV;
}

void ModifyDynamicInstanceForm::SetSupportPV(const bool& _supportPV)
{
    m_supportPV = _supportPV;
    m_supportPVHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::SupportPVHasBeenSet() const
{
    return m_supportPVHasBeenSet;
}

vector<CBSVolume> ModifyDynamicInstanceForm::GetCBSVolumes() const
{
    return m_cBSVolumes;
}

void ModifyDynamicInstanceForm::SetCBSVolumes(const vector<CBSVolume>& _cBSVolumes)
{
    m_cBSVolumes = _cBSVolumes;
    m_cBSVolumesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::CBSVolumesHasBeenSet() const
{
    return m_cBSVolumesHasBeenSet;
}

vector<CFSVolume> ModifyDynamicInstanceForm::GetCFSVolumes() const
{
    return m_cFSVolumes;
}

void ModifyDynamicInstanceForm::SetCFSVolumes(const vector<CFSVolume>& _cFSVolumes)
{
    m_cFSVolumes = _cFSVolumes;
    m_cFSVolumesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::CFSVolumesHasBeenSet() const
{
    return m_cFSVolumesHasBeenSet;
}

vector<COSVolume> ModifyDynamicInstanceForm::GetCOSVolumes() const
{
    return m_cOSVolumes;
}

void ModifyDynamicInstanceForm::SetCOSVolumes(const vector<COSVolume>& _cOSVolumes)
{
    m_cOSVolumes = _cOSVolumes;
    m_cOSVolumesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::COSVolumesHasBeenSet() const
{
    return m_cOSVolumesHasBeenSet;
}

vector<VolumeMount> ModifyDynamicInstanceForm::GetVolumeMounts() const
{
    return m_volumeMounts;
}

void ModifyDynamicInstanceForm::SetVolumeMounts(const vector<VolumeMount>& _volumeMounts)
{
    m_volumeMounts = _volumeMounts;
    m_volumeMountsHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::VolumeMountsHasBeenSet() const
{
    return m_volumeMountsHasBeenSet;
}

vector<TkeLabel> ModifyDynamicInstanceForm::GetLabels() const
{
    return m_labels;
}

void ModifyDynamicInstanceForm::SetLabels(const vector<TkeLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Toleration> ModifyDynamicInstanceForm::GetTolerations() const
{
    return m_tolerations;
}

void ModifyDynamicInstanceForm::SetTolerations(const vector<Toleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

vector<NameValue> ModifyDynamicInstanceForm::GetEnvs() const
{
    return m_envs;
}

void ModifyDynamicInstanceForm::SetEnvs(const vector<NameValue>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<DependService> ModifyDynamicInstanceForm::GetDependServices() const
{
    return m_dependServices;
}

void ModifyDynamicInstanceForm::SetDependServices(const vector<DependService>& _dependServices)
{
    m_dependServices = _dependServices;
    m_dependServicesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::DependServicesHasBeenSet() const
{
    return m_dependServicesHasBeenSet;
}

bool ModifyDynamicInstanceForm::GetSupportNewToken() const
{
    return m_supportNewToken;
}

void ModifyDynamicInstanceForm::SetSupportNewToken(const bool& _supportNewToken)
{
    m_supportNewToken = _supportNewToken;
    m_supportNewTokenHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::SupportNewTokenHasBeenSet() const
{
    return m_supportNewTokenHasBeenSet;
}

DynamicInstanceGroup ModifyDynamicInstanceForm::GetModifyDynamicInstanceGroup() const
{
    return m_modifyDynamicInstanceGroup;
}

void ModifyDynamicInstanceForm::SetModifyDynamicInstanceGroup(const DynamicInstanceGroup& _modifyDynamicInstanceGroup)
{
    m_modifyDynamicInstanceGroup = _modifyDynamicInstanceGroup;
    m_modifyDynamicInstanceGroupHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::ModifyDynamicInstanceGroupHasBeenSet() const
{
    return m_modifyDynamicInstanceGroupHasBeenSet;
}

vector<CFSTurboVolume> ModifyDynamicInstanceForm::GetCFSTurboVolumes() const
{
    return m_cFSTurboVolumes;
}

void ModifyDynamicInstanceForm::SetCFSTurboVolumes(const vector<CFSTurboVolume>& _cFSTurboVolumes)
{
    m_cFSTurboVolumes = _cFSTurboVolumes;
    m_cFSTurboVolumesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::CFSTurboVolumesHasBeenSet() const
{
    return m_cFSTurboVolumesHasBeenSet;
}

CustomImage ModifyDynamicInstanceForm::GetCustomImage() const
{
    return m_customImage;
}

void ModifyDynamicInstanceForm::SetCustomImage(const CustomImage& _customImage)
{
    m_customImage = _customImage;
    m_customImageHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::CustomImageHasBeenSet() const
{
    return m_customImageHasBeenSet;
}

ImageInfoV2 ModifyDynamicInstanceForm::GetImageInfoV2() const
{
    return m_imageInfoV2;
}

void ModifyDynamicInstanceForm::SetImageInfoV2(const ImageInfoV2& _imageInfoV2)
{
    m_imageInfoV2 = _imageInfoV2;
    m_imageInfoV2HasBeenSet = true;
}

bool ModifyDynamicInstanceForm::ImageInfoV2HasBeenSet() const
{
    return m_imageInfoV2HasBeenSet;
}

vector<GooseFSVolume> ModifyDynamicInstanceForm::GetGooseFSVolumes() const
{
    return m_gooseFSVolumes;
}

void ModifyDynamicInstanceForm::SetGooseFSVolumes(const vector<GooseFSVolume>& _gooseFSVolumes)
{
    m_gooseFSVolumes = _gooseFSVolumes;
    m_gooseFSVolumesHasBeenSet = true;
}

bool ModifyDynamicInstanceForm::GooseFSVolumesHasBeenSet() const
{
    return m_gooseFSVolumesHasBeenSet;
}

