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

#include <tencentcloud/tione/v20211111/model/CreateNotebookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateNotebookRequest::CreateNotebookRequest() :
    m_nameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceConfHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_volumeSourceTypeHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
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
    m_sSHConfigHasBeenSet(false),
    m_volumeSourceGooseFSHasBeenSet(false)
{
}

string CreateNotebookRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_rootAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rootAccess, allocator);
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

    if (m_volumeSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_volumeSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeSizeInGB, allocator);
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

    if (m_volumeSourceGooseFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceGooseFS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeSourceGooseFS.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNotebookRequest::GetName() const
{
    return m_name;
}

void CreateNotebookRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateNotebookRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateNotebookRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateNotebookRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateNotebookRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ResourceConf CreateNotebookRequest::GetResourceConf() const
{
    return m_resourceConf;
}

void CreateNotebookRequest::SetResourceConf(const ResourceConf& _resourceConf)
{
    m_resourceConf = _resourceConf;
    m_resourceConfHasBeenSet = true;
}

bool CreateNotebookRequest::ResourceConfHasBeenSet() const
{
    return m_resourceConfHasBeenSet;
}

bool CreateNotebookRequest::GetLogEnable() const
{
    return m_logEnable;
}

void CreateNotebookRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool CreateNotebookRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

bool CreateNotebookRequest::GetRootAccess() const
{
    return m_rootAccess;
}

void CreateNotebookRequest::SetRootAccess(const bool& _rootAccess)
{
    m_rootAccess = _rootAccess;
    m_rootAccessHasBeenSet = true;
}

bool CreateNotebookRequest::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

bool CreateNotebookRequest::GetAutoStopping() const
{
    return m_autoStopping;
}

void CreateNotebookRequest::SetAutoStopping(const bool& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool CreateNotebookRequest::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

bool CreateNotebookRequest::GetDirectInternetAccess() const
{
    return m_directInternetAccess;
}

void CreateNotebookRequest::SetDirectInternetAccess(const bool& _directInternetAccess)
{
    m_directInternetAccess = _directInternetAccess;
    m_directInternetAccessHasBeenSet = true;
}

bool CreateNotebookRequest::DirectInternetAccessHasBeenSet() const
{
    return m_directInternetAccessHasBeenSet;
}

string CreateNotebookRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateNotebookRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateNotebookRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string CreateNotebookRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNotebookRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNotebookRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateNotebookRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateNotebookRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateNotebookRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateNotebookRequest::GetVolumeSourceType() const
{
    return m_volumeSourceType;
}

void CreateNotebookRequest::SetVolumeSourceType(const string& _volumeSourceType)
{
    m_volumeSourceType = _volumeSourceType;
    m_volumeSourceTypeHasBeenSet = true;
}

bool CreateNotebookRequest::VolumeSourceTypeHasBeenSet() const
{
    return m_volumeSourceTypeHasBeenSet;
}

uint64_t CreateNotebookRequest::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void CreateNotebookRequest::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool CreateNotebookRequest::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

CFSConfig CreateNotebookRequest::GetVolumeSourceCFS() const
{
    return m_volumeSourceCFS;
}

void CreateNotebookRequest::SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS)
{
    m_volumeSourceCFS = _volumeSourceCFS;
    m_volumeSourceCFSHasBeenSet = true;
}

bool CreateNotebookRequest::VolumeSourceCFSHasBeenSet() const
{
    return m_volumeSourceCFSHasBeenSet;
}

LogConfig CreateNotebookRequest::GetLogConfig() const
{
    return m_logConfig;
}

void CreateNotebookRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool CreateNotebookRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string CreateNotebookRequest::GetLifecycleScriptId() const
{
    return m_lifecycleScriptId;
}

void CreateNotebookRequest::SetLifecycleScriptId(const string& _lifecycleScriptId)
{
    m_lifecycleScriptId = _lifecycleScriptId;
    m_lifecycleScriptIdHasBeenSet = true;
}

bool CreateNotebookRequest::LifecycleScriptIdHasBeenSet() const
{
    return m_lifecycleScriptIdHasBeenSet;
}

string CreateNotebookRequest::GetDefaultCodeRepoId() const
{
    return m_defaultCodeRepoId;
}

void CreateNotebookRequest::SetDefaultCodeRepoId(const string& _defaultCodeRepoId)
{
    m_defaultCodeRepoId = _defaultCodeRepoId;
    m_defaultCodeRepoIdHasBeenSet = true;
}

bool CreateNotebookRequest::DefaultCodeRepoIdHasBeenSet() const
{
    return m_defaultCodeRepoIdHasBeenSet;
}

vector<string> CreateNotebookRequest::GetAdditionalCodeRepoIds() const
{
    return m_additionalCodeRepoIds;
}

void CreateNotebookRequest::SetAdditionalCodeRepoIds(const vector<string>& _additionalCodeRepoIds)
{
    m_additionalCodeRepoIds = _additionalCodeRepoIds;
    m_additionalCodeRepoIdsHasBeenSet = true;
}

bool CreateNotebookRequest::AdditionalCodeRepoIdsHasBeenSet() const
{
    return m_additionalCodeRepoIdsHasBeenSet;
}

uint64_t CreateNotebookRequest::GetAutomaticStopTime() const
{
    return m_automaticStopTime;
}

void CreateNotebookRequest::SetAutomaticStopTime(const uint64_t& _automaticStopTime)
{
    m_automaticStopTime = _automaticStopTime;
    m_automaticStopTimeHasBeenSet = true;
}

bool CreateNotebookRequest::AutomaticStopTimeHasBeenSet() const
{
    return m_automaticStopTimeHasBeenSet;
}

vector<Tag> CreateNotebookRequest::GetTags() const
{
    return m_tags;
}

void CreateNotebookRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateNotebookRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<DataConfig> CreateNotebookRequest::GetDataConfigs() const
{
    return m_dataConfigs;
}

void CreateNotebookRequest::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool CreateNotebookRequest::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

ImageInfo CreateNotebookRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateNotebookRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateNotebookRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string CreateNotebookRequest::GetImageType() const
{
    return m_imageType;
}

void CreateNotebookRequest::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool CreateNotebookRequest::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

SSHConfig CreateNotebookRequest::GetSSHConfig() const
{
    return m_sSHConfig;
}

void CreateNotebookRequest::SetSSHConfig(const SSHConfig& _sSHConfig)
{
    m_sSHConfig = _sSHConfig;
    m_sSHConfigHasBeenSet = true;
}

bool CreateNotebookRequest::SSHConfigHasBeenSet() const
{
    return m_sSHConfigHasBeenSet;
}

GooseFS CreateNotebookRequest::GetVolumeSourceGooseFS() const
{
    return m_volumeSourceGooseFS;
}

void CreateNotebookRequest::SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS)
{
    m_volumeSourceGooseFS = _volumeSourceGooseFS;
    m_volumeSourceGooseFSHasBeenSet = true;
}

bool CreateNotebookRequest::VolumeSourceGooseFSHasBeenSet() const
{
    return m_volumeSourceGooseFSHasBeenSet;
}


