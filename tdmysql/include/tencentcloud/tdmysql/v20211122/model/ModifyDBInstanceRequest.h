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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBInstance请求参数结构体
                */
                class ModifyDBInstanceRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceRequest();
                    ~ModifyDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>是否仅做预检查，不实际执行变配。true: 仅返回变配计划和预检查结果；false: 实际执行变配（默认）</p>
                     * @return DryRun <p>是否仅做预检查，不实际执行变配。true: 仅返回变配计划和预检查结果；false: 实际执行变配（默认）</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否仅做预检查，不实际执行变配。true: 仅返回变配计划和预检查结果；false: 实际执行变配（默认）</p>
                     * @param _dryRun <p>是否仅做预检查，不实际执行变配。true: 仅返回变配计划和预检查结果；false: 实际执行变配（默认）</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>对等节点CPU核数，不传则保持当前值不变</p>
                     * @return HybridNodeCpu <p>对等节点CPU核数，不传则保持当前值不变</p>
                     * 
                     */
                    int64_t GetHybridNodeCpu() const;

                    /**
                     * 设置<p>对等节点CPU核数，不传则保持当前值不变</p>
                     * @param _hybridNodeCpu <p>对等节点CPU核数，不传则保持当前值不变</p>
                     * 
                     */
                    void SetHybridNodeCpu(const int64_t& _hybridNodeCpu);

                    /**
                     * 判断参数 HybridNodeCpu 是否已赋值
                     * @return HybridNodeCpu 是否已赋值
                     * 
                     */
                    bool HybridNodeCpuHasBeenSet() const;

                    /**
                     * 获取<p>对等节点内存大小，单位GB，不传则保持当前值不变</p>
                     * @return HybridNodeMem <p>对等节点内存大小，单位GB，不传则保持当前值不变</p>
                     * 
                     */
                    int64_t GetHybridNodeMem() const;

                    /**
                     * 设置<p>对等节点内存大小，单位GB，不传则保持当前值不变</p>
                     * @param _hybridNodeMem <p>对等节点内存大小，单位GB，不传则保持当前值不变</p>
                     * 
                     */
                    void SetHybridNodeMem(const int64_t& _hybridNodeMem);

                    /**
                     * 判断参数 HybridNodeMem 是否已赋值
                     * @return HybridNodeMem 是否已赋值
                     * 
                     */
                    bool HybridNodeMemHasBeenSet() const;

                    /**
                     * 获取<p>对等节点数量，不传则保持当前值不变</p>
                     * @return HybridNodeNum <p>对等节点数量，不传则保持当前值不变</p>
                     * 
                     */
                    int64_t GetHybridNodeNum() const;

                    /**
                     * 设置<p>对等节点数量，不传则保持当前值不变</p>
                     * @param _hybridNodeNum <p>对等节点数量，不传则保持当前值不变</p>
                     * 
                     */
                    void SetHybridNodeNum(const int64_t& _hybridNodeNum);

                    /**
                     * 判断参数 HybridNodeNum 是否已赋值
                     * @return HybridNodeNum 是否已赋值
                     * 
                     */
                    bool HybridNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>对等节点磁盘容量，单位GB，不传则保持当前值不变</p>
                     * @return Disk <p>对等节点磁盘容量，单位GB，不传则保持当前值不变</p>
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置<p>对等节点磁盘容量，单位GB，不传则保持当前值不变</p>
                     * @param _disk <p>对等节点磁盘容量，单位GB，不传则保持当前值不变</p>
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>存储类型，可选值：CLOUD_HSSD（增强型SSD云硬盘）、CLOUD_TCS（本地盘）、CLOUD_BSSD（通用型SSD云硬盘），不传则保持当前值不变</p>
                     * @return StorageType <p>存储类型，可选值：CLOUD_HSSD（增强型SSD云硬盘）、CLOUD_TCS（本地盘）、CLOUD_BSSD（通用型SSD云硬盘），不传则保持当前值不变</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型，可选值：CLOUD_HSSD（增强型SSD云硬盘）、CLOUD_TCS（本地盘）、CLOUD_BSSD（通用型SSD云硬盘），不传则保持当前值不变</p>
                     * @param _storageType <p>存储类型，可选值：CLOUD_HSSD（增强型SSD云硬盘）、CLOUD_TCS（本地盘）、CLOUD_BSSD（通用型SSD云硬盘），不传则保持当前值不变</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>规格编码，如 4c8g、16c32g 等</p>
                     * @return SpecCode <p>规格编码，如 4c8g、16c32g 等</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>规格编码，如 4c8g、16c32g 等</p>
                     * @param _specCode <p>规格编码，如 4c8g、16c32g 等</p>
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取<p>目标可用区列表，不传则保持当前值不变</p>
                     * @return Zones <p>目标可用区列表，不传则保持当前值不变</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>目标可用区列表，不传则保持当前值不变</p>
                     * @param _zones <p>目标可用区列表，不传则保持当前值不变</p>
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
                     * 获取<p>可用区模式，1: 单可用区，3: 多可用区主AZ模式</p>
                     * @return AZMode <p>可用区模式，1: 单可用区，3: 多可用区主AZ模式</p>
                     * 
                     */
                    int64_t GetAZMode() const;

                    /**
                     * 设置<p>可用区模式，1: 单可用区，3: 多可用区主AZ模式</p>
                     * @param _aZMode <p>可用区模式，1: 单可用区，3: 多可用区主AZ模式</p>
                     * 
                     */
                    void SetAZMode(const int64_t& _aZMode);

                    /**
                     * 判断参数 AZMode 是否已赋值
                     * @return AZMode 是否已赋值
                     * 
                     */
                    bool AZModeHasBeenSet() const;

                    /**
                     * 获取<p>主可用区，AZMode传3时生效</p>
                     * @return PrimaryAZ <p>主可用区，AZMode传3时生效</p>
                     * 
                     */
                    std::string GetPrimaryAZ() const;

                    /**
                     * 设置<p>主可用区，AZMode传3时生效</p>
                     * @param _primaryAZ <p>主可用区，AZMode传3时生效</p>
                     * 
                     */
                    void SetPrimaryAZ(const std::string& _primaryAZ);

                    /**
                     * 判断参数 PrimaryAZ 是否已赋值
                     * @return PrimaryAZ 是否已赋值
                     * 
                     */
                    bool PrimaryAZHasBeenSet() const;

                    /**
                     * 获取<p>全功能型副本数，取值范围1-3</p>
                     * @return FullReplications <p>全功能型副本数，取值范围1-3</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全功能型副本数，取值范围1-3</p>
                     * @param _fullReplications <p>全功能型副本数，取值范围1-3</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否仅做预检查，不实际执行变配。true: 仅返回变配计划和预检查结果；false: 实际执行变配（默认）</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>对等节点CPU核数，不传则保持当前值不变</p>
                     */
                    int64_t m_hybridNodeCpu;
                    bool m_hybridNodeCpuHasBeenSet;

                    /**
                     * <p>对等节点内存大小，单位GB，不传则保持当前值不变</p>
                     */
                    int64_t m_hybridNodeMem;
                    bool m_hybridNodeMemHasBeenSet;

                    /**
                     * <p>对等节点数量，不传则保持当前值不变</p>
                     */
                    int64_t m_hybridNodeNum;
                    bool m_hybridNodeNumHasBeenSet;

                    /**
                     * <p>对等节点磁盘容量，单位GB，不传则保持当前值不变</p>
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>存储类型，可选值：CLOUD_HSSD（增强型SSD云硬盘）、CLOUD_TCS（本地盘）、CLOUD_BSSD（通用型SSD云硬盘），不传则保持当前值不变</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>规格编码，如 4c8g、16c32g 等</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>目标可用区列表，不传则保持当前值不变</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>可用区模式，1: 单可用区，3: 多可用区主AZ模式</p>
                     */
                    int64_t m_aZMode;
                    bool m_aZModeHasBeenSet;

                    /**
                     * <p>主可用区，AZMode传3时生效</p>
                     */
                    std::string m_primaryAZ;
                    bool m_primaryAZHasBeenSet;

                    /**
                     * <p>全功能型副本数，取值范围1-3</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBINSTANCEREQUEST_H_
