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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_

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
                * 实例初始化配置信息
                */
                class IntegrateInstanceInfo : public AbstractModel
                {
                public:
                    IntegrateInstanceInfo();
                    ~IntegrateInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例cpu
                     * @return Cpu 实例cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置实例cpu
                     * @param _cpu 实例cpu
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
                     * 获取实例内存
                     * @return Memory 实例内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存
                     * @param _memory 实例内存
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
                     * 获取实例类型 rw/ro
                     * @return InstanceType 实例类型 rw/ro
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型 rw/ro
                     * @param _instanceType 实例类型 rw/ro
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例个数,范围[1,15]
                     * @return InstanceCount 实例个数,范围[1,15]
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例个数,范围[1,15]
                     * @param _instanceCount 实例个数,范围[1,15]
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取实例机器类型 common-公通用型,exclusive-独享型
                     * @return DeviceType 实例机器类型 common-公通用型,exclusive-独享型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型 common-公通用型,exclusive-独享型
                     * @param _deviceType 实例机器类型 common-公通用型,exclusive-独享型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 实例cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 实例内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例类型 rw/ro
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例个数,范围[1,15]
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 实例机器类型 common-公通用型,exclusive-独享型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATEINSTANCEINFO_H_
