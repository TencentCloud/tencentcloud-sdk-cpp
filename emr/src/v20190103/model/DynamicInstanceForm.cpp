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

#include <tencentcloud/emr/v20190103/model/DynamicInstanceForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DynamicInstanceForm::DynamicInstanceForm() :
    m_dynamicInstanceNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_supportHAHasBeenSet(false),
    m_customImageHasBeenSet(false),
    m_dynamicInstanceGroupsHasBeenSet(false),
    m_supportPVHasBeenSet(false),
    m_cBSVolumesHasBeenSet(false),
    m_cFSVolumesHasBeenSet(false),
    m_cOSVolumesHasBeenSet(false),
    m_volumeMountsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_dependServicesHasBeenSet(false),
    m_supportTokenHasBeenSet(false),
    m_cFSTurboVolumesHasBeenSet(false)
{
}

CoreInternalOutcome DynamicInstanceForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DynamicInstanceName") && !value["DynamicInstanceName"].IsNull())
    {
        if (!value["DynamicInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.DynamicInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicInstanceName = string(value["DynamicInstanceName"].GetString());
        m_dynamicInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("SupportHA") && !value["SupportHA"].IsNull())
    {
        if (!value["SupportHA"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.SupportHA` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportHA = value["SupportHA"].GetBool();
        m_supportHAHasBeenSet = true;
    }

    if (value.HasMember("CustomImage") && !value["CustomImage"].IsNull())
    {
        if (!value["CustomImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.CustomImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customImage.Deserialize(value["CustomImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customImageHasBeenSet = true;
    }

    if (value.HasMember("DynamicInstanceGroups") && !value["DynamicInstanceGroups"].IsNull())
    {
        if (!value["DynamicInstanceGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.DynamicInstanceGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["DynamicInstanceGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DynamicInstanceGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dynamicInstanceGroups.push_back(item);
        }
        m_dynamicInstanceGroupsHasBeenSet = true;
    }

    if (value.HasMember("SupportPV") && !value["SupportPV"].IsNull())
    {
        if (!value["SupportPV"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.SupportPV` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportPV = value["SupportPV"].GetBool();
        m_supportPVHasBeenSet = true;
    }

    if (value.HasMember("CBSVolumes") && !value["CBSVolumes"].IsNull())
    {
        if (!value["CBSVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.CBSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.CFSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.COSVolumes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.VolumeMounts` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.Labels` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.Tolerations` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.Envs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.DependServices` is not array type"));

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

    if (value.HasMember("SupportToken") && !value["SupportToken"].IsNull())
    {
        if (!value["SupportToken"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.SupportToken` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportToken = value["SupportToken"].GetBool();
        m_supportTokenHasBeenSet = true;
    }

    if (value.HasMember("CFSTurboVolumes") && !value["CFSTurboVolumes"].IsNull())
    {
        if (!value["CFSTurboVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceForm.CFSTurboVolumes` is not array type"));

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

void DynamicInstanceForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dynamicInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dynamicInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_supportHAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportHA, allocator);
    }

    if (m_customImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dynamicInstanceGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInstanceGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicInstanceGroups.begin(); itr != m_dynamicInstanceGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_supportTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportToken, allocator);
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


string DynamicInstanceForm::GetDynamicInstanceName() const
{
    return m_dynamicInstanceName;
}

void DynamicInstanceForm::SetDynamicInstanceName(const string& _dynamicInstanceName)
{
    m_dynamicInstanceName = _dynamicInstanceName;
    m_dynamicInstanceNameHasBeenSet = true;
}

bool DynamicInstanceForm::DynamicInstanceNameHasBeenSet() const
{
    return m_dynamicInstanceNameHasBeenSet;
}

string DynamicInstanceForm::GetNamespace() const
{
    return m_namespace;
}

void DynamicInstanceForm::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DynamicInstanceForm::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

bool DynamicInstanceForm::GetSupportHA() const
{
    return m_supportHA;
}

void DynamicInstanceForm::SetSupportHA(const bool& _supportHA)
{
    m_supportHA = _supportHA;
    m_supportHAHasBeenSet = true;
}

bool DynamicInstanceForm::SupportHAHasBeenSet() const
{
    return m_supportHAHasBeenSet;
}

CustomImage DynamicInstanceForm::GetCustomImage() const
{
    return m_customImage;
}

void DynamicInstanceForm::SetCustomImage(const CustomImage& _customImage)
{
    m_customImage = _customImage;
    m_customImageHasBeenSet = true;
}

bool DynamicInstanceForm::CustomImageHasBeenSet() const
{
    return m_customImageHasBeenSet;
}

vector<DynamicInstanceGroup> DynamicInstanceForm::GetDynamicInstanceGroups() const
{
    return m_dynamicInstanceGroups;
}

void DynamicInstanceForm::SetDynamicInstanceGroups(const vector<DynamicInstanceGroup>& _dynamicInstanceGroups)
{
    m_dynamicInstanceGroups = _dynamicInstanceGroups;
    m_dynamicInstanceGroupsHasBeenSet = true;
}

bool DynamicInstanceForm::DynamicInstanceGroupsHasBeenSet() const
{
    return m_dynamicInstanceGroupsHasBeenSet;
}

bool DynamicInstanceForm::GetSupportPV() const
{
    return m_supportPV;
}

void DynamicInstanceForm::SetSupportPV(const bool& _supportPV)
{
    m_supportPV = _supportPV;
    m_supportPVHasBeenSet = true;
}

bool DynamicInstanceForm::SupportPVHasBeenSet() const
{
    return m_supportPVHasBeenSet;
}

vector<CBSVolume> DynamicInstanceForm::GetCBSVolumes() const
{
    return m_cBSVolumes;
}

void DynamicInstanceForm::SetCBSVolumes(const vector<CBSVolume>& _cBSVolumes)
{
    m_cBSVolumes = _cBSVolumes;
    m_cBSVolumesHasBeenSet = true;
}

bool DynamicInstanceForm::CBSVolumesHasBeenSet() const
{
    return m_cBSVolumesHasBeenSet;
}

vector<CFSVolume> DynamicInstanceForm::GetCFSVolumes() const
{
    return m_cFSVolumes;
}

void DynamicInstanceForm::SetCFSVolumes(const vector<CFSVolume>& _cFSVolumes)
{
    m_cFSVolumes = _cFSVolumes;
    m_cFSVolumesHasBeenSet = true;
}

bool DynamicInstanceForm::CFSVolumesHasBeenSet() const
{
    return m_cFSVolumesHasBeenSet;
}

vector<COSVolume> DynamicInstanceForm::GetCOSVolumes() const
{
    return m_cOSVolumes;
}

void DynamicInstanceForm::SetCOSVolumes(const vector<COSVolume>& _cOSVolumes)
{
    m_cOSVolumes = _cOSVolumes;
    m_cOSVolumesHasBeenSet = true;
}

bool DynamicInstanceForm::COSVolumesHasBeenSet() const
{
    return m_cOSVolumesHasBeenSet;
}

vector<VolumeMount> DynamicInstanceForm::GetVolumeMounts() const
{
    return m_volumeMounts;
}

void DynamicInstanceForm::SetVolumeMounts(const vector<VolumeMount>& _volumeMounts)
{
    m_volumeMounts = _volumeMounts;
    m_volumeMountsHasBeenSet = true;
}

bool DynamicInstanceForm::VolumeMountsHasBeenSet() const
{
    return m_volumeMountsHasBeenSet;
}

vector<TkeLabel> DynamicInstanceForm::GetLabels() const
{
    return m_labels;
}

void DynamicInstanceForm::SetLabels(const vector<TkeLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DynamicInstanceForm::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Toleration> DynamicInstanceForm::GetTolerations() const
{
    return m_tolerations;
}

void DynamicInstanceForm::SetTolerations(const vector<Toleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool DynamicInstanceForm::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

vector<NameValue> DynamicInstanceForm::GetEnvs() const
{
    return m_envs;
}

void DynamicInstanceForm::SetEnvs(const vector<NameValue>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool DynamicInstanceForm::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<DependService> DynamicInstanceForm::GetDependServices() const
{
    return m_dependServices;
}

void DynamicInstanceForm::SetDependServices(const vector<DependService>& _dependServices)
{
    m_dependServices = _dependServices;
    m_dependServicesHasBeenSet = true;
}

bool DynamicInstanceForm::DependServicesHasBeenSet() const
{
    return m_dependServicesHasBeenSet;
}

bool DynamicInstanceForm::GetSupportToken() const
{
    return m_supportToken;
}

void DynamicInstanceForm::SetSupportToken(const bool& _supportToken)
{
    m_supportToken = _supportToken;
    m_supportTokenHasBeenSet = true;
}

bool DynamicInstanceForm::SupportTokenHasBeenSet() const
{
    return m_supportTokenHasBeenSet;
}

vector<CFSTurboVolume> DynamicInstanceForm::GetCFSTurboVolumes() const
{
    return m_cFSTurboVolumes;
}

void DynamicInstanceForm::SetCFSTurboVolumes(const vector<CFSTurboVolume>& _cFSTurboVolumes)
{
    m_cFSTurboVolumes = _cFSTurboVolumes;
    m_cFSTurboVolumesHasBeenSet = true;
}

bool DynamicInstanceForm::CFSTurboVolumesHasBeenSet() const
{
    return m_cFSTurboVolumesHasBeenSet;
}

