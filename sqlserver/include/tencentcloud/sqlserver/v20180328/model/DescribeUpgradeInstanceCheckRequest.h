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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_

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
                * DescribeUpgradeInstanceCheck请求参数结构体
                */
                class DescribeUpgradeInstanceCheckRequest : public AbstractModel
                {
                public:
                    DescribeUpgradeInstanceCheckRequest();
                    ~DescribeUpgradeInstanceCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 数据库实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 数据库实例ID，形如mssql-njj2mtpl
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
                     * 获取实例变配后的CPU核心数，不填则不修改
                     * @return Cpu 实例变配后的CPU核心数，不填则不修改
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例变配后的CPU核心数，不填则不修改
                     * @param _cpu 实例变配后的CPU核心数，不填则不修改
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
                     * 获取实例变配后内存大小，单位GB，不填则不修改
                     * @return Memory 实例变配后内存大小，单位GB，不填则不修改
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例变配后内存大小，单位GB，不填则不修改
                     * @param _memory 实例变配后内存大小，单位GB，不填则不修改
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
                     * 获取实例变配后磁盘大小，单位GB，不填则不修改
                     * @return Storage 实例变配后磁盘大小，单位GB，不填则不修改
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例变配后磁盘大小，单位GB，不填则不修改
                     * @param _storage 实例变配后磁盘大小，单位GB，不填则不修改
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
                     * 获取实例版本，不填则不修改
                     * @return DBVersion 实例版本，不填则不修改
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置实例版本，不填则不修改
                     * @param _dBVersion 实例版本，不填则不修改
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
                     * 获取实例变配后的类型，可选值：CLUSTER-集群，不填则不修改
                     * @return HAType 实例变配后的类型，可选值：CLUSTER-集群，不填则不修改
                     * 
                     */
                    std::string GetHAType() const;

                    /**
                     * 设置实例变配后的类型，可选值：CLUSTER-集群，不填则不修改
                     * @param _hAType 实例变配后的类型，可选值：CLUSTER-集群，不填则不修改
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
                     * 获取实例变配后的跨可用区类型，可选值： SameZones-修改为同可用区 MultiZones-修改为跨可用区，不填则不修改
                     * @return MultiZones 实例变配后的跨可用区类型，可选值： SameZones-修改为同可用区 MultiZones-修改为跨可用区，不填则不修改
                     * 
                     */
                    std::string GetMultiZones() const;

                    /**
                     * 设置实例变配后的跨可用区类型，可选值： SameZones-修改为同可用区 MultiZones-修改为跨可用区，不填则不修改
                     * @param _multiZones 实例变配后的跨可用区类型，可选值： SameZones-修改为同可用区 MultiZones-修改为跨可用区，不填则不修改
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
                     * 数据库实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例变配后的CPU核心数，不填则不修改
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例变配后内存大小，单位GB，不填则不修改
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例变配后磁盘大小，单位GB，不填则不修改
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例版本，不填则不修改
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 实例变配后的类型，可选值：CLUSTER-集群，不填则不修改
                     */
                    std::string m_hAType;
                    bool m_hATypeHasBeenSet;

                    /**
                     * 实例变配后的跨可用区类型，可选值： SameZones-修改为同可用区 MultiZones-修改为跨可用区，不填则不修改
                     */
                    std::string m_multiZones;
                    bool m_multiZonesHasBeenSet;

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

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKREQUEST_H_
