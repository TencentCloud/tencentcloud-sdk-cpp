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
                     * 获取名称。不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return Name 名称。不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称。不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param _name 名称。不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
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
                     * 获取计算资源付费模式 ，可选值为：
PREPAID：预付费，即包年包月
POSTPAID_BY_HOUR：按小时后付费
                     * @return ChargeType 计算资源付费模式 ，可选值为：
PREPAID：预付费，即包年包月
POSTPAID_BY_HOUR：按小时后付费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计算资源付费模式 ，可选值为：
PREPAID：预付费，即包年包月
POSTPAID_BY_HOUR：按小时后付费
                     * @param _chargeType 计算资源付费模式 ，可选值为：
PREPAID：预付费，即包年包月
POSTPAID_BY_HOUR：按小时后付费
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
                     * 获取计算资源配置
                     * @return ResourceConf 计算资源配置
                     * 
                     */
                    ResourceConf GetResourceConf() const;

                    /**
                     * 设置计算资源配置
                     * @param _resourceConf 计算资源配置
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
                     * 获取是否上报日志
                     * @return LogEnable 是否上报日志
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否上报日志
                     * @param _logEnable 是否上报日志
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
                     * 获取是否ROOT权限
                     * @return RootAccess 是否ROOT权限
                     * 
                     */
                    bool GetRootAccess() const;

                    /**
                     * 设置是否ROOT权限
                     * @param _rootAccess 是否ROOT权限
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
                     * 获取是否自动停止
                     * @return AutoStopping 是否自动停止
                     * 
                     */
                    bool GetAutoStopping() const;

                    /**
                     * 设置是否自动停止
                     * @param _autoStopping 是否自动停止
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
                     * 获取是否访问公网
                     * @return DirectInternetAccess 是否访问公网
                     * 
                     */
                    bool GetDirectInternetAccess() const;

                    /**
                     * 设置是否访问公网
                     * @param _directInternetAccess 是否访问公网
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
                     * 获取资源组ID(for预付费)
                     * @return ResourceGroupId 资源组ID(for预付费)
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组ID(for预付费)
                     * @param _resourceGroupId 资源组ID(for预付费)
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
                     * 获取Vpc-Id
                     * @return VpcId Vpc-Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc-Id
                     * @param _vpcId Vpc-Id
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
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
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
                     * 获取存储的类型。取值包含： 
FREE：预付费的免费存储
CLOUD_PREMIUM：高性能云硬盘
CLOUD_SSD：SSD云硬盘
CFS：CFS存储
CFS_TURBO：CFS Turbo存储
GooseFSx：GooseFSx存储
                     * @return VolumeSourceType 存储的类型。取值包含： 
FREE：预付费的免费存储
CLOUD_PREMIUM：高性能云硬盘
CLOUD_SSD：SSD云硬盘
CFS：CFS存储
CFS_TURBO：CFS Turbo存储
GooseFSx：GooseFSx存储
                     * 
                     */
                    std::string GetVolumeSourceType() const;

                    /**
                     * 设置存储的类型。取值包含： 
FREE：预付费的免费存储
CLOUD_PREMIUM：高性能云硬盘
CLOUD_SSD：SSD云硬盘
CFS：CFS存储
CFS_TURBO：CFS Turbo存储
GooseFSx：GooseFSx存储
                     * @param _volumeSourceType 存储的类型。取值包含： 
FREE：预付费的免费存储
CLOUD_PREMIUM：高性能云硬盘
CLOUD_SSD：SSD云硬盘
CFS：CFS存储
CFS_TURBO：CFS Turbo存储
GooseFSx：GooseFSx存储
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
                     * 获取云硬盘存储卷大小，单位GB
                     * @return VolumeSizeInGB 云硬盘存储卷大小，单位GB
                     * 
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置云硬盘存储卷大小，单位GB
                     * @param _volumeSizeInGB 云硬盘存储卷大小，单位GB
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
                     * 获取CFS存储的配置
                     * @return VolumeSourceCFS CFS存储的配置
                     * 
                     */
                    CFSConfig GetVolumeSourceCFS() const;

                    /**
                     * 设置CFS存储的配置
                     * @param _volumeSourceCFS CFS存储的配置
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
                     * 获取日志配置
                     * @return LogConfig 日志配置
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置
                     * @param _logConfig 日志配置
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
                     * 获取生命周期脚本的ID
                     * @return LifecycleScriptId 生命周期脚本的ID
                     * 
                     */
                    std::string GetLifecycleScriptId() const;

                    /**
                     * 设置生命周期脚本的ID
                     * @param _lifecycleScriptId 生命周期脚本的ID
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
                     * 获取默认GIT存储库的ID
                     * @return DefaultCodeRepoId 默认GIT存储库的ID
                     * 
                     */
                    std::string GetDefaultCodeRepoId() const;

                    /**
                     * 设置默认GIT存储库的ID
                     * @param _defaultCodeRepoId 默认GIT存储库的ID
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
                     * 获取其他GIT存储库的ID，最多3个
                     * @return AdditionalCodeRepoIds 其他GIT存储库的ID，最多3个
                     * 
                     */
                    std::vector<std::string> GetAdditionalCodeRepoIds() const;

                    /**
                     * 设置其他GIT存储库的ID，最多3个
                     * @param _additionalCodeRepoIds 其他GIT存储库的ID，最多3个
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
                     * 获取自动停止时间，单位小时
                     * @return AutomaticStopTime 自动停止时间，单位小时
                     * 
                     */
                    uint64_t GetAutomaticStopTime() const;

                    /**
                     * 设置自动停止时间，单位小时
                     * @param _automaticStopTime 自动停止时间，单位小时
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
                     * 获取标签配置
                     * @return Tags 标签配置
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签配置
                     * @param _tags 标签配置
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
                     * 获取数据配置，只支持WEDATA_HDFS存储类型
                     * @return DataConfigs 数据配置，只支持WEDATA_HDFS存储类型
                     * 
                     */
                    std::vector<DataConfig> GetDataConfigs() const;

                    /**
                     * 设置数据配置，只支持WEDATA_HDFS存储类型
                     * @param _dataConfigs 数据配置，只支持WEDATA_HDFS存储类型
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
                     * 获取镜像信息
                     * @return ImageInfo 镜像信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
                     * @param _imageInfo 镜像信息
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
                     * 获取镜像类型，包括SYSTEM、TCR、CCR
                     * @return ImageType 镜像类型，包括SYSTEM、TCR、CCR
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型，包括SYSTEM、TCR、CCR
                     * @param _imageType 镜像类型，包括SYSTEM、TCR、CCR
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
                     * 获取SSH配置信息
                     * @return SSHConfig SSH配置信息
                     * 
                     */
                    SSHConfig GetSSHConfig() const;

                    /**
                     * 设置SSH配置信息
                     * @param _sSHConfig SSH配置信息
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
                     * 获取GooseFS存储配置
                     * @return VolumeSourceGooseFS GooseFS存储配置
                     * 
                     */
                    GooseFS GetVolumeSourceGooseFS() const;

                    /**
                     * 设置GooseFS存储配置
                     * @param _volumeSourceGooseFS GooseFS存储配置
                     * 
                     */
                    void SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS);

                    /**
                     * 判断参数 VolumeSourceGooseFS 是否已赋值
                     * @return VolumeSourceGooseFS 是否已赋值
                     * 
                     */
                    bool VolumeSourceGooseFSHasBeenSet() const;

                private:

                    /**
                     * 名称。不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计算资源付费模式 ，可选值为：
PREPAID：预付费，即包年包月
POSTPAID_BY_HOUR：按小时后付费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 计算资源配置
                     */
                    ResourceConf m_resourceConf;
                    bool m_resourceConfHasBeenSet;

                    /**
                     * 是否上报日志
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 是否ROOT权限
                     */
                    bool m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 是否自动停止
                     */
                    bool m_autoStopping;
                    bool m_autoStoppingHasBeenSet;

                    /**
                     * 是否访问公网
                     */
                    bool m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * 资源组ID(for预付费)
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Vpc-Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 存储的类型。取值包含： 
FREE：预付费的免费存储
CLOUD_PREMIUM：高性能云硬盘
CLOUD_SSD：SSD云硬盘
CFS：CFS存储
CFS_TURBO：CFS Turbo存储
GooseFSx：GooseFSx存储
                     */
                    std::string m_volumeSourceType;
                    bool m_volumeSourceTypeHasBeenSet;

                    /**
                     * 云硬盘存储卷大小，单位GB
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * CFS存储的配置
                     */
                    CFSConfig m_volumeSourceCFS;
                    bool m_volumeSourceCFSHasBeenSet;

                    /**
                     * 日志配置
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * 生命周期脚本的ID
                     */
                    std::string m_lifecycleScriptId;
                    bool m_lifecycleScriptIdHasBeenSet;

                    /**
                     * 默认GIT存储库的ID
                     */
                    std::string m_defaultCodeRepoId;
                    bool m_defaultCodeRepoIdHasBeenSet;

                    /**
                     * 其他GIT存储库的ID，最多3个
                     */
                    std::vector<std::string> m_additionalCodeRepoIds;
                    bool m_additionalCodeRepoIdsHasBeenSet;

                    /**
                     * 自动停止时间，单位小时
                     */
                    uint64_t m_automaticStopTime;
                    bool m_automaticStopTimeHasBeenSet;

                    /**
                     * 标签配置
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 数据配置，只支持WEDATA_HDFS存储类型
                     */
                    std::vector<DataConfig> m_dataConfigs;
                    bool m_dataConfigsHasBeenSet;

                    /**
                     * 镜像信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 镜像类型，包括SYSTEM、TCR、CCR
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * SSH配置信息
                     */
                    SSHConfig m_sSHConfig;
                    bool m_sSHConfigHasBeenSet;

                    /**
                     * GooseFS存储配置
                     */
                    GooseFS m_volumeSourceGooseFS;
                    bool m_volumeSourceGooseFSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATENOTEBOOKREQUEST_H_
