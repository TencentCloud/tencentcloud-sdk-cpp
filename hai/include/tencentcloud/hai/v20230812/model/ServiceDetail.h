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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ComputeDetail.h>
#include <tencentcloud/hai/v20230812/model/DeploymentConfig.h>
#include <tencentcloud/hai/v20230812/model/HyperParam.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 服务详情
                */
                class ServiceDetail : public AbstractModel
                {
                public:
                    ServiceDetail();
                    ~ServiceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务id
                     * @return ServiceId 服务id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务id
                     * @param _serviceId 服务id
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
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取服务状态
                     * @return ServiceState 服务状态
                     * 
                     */
                    std::string GetServiceState() const;

                    /**
                     * 设置服务状态
                     * @param _serviceState 服务状态
                     * 
                     */
                    void SetServiceState(const std::string& _serviceState);

                    /**
                     * 判断参数 ServiceState 是否已赋值
                     * @return ServiceState 是否已赋值
                     * 
                     */
                    bool ServiceStateHasBeenSet() const;

                    /**
                     * 获取运行中的副本数
                     * @return RunningReplicas 运行中的副本数
                     * 
                     */
                    uint64_t GetRunningReplicas() const;

                    /**
                     * 设置运行中的副本数
                     * @param _runningReplicas 运行中的副本数
                     * 
                     */
                    void SetRunningReplicas(const uint64_t& _runningReplicas);

                    /**
                     * 判断参数 RunningReplicas 是否已赋值
                     * @return RunningReplicas 是否已赋值
                     * 
                     */
                    bool RunningReplicasHasBeenSet() const;

                    /**
                     * 获取期望的副本总数
                     * @return TotalReplicas 期望的副本总数
                     * 
                     */
                    uint64_t GetTotalReplicas() const;

                    /**
                     * 设置期望的副本总数
                     * @param _totalReplicas 期望的副本总数
                     * 
                     */
                    void SetTotalReplicas(const uint64_t& _totalReplicas);

                    /**
                     * 判断参数 TotalReplicas 是否已赋值
                     * @return TotalReplicas 是否已赋值
                     * 
                     */
                    bool TotalReplicasHasBeenSet() const;

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
                     * 获取算力套餐详情
                     * @return ComputeSet 算力套餐详情
                     * 
                     */
                    std::vector<ComputeDetail> GetComputeSet() const;

                    /**
                     * 设置算力套餐详情
                     * @param _computeSet 算力套餐详情
                     * 
                     */
                    void SetComputeSet(const std::vector<ComputeDetail>& _computeSet);

                    /**
                     * 判断参数 ComputeSet 是否已赋值
                     * @return ComputeSet 是否已赋值
                     * 
                     */
                    bool ComputeSetHasBeenSet() const;

                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取服务部署信息
                     * @return DeploymentConfigs 服务部署信息
                     * 
                     */
                    std::vector<DeploymentConfig> GetDeploymentConfigs() const;

                    /**
                     * 设置服务部署信息
                     * @param _deploymentConfigs 服务部署信息
                     * 
                     */
                    void SetDeploymentConfigs(const std::vector<DeploymentConfig>& _deploymentConfigs);

                    /**
                     * 判断参数 DeploymentConfigs 是否已赋值
                     * @return DeploymentConfigs 是否已赋值
                     * 
                     */
                    bool DeploymentConfigsHasBeenSet() const;

                    /**
                     * 获取服务超参数配置
                     * @return HyperParam 服务超参数配置
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置服务超参数配置
                     * @param _hyperParam 服务超参数配置
                     * 
                     */
                    void SetHyperParam(const HyperParam& _hyperParam);

                    /**
                     * 判断参数 HyperParam 是否已赋值
                     * @return HyperParam 是否已赋值
                     * 
                     */
                    bool HyperParamHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务状态
                     */
                    std::string m_serviceState;
                    bool m_serviceStateHasBeenSet;

                    /**
                     * 运行中的副本数
                     */
                    uint64_t m_runningReplicas;
                    bool m_runningReplicasHasBeenSet;

                    /**
                     * 期望的副本总数
                     */
                    uint64_t m_totalReplicas;
                    bool m_totalReplicasHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 算力套餐详情
                     */
                    std::vector<ComputeDetail> m_computeSet;
                    bool m_computeSetHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 服务部署信息
                     */
                    std::vector<DeploymentConfig> m_deploymentConfigs;
                    bool m_deploymentConfigsHasBeenSet;

                    /**
                     * 服务超参数配置
                     */
                    HyperParam m_hyperParam;
                    bool m_hyperParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEDETAIL_H_
