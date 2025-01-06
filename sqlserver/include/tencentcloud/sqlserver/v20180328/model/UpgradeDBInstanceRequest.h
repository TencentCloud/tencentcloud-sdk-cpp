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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DrZoneInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * UpgradeDBInstance请求参数结构体
                */
                class UpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceRequest();
                    ~UpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * @return Memory 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * @param _memory 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * @return Storage 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * @param _storage 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * @return AutoVoucher 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * @param _autoVoucher 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID，目前单个订单只能使用一张代金券
                     * @return VoucherIds 代金券ID，目前单个订单只能使用一张代金券
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID，目前单个订单只能使用一张代金券
                     * @param _voucherIds 代金券ID，目前单个订单只能使用一张代金券
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取实例升级后的CPU核心数
                     * @return Cpu 实例升级后的CPU核心数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例升级后的CPU核心数
                     * @param _cpu 实例升级后的CPU核心数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取升级sqlserver的版本，目前支持：2008R2（SQL Server 2008 Enterprise），2012SP3（SQL Server 2012 Enterprise）版本等。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息，版本不支持降级，不填则不修改版本
                     * @return DBVersion 升级sqlserver的版本，目前支持：2008R2（SQL Server 2008 Enterprise），2012SP3（SQL Server 2012 Enterprise）版本等。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息，版本不支持降级，不填则不修改版本
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置升级sqlserver的版本，目前支持：2008R2（SQL Server 2008 Enterprise），2012SP3（SQL Server 2012 Enterprise）版本等。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息，版本不支持降级，不填则不修改版本
                     * @param _dBVersion 升级sqlserver的版本，目前支持：2008R2（SQL Server 2008 Enterprise），2012SP3（SQL Server 2012 Enterprise）版本等。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息，版本不支持降级，不填则不修改版本
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取升级sqlserver的高可用架构,从镜像容灾升级到always on集群容灾，仅支持2017及以上版本且支持always on高可用的实例，不支持降级到镜像方式容灾，CLUSTER-升级为always on容灾，不填则不修改高可用架构
                     * @return HAType 升级sqlserver的高可用架构,从镜像容灾升级到always on集群容灾，仅支持2017及以上版本且支持always on高可用的实例，不支持降级到镜像方式容灾，CLUSTER-升级为always on容灾，不填则不修改高可用架构
                     * 
                     */
                    std::string GetHAType() const;

                    /**
                     * 设置升级sqlserver的高可用架构,从镜像容灾升级到always on集群容灾，仅支持2017及以上版本且支持always on高可用的实例，不支持降级到镜像方式容灾，CLUSTER-升级为always on容灾，不填则不修改高可用架构
                     * @param _hAType 升级sqlserver的高可用架构,从镜像容灾升级到always on集群容灾，仅支持2017及以上版本且支持always on高可用的实例，不支持降级到镜像方式容灾，CLUSTER-升级为always on容灾，不填则不修改高可用架构
                     * 
                     */
                    void SetHAType(const std::string& _hAType);

                    /**
                     * 判断参数 HAType 是否已赋值
                     * @return HAType 是否已赋值
                     * 
                     */
                    bool HATypeHasBeenSet() const;

                    /**
                     * 获取修改实例是否为跨可用区容灾，SameZones-修改为同可用区 MultiZones-修改为跨可用区
                     * @return MultiZones 修改实例是否为跨可用区容灾，SameZones-修改为同可用区 MultiZones-修改为跨可用区
                     * 
                     */
                    std::string GetMultiZones() const;

                    /**
                     * 设置修改实例是否为跨可用区容灾，SameZones-修改为同可用区 MultiZones-修改为跨可用区
                     * @param _multiZones 修改实例是否为跨可用区容灾，SameZones-修改为同可用区 MultiZones-修改为跨可用区
                     * 
                     */
                    void SetMultiZones(const std::string& _multiZones);

                    /**
                     * 判断参数 MultiZones 是否已赋值
                     * @return MultiZones 是否已赋值
                     * 
                     */
                    bool MultiZonesHasBeenSet() const;

                    /**
                     * 获取执行变配的方式，默认为 1。支持值包括：0 - 立刻执行，1 - 维护时间窗执行
                     * @return WaitSwitch 执行变配的方式，默认为 1。支持值包括：0 - 立刻执行，1 - 维护时间窗执行
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置执行变配的方式，默认为 1。支持值包括：0 - 立刻执行，1 - 维护时间窗执行
                     * @param _waitSwitch 执行变配的方式，默认为 1。支持值包括：0 - 立刻执行，1 - 维护时间窗执行
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取多节点架构实例的备节点可用区，默认为空。如果需要在变配的同时修改指定备节点的可用区时必传，当MultiZones = MultiZones时主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。

                     * @return DrZones 多节点架构实例的备节点可用区，默认为空。如果需要在变配的同时修改指定备节点的可用区时必传，当MultiZones = MultiZones时主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。

                     * 
                     */
                    std::vector<DrZoneInfo> GetDrZones() const;

                    /**
                     * 设置多节点架构实例的备节点可用区，默认为空。如果需要在变配的同时修改指定备节点的可用区时必传，当MultiZones = MultiZones时主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。

                     * @param _drZones 多节点架构实例的备节点可用区，默认为空。如果需要在变配的同时修改指定备节点的可用区时必传，当MultiZones = MultiZones时主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。

                     * 
                     */
                    void SetDrZones(const std::vector<DrZoneInfo>& _drZones);

                    /**
                     * 判断参数 DrZones 是否已赋值
                     * @return DrZones 是否已赋值
                     * 
                     */
                    bool DrZonesHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例升级后内存大小，单位GB，其值不能小于当前实例内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例升级后磁盘大小，单位GB，其值不能小于当前实例磁盘大小
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 是否自动使用代金券，0 - 不使用；1 - 默认使用。取值默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID，目前单个订单只能使用一张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 实例升级后的CPU核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 升级sqlserver的版本，目前支持：2008R2（SQL Server 2008 Enterprise），2012SP3（SQL Server 2012 Enterprise）版本等。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息，版本不支持降级，不填则不修改版本
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 升级sqlserver的高可用架构,从镜像容灾升级到always on集群容灾，仅支持2017及以上版本且支持always on高可用的实例，不支持降级到镜像方式容灾，CLUSTER-升级为always on容灾，不填则不修改高可用架构
                     */
                    std::string m_hAType;
                    bool m_hATypeHasBeenSet;

                    /**
                     * 修改实例是否为跨可用区容灾，SameZones-修改为同可用区 MultiZones-修改为跨可用区
                     */
                    std::string m_multiZones;
                    bool m_multiZonesHasBeenSet;

                    /**
                     * 执行变配的方式，默认为 1。支持值包括：0 - 立刻执行，1 - 维护时间窗执行
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * 多节点架构实例的备节点可用区，默认为空。如果需要在变配的同时修改指定备节点的可用区时必传，当MultiZones = MultiZones时主节点和备节点可用区不能全部相同。备机可用区集合最小为2个，最大不超过5个。

                     */
                    std::vector<DrZoneInfo> m_drZones;
                    bool m_drZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_UPGRADEDBINSTANCEREQUEST_H_
