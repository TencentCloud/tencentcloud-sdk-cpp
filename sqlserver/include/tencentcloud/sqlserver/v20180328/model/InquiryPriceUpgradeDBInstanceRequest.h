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
                     * 获取实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 实例ID，形如mssql-njj2mtpl
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
                     * 获取实例升级后的内存大小，单位GB，其值不能比当前实例内存小
                     * @return Memory 实例升级后的内存大小，单位GB，其值不能比当前实例内存小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例升级后的内存大小，单位GB，其值不能比当前实例内存小
                     * @param _memory 实例升级后的内存大小，单位GB，其值不能比当前实例内存小
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
                     * 获取实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小
                     * @return Storage 实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小
                     * @param _storage 实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小
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
                     * 获取实例升级后的CPU核心数，其值不能比当前实例CPU小
                     * @return Cpu 实例升级后的CPU核心数，其值不能比当前实例CPU小
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例升级后的CPU核心数，其值不能比当前实例CPU小
                     * @param _cpu 实例升级后的CPU核心数，其值不能比当前实例CPU小
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
                     * 实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例升级后的内存大小，单位GB，其值不能比当前实例内存小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例升级后的磁盘大小，单位GB，其值不能比当前实例磁盘小
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 实例升级后的CPU核心数，其值不能比当前实例CPU小
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICEUPGRADEDBINSTANCEREQUEST_H_
