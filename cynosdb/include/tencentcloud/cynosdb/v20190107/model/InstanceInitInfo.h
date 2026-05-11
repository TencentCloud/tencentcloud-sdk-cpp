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
                     * 获取<p>实例cpu</p>
                     * @return Cpu <p>实例cpu</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例cpu</p>
                     * @param _cpu <p>实例cpu</p>
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
                     * 获取<p>实例内存</p>
                     * @return Memory <p>实例内存</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存</p>
                     * @param _memory <p>实例内存</p>
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
                     * 获取<p>实例类型 rw/ro</p>
                     * @return InstanceType <p>实例类型 rw/ro</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型 rw/ro</p>
                     * @param _instanceType <p>实例类型 rw/ro</p>
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
                     * 获取<p>实例个数,范围[1,15]</p>
                     * @return InstanceCount <p>实例个数,范围[1,15]</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>实例个数,范围[1,15]</p>
                     * @param _instanceCount <p>实例个数,范围[1,15]</p>
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
                     * 获取<p>Serverless实例个数最小值，范围[1,15]</p>
                     * @return MinRoCount <p>Serverless实例个数最小值，范围[1,15]</p>
                     * 
                     */
                    int64_t GetMinRoCount() const;

                    /**
                     * 设置<p>Serverless实例个数最小值，范围[1,15]</p>
                     * @param _minRoCount <p>Serverless实例个数最小值，范围[1,15]</p>
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
                     * 获取<p>Serverless实例个数最大值，范围[1,15]</p>
                     * @return MaxRoCount <p>Serverless实例个数最大值，范围[1,15]</p>
                     * 
                     */
                    int64_t GetMaxRoCount() const;

                    /**
                     * 设置<p>Serverless实例个数最大值，范围[1,15]</p>
                     * @param _maxRoCount <p>Serverless实例个数最大值，范围[1,15]</p>
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
                     * 获取<p>Serverless实例最小规格</p>
                     * @return MinRoCpu <p>Serverless实例最小规格</p>
                     * 
                     */
                    double GetMinRoCpu() const;

                    /**
                     * 设置<p>Serverless实例最小规格</p>
                     * @param _minRoCpu <p>Serverless实例最小规格</p>
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
                     * 获取<p>Serverless实例最大规格</p>
                     * @return MaxRoCpu <p>Serverless实例最大规格</p>
                     * 
                     */
                    double GetMaxRoCpu() const;

                    /**
                     * 设置<p>Serverless实例最大规格</p>
                     * @param _maxRoCpu <p>Serverless实例最大规格</p>
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
                     * 获取<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @return DeviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     * @param _deviceType <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
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
                     * <p>实例cpu</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>实例内存</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例类型 rw/ro</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例个数,范围[1,15]</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>Serverless实例个数最小值，范围[1,15]</p>
                     */
                    int64_t m_minRoCount;
                    bool m_minRoCountHasBeenSet;

                    /**
                     * <p>Serverless实例个数最大值，范围[1,15]</p>
                     */
                    int64_t m_maxRoCount;
                    bool m_maxRoCountHasBeenSet;

                    /**
                     * <p>Serverless实例最小规格</p>
                     */
                    double m_minRoCpu;
                    bool m_minRoCpuHasBeenSet;

                    /**
                     * <p>Serverless实例最大规格</p>
                     */
                    double m_maxRoCpu;
                    bool m_maxRoCpuHasBeenSet;

                    /**
                     * <p>实例机器类型</p><ol><li>common，通用型。</li><li>exclusive，独享型。</li></ol>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEINITINFO_H_
