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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDINSTANCEREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdAdvancedSettings.h>
#include <tencentcloud/cetcd/v20220325/model/ChargePrepaidConfig.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * CreateEtcdInstance请求参数结构体
                */
                class CreateEtcdInstanceRequest : public AbstractModel
                {
                public:
                    CreateEtcdInstanceRequest();
                    ~CreateEtcdInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例名称
                     * @return Name etcd实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置etcd实例名称
                     * @param _name etcd实例名称
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
                     * 获取etcd所属vpc
                     * @return VpcId etcd所属vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置etcd所属vpc
                     * @param _vpcId etcd所属vpc
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
                     * 获取etcd对外提供访问ip地址所在子网
                     * @return ServiceSubnetId etcd对外提供访问ip地址所在子网
                     * 
                     */
                    std::string GetServiceSubnetId() const;

                    /**
                     * 设置etcd对外提供访问ip地址所在子网
                     * @param _serviceSubnetId etcd对外提供访问ip地址所在子网
                     * 
                     */
                    void SetServiceSubnetId(const std::string& _serviceSubnetId);

                    /**
                     * 判断参数 ServiceSubnetId 是否已赋值
                     * @return ServiceSubnetId 是否已赋值
                     * 
                     */
                    bool ServiceSubnetIdHasBeenSet() const;

                    /**
                     * 获取etcd部署子网
                     * @return SubnetIds etcd部署子网
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置etcd部署子网
                     * @param _subnetIds etcd部署子网
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取etcd版本
                     * @return EtcdVersion etcd版本
                     * 
                     */
                    std::string GetEtcdVersion() const;

                    /**
                     * 设置etcd版本
                     * @param _etcdVersion etcd版本
                     * 
                     */
                    void SetEtcdVersion(const std::string& _etcdVersion);

                    /**
                     * 判断参数 EtcdVersion 是否已赋值
                     * @return EtcdVersion 是否已赋值
                     * 
                     */
                    bool EtcdVersionHasBeenSet() const;

                    /**
                     * 获取etcd节点个数，可选范围: 1, 3, 5, 7, 9
                     * @return Size etcd节点个数，可选范围: 1, 3, 5, 7, 9
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置etcd节点个数，可选范围: 1, 3, 5, 7, 9
                     * @param _size etcd节点个数，可选范围: 1, 3, 5, 7, 9
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取etcd集群描述信息
                     * @return Description etcd集群描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置etcd集群描述信息
                     * @param _description etcd集群描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取高级设置
                     * @return AdvancedSettings 高级设置
                     * 
                     */
                    EtcdAdvancedSettings GetAdvancedSettings() const;

                    /**
                     * 设置高级设置
                     * @param _advancedSettings 高级设置
                     * 
                     */
                    void SetAdvancedSettings(const EtcdAdvancedSettings& _advancedSettings);

                    /**
                     * 判断参数 AdvancedSettings 是否已赋值
                     * @return AdvancedSettings 是否已赋值
                     * 
                     */
                    bool AdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取付费类型：
PREPAID 预付费
POSTPAID_BY_HOUR 后付费按小时付费
                     * @return ChargeType 付费类型：
PREPAID 预付费
POSTPAID_BY_HOUR 后付费按小时付费
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费类型：
PREPAID 预付费
POSTPAID_BY_HOUR 后付费按小时付费
                     * @param _chargeType 付费类型：
PREPAID 预付费
POSTPAID_BY_HOUR 后付费按小时付费
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
                     * 获取预付费相关配置
                     * @return ChargePrepaid 预付费相关配置
                     * 
                     */
                    ChargePrepaidConfig GetChargePrepaid() const;

                    /**
                     * 设置预付费相关配置
                     * @param _chargePrepaid 预付费相关配置
                     * 
                     */
                    void SetChargePrepaid(const ChargePrepaidConfig& _chargePrepaid);

                    /**
                     * 判断参数 ChargePrepaid 是否已赋值
                     * @return ChargePrepaid 是否已赋值
                     * 
                     */
                    bool ChargePrepaidHasBeenSet() const;

                    /**
                     * 获取存储大小GB
                     * @return DiskSize 存储大小GB
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置存储大小GB
                     * @param _diskSize 存储大小GB
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取删除保护，true 删除保护开启；false删除保护关闭
                     * @return DeletionProtection 删除保护，true 删除保护开启；false删除保护关闭
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护，true 删除保护开启；false删除保护关闭
                     * @param _deletionProtection 删除保护，true 删除保护开启；false删除保护关闭
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * etcd实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * etcd所属vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * etcd对外提供访问ip地址所在子网
                     */
                    std::string m_serviceSubnetId;
                    bool m_serviceSubnetIdHasBeenSet;

                    /**
                     * etcd部署子网
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * etcd版本
                     */
                    std::string m_etcdVersion;
                    bool m_etcdVersionHasBeenSet;

                    /**
                     * etcd节点个数，可选范围: 1, 3, 5, 7, 9
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * etcd集群描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 高级设置
                     */
                    EtcdAdvancedSettings m_advancedSettings;
                    bool m_advancedSettingsHasBeenSet;

                    /**
                     * 付费类型：
PREPAID 预付费
POSTPAID_BY_HOUR 后付费按小时付费
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 预付费相关配置
                     */
                    ChargePrepaidConfig m_chargePrepaid;
                    bool m_chargePrepaidHasBeenSet;

                    /**
                     * 存储大小GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 删除保护，true 删除保护开启；false删除保护关闭
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_CREATEETCDINSTANCEREQUEST_H_
