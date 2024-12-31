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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstance.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 只读组对象
                */
                class ReadOnlyGroup : public AbstractModel
                {
                public:
                    ReadOnlyGroup();
                    ~ReadOnlyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读组ID
                     * @return ReadOnlyGroupId 只读组ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组ID
                     * @param _readOnlyGroupId 只读组ID
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名称
                     * @return ReadOnlyGroupName 只读组名称
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置只读组名称
                     * @param _readOnlyGroupName 只读组名称
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取只读组的地域ID，与主实例相同
                     * @return RegionId 只读组的地域ID，与主实例相同
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置只读组的地域ID，与主实例相同
                     * @param _regionId 只读组的地域ID，与主实例相同
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取只读组的可用区ID，与主实例相同
                     * @return ZoneId 只读组的可用区ID，与主实例相同
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置只读组的可用区ID，与主实例相同
                     * @param _zoneId 只读组的可用区ID，与主实例相同
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取是否启动超时剔除功能，0-不开启剔除功能，1-开启剔除功能
                     * @return IsOfflineDelay 是否启动超时剔除功能，0-不开启剔除功能，1-开启剔除功能
                     * 
                     */
                    int64_t GetIsOfflineDelay() const;

                    /**
                     * 设置是否启动超时剔除功能，0-不开启剔除功能，1-开启剔除功能
                     * @param _isOfflineDelay 是否启动超时剔除功能，0-不开启剔除功能，1-开启剔除功能
                     * 
                     */
                    void SetIsOfflineDelay(const int64_t& _isOfflineDelay);

                    /**
                     * 判断参数 IsOfflineDelay 是否已赋值
                     * @return IsOfflineDelay 是否已赋值
                     * 
                     */
                    bool IsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，使用的超时阈值
                     * @return ReadOnlyMaxDelayTime 启动超时剔除功能后，使用的超时阈值
                     * 
                     */
                    int64_t GetReadOnlyMaxDelayTime() const;

                    /**
                     * 设置启动超时剔除功能后，使用的超时阈值
                     * @param _readOnlyMaxDelayTime 启动超时剔除功能后，使用的超时阈值
                     * 
                     */
                    void SetReadOnlyMaxDelayTime(const int64_t& _readOnlyMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyMaxDelayTime 是否已赋值
                     * @return ReadOnlyMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取启动超时剔除功能后，只读组至少保留的只读副本数
                     * @return MinReadOnlyInGroup 启动超时剔除功能后，只读组至少保留的只读副本数
                     * 
                     */
                    int64_t GetMinReadOnlyInGroup() const;

                    /**
                     * 设置启动超时剔除功能后，只读组至少保留的只读副本数
                     * @param _minReadOnlyInGroup 启动超时剔除功能后，只读组至少保留的只读副本数
                     * 
                     */
                    void SetMinReadOnlyInGroup(const int64_t& _minReadOnlyInGroup);

                    /**
                     * 判断参数 MinReadOnlyInGroup 是否已赋值
                     * @return MinReadOnlyInGroup 是否已赋值
                     * 
                     */
                    bool MinReadOnlyInGroupHasBeenSet() const;

                    /**
                     * 获取只读组vip
                     * @return Vip 只读组vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置只读组vip
                     * @param _vip 只读组vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取只读组vport
                     * @return Vport 只读组vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置只读组vport
                     * @param _vport 只读组vport
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取只读组私有网络ID
                     * @return VpcId 只读组私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置只读组私有网络ID
                     * @param _vpcId 只读组私有网络ID
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
                     * 获取只读组私有网络子网ID
                     * @return SubnetId 只读组私有网络子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置只读组私有网络子网ID
                     * @param _subnetId 只读组私有网络子网ID
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
                     * 获取只读组状态: 1-申请成功运行中，5-申请中
                     * @return Status 只读组状态: 1-申请成功运行中，5-申请中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置只读组状态: 1-申请成功运行中，5-申请中
                     * @param _status 只读组状态: 1-申请成功运行中，5-申请中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取主实例ID，形如mssql-sgeshe3th
                     * @return MasterInstanceId 主实例ID，形如mssql-sgeshe3th
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置主实例ID，形如mssql-sgeshe3th
                     * @param _masterInstanceId 主实例ID，形如mssql-sgeshe3th
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取只读实例副本集合
                     * @return ReadOnlyInstanceSet 只读实例副本集合
                     * 
                     */
                    std::vector<ReadOnlyInstance> GetReadOnlyInstanceSet() const;

                    /**
                     * 设置只读实例副本集合
                     * @param _readOnlyInstanceSet 只读实例副本集合
                     * 
                     */
                    void SetReadOnlyInstanceSet(const std::vector<ReadOnlyInstance>& _readOnlyInstanceSet);

                    /**
                     * 判断参数 ReadOnlyInstanceSet 是否已赋值
                     * @return ReadOnlyInstanceSet 是否已赋值
                     * 
                     */
                    bool ReadOnlyInstanceSetHasBeenSet() const;

                    /**
                     * 获取RO组外网地址域名
                     * @return DnsPodDomain RO组外网地址域名
                     * 
                     */
                    std::string GetDnsPodDomain() const;

                    /**
                     * 设置RO组外网地址域名
                     * @param _dnsPodDomain RO组外网地址域名
                     * 
                     */
                    void SetDnsPodDomain(const std::string& _dnsPodDomain);

                    /**
                     * 判断参数 DnsPodDomain 是否已赋值
                     * @return DnsPodDomain 是否已赋值
                     * 
                     */
                    bool DnsPodDomainHasBeenSet() const;

                    /**
                     * 获取RO组外网地址端口
                     * @return TgwWanVPort RO组外网地址端口
                     * 
                     */
                    uint64_t GetTgwWanVPort() const;

                    /**
                     * 设置RO组外网地址端口
                     * @param _tgwWanVPort RO组外网地址端口
                     * 
                     */
                    void SetTgwWanVPort(const uint64_t& _tgwWanVPort);

                    /**
                     * 判断参数 TgwWanVPort 是否已赋值
                     * @return TgwWanVPort 是否已赋值
                     * 
                     */
                    bool TgwWanVPortHasBeenSet() const;

                    /**
                     * 获取RO只读组类型，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货的所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * @return ReadOnlyGroupType RO只读组类型，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货的所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * 
                     */
                    int64_t GetReadOnlyGroupType() const;

                    /**
                     * 设置RO只读组类型，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货的所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * @param _readOnlyGroupType RO只读组类型，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货的所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     * 
                     */
                    void SetReadOnlyGroupType(const int64_t& _readOnlyGroupType);

                    /**
                     * 判断参数 ReadOnlyGroupType 是否已赋值
                     * @return ReadOnlyGroupType 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupTypeHasBeenSet() const;

                    /**
                     * 获取部署RO副本模式，0-默认不升级主实例，1-强制升级主实例完成RO部署
                     * @return ReadOnlyGroupForcedUpgrade 部署RO副本模式，0-默认不升级主实例，1-强制升级主实例完成RO部署
                     * 
                     */
                    int64_t GetReadOnlyGroupForcedUpgrade() const;

                    /**
                     * 设置部署RO副本模式，0-默认不升级主实例，1-强制升级主实例完成RO部署
                     * @param _readOnlyGroupForcedUpgrade 部署RO副本模式，0-默认不升级主实例，1-强制升级主实例完成RO部署
                     * 
                     */
                    void SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade);

                    /**
                     * 判断参数 ReadOnlyGroupForcedUpgrade 是否已赋值
                     * @return ReadOnlyGroupForcedUpgrade 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupForcedUpgradeHasBeenSet() const;

                private:

                    /**
                     * 只读组ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 只读组名称
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 只读组的地域ID，与主实例相同
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 只读组的可用区ID，与主实例相同
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 是否启动超时剔除功能，0-不开启剔除功能，1-开启剔除功能
                     */
                    int64_t m_isOfflineDelay;
                    bool m_isOfflineDelayHasBeenSet;

                    /**
                     * 启动超时剔除功能后，使用的超时阈值
                     */
                    int64_t m_readOnlyMaxDelayTime;
                    bool m_readOnlyMaxDelayTimeHasBeenSet;

                    /**
                     * 启动超时剔除功能后，只读组至少保留的只读副本数
                     */
                    int64_t m_minReadOnlyInGroup;
                    bool m_minReadOnlyInGroupHasBeenSet;

                    /**
                     * 只读组vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 只读组vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 只读组私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 只读组私有网络子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 只读组状态: 1-申请成功运行中，5-申请中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主实例ID，形如mssql-sgeshe3th
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * 只读实例副本集合
                     */
                    std::vector<ReadOnlyInstance> m_readOnlyInstanceSet;
                    bool m_readOnlyInstanceSetHasBeenSet;

                    /**
                     * RO组外网地址域名
                     */
                    std::string m_dnsPodDomain;
                    bool m_dnsPodDomainHasBeenSet;

                    /**
                     * RO组外网地址端口
                     */
                    uint64_t m_tgwWanVPort;
                    bool m_tgwWanVPortHasBeenSet;

                    /**
                     * RO只读组类型，1-按照一个实例一个只读组的方式发货，2-新建只读组后发货的所有实例都在这个只读组下面， 3-发货的所有实例都在已有的只读组下面
                     */
                    int64_t m_readOnlyGroupType;
                    bool m_readOnlyGroupTypeHasBeenSet;

                    /**
                     * 部署RO副本模式，0-默认不升级主实例，1-强制升级主实例完成RO部署
                     */
                    int64_t m_readOnlyGroupForcedUpgrade;
                    bool m_readOnlyGroupForcedUpgradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYGROUP_H_
