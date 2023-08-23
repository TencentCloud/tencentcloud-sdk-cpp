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

#include <tencentcloud/tione/v20211111/model/ModifyNotebookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyNotebookRequest::ModifyNotebookRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceConfHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeSourceTypeHasBeenSet(false),
    m_volumeSourceCFSHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_lifecycleScriptIdHasBeenSet(false),
    m_defaultCodeRepoIdHasBeenSet(false),
    m_additionalCodeRepoIdsHasBeenSet(false),
    m_automaticStopTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_sSHConfigHasBeenSet(false)
{
}

string ModifyNotebookRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStopping, allocator);
    }

    if (m_directInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_directInternetAccess, allocator);
    }

    if (m_rootAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rootAccess, allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

    if (m_volumeSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_volumeSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSourceCFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceCFS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeSourceCFS.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lifecycleScriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lifecycleScriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCodeRepoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCodeRepoId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultCodeRepoId.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalCodeRepoIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCodeRepoIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_additionalCodeRepoIds.begin(); itr != m_additionalCodeRepoIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_automaticStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticStopTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_automaticStopTime, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataConfigs.begin(); itr != m_dataConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_sSHConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSHConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNotebookRequest::GetId() const
{
    return m_id;
}

void ModifyNotebookRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyNotebookRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyNotebookRequest::GetName() const
{
    return m_name;
}

void ModifyNotebookRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyNotebookRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyNotebookRequest::GetChargeType() const
{
    return m_chargeType;
}

void ModifyNotebookRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModifyNotebookRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ResourceConf ModifyNotebookRequest::GetResourceConf() const
{
    return m_resourceConf;
}

void ModifyNotebookRequest::SetResourceConf(const ResourceConf& _resourceConf)
{
    m_resourceConf = _resourceConf;
    m_resourceConfHasBeenSet = true;
}

bool ModifyNotebookRequest::ResourceConfHasBeenSet() const
{
    return m_resourceConfHasBeenSet;
}

bool ModifyNotebookRequest::GetLogEnable() const
{
    return m_logEnable;
}

void ModifyNotebookRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool ModifyNotebookRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

bool ModifyNotebookRequest::GetAutoStopping() const
{
    return m_autoStopping;
}

void ModifyNotebookRequest::SetAutoStopping(const bool& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool ModifyNotebookRequest::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

bool ModifyNotebookRequest::GetDirectInternetAccess() const
{
    return m_directInternetAccess;
}

void ModifyNotebookRequest::SetDirectInternetAccess(const bool& _directInternetAccess)
{
    m_directInternetAccess = _directInternetAccess;
    m_directInternetAccessHasBeenSet = true;
}

bool ModifyNotebookRequest::DirectInternetAccessHasBeenSet() const
{
    return m_directInternetAccessHasBeenSet;
}

bool ModifyNotebookRequest::GetRootAccess() const
{
    return m_rootAccess;
}

void ModifyNotebookRequest::SetRootAccess(const bool& _rootAccess)
{
    m_rootAccess = _rootAccess;
    m_rootAccessHasBeenSet = true;
}

bool ModifyNotebookRequest::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

string ModifyNotebookRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ModifyNotebookRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ModifyNotebookRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string ModifyNotebookRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyNotebookRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyNotebookRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyNotebookRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyNotebookRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyNotebookRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t ModifyNotebookRequest::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void ModifyNotebookRequest::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool ModifyNotebookRequest::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

string ModifyNotebookRequest::GetVolumeSourceType() const
{
    return m_volumeSourceType;
}

void ModifyNotebookRequest::SetVolumeSourceType(const string& _volumeSourceType)
{
    m_volumeSourceType = _volumeSourceType;
    m_volumeSourceTypeHasBeenSet = true;
}

bool ModifyNotebookRequest::VolumeSourceTypeHasBeenSet() const
{
    return m_volumeSourceTypeHasBeenSet;
}

CFSConfig ModifyNotebookRequest::GetVolumeSourceCFS() const
{
    return m_volumeSourceCFS;
}

void ModifyNotebookRequest::SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS)
{
    m_volumeSourceCFS = _volumeSourceCFS;
    m_volumeSourceCFSHasBeenSet = true;
}

bool ModifyNotebookRequest::VolumeSourceCFSHasBeenSet() const
{
    return m_volumeSourceCFSHasBeenSet;
}

LogConfig ModifyNotebookRequest::GetLogConfig() const
{
    return m_logConfig;
}

void ModifyNotebookRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool ModifyNotebookRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string ModifyNotebookRequest::GetLifecycleScriptId() const
{
    return m_lifecycleScriptId;
}

void ModifyNotebookRequest::SetLifecycleScriptId(const string& _lifecycleScriptId)
{
    m_lifecycleScriptId = _lifecycleScriptId;
    m_lifecycleScriptIdHasBeenSet = true;
}

bool ModifyNotebookRequest::LifecycleScriptIdHasBeenSet() const
{
    return m_lifecycleScriptIdHasBeenSet;
}

string ModifyNotebookRequest::GetDefaultCodeRepoId() const
{
    return m_defaultCodeRepoId;
}

void ModifyNotebookRequest::SetDefaultCodeRepoId(const string& _defaultCodeRepoId)
{
    m_defaultCodeRepoId = _defaultCodeRepoId;
    m_defaultCodeRepoIdHasBeenSet = true;
}

bool ModifyNotebookRequest::DefaultCodeRepoIdHasBeenSet() const
{
    return m_defaultCodeRepoIdHasBeenSet;
}

vector<string> ModifyNotebookRequest::GetAdditionalCodeRepoIds() const
{
    return m_additionalCodeRepoIds;
}

void ModifyNotebookRequest::SetAdditionalCodeRepoIds(const vector<string>& _additionalCodeRepoIds)
{
    m_additionalCodeRepoIds = _additionalCodeRepoIds;
    m_additionalCodeRepoIdsHasBeenSet = true;
}

bool ModifyNotebookRequest::AdditionalCodeRepoIdsHasBeenSet() const
{
    return m_additionalCodeRepoIdsHasBeenSet;
}

int64_t ModifyNotebookRequest::GetAutomaticStopTime() const
{
    return m_automaticStopTime;
}

void ModifyNotebookRequest::SetAutomaticStopTime(const int64_t& _automaticStopTime)
{
    m_automaticStopTime = _automaticStopTime;
    m_automaticStopTimeHasBeenSet = true;
}

bool ModifyNotebookRequest::AutomaticStopTimeHasBeenSet() const
{
    return m_automaticStopTimeHasBeenSet;
}

vector<Tag> ModifyNotebookRequest::GetTags() const
{
    return m_tags;
}

void ModifyNotebookRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyNotebookRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DataConfig> ModifyNotebookRequest::GetDataConfigs() const
{
    return m_dataConfigs;
}

void ModifyNotebookRequest::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool ModifyNotebookRequest::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

ImageInfo ModifyNotebookRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void ModifyNotebookRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool ModifyNotebookRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string ModifyNotebookRequest::GetImageType() const
{
    return m_imageType;
}

void ModifyNotebookRequest::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool ModifyNotebookRequest::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

SSHConfig ModifyNotebookRequest::GetSSHConfig() const
{
    return m_sSHConfig;
}

void ModifyNotebookRequest::SetSSHConfig(const SSHConfig& _sSHConfig)
{
    m_sSHConfig = _sSHConfig;
    m_sSHConfigHasBeenSet = true;
}

bool ModifyNotebookRequest::SSHConfigHasBeenSet() const
{
    return m_sSHConfigHasBeenSet;
}


