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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_SCALEUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_SCALEUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ScaleUpInstance请求参数结构体
                */
                class ScaleUpInstanceRequest : public AbstractModel
                {
                public:
                    ScaleUpInstanceRequest();
                    ~ScaleUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需升级配置的实例 ID。
                     * @return InstanceId 指定需升级配置的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定需升级配置的实例 ID。
                     * @param _instanceId 指定需升级配置的实例 ID。
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
                     * 获取指定升级配置后的 CPU 核数。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 可选择的规格信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return Cpu 指定升级配置后的 CPU 核数。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 可选择的规格信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置指定升级配置后的 CPU 核数。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 可选择的规格信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _cpu 指定升级配置后的 CPU 核数。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 可选择的规格信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取指定升级配置后的内存大小，单位为：GB。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 不同实例类型对 CPU 与内存资源的配置比例有不同的要求。例如，计算型实例，CPU 与内存的分配比例要求为 1:2。CPU 被指定为 4 核，那么内存则应被指定为 8GB。节点规格的详细信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。

                     * @return Memory 指定升级配置后的内存大小，单位为：GB。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 不同实例类型对 CPU 与内存资源的配置比例有不同的要求。例如，计算型实例，CPU 与内存的分配比例要求为 1:2。CPU 被指定为 4 核，那么内存则应被指定为 8GB。节点规格的详细信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。

                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置指定升级配置后的内存大小，单位为：GB。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 不同实例类型对 CPU 与内存资源的配置比例有不同的要求。例如，计算型实例，CPU 与内存的分配比例要求为 1:2。CPU 被指定为 4 核，那么内存则应被指定为 8GB。节点规格的详细信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。

                     * @param _memory 指定升级配置后的内存大小，单位为：GB。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 不同实例类型对 CPU 与内存资源的配置比例有不同的要求。例如，计算型实例，CPU 与内存的分配比例要求为 1:2。CPU 被指定为 4 核，那么内存则应被指定为 8GB。节点规格的详细信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。

                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取指定升级配置后的磁盘容量。
- 单位：GB。
- 取值范围为：[10,1000]。
- 取值必须为10的倍数。
                     * @return StorageSize 指定升级配置后的磁盘容量。
- 单位：GB。
- 取值范围为：[10,1000]。
- 取值必须为10的倍数。
                     * 
                     */
                    uint64_t GetStorageSize() const;

                    /**
                     * 设置指定升级配置后的磁盘容量。
- 单位：GB。
- 取值范围为：[10,1000]。
- 取值必须为10的倍数。
                     * @param _storageSize 指定升级配置后的磁盘容量。
- 单位：GB。
- 取值范围为：[10,1000]。
- 取值必须为10的倍数。
                     * 
                     */
                    void SetStorageSize(const uint64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取指定垂直扩容升级节点配置的时间。
- false：默认值，指在下一个维护时间段内执行升配节点规格的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动任务。维护时间的更多信息，请参见维护时间窗。
- true：立即执行升级配置的任务，请确保此时没有重大业务操作。
                     * @return RunNow 指定垂直扩容升级节点配置的时间。
- false：默认值，指在下一个维护时间段内执行升配节点规格的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动任务。维护时间的更多信息，请参见维护时间窗。
- true：立即执行升级配置的任务，请确保此时没有重大业务操作。
                     * 
                     */
                    bool GetRunNow() const;

                    /**
                     * 设置指定垂直扩容升级节点配置的时间。
- false：默认值，指在下一个维护时间段内执行升配节点规格的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动任务。维护时间的更多信息，请参见维护时间窗。
- true：立即执行升级配置的任务，请确保此时没有重大业务操作。
                     * @param _runNow 指定垂直扩容升级节点配置的时间。
- false：默认值，指在下一个维护时间段内执行升配节点规格的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动任务。维护时间的更多信息，请参见维护时间窗。
- true：立即执行升级配置的任务，请确保此时没有重大业务操作。
                     * 
                     */
                    void SetRunNow(const bool& _runNow);

                    /**
                     * 判断参数 RunNow 是否已赋值
                     * @return RunNow 是否已赋值
                     * 
                     */
                    bool RunNowHasBeenSet() const;

                private:

                    /**
                     * 指定需升级配置的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定升级配置后的 CPU 核数。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 可选择的规格信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 指定升级配置后的内存大小，单位为：GB。
- 节点规格可选项（CPU & 内存）必须 >= 当前配置。
- 不同实例类型对 CPU 与内存资源的配置比例有不同的要求。例如，计算型实例，CPU 与内存的分配比例要求为 1:2。CPU 被指定为 4 核，那么内存则应被指定为 8GB。节点规格的详细信息，请参见[选择节点规格与数量](https://cloud.tencent.com/document/product/1709/113399)。

                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 指定升级配置后的磁盘容量。
- 单位：GB。
- 取值范围为：[10,1000]。
- 取值必须为10的倍数。
                     */
                    uint64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 指定垂直扩容升级节点配置的时间。
- false：默认值，指在下一个维护时间段内执行升配节点规格的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动任务。维护时间的更多信息，请参见维护时间窗。
- true：立即执行升级配置的任务，请确保此时没有重大业务操作。
                     */
                    bool m_runNow;
                    bool m_runNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_SCALEUPINSTANCEREQUEST_H_
