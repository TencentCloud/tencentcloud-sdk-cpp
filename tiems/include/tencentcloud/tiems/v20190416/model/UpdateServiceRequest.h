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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATESERVICEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Scaler.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * UpdateService请求参数结构体
                */
                class UpdateServiceRequest : public AbstractModel
                {
                public:
                    UpdateServiceRequest();
                    ~UpdateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务Id
                     * @return ServiceId 服务Id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务Id
                     * @param _serviceId 服务Id
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取扩缩容配置
                     * @return Scaler 扩缩容配置
                     * 
                     */
                    Scaler GetScaler() const;

                    /**
                     * 设置扩缩容配置
                     * @param _scaler 扩缩容配置
                     * 
                     */
                    void SetScaler(const Scaler& _scaler);

                    /**
                     * 判断参数 Scaler 是否已赋值
                     * @return Scaler 是否已赋值
                     * 
                     */
                    bool ScalerHasBeenSet() const;

                    /**
                     * 获取服务配置Id
                     * @return ServiceConfigId 服务配置Id
                     * 
                     */
                    std::string GetServiceConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param _serviceConfigId 服务配置Id
                     * 
                     */
                    void SetServiceConfigId(const std::string& _serviceConfigId);

                    /**
                     * 判断参数 ServiceConfigId 是否已赋值
                     * @return ServiceConfigId 是否已赋值
                     * 
                     */
                    bool ServiceConfigIdHasBeenSet() const;

                    /**
                     * 获取支持AUTO, MANUAL，分别表示自动扩缩容，手动扩缩容
                     * @return ScaleMode 支持AUTO, MANUAL，分别表示自动扩缩容，手动扩缩容
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置支持AUTO, MANUAL，分别表示自动扩缩容，手动扩缩容
                     * @param _scaleMode 支持AUTO, MANUAL，分别表示自动扩缩容，手动扩缩容
                     * 
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     * 
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取支持STOP(停止) RESUME(重启)
                     * @return ServiceAction 支持STOP(停止) RESUME(重启)
                     * 
                     */
                    std::string GetServiceAction() const;

                    /**
                     * 设置支持STOP(停止) RESUME(重启)
                     * @param _serviceAction 支持STOP(停止) RESUME(重启)
                     * 
                     */
                    void SetServiceAction(const std::string& _serviceAction);

                    /**
                     * 判断参数 ServiceAction 是否已赋值
                     * @return ServiceAction 是否已赋值
                     * 
                     */
                    bool ServiceActionHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取GPU卡类型
                     * @return GpuType GPU卡类型
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU卡类型
                     * @param _gpuType GPU卡类型
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取处理器配置，单位为 1/1000 核
                     * @return Cpu 处理器配置，单位为 1/1000 核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置，单位为 1/1000 核
                     * @param _cpu 处理器配置，单位为 1/1000 核
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存配置，单位为1M
                     * @return Memory 内存配置，单位为1M
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置，单位为1M
                     * @param _memory 内存配置，单位为1M
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取显卡配置，单位为 1/1000 卡
                     * @return Gpu 显卡配置，单位为 1/1000 卡
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置显卡配置，单位为 1/1000 卡
                     * @param _gpu 显卡配置，单位为 1/1000 卡
                     * 
                     */
                    void SetGpu(const uint64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取Cls日志主题ID
                     * @return LogTopicId Cls日志主题ID
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Cls日志主题ID
                     * @param _logTopicId Cls日志主题ID
                     * 
                     */
                    void SetLogTopicId(const std::string& _logTopicId);

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                private:

                    /**
                     * 服务Id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 扩缩容配置
                     */
                    Scaler m_scaler;
                    bool m_scalerHasBeenSet;

                    /**
                     * 服务配置Id
                     */
                    std::string m_serviceConfigId;
                    bool m_serviceConfigIdHasBeenSet;

                    /**
                     * 支持AUTO, MANUAL，分别表示自动扩缩容，手动扩缩容
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 支持STOP(停止) RESUME(重启)
                     */
                    std::string m_serviceAction;
                    bool m_serviceActionHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * GPU卡类型
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 处理器配置，单位为 1/1000 核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置，单位为1M
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 显卡配置，单位为 1/1000 卡
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Cls日志主题ID
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATESERVICEREQUEST_H_
