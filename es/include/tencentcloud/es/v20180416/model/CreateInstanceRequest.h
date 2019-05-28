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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return NodeNum 节点数量
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置节点数量
                     * @param NodeNum 节点数量
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取实例版本,支持"5.6.4"、"6.4.3"
                     * @return EsVersion 实例版本,支持"5.6.4"、"6.4.3"
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置实例版本,支持"5.6.4"、"6.4.3"
                     * @param EsVersion 实例版本,支持"5.6.4"、"6.4.3"
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取节点规格： 
ES.S1.SMALL2: 1核2G
ES.S1.MEDIUM4: 2核4G
ES.S1.MEDIUM8: 2核8G
ES.S1.LARGE16: 4核16G
ES.S1.2XLARGE32: 8核32G
ES.S1.4XLARGE64: 16核64G
                     * @return NodeType 节点规格： 
ES.S1.SMALL2: 1核2G
ES.S1.MEDIUM4: 2核4G
ES.S1.MEDIUM8: 2核8G
ES.S1.LARGE16: 4核16G
ES.S1.2XLARGE32: 8核32G
ES.S1.4XLARGE64: 16核64G
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格： 
ES.S1.SMALL2: 1核2G
ES.S1.MEDIUM4: 2核4G
ES.S1.MEDIUM8: 2核8G
ES.S1.LARGE16: 4核16G
ES.S1.2XLARGE32: 8核32G
ES.S1.4XLARGE64: 16核64G
                     * @param NodeType 节点规格： 
