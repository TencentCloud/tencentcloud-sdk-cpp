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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceConf.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/DataConfig.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/SSHConfig.h>
#include <tencentcloud/tione/v20211111/model/GooseFS.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateNotebook请求参数结构体
                */
                class CreateNotebookRequest : public AbstractModel
                {
                public:
                    CreateNotebookRequest();
                    ~CreateNotebookRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>名称。不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @return Name <p>名称。不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称。不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @param _name <p>名称。不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>计算资源付费模式 ，可选值为：<br>PREPAID：预付费，即包年包月<br>POSTPAID_BY_HOUR：按小时后付费</p>
                     * @return ChargeType <p>计算资源付费模式 ，可选值为：<br>PREPAID：预付费，即包年包月<br>POSTPAID_BY_HOUR：按小时后付费</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计算资源付费模式 ，可选值为：<br>PREPAID：预付费，即包年包月<br>POSTPAID_BY_HOUR：按小时后付费</p>
                     * @param _chargeType <p>计算资源付费模式 ，可选值为：<br>PREPAID：预付费，即包年包月<br>POSTPAID_BY_HOUR：按小时后付费</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>计算资源配置</p>
                     * @return ResourceConf <p>计算资源配置</p>
                     * 
                     */
                    ResourceConf GetResourceConf() const;

                    /**
                     * 设置<p>计算资源配置</p>
                     * @param _resourceConf <p>计算资源配置</p>
                     * 
                     */
                    void SetResourceConf(const ResourceConf& _resourceConf);

                    /**
                     * 判断参数 ResourceConf 是否已赋值
                     * @return ResourceConf 是否已赋值
                     * 
                     */
                    bool ResourceConfHasBeenSet() const;

                    /**
                     * 获取<p>是否上报日志</p>
                     * @return LogEnable <p>是否上报日志</p>
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置<p>是否上报日志</p>
                     * @param _logEnable <p>是否上报日志</p>
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取<p>是否ROOT权限</p>
                     * @return RootAccess <p>是否ROOT权限</p>
                     * 
                     */
                    bool GetRootAccess() const;

                    /**
                     * 设置<p>是否ROOT权限</p>
                     * @param _rootAccess <p>是否ROOT权限</p>
                     * 
                     */
                    void SetRootAccess(const bool& _rootAccess);

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     * 
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取<p>是否自动停止</p>
                     * @return AutoStopping <p>是否自动停止</p>
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置<p>是否自动停止</p>
                     * @param _autoStopping <p>是否自动停止</p>
                     * 
                     */
                    void SetAutoStopping(const bool& _autoStopping);

                    /**
                     * 判断参数 AutoStopping 是否已赋值
                     * @return AutoStopping 是否已赋值
                     * 
                     */
                    bool AutoStoppingHasBeenSet() const;

                    /**
                     * 获取<p>是否访问公网</p>
                     * @return DirectInternetAccess <p>是否访问公网</p>
                     * 
                     */
                    bool GetDirectInternetAccess() const;

                    /**
                     * 设置<p>是否访问公网</p>
                     * @param _directInternetAccess <p>是否访问公网</p>
                     * 
                     */
                    void SetDirectInternetAccess(const bool& _directInternetAccess);

                    /**
                     * 判断参数 DirectInternetAccess 是否已赋值
                     * @return DirectInternetAccess 是否已赋值
                     * 
                     */
                    bool DirectInternetAccessHasBeenSet() const;

                    /**
                     * 获取<p>资源组ID(for预付费)</p>
                     * @return ResourceGroupId <p>资源组ID(for预付费)</p>
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>资源组ID(for预付费)</p>
                     * @param _resourceGroupId <p>资源组ID(for预付费)</p>
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Vpc-Id</p>
                     * @return VpcId <p>Vpc-Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Vpc-Id</p>
                     * @param _vpcId <p>Vpc-Id</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网Id</p>
                     * @return SubnetId <p>子网Id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网Id</p>
                     * @param _subnetId <p>子网Id</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>存储的类型。取值包含：<br>FREE：预付费的免费存储<br>CLOUD_PREMIUM：高性能云硬盘<br>CLOUD_SSD：SSD云硬盘<br>CFS：CFS存储<br>CFS_TURBO：CFS Turbo存储<br>GooseFSx：GooseFSx存储</p>
                     * @return VolumeSourceType <p>存储的类型。取值包含：<br>FREE：预付费的免费存储<br>CLOUD_PREMIUM：高性能云硬盘<br>CLOUD_SSD：SSD云硬盘<br>CFS：CFS存储<br>CFS_TURBO：CFS Turbo存储<br>GooseFSx：GooseFSx存储</p>
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置<p>存储的类型。取值包含：<br>FREE：预付费的免费存储<br>CLOUD_PREMIUM：高性能云硬盘<br>CLOUD_SSD：SSD云硬盘<br>CFS：CFS存储<br>CFS_TURBO：CFS Turbo存储<br>GooseFSx：GooseFSx存储</p>
                     * @param _volumeSourceType <p>存储的类型。取值包含：<br>FREE：预付费的免费存储<br>CLOUD_PREMIUM：高性能云硬盘<br>CLOUD_SSD：SSD云硬盘<br>CFS：CFS存储<br>CFS_TURBO：CFS Turbo存储<br>GooseFSx：GooseFSx存储</p>
                     * 
                     */
                    void SetVolumeSourceType(const std::string& _volumeSourceType);

                    /**
                     * 判断参数 VolumeSourceType 是否已赋值
                     * @return VolumeSourceType 是否已赋值
                     * 
                     */
                    bool VolumeSourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘存储卷大小，单位GB</p>
                     * @return VolumeSizeInGB <p>云硬盘存储卷大小，单位GB</p>
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置<p>云硬盘存储卷大小，单位GB</p>
                     * @param _volumeSizeInGB <p>云硬盘存储卷大小，单位GB</p>
                     * 
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     * 
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                    /**
                     * 获取<p>CFS存储的配置</p>
                     * @return VolumeSourceCFS <p>CFS存储的配置</p>
                     * 
                     */
                    CFSConfig GetVolumeSourceCFS() const;

                    /**
                     * 设置<p>CFS存储的配置</p>
                     * @param _volumeSourceCFS <p>CFS存储的配置</p>
                     * 
                     */
                    void SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS);

                    /**
                     * 判断参数 VolumeSourceCFS 是否已赋值
                     * @return VolumeSourceCFS 是否已赋值
                     * 
                     */
                    bool VolumeSourceCFSHasBeenSet() const;

                    /**
                     * 获取<p>日志配置</p>
                     * @return LogConfig <p>日志配置</p>
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置<p>日志配置</p>
                     * @param _logConfig <p>日志配置</p>
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取<p>生命周期脚本的ID</p>
                     * @return LifecycleScriptId <p>生命周期脚本的ID</p>
                     * 
                     */
                    std::string GetLifecycleScriptId() const;

                    /**
                     * 设置<p>生命周期脚本的ID</p>
                     * @param _lifecycleScriptId <p>生命周期脚本的ID</p>
                     * 
                     */
                    void SetLifecycleScriptId(const std::string& _lifecycleScriptId);

                    /**
                     * 判断参数 LifecycleScriptId 是否已赋值
                     * @return LifecycleScriptId 是否已赋值
                     * 
                     */
                    bool LifecycleScriptIdHasBeenSet() const;

                    /**
                     * 获取<p>默认GIT存储库的ID</p>
                     * @return DefaultCodeRepoId <p>默认GIT存储库的ID</p>
                     * 
                     */
                    std::string GetDefaultCodeRepoId() const;

                    /**
                     * 设置<p>默认GIT存储库的ID</p>
                     * @param _defaultCodeRepoId <p>默认GIT存储库的ID</p>
                     * 
                     */
                    void SetDefaultCodeRepoId(const std::string& _defaultCodeRepoId);

                    /**
                     * 判断参数 DefaultCodeRepoId 是否已赋值
                     * @return DefaultCodeRepoId 是否已赋值
                     * 
                     */
                    bool DefaultCodeRepoIdHasBeenSet() const;

                    /**
                     * 获取<p>其他GIT存储库的ID，最多3个</p>
                     * @return AdditionalCodeRepoIds <p>其他GIT存储库的ID，最多3个</p>
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepoIds() const;

                    /**
                     * 设置<p>其他GIT存储库的ID，最多3个</p>
                     * @param _additionalCodeRepoIds <p>其他GIT存储库的ID，最多3个</p>
                     * 
                     */
                    void SetAdditionalCodeRepoIds(const std::vector<std::string>& _additionalCodeRepoIds);

                    /**
                     * 判断参数 AdditionalCodeRepoIds 是否已赋值
                     * @return AdditionalCodeRepoIds 是否已赋值
                     * 
                     */
                    bool AdditionalCodeRepoIdsHasBeenSet() const;

                    /**
                     * 获取<p>自动停止时间，单位小时</p>
                     * @return AutomaticStopTime <p>自动停止时间，单位小时</p>
                     * 
                     */
                    uint64_t GetAutomaticStopTime() const;

                    /**
                     * 设置<p>自动停止时间，单位小时</p>
                     * @param _automaticStopTime <p>自动停止时间，单位小时</p>
                     * 
                     */
                    void SetAutomaticStopTime(const uint64_t& _automaticStopTime);

                    /**
                     * 判断参数 AutomaticStopTime 是否已赋值
                     * @return AutomaticStopTime 是否已赋值
                     * 
                     */
                    bool AutomaticStopTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签配置</p>
                     * @return Tags <p>标签配置</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签配置</p>
                     * @param _tags <p>标签配置</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>数据存储挂载配置</p>
                     * @return DataConfigs <p>数据存储挂载配置</p>
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置<p>数据存储挂载配置</p>
                     * @param _dataConfigs <p>数据存储挂载配置</p>
                     * 
                     */
                    void SetDataConfigs(const std::vector<DataConfig>& _dataConfigs);

                    /**
                     * 判断参数 DataConfigs 是否已赋值
                     * @return DataConfigs 是否已赋值
                     * 
                     */
                    bool DataConfigsHasBeenSet() const;

                    /**
                     * 获取<p>镜像信息</p>
                     * @return ImageInfo <p>镜像信息</p>
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置<p>镜像信息</p>
                     * @param _imageInfo <p>镜像信息</p>
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取<p>镜像类型，包括SYSTEM、TCR、CCR</p>
                     * @return ImageType <p>镜像类型，包括SYSTEM、TCR、CCR</p>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置<p>镜像类型，包括SYSTEM、TCR、CCR</p>
                     * @param _imageType <p>镜像类型，包括SYSTEM、TCR、CCR</p>
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取<p>SSH配置信息</p>
                     * @return SSHConfig <p>SSH配置信息</p>
                     * 
                     */
                    SSHConfig GetSSHConfig() const;

                    /**
                     * 设置<p>SSH配置信息</p>
                     * @param _sSHConfig <p>SSH配置信息</p>
                     * 
                     */
                    void SetSSHConfig(const SSHConfig& _sSHConfig);

                    /**
                     * 判断参数 SSHConfig 是否已赋值
                     * @return SSHConfig 是否已赋值
                     * 
                     */
                    bool SSHConfigHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS存储配置</p>
                     * @return VolumeSourceGooseFS <p>GooseFS存储配置</p>
                     * 
                     */
                    GooseFS GetVolumeSourceGooseFS() const;

                    /**
                     * 设置<p>GooseFS存储配置</p>
                     * @param _volumeSourceGooseFS <p>GooseFS存储配置</p>
                     * 
                     */
                    void SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS);

                    /**
                     * 判断参数 VolumeSourceGooseFS 是否已赋值
                     * @return VolumeSourceGooseFS 是否已赋值
                     * 
                     */
                    bool VolumeSourceGooseFSHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>名称。不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>计算资源付费模式 ，可选值为：<br>PREPAID：预付费，即包年包月<br>POSTPAID_BY_HOUR：按小时后付费</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>计算资源配置</p>
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * <p>是否上报日志</p>
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * <p>是否ROOT权限</p>
                     */
                    bool m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * <p>是否自动停止</p>
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * <p>是否访问公网</p>
                     */
                    bool m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * <p>资源组ID(for预付费)</p>
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>Vpc-Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网Id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>存储的类型。取值包含：<br>FREE：预付费的免费存储<br>CLOUD_PREMIUM：高性能云硬盘<br>CLOUD_SSD：SSD云硬盘<br>CFS：CFS存储<br>CFS_TURBO：CFS Turbo存储<br>GooseFSx：GooseFSx存储</p>
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                    /**
                     * <p>云硬盘存储卷大小，单位GB</p>
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * <p>CFS存储的配置</p>
                     */
                    CFSConfig m_volumeSourceCFS;
                    bool m_volumeSourceCFSHasBeenSet;

                    /**
                     * <p>日志配置</p>
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>生命周期脚本的ID</p>
                     */
                    std::string m_lifecycleScriptId;
                    bool m_lifecycleScriptIdHasBeenSet;

                    /**
                     * <p>默认GIT存储库的ID</p>
                     */
                    std::string m_defaultCodeRepoId;
                    bool m_defaultCodeRepoIdHasBeenSet;

                    /**
                     * <p>其他GIT存储库的ID，最多3个</p>
                     */
                    std::vector<std::string> m_additionalCodeRepoIds;
                    bool m_additionalCodeRepoIdsHasBeenSet;

                    /**
                     * <p>自动停止时间，单位小时</p>
                     */
                    uint64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

                    /**
                     * <p>标签配置</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>数据存储挂载配置</p>
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * <p>镜像信息</p>
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * <p>镜像类型，包括SYSTEM、TCR、CCR</p>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * <p>SSH配置信息</p>
                     */
                    SSHConfig m_sSHConfig;
                    bool m_sSHConfigHasBeenSet;

                    /**
                     * <p>GooseFS存储配置</p>
                     */
                    GooseFS m_volumeSourceGooseFS;
                    bool m_volumeSourceGooseFSHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKREQUEST_H_
