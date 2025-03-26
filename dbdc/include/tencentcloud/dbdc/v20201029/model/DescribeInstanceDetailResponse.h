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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeInstanceDetail返回参数结构体
                */
                class DescribeInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeInstanceDetailResponse();
                    ~DescribeInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取独享集群实例Id
                     * @return InstanceId 独享集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取独享集群实例名称
                     * @return InstanceName 独享集群实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取产品ID, 0:CDB, 1:TDSQL
                     * @return ProductId 产品ID, 0:CDB, 1:TDSQL
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取集群类型, 0:公有云, 1:金融围笼
                     * @return Type 集群类型, 0:公有云, 1:金融围笼
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * @return HostType 主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     * 
                     */
                    int64_t GetHostType() const;

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取自动续费标志, 0:未设置, 1:自动续费, 2:到期不续费
                     * @return AutoRenewFlag 自动续费标志, 0:未设置, 1:自动续费, 2:到期不续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取集群状态
                     * @return Status 集群状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群状态描述
                     * @return StatusDesc 集群状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return PeriodEndTime 到期时间
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取主机数
                     * @return HostNum 主机数
                     * 
                     */
                    int64_t GetHostNum() const;

                    /**
                     * 判断参数 HostNum 是否已赋值
                     * @return HostNum 是否已赋值
                     * 
                     */
                    bool HostNumHasBeenSet() const;

                    /**
                     * 获取Db实例数
                     * @return DbNum Db实例数
                     * 
                     */
                    int64_t GetDbNum() const;

                    /**
                     * 判断参数 DbNum 是否已赋值
                     * @return DbNum 是否已赋值
                     * 
                     */
                    bool DbNumHasBeenSet() const;

                    /**
                     * 获取分配策略, 0:紧凑, 1:均匀
                     * @return AssignStrategy 分配策略, 0:紧凑, 1:均匀
                     * 
                     */
                    int64_t GetAssignStrategy() const;

                    /**
                     * 判断参数 AssignStrategy 是否已赋值
                     * @return AssignStrategy 是否已赋值
                     * 
                     */
                    bool AssignStrategyHasBeenSet() const;

                    /**
                     * 获取总主机CPU(单位:核)
                     * @return CpuSpec 总主机CPU(单位:核)
                     * 
                     */
                    int64_t GetCpuSpec() const;

                    /**
                     * 判断参数 CpuSpec 是否已赋值
                     * @return CpuSpec 是否已赋值
                     * 
                     */
                    bool CpuSpecHasBeenSet() const;

                    /**
                     * 获取总已分配CPU(单位:核)
                     * @return CpuAssigned 总已分配CPU(单位:核)
                     * 
                     */
                    int64_t GetCpuAssigned() const;

                    /**
                     * 判断参数 CpuAssigned 是否已赋值
                     * @return CpuAssigned 是否已赋值
                     * 
                     */
                    bool CpuAssignedHasBeenSet() const;

                    /**
                     * 获取总可分配CPU(单位:核)
                     * @return CpuAssignable 总可分配CPU(单位:核)
                     * 
                     */
                    int64_t GetCpuAssignable() const;

                    /**
                     * 判断参数 CpuAssignable 是否已赋值
                     * @return CpuAssignable 是否已赋值
                     * 
                     */
                    bool CpuAssignableHasBeenSet() const;

                    /**
                     * 获取总主机内存(单位:GB)
                     * @return MemorySpec 总主机内存(单位:GB)
                     * 
                     */
                    int64_t GetMemorySpec() const;

                    /**
                     * 判断参数 MemorySpec 是否已赋值
                     * @return MemorySpec 是否已赋值
                     * 
                     */
                    bool MemorySpecHasBeenSet() const;

                    /**
                     * 获取总已分配内存(单位:GB)
                     * @return MemoryAssigned 总已分配内存(单位:GB)
                     * 
                     */
                    int64_t GetMemoryAssigned() const;

                    /**
                     * 判断参数 MemoryAssigned 是否已赋值
                     * @return MemoryAssigned 是否已赋值
                     * 
                     */
                    bool MemoryAssignedHasBeenSet() const;

                    /**
                     * 获取总可分配内存(单位:GB)
                     * @return MemoryAssignable 总可分配内存(单位:GB)
                     * 
                     */
                    int64_t GetMemoryAssignable() const;

                    /**
                     * 判断参数 MemoryAssignable 是否已赋值
                     * @return MemoryAssignable 是否已赋值
                     * 
                     */
                    bool MemoryAssignableHasBeenSet() const;

                    /**
                     * 获取总机器磁盘(单位:GB)
                     * @return DiskSpec 总机器磁盘(单位:GB)
                     * 
                     */
                    int64_t GetDiskSpec() const;

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取总已分配磁盘(单位:GB)
                     * @return DiskAssigned 总已分配磁盘(单位:GB)
                     * 
                     */
                    int64_t GetDiskAssigned() const;

                    /**
                     * 判断参数 DiskAssigned 是否已赋值
                     * @return DiskAssigned 是否已赋值
                     * 
                     */
                    bool DiskAssignedHasBeenSet() const;

                    /**
                     * 获取总可分配磁盘(单位:GB)
                     * @return DiskAssignable 总可分配磁盘(单位:GB)
                     * 
                     */
                    int64_t GetDiskAssignable() const;

                    /**
                     * 判断参数 DiskAssignable 是否已赋值
                     * @return DiskAssignable 是否已赋值
                     * 
                     */
                    bool DiskAssignableHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取金融围笼ID
                     * @return FenceId 金融围笼ID
                     * 
                     */
                    std::string GetFenceId() const;

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                    /**
                     * 获取所属集群ID(默认集群为空)
                     * @return ClusterId 所属集群ID(默认集群为空)
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 独享集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 独享集群实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 产品ID, 0:CDB, 1:TDSQL
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 集群类型, 0:公有云, 1:金融围笼
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主机类型, 0:物理机, 1:cvm本地盘, 2:cvm云盘
                     */
                    int64_t m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 自动续费标志, 0:未设置, 1:自动续费, 2:到期不续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 集群状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * 主机数
                     */
                    int64_t m_hostNum;
                    bool m_hostNumHasBeenSet;

                    /**
                     * Db实例数
                     */
                    int64_t m_dbNum;
                    bool m_dbNumHasBeenSet;

                    /**
                     * 分配策略, 0:紧凑, 1:均匀
                     */
                    int64_t m_assignStrategy;
                    bool m_assignStrategyHasBeenSet;

                    /**
                     * 总主机CPU(单位:核)
                     */
                    int64_t m_cpuSpec;
                    bool m_cpuSpecHasBeenSet;

                    /**
                     * 总已分配CPU(单位:核)
                     */
                    int64_t m_cpuAssigned;
                    bool m_cpuAssignedHasBeenSet;

                    /**
                     * 总可分配CPU(单位:核)
                     */
                    int64_t m_cpuAssignable;
                    bool m_cpuAssignableHasBeenSet;

                    /**
                     * 总主机内存(单位:GB)
                     */
                    int64_t m_memorySpec;
                    bool m_memorySpecHasBeenSet;

                    /**
                     * 总已分配内存(单位:GB)
                     */
                    int64_t m_memoryAssigned;
                    bool m_memoryAssignedHasBeenSet;

                    /**
                     * 总可分配内存(单位:GB)
                     */
                    int64_t m_memoryAssignable;
                    bool m_memoryAssignableHasBeenSet;

                    /**
                     * 总机器磁盘(单位:GB)
                     */
                    int64_t m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * 总已分配磁盘(单位:GB)
                     */
                    int64_t m_diskAssigned;
                    bool m_diskAssignedHasBeenSet;

                    /**
                     * 总可分配磁盘(单位:GB)
                     */
                    int64_t m_diskAssignable;
                    bool m_diskAssignableHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 金融围笼ID
                     */
                    std::string m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 所属集群ID(默认集群为空)
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCEDETAILRESPONSE_H_
