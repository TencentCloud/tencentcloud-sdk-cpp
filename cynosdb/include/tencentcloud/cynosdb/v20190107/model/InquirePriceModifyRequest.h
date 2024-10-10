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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceModify请求参数结构体
                */
                class InquirePriceModifyRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyRequest();
                    ~InquirePriceModifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
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
                     * 获取内存大小
                     * @return Memory 内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小
                     * @param _memory 内存大小
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
                     * 获取存储大小，存储资源变配：ClusterId,StorageLimit
                     * @return StorageLimit 存储大小，存储资源变配：ClusterId,StorageLimit
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置存储大小，存储资源变配：ClusterId,StorageLimit
                     * @param _storageLimit 存储大小，存储资源变配：ClusterId,StorageLimit
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取实例ID，计算资源变配必传: ClusterId,InstanceId,Cpu,Memory 
                     * @return InstanceId 实例ID，计算资源变配必传: ClusterId,InstanceId,Cpu,Memory 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，计算资源变配必传: ClusterId,InstanceId,Cpu,Memory 
                     * @param _instanceId 实例ID，计算资源变配必传: ClusterId,InstanceId,Cpu,Memory 
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
                     * 获取实例设备类型
                     * @return DeviceType 实例设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例设备类型
                     * @param _deviceType 实例设备类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取serverless实例ccu大小
                     * @return Ccu serverless实例ccu大小
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置serverless实例ccu大小
                     * @param _ccu serverless实例ccu大小
                     * 
                     */
                    void SetCcu(const double& _ccu);

                    /**
                     * 判断参数 Ccu 是否已赋值
                     * @return Ccu 是否已赋值
                     * 
                     */
                    bool CcuHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，存储资源变配：ClusterId,StorageLimit
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 实例ID，计算资源变配必传: ClusterId,InstanceId,Cpu,Memory 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * serverless实例ccu大小
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_
