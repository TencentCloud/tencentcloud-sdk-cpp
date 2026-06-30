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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceUpgradeDBInstance请求参数结构体
                */
                class InquiryPriceUpgradeDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeDBInstanceRequest();
                    ~InquiryPriceUpgradeDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，形如mssql-njj2mtpl</p>
                     * @return InstanceId <p>实例ID，形如mssql-njj2mtpl</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如mssql-njj2mtpl</p>
                     * @param _instanceId <p>实例ID，形如mssql-njj2mtpl</p>
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
                     * 获取<p>实例升级后的内存大小，单位GB，其值不能比当前实例内存小</p>
                     * @return Memory <p>实例升级后的内存大小，单位GB，其值不能比当前实例内存小</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例升级后的内存大小，单位GB，其值不能比当前实例内存小</p>
                     * @param _memory <p>实例升级后的内存大小，单位GB，其值不能比当前实例内存小</p>
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
                     * 获取<p>实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小</p>
                     * @return Storage <p>实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小</p>
                     * @param _storage <p>实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小</p>
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
                     * 获取<p>实例升级后的CPU核心数，其值不能比当前实例CPU小</p>
                     * @return Cpu <p>实例升级后的CPU核心数，其值不能比当前实例CPU小</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例升级后的CPU核心数，其值不能比当前实例CPU小</p>
                     * @param _cpu <p>实例升级后的CPU核心数，其值不能比当前实例CPU小</p>
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
                     * 获取<p>额外磁盘 IO 吞吐量</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @return ThroughputPerformance <p>额外磁盘 IO 吞吐量</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置<p>额外磁盘 IO 吞吐量</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * @param _throughputPerformance <p>额外磁盘 IO 吞吐量</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，形如mssql-njj2mtpl</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例升级后的内存大小，单位GB，其值不能比当前实例内存小</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例升级后的CPU核心数，其值不能比当前实例CPU小</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>额外磁盘 IO 吞吐量</p><p>取值范围：[0, 650]</p><p>单位：MB/s</p>
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
