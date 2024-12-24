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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/SystemDisk.h>
#include <tencentcloud/batch/v20170312/model/DataDisk.h>
#include <tencentcloud/batch/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/batch/v20170312/model/InternetAccessible.h>
#include <tencentcloud/batch/v20170312/model/LoginSettings.h>
#include <tencentcloud/batch/v20170312/model/EnhancedService.h>
#include <tencentcloud/batch/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/batch/v20170312/model/InstanceTypeOptions.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算环境数据
                */
                class EnvData : public AbstractModel
                {
                public:
                    EnvData();
                    ~EnvData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM实例类型，不能与InstanceTypes和InstanceTypeOptions同时出现。
                     * @return InstanceType CVM实例类型，不能与InstanceTypes和InstanceTypeOptions同时出现。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置CVM实例类型，不能与InstanceTypes和InstanceTypeOptions同时出现。
                     * @param _instanceType CVM实例类型，不能与InstanceTypes和InstanceTypeOptions同时出现。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取CVM镜像ID
                     * @return ImageId CVM镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM镜像ID
                     * @param _imageId CVM镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取实例系统盘配置信息
                     * @return SystemDisk 实例系统盘配置信息
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置实例系统盘配置信息
                     * @param _systemDisk 实例系统盘配置信息
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取实例数据盘配置信息
                     * @return DataDisks 实例数据盘配置信息
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置实例数据盘配置信息
                     * @param _dataDisks 实例数据盘配置信息
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息配置，与Zones和VirtualPrivateClouds不能同时指定。
                     * @return VirtualPrivateCloud 私有网络相关信息配置，与Zones和VirtualPrivateClouds不能同时指定。
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息配置，与Zones和VirtualPrivateClouds不能同时指定。
                     * @param _virtualPrivateCloud 私有网络相关信息配置，与Zones和VirtualPrivateClouds不能同时指定。
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置
                     * @return InternetAccessible 公网带宽相关信息设置
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置
                     * @param _internetAccessible 公网带宽相关信息设置
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取CVM实例显示名称
                     * @return InstanceName CVM实例显示名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CVM实例显示名称
                     * @param _instanceName CVM实例显示名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例登录设置
                     * @return LoginSettings 实例登录设置
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置实例登录设置
                     * @param _loginSettings 实例登录设置
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取实例所属安全组
                     * @return SecurityGroupIds 实例所属安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置实例所属安全组
                     * @param _securityGroupIds 实例所属安全组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * @return EnhancedService 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * @param _enhancedService 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取CVM实例计费类型<br><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><br>默认值：POSTPAID_BY_HOUR。
                     * @return InstanceChargeType CVM实例计费类型<br><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><br>默认值：POSTPAID_BY_HOUR。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置CVM实例计费类型<br><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><br>默认值：POSTPAID_BY_HOUR。
                     * @param _instanceChargeType CVM实例计费类型<br><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><br>默认值：POSTPAID_BY_HOUR。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例的市场相关选项，如竞价实例相关参数
                     * @return InstanceMarketOptions 实例的市场相关选项，如竞价实例相关参数
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置实例的市场相关选项，如竞价实例相关参数
                     * @param _instanceMarketOptions 实例的市场相关选项，如竞价实例相关参数
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取CVM实例类型列表，不能与InstanceType和InstanceTypeOptions同时出现。指定该字段后，计算节点按照机型先后顺序依次尝试创建，直到实例创建成功，结束遍历过程。最多支持10个机型。
                     * @return InstanceTypes CVM实例类型列表，不能与InstanceType和InstanceTypeOptions同时出现。指定该字段后，计算节点按照机型先后顺序依次尝试创建，直到实例创建成功，结束遍历过程。最多支持10个机型。
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置CVM实例类型列表，不能与InstanceType和InstanceTypeOptions同时出现。指定该字段后，计算节点按照机型先后顺序依次尝试创建，直到实例创建成功，结束遍历过程。最多支持10个机型。
                     * @param _instanceTypes CVM实例类型列表，不能与InstanceType和InstanceTypeOptions同时出现。指定该字段后，计算节点按照机型先后顺序依次尝试创建，直到实例创建成功，结束遍历过程。最多支持10个机型。
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取CVM实例机型配置。不能与InstanceType和InstanceTypes同时出现。
                     * @return InstanceTypeOptions CVM实例机型配置。不能与InstanceType和InstanceTypes同时出现。
                     * 
                     */
                    InstanceTypeOptions GetInstanceTypeOptions() const;

                    /**
                     * 设置CVM实例机型配置。不能与InstanceType和InstanceTypes同时出现。
                     * @param _instanceTypeOptions CVM实例机型配置。不能与InstanceType和InstanceTypes同时出现。
                     * 
                     */
                    void SetInstanceTypeOptions(const InstanceTypeOptions& _instanceTypeOptions);

                    /**
                     * 判断参数 InstanceTypeOptions 是否已赋值
                     * @return InstanceTypeOptions 是否已赋值
                     * 
                     */
                    bool InstanceTypeOptionsHasBeenSet() const;

                    /**
                     * 获取可用区列表，支持跨可用区创建CVM实例。与VirtualPrivateCloud和VirtualPrivateClouds不能同时指定。
                     * @return Zones 可用区列表，支持跨可用区创建CVM实例。与VirtualPrivateCloud和VirtualPrivateClouds不能同时指定。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区列表，支持跨可用区创建CVM实例。与VirtualPrivateCloud和VirtualPrivateClouds不能同时指定。
                     * @param _zones 可用区列表，支持跨可用区创建CVM实例。与VirtualPrivateCloud和VirtualPrivateClouds不能同时指定。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取私有网络列表，支持跨私有网络创建CVM实例。与VirtualPrivateCloud和Zones不能同时指定。
                     * @return VirtualPrivateClouds 私有网络列表，支持跨私有网络创建CVM实例。与VirtualPrivateCloud和Zones不能同时指定。
                     * 
                     */
                    std::vector<VirtualPrivateCloud> GetVirtualPrivateClouds() const;

                    /**
                     * 设置私有网络列表，支持跨私有网络创建CVM实例。与VirtualPrivateCloud和Zones不能同时指定。
                     * @param _virtualPrivateClouds 私有网络列表，支持跨私有网络创建CVM实例。与VirtualPrivateCloud和Zones不能同时指定。
                     * 
                     */
                    void SetVirtualPrivateClouds(const std::vector<VirtualPrivateCloud>& _virtualPrivateClouds);

                    /**
                     * 判断参数 VirtualPrivateClouds 是否已赋值
                     * @return VirtualPrivateClouds 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudsHasBeenSet() const;

                private:

                    /**
                     * CVM实例类型，不能与InstanceTypes和InstanceTypeOptions同时出现。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CVM镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 实例系统盘配置信息
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 实例数据盘配置信息
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 私有网络相关信息配置，与Zones和VirtualPrivateClouds不能同时指定。
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 公网带宽相关信息设置
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * CVM实例显示名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例登录设置
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 实例所属安全组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认开启云监控、云安全服务。
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * CVM实例计费类型<br><li>POSTPAID_BY_HOUR：按小时后付费</li><li>SPOTPAID：竞价付费</li><br>默认值：POSTPAID_BY_HOUR。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例的市场相关选项，如竞价实例相关参数
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * CVM实例类型列表，不能与InstanceType和InstanceTypeOptions同时出现。指定该字段后，计算节点按照机型先后顺序依次尝试创建，直到实例创建成功，结束遍历过程。最多支持10个机型。
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * CVM实例机型配置。不能与InstanceType和InstanceTypes同时出现。
                     */
                    InstanceTypeOptions m_instanceTypeOptions;
                    bool m_instanceTypeOptionsHasBeenSet;

                    /**
                     * 可用区列表，支持跨可用区创建CVM实例。与VirtualPrivateCloud和VirtualPrivateClouds不能同时指定。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 私有网络列表，支持跨私有网络创建CVM实例。与VirtualPrivateCloud和Zones不能同时指定。
                     */
                    std::vector<VirtualPrivateCloud> m_virtualPrivateClouds;
                    bool m_virtualPrivateCloudsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ENVDATA_H_
