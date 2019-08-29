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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateServiceConfig请求参数结构体
                */
                class CreateServiceConfigRequest : public AbstractModel
                {
                public:
                    CreateServiceConfigRequest();
                    ~CreateServiceConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置名称
                     * @return Name 配置名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名称
                     * @param Name 配置名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取运行环境
                     * @return Runtime 运行环境
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行环境
                     * @param Runtime 运行环境
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * @return ModelUri 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     */
                    std::string GetModelUri() const;

                    /**
                     * 设置模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     * @param ModelUri 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     */
                    void SetModelUri(const std::string& _modelUri);

                    /**
                     * 判断参数 ModelUri 是否已赋值
                     * @return ModelUri 是否已赋值
                     */
                    bool ModelUriHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/1000核；范围[100, 256000]
                     * @return Cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核；范围[100, 256000]
                     * @param Cpu 处理器配置, 单位为1/1000核；范围[100, 256000]
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存配置, 单位为1M；范围[100, 256000]
                     * @return Memory 内存配置, 单位为1M；范围[100, 256000]
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M；范围[100, 256000]
                     * @param Memory 内存配置, 单位为1M；范围[100, 256000]
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取GPU算力配置，单位为1/100 tflops，范围 [0, 256000]
                     * @return TflopUnits GPU算力配置，单位为1/100 tflops，范围 [0, 256000]
                     */
                    uint64_t GetTflopUnits() const;

                    /**
                     * 设置GPU算力配置，单位为1/100 tflops，范围 [0, 256000]
                     * @param TflopUnits GPU算力配置，单位为1/100 tflops，范围 [0, 256000]
                     */
                    void SetTflopUnits(const uint64_t& _tflopUnits);

                    /**
                     * 判断参数 TflopUnits 是否已赋值
                     * @return TflopUnits 是否已赋值
                     */
                    bool TflopUnitsHasBeenSet() const;

                    /**
                     * 获取显存配置, 单位为1M，范围 [0, 256000]
                     * @return GpuMemory 显存配置, 单位为1M，范围 [0, 256000]
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M，范围 [0, 256000]
                     * @param GpuMemory 显存配置, 单位为1M，范围 [0, 256000]
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     */
                    bool GpuMemoryHasBeenSet() const;

                private:

                    /**
                     * 配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行环境
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 模型地址，支持cos路径，格式为 cos://bucket名-appid.cos.region名.myqcloud.com/模型文件夹路径。为模型文件的上一层文件夹地址。
                     */
                    std::string m_modelUri;
                    bool m_modelUriHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/1000核；范围[100, 256000]
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置, 单位为1M；范围[100, 256000]
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU算力配置，单位为1/100 tflops，范围 [0, 256000]
                     */
                    uint64_t m_tflopUnits;
                    bool m_tflopUnitsHasBeenSet;

                    /**
                     * 显存配置, 单位为1M，范围 [0, 256000]
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATESERVICECONFIGREQUEST_H_
