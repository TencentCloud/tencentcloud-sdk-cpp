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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_MODELSERVICE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_MODELSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Scaler.h>
#include <tencentcloud/tiems/v20190416/model/ServiceStatus.h>
#include <tencentcloud/tiems/v20190416/model/ExposeInfo.h>


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
                class ModelService : public AbstractModel
                {
                public:
                    ModelService();
                    ~ModelService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return Id 服务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置服务ID
                     * @param _id 服务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取运行集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cluster 运行集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置运行集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cluster 运行集群
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param _name 服务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取运行环境
                     * @return Runtime 运行环境
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行环境
                     * @param _runtime 运行环境
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取模型地址
                     * @return ModelUri 模型地址
                     * 
                     */
                    std::string GetModelUri() const;

                    /**
                     * 设置模型地址
                     * @param _modelUri 模型地址
                     * 
                     */
                    void SetModelUri(const std::string& _modelUri);

                    /**
                     * 判断参数 ModelUri 是否已赋值
                     * @return ModelUri 是否已赋值
                     * 
                     */
                    bool ModelUriHasBeenSet() const;

                    /**
                     * 获取处理器配置, 单位为1/1000核
                     * @return Cpu 处理器配置, 单位为1/1000核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置处理器配置, 单位为1/1000核
                     * @param _cpu 处理器配置, 单位为1/1000核
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
                     * 获取内存配置, 单位为1M
                     * @return Memory 内存配置, 单位为1M
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存配置, 单位为1M
                     * @param _memory 内存配置, 单位为1M
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
                     * 获取GPU 配置, 单位为1/1000 卡
                     * @return Gpu GPU 配置, 单位为1/1000 卡
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置GPU 配置, 单位为1/1000 卡
                     * @param _gpu GPU 配置, 单位为1/1000 卡
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
                     * 获取显存配置, 单位为1M
                     * @return GpuMemory 显存配置, 单位为1M
                     * 
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置显存配置, 单位为1M
                     * @param _gpuMemory 显存配置, 单位为1M
                     * 
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     * 
                     */
                    bool GpuMemoryHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取支持AUTO, MANUAL
                     * @return ScaleMode 支持AUTO, MANUAL
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置支持AUTO, MANUAL
                     * @param _scaleMode 支持AUTO, MANUAL
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
                     * 获取弹性伸缩配置
                     * @return Scaler 弹性伸缩配置
                     * 
                     */
                    Scaler GetScaler() const;

                    /**
                     * 设置弹性伸缩配置
                     * @param _scaler 弹性伸缩配置
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
                     * 获取服务状态
                     * @return Status 服务状态
                     * 
                     */
                    ServiceStatus GetStatus() const;

                    /**
                     * 设置服务状态
                     * @param _status 服务状态
                     * 
                     */
                    void SetStatus(const ServiceStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessToken 访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessToken 访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取服务配置Id
                     * @return ConfigId 服务配置Id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置服务配置Id
                     * @param _configId 服务配置Id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取服务配置名
                     * @return ConfigName 服务配置名
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置服务配置名
                     * @param _configName 服务配置名
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取服务运行时长
                     * @return ServeSeconds 服务运行时长
                     * 
                     */
                    uint64_t GetServeSeconds() const;

                    /**
                     * 设置服务运行时长
                     * @param _serveSeconds 服务运行时长
                     * 
                     */
                    void SetServeSeconds(const uint64_t& _serveSeconds);

                    /**
                     * 判断参数 ServeSeconds 是否已赋值
                     * @return ServeSeconds 是否已赋值
                     * 
                     */
                    bool ServeSecondsHasBeenSet() const;

                    /**
                     * 获取配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigVersion 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigVersion() const;

                    /**
                     * 设置配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configVersion 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigVersion(const std::string& _configVersion);

                    /**
                     * 判断参数 ConfigVersion 是否已赋值
                     * @return ConfigVersion 是否已赋值
                     * 
                     */
                    bool ConfigVersionHasBeenSet() const;

                    /**
                     * 获取服务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 服务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置服务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 服务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取暴露方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exposes 暴露方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExposeInfo> GetExposes() const;

                    /**
                     * 设置暴露方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exposes 暴露方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExposes(const std::vector<ExposeInfo>& _exposes);

                    /**
                     * 判断参数 Exposes 是否已赋值
                     * @return Exposes 是否已赋值
                     * 
                     */
                    bool ExposesHasBeenSet() const;

                    /**
                     * 获取Region 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region Region 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region Region 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取服务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 服务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置服务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 服务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType GPU类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Cls日志主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId Cls日志主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 设置Cls日志主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTopicId Cls日志主题Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 服务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 运行集群
注意：此字段可能返回 null，表示取不到有效值。
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
                     * GPU 配置, 单位为1/1000 卡
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

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
                     * 访问密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * 服务配置Id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 服务配置名
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 服务运行时长
                     */
                    uint64_t m_serveSeconds;
                    bool m_serveSecondsHasBeenSet;

                    /**
                     * 配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configVersion;
                    bool m_configVersionHasBeenSet;

                    /**
                     * 服务使用资源组 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 暴露方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExposeInfo> m_exposes;
                    bool m_exposesHasBeenSet;

                    /**
                     * Region 名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 服务使用资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * GPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * Cls日志主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_MODELSERVICE_H_
