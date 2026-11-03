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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
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
                     * 获取<p>实例的磁盘大小，单位GB</p>
                     * @return Storage <p>实例的磁盘大小，单位GB</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>实例的磁盘大小，单位GB</p>
                     * @param _storage <p>实例的磁盘大小，单位GB</p>
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
                     * 获取<p>实例的内存大小，单位GB</p>
                     * @return Memory <p>实例的内存大小，单位GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例的内存大小，单位GB</p>
                     * @param _memory <p>实例的内存大小，单位GB</p>
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
                     * 获取<p>实例ID，形如postgres-hez4fh0v。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID，形如postgres-hez4fh0v。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID，形如postgres-hez4fh0v。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID，形如postgres-hez4fh0v。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例计费类型。</p>
                     * @return InstanceChargeType <p>实例计费类型。</p>
                     * @deprecated
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型。</p>
                     * @param _instanceChargeType <p>实例计费类型。</p>
                     * @deprecated
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * @deprecated
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例的Cpu大小，单位Core。<br>不传入此参数时，默认根据Memory确定的售卖规格所对应的Cpu进行设置。如Memory为2，支持的售卖规格有1核2GiB，则不传入Cpu时，Cpu默认为1。</p>
                     * @return Cpu <p>实例的Cpu大小，单位Core。<br>不传入此参数时，默认根据Memory确定的售卖规格所对应的Cpu进行设置。如Memory为2，支持的售卖规格有1核2GiB，则不传入Cpu时，Cpu默认为1。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例的Cpu大小，单位Core。<br>不传入此参数时，默认根据Memory确定的售卖规格所对应的Cpu进行设置。如Memory为2，支持的售卖规格有1核2GiB，则不传入Cpu时，Cpu默认为1。</p>
                     * @param _cpu <p>实例的Cpu大小，单位Core。<br>不传入此参数时，默认根据Memory确定的售卖规格所对应的Cpu进行设置。如Memory为2，支持的售卖规格有1核2GiB，则不传入Cpu时，Cpu默认为1。</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * <p>实例的磁盘大小，单位GB</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>实例的内存大小，单位GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例ID，形如postgres-hez4fh0v。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>实例计费类型。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>实例的Cpu大小，单位Core。<br>不传入此参数时，默认根据Memory确定的售卖规格所对应的Cpu进行设置。如Memory为2，支持的售卖规格有1核2GiB，则不传入Cpu时，Cpu默认为1。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