ES.S1.SMALL2: 1核2G
ES.S1.MEDIUM4: 2核4G
ES.S1.MEDIUM8: 2核8G
ES.S1.LARGE16: 4核16G
ES.S1.2XLARGE32: 8核32G
ES.S1.4XLARGE64: 16核64G
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点存储容量，单位GB
                     * @return DiskSize 节点存储容量，单位GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点存储容量，单位GB
                     * @param DiskSize 节点存储容量，单位GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param VpcId 私有网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param SubnetId 子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取访问密码，密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[()`~!@#$%^&*-+=_|{}:;' <>,.?/]的特殊符号
                     * @return Password 访问密码，密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[()`~!@#$%^&*-+=_|{}:;' <>,.?/]的特殊符号
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置访问密码，密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[()`~!@#$%^&*-+=_|{}:;' <>,.?/]的特殊符号
                     * @param Password 访问密码，密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[()`~!@#$%^&*-+=_|{}:;' <>,.?/]的特殊符号
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取实例名称，1-50 个英文、汉字、数字、连接线-或下划线_
                     * @return InstanceName 实例名称，1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，1-50 个英文、汉字、数字、连接线-或下划线_
                     * @param InstanceName 实例名称，1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取计费类型: 
PREPAID：预付费，即包年包月 
POSTPAID_BY_HOUR：按小时后付费，默认值
                     * @return ChargeType 计费类型: 
PREPAID：预付费，即包年包月 
POSTPAID_BY_HOUR：按小时后付费，默认值
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型: 
PREPAID：预付费，即包年包月 
POSTPAID_BY_HOUR：按小时后付费，默认值
                     * @param ChargeType 计费类型: 
PREPAID：预付费，即包年包月 
POSTPAID_BY_HOUR：按小时后付费，默认值
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长，单位由TimeUint决定，默认为月
                     * @return ChargePeriod 包年包月购买时长，单位由TimeUint决定，默认为月
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置包年包月购买时长，单位由TimeUint决定，默认为月
                     * @param ChargePeriod 包年包月购买时长，单位由TimeUint决定，默认为月
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标识，取值范围： 
RENEW_FLAG_AUTO：自动续费
RENEW_FLAG_MANUAL：不自动续费，用户手动续费
如不传递该参数，普通用于默认不自动续费，SVIP用户自动续费
                     * @return RenewFlag 自动续费标识，取值范围： 
RENEW_FLAG_AUTO：自动续费
RENEW_FLAG_MANUAL：不自动续费，用户手动续费
如不传递该参数，普通用于默认不自动续费，SVIP用户自动续费
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识，取值范围： 
RENEW_FLAG_AUTO：自动续费
RENEW_FLAG_MANUAL：不自动续费，用户手动续费
如不传递该参数，普通用于默认不自动续费，SVIP用户自动续费
                     * @param RenewFlag 自动续费标识，取值范围： 
RENEW_FLAG_AUTO：自动续费
RENEW_FLAG_MANUAL：不自动续费，用户手动续费
如不传递该参数，普通用于默认不自动续费，SVIP用户自动续费
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取节点存储类型,取值范围:    
CLOUD_PREMIUM: 高硬能云硬盘  
CLOUD_SSD: SSD云硬盘
                     * @return DiskType 节点存储类型,取值范围:    
CLOUD_PREMIUM: 高硬能云硬盘  
CLOUD_SSD: SSD云硬盘
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置节点存储类型,取值范围:    
CLOUD_PREMIUM: 高硬能云硬盘  
CLOUD_SSD: SSD云硬盘
                     * @param DiskType 节点存储类型,取值范围:    
CLOUD_PREMIUM: 高硬能云硬盘  
CLOUD_SSD: SSD云硬盘
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取计费时长单位，当前只支持“m”，表示月
                     * @return TimeUnit 计费时长单位，当前只支持“m”，表示月
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置计费时长单位，当前只支持“m”，表示月
                     * @param TimeUnit 计费时长单位，当前只支持“m”，表示月
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券，1是，0否，默认不使用
                     * @return AutoVoucher 是否自动使用代金券，1是，0否，默认不使用
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券，1是，0否，默认不使用
                     * @param AutoVoucher 是否自动使用代金券，1是，0否，默认不使用
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券
                     * @param VoucherIds 代金券ID列表，目前仅支持指定一张代金券
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取是否创建专用主节点
                     * @return EnableDedicatedMaster 是否创建专用主节点
                     */
                    bool GetEnableDedicatedMaster() const;

                    /**
                     * 设置是否创建专用主节点
                     * @param EnableDedicatedMaster 是否创建专用主节点
                     */
                    void SetEnableDedicatedMaster(const bool& _enableDedicatedMaster);

                    /**
                     * 判断参数 EnableDedicatedMaster 是否已赋值
                     * @return EnableDedicatedMaster 是否已赋值
                     */
                    bool EnableDedicatedMasterHasBeenSet() const;

                    /**
                     * 获取专用主节点个数
                     * @return MasterNodeNum 专用主节点个数
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置专用主节点个数
                     * @param MasterNodeNum 专用主节点个数
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取专用主节点类型，与NodeType支持的规格相同
                     * @return MasterNodeType 专用主节点类型，与NodeType支持的规格相同
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置专用主节点类型，与NodeType支持的规格相同
                     * @param MasterNodeType 专用主节点类型，与NodeType支持的规格相同
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取专用主节点磁盘大小，单位GB（系统默认配置50GB，暂不支持自定义）
                     * @return MasterNodeDiskSize 专用主节点磁盘大小，单位GB（系统默认配置50GB，暂不支持自定义）
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置专用主节点磁盘大小，单位GB（系统默认配置50GB，暂不支持自定义）
                     * @param MasterNodeDiskSize 专用主节点磁盘大小，单位GB（系统默认配置50GB，暂不支持自定义）
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）
                     * @return ClusterNameInConf 配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）
                     */
                    std::string GetClusterNameInConf() const;

                    /**
                     * 设置配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）
                     * @param ClusterNameInConf 配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）
                     */
                    void SetClusterNameInConf(const std::string& _clusterNameInConf);

                    /**
                     * 判断参数 ClusterNameInConf 是否已赋值
                     * @return ClusterNameInConf 是否已赋值
                     */
                    bool ClusterNameInConfHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 实例版本,支持"5.6.4"、"6.4.3"
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * 节点规格： 
ES.S1.SMALL2: 1核2G
ES.S1.MEDIUM4: 2核4G
ES.S1.MEDIUM8: 2核8G
ES.S1.LARGE16: 4核16G
ES.S1.2XLARGE32: 8核32G
ES.S1.4XLARGE64: 16核64G
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点存储容量，单位GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 访问密码，密码需8到16位，至少包括两项（[a-z,A-Z],[0-9]和[()`~!@#$%^&*-+=_|{}:;' <>,.?/]的特殊符号
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 实例名称，1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 计费类型: 
PREPAID：预付费，即包年包月 
POSTPAID_BY_HOUR：按小时后付费，默认值
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 包年包月购买时长，单位由TimeUint决定，默认为月
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * 自动续费标识，取值范围： 
RENEW_FLAG_AUTO：自动续费
RENEW_FLAG_MANUAL：不自动续费，用户手动续费
如不传递该参数，普通用于默认不自动续费，SVIP用户自动续费
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 节点存储类型,取值范围:    
CLOUD_PREMIUM: 高硬能云硬盘  
CLOUD_SSD: SSD云硬盘
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 计费时长单位，当前只支持“m”，表示月
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 是否自动使用代金券，1是，0否，默认不使用
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 是否创建专用主节点
                     */
                    bool m_enableDedicatedMaster;
                    bool m_enableDedicatedMasterHasBeenSet;

                    /**
                     * 专用主节点个数
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * 专用主节点类型，与NodeType支持的规格相同
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * 专用主节点磁盘大小，单位GB（系统默认配置50GB，暂不支持自定义）
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * 配置文件中的ClusterName（系统默认配置为实例ID，暂不支持自定义）
                     */
                    std::string m_clusterNameInConf;
                    bool m_clusterNameInConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATEINSTANCEREQUEST_H_
