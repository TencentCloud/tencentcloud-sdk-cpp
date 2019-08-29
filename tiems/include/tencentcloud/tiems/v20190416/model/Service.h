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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Scaler.h>
#include <tencentcloud/tiems/v20190416/model/ServiceStatus.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 模型服务
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return Id 服务ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置服务ID
                     * @param Id 服务ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取运行集群
                     * @return Cluster 运行集群
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行集群
                     * @param Cluster 运行集群
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param Name 服务名称
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
                     * 获取模型地址
                     * @return ModelUri 模型地址
                     */
                    std::string GetModelUri() const;

                    /**
                     * 设置模型地址
                     * @param ModelUri 模型地址
                     */
                    void SetModelUri(const std::string& _modelUri);

                    /**
                     * 判断参数 ModelUri 是否已赋值
                     * @return ModelUri 是否已赋值
                     */
                    bool ModelUriHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/1000核
                     * @return Cpu 处理器配置, 单位为1/1000核
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核
                     * @param Cpu 处理器配置, 单位为1/1000核
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存配置, 单位为1M
                     * @return Memory 内存配置, 单位为1M
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M
                     * @param Memory 内存配置, 单位为1M
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/100 tflops
                     * @return TflopUnits 处理器配置, 单位为1/100 tflops
                     */
                    uint64_t GetTflopUnits() const;

                    /**
                     * 设置处理器配置, 单位为1/100 tflops
                     * @param TflopUnits 处理器配置, 单位为1/100 tflops
                     */
                    void SetTflopUnits(const uint64_t& _tflopUnits);

                    /**
                     * 判断参数 TflopUnits 是否已赋值
                     * @return TflopUnits 是否已赋值
                     */
                    bool TflopUnitsHasBeenSet() const;

                    /**
                     * 获取显存配置, 单位为1M
                     * @return GpuMemory 显存配置, 单位为1M
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M
                     * @param GpuMemory 显存配置, 单位为1M
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     */
                    bool GpuMemoryHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取支持AUTO, MANUAL
                     * @return ScaleMode 支持AUTO, MANUAL
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置支持AUTO, MANUAL
                     * @param ScaleMode 支持AUTO, MANUAL
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取弹性伸缩配置
                     * @return Scaler 弹性伸缩配置
                     */
                    Scaler GetScaler() const;

                    /**
                     * 设置弹性伸缩配置
                     * @param Scaler 弹性伸缩配置
                     */
                    void SetScaler(const Scaler& _scaler);

                    /**
                     * 判断参数 Scaler 是否已赋值
                     * @return Scaler 是否已赋值
                     */
                    bool ScalerHasBeenSet() const;

                    /**
                     * 获取服务状态
                     * @return Status 服务状态
                     */
                    ServiceStatus GetStatus() const;

                    /**
                     * 设置服务状态
                     * @param Status 服务状态
                     */
                    void SetStatus(const ServiceStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务地址
                     * @return ServingIp 服务地址
                     */
                    std::string GetServingIp() const;

                    /**
                     * 设置服务地址
                     * @param ServingIp 服务地址
                     */
                    void SetServingIp(const std::string& _servingIp);

                    /**
                     * 判断参数 ServingIp 是否已赋值
                     * @return ServingIp 是否已赋值
                     */
                    bool ServingIpHasBeenSet() const;

                    /**
                     * 获取访问密钥
                     * @return AccessToken 访问密钥
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置访问密钥
                     * @param AccessToken 访问密钥
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取服务配置Id
                     * @return ServiceConfigId 服务配置Id
                     */
                    int64_t GetServiceConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param ServiceConfigId 服务配置Id
                     */
                    void SetServiceConfigId(const int64_t& _serviceConfigId);

                    /**
                     * 判断参数 ServiceConfigId 是否已赋值
                     * @return ServiceConfigId 是否已赋值
                     */
                    bool ServiceConfigIdHasBeenSet() const;

                    /**
                     * 获取服务配置名
                     * @return ServiceConfigName 服务配置名
                     */
                    std::string GetServiceConfigName() const;

                    /**
                     * 设置服务配置名
                     * @param ServiceConfigName 服务配置名
                     */
                    void SetServiceConfigName(const std::string& _serviceConfigName);

                    /**
                     * 判断参数 ServiceConfigName 是否已赋值
                     * @return ServiceConfigName 是否已赋值
                     */
                    bool ServiceConfigNameHasBeenSet() const;

                    /**
                     * 获取服务运行时长
                     * @return ServeSeconds 服务运行时长
                     */
                    uint64_t GetServeSeconds() const;

                    /**
                     * 设置服务运行时长
                     * @param ServeSeconds 服务运行时长
                     */
                    void SetServeSeconds(const uint64_t& _serveSeconds);

                    /**
                     * 判断参数 ServeSeconds 是否已赋值
                     * @return ServeSeconds 是否已赋值
                     */
                    bool ServeSecondsHasBeenSet() const;

                    /**
                     * 获取配置版本
                     * @return ServiceConfigVersion 配置版本
                     */
                    std::string GetServiceConfigVersion() const;

                    /**
                     * 设置配置版本
                     * @param ServiceConfigVersion 配置版本
                     */
                    void SetServiceConfigVersion(const std::string& _serviceConfigVersion);

                    /**
                     * 判断参数 ServiceConfigVersion 是否已赋值
                     * @return ServiceConfigVersion 是否已赋值
                     */
                    bool ServiceConfigVersionHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 运行集群
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行环境
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 模型地址
                     */
                    std::string m_modelUri;
                    bool m_modelUriHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/1000核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存配置, 单位为1M
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 处理器配置, 单位为1/100 tflops
                     */
                    uint64_t m_tflopUnits;
                    bool m_tflopUnitsHasBeenSet;

                    /**
                     * 显存配置, 单位为1M
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 支持AUTO, MANUAL
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * 弹性伸缩配置
                     */
                    Scaler m_scaler;
                    bool m_scalerHasBeenSet;

                    /**
                     * 服务状态
                     */
                    ServiceStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务地址
                     */
                    std::string m_servingIp;
                    bool m_servingIpHasBeenSet;

                    /**
                     * 访问密钥
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 服务配置Id
                     */
                    int64_t m_serviceConfigId;
                    bool m_serviceConfigIdHasBeenSet;

                    /**
                     * 服务配置名
                     */
                    std::string m_serviceConfigName;
                    bool m_serviceConfigNameHasBeenSet;

                    /**
                     * 服务运行时长
                     */
                    uint64_t m_serveSeconds;
                    bool m_serveSecondsHasBeenSet;

                    /**
                     * 配置版本
                     */
                    std::string m_serviceConfigVersion;
                    bool m_serviceConfigVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_SERVICE_H_
