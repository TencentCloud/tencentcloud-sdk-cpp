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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例变配任务信息
                */
                class ModifyInstanceData : public AbstractModel
                {
                public:
                    ModifyInstanceData();
                    ~ModifyInstanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变配后CPU
                     * @return Cpu 变配后CPU
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置变配后CPU
                     * @param _cpu 变配后CPU
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
                     * 获取变配后内存
                     * @return Memory 变配后内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置变配后内存
                     * @param _memory 变配后内存
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
                     * 获取变配后存储上限
                     * @return StorageLimit 变配后存储上限
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置变配后存储上限
                     * @param _storageLimit 变配后存储上限
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
                     * 获取变配前CPU
                     * @return OldCpu 变配前CPU
                     * 
                     */
                    int64_t GetOldCpu() const;

                    /**
                     * 设置变配前CPU
                     * @param _oldCpu 变配前CPU
                     * 
                     */
                    void SetOldCpu(const int64_t& _oldCpu);

                    /**
                     * 判断参数 OldCpu 是否已赋值
                     * @return OldCpu 是否已赋值
                     * 
                     */
                    bool OldCpuHasBeenSet() const;

                    /**
                     * 获取变配前内存
                     * @return OldMemory 变配前内存
                     * 
                     */
                    int64_t GetOldMemory() const;

                    /**
                     * 设置变配前内存
                     * @param _oldMemory 变配前内存
                     * 
                     */
                    void SetOldMemory(const int64_t& _oldMemory);

                    /**
                     * 判断参数 OldMemory 是否已赋值
                     * @return OldMemory 是否已赋值
                     * 
                     */
                    bool OldMemoryHasBeenSet() const;

                    /**
                     * 获取变配前存储上限
                     * @return OldStorageLimit 变配前存储上限
                     * 
                     */
                    int64_t GetOldStorageLimit() const;

                    /**
                     * 设置变配前存储上限
                     * @param _oldStorageLimit 变配前存储上限
                     * 
                     */
                    void SetOldStorageLimit(const int64_t& _oldStorageLimit);

                    /**
                     * 判断参数 OldStorageLimit 是否已赋值
                     * @return OldStorageLimit 是否已赋值
                     * 
                     */
                    bool OldStorageLimitHasBeenSet() const;

                    /**
                     * 获取变配前实例机器类型
                     * @return OldDeviceType 变配前实例机器类型
                     * 
                     */
                    std::string GetOldDeviceType() const;

                    /**
                     * 设置变配前实例机器类型
                     * @param _oldDeviceType 变配前实例机器类型
                     * 
                     */
                    void SetOldDeviceType(const std::string& _oldDeviceType);

                    /**
                     * 判断参数 OldDeviceType 是否已赋值
                     * @return OldDeviceType 是否已赋值
                     * 
                     */
                    bool OldDeviceTypeHasBeenSet() const;

                    /**
                     * 获取变配后实例机器类型
                     * @return DeviceType 变配后实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置变配后实例机器类型
                     * @param _deviceType 变配后实例机器类型
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
                     * 获取升级方式。升级完成后切换或维护时间内切换
                     * @return UpgradeType 升级方式。升级完成后切换或维护时间内切换
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级方式。升级完成后切换或维护时间内切换
                     * @param _upgradeType 升级方式。升级完成后切换或维护时间内切换
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取libra节点数量
                     * @return LibraNodeCount libra节点数量
                     * 
                     */
                    int64_t GetLibraNodeCount() const;

                    /**
                     * 设置libra节点数量
                     * @param _libraNodeCount libra节点数量
                     * 
                     */
                    void SetLibraNodeCount(const int64_t& _libraNodeCount);

                    /**
                     * 判断参数 LibraNodeCount 是否已赋值
                     * @return LibraNodeCount 是否已赋值
                     * 
                     */
                    bool LibraNodeCountHasBeenSet() const;

                    /**
                     * 获取原libra节点数量
                     * @return OldLibraNodeCount 原libra节点数量
                     * 
                     */
                    int64_t GetOldLibraNodeCount() const;

                    /**
                     * 设置原libra节点数量
                     * @param _oldLibraNodeCount 原libra节点数量
                     * 
                     */
                    void SetOldLibraNodeCount(const int64_t& _oldLibraNodeCount);

                    /**
                     * 判断参数 OldLibraNodeCount 是否已赋值
                     * @return OldLibraNodeCount 是否已赋值
                     * 
                     */
                    bool OldLibraNodeCountHasBeenSet() const;

                private:

                    /**
                     * 变配后CPU
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 变配后内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 变配后存储上限
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 变配前CPU
                     */
                    int64_t m_oldCpu;
                    bool m_oldCpuHasBeenSet;

                    /**
                     * 变配前内存
                     */
                    int64_t m_oldMemory;
                    bool m_oldMemoryHasBeenSet;

                    /**
                     * 变配前存储上限
                     */
                    int64_t m_oldStorageLimit;
                    bool m_oldStorageLimitHasBeenSet;

                    /**
                     * 变配前实例机器类型
                     */
                    std::string m_oldDeviceType;
                    bool m_oldDeviceTypeHasBeenSet;

                    /**
                     * 变配后实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 升级方式。升级完成后切换或维护时间内切换
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * libra节点数量
                     */
                    int64_t m_libraNodeCount;
                    bool m_libraNodeCountHasBeenSet;

                    /**
                     * 原libra节点数量
                     */
                    int64_t m_oldLibraNodeCount;
                    bool m_oldLibraNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_
