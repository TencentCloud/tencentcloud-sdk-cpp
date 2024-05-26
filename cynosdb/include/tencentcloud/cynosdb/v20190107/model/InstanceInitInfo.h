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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_

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
                class InstanceInitInfo : public AbstractModel
                {
                public:
                    InstanceInitInfo();
                    ~InstanceInitInfo() = default;
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
                     * 获取Serverless实例个数最小值，范围[1,15]
                     * @return MinRoCount Serverless实例个数最小值，范围[1,15]
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置Serverless实例个数最小值，范围[1,15]
                     * @param _minRoCount Serverless实例个数最小值，范围[1,15]
                     * 
                     */
                    void SetMinRoCount(const int64_t& _minRoCount);

                    /**
                     * 判断参数 MinRoCount 是否已赋值
                     * @return MinRoCount 是否已赋值
                     * 
                     */
                    bool MinRoCountHasBeenSet() const;

                    /**
                     * 获取Serverless实例个数最大值，范围[1,15]
                     * @return MaxRoCount Serverless实例个数最大值，范围[1,15]
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置Serverless实例个数最大值，范围[1,15]
                     * @param _maxRoCount Serverless实例个数最大值，范围[1,15]
                     * 
                     */
                    void SetMaxRoCount(const int64_t& _maxRoCount);

                    /**
                     * 判断参数 MaxRoCount 是否已赋值
                     * @return MaxRoCount 是否已赋值
                     * 
                     */
                    bool MaxRoCountHasBeenSet() const;

                    /**
                     * 获取Serverless实例最小规格
                     * @return MinRoCpu Serverless实例最小规格
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置Serverless实例最小规格
                     * @param _minRoCpu Serverless实例最小规格
                     * 
                     */
                    void SetMinRoCpu(const double& _minRoCpu);

                    /**
                     * 判断参数 MinRoCpu 是否已赋值
                     * @return MinRoCpu 是否已赋值
                     * 
                     */
                    bool MinRoCpuHasBeenSet() const;

                    /**
                     * 获取Serverless实例最大规格
                     * @return MaxRoCpu Serverless实例最大规格
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置Serverless实例最大规格
                     * @param _maxRoCpu Serverless实例最大规格
                     * 
                     */
                    void SetMaxRoCpu(const double& _maxRoCpu);

                    /**
                     * 判断参数 MaxRoCpu 是否已赋值
                     * @return MaxRoCpu 是否已赋值
                     * 
                     */
                    bool MaxRoCpuHasBeenSet() const;

                    /**
                     * 获取实例机器类型
                     * @return DeviceType 实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
                     * @param _deviceType 实例机器类型
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
                     * Serverless实例个数最小值，范围[1,15]
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * Serverless实例个数最大值，范围[1,15]
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * Serverless实例最小规格
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * Serverless实例最大规格
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * 实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
