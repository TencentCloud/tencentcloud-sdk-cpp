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

                    /**
                     * 获取
                     * @return SecurityType 
                     * 
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置
                     * @param _securityType 
                     * 
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RoleComputeSet 
                     * 
                     */
                    std::vector<ComputeDetail> GetRoleComputeSet() const;

                    /**
                     * 设置
                     * @param _roleComputeSet 
                     * 
                     */
                    void SetRoleComputeSet(const std::vector<ComputeDetail>& _roleComputeSet);

                    /**
                     * 判断参数 RoleComputeSet 是否已赋值
                     * @return RoleComputeSet 是否已赋值
                     * 
                     */
                    bool RoleComputeSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetReplicas 
                     * 
                     */
                    uint64_t GetTargetReplicas() const;

                    /**
                     * 设置
                     * @param _targetReplicas 
                     * 
                     */
                    void SetTargetReplicas(const uint64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)
                     * @return ChargeType 计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)
                     * @param _chargeType 计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取到期时间(包月)，按量为空
                     * @return ExpireTime 到期时间(包月)，按量为空
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间(包月)，按量为空
                     * @param _expireTime 到期时间(包月)，按量为空
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标识(包月)
                     * @return RenewFlag 自动续费标识(包月)
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识(包月)
                     * @param _renewFlag 自动续费标识(包月)
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取受限状态(如欠费隔离)
                     * @return RestrictState 受限状态(如欠费隔离)
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置受限状态(如欠费隔离)
                     * @param _restrictState 受限状态(如欠费隔离)
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取是否自定义部署：1是 0否
                     * @return IsCustomDeploy 是否自定义部署：1是 0否
                     * 
                     */
                    int64_t GetIsCustomDeploy() const;

                    /**
                     * 设置是否自定义部署：1是 0否
                     * @param _isCustomDeploy 是否自定义部署：1是 0否
                     * 
                     */
                    void SetIsCustomDeploy(const int64_t& _isCustomDeploy);

                    /**
                     * 判断参数 IsCustomDeploy 是否已赋值
                     * @return IsCustomDeploy 是否已赋值
                     * 
                     */
                    bool IsCustomDeployHasBeenSet() const;

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

                    /**
                     * 
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ComputeDetail> m_roleComputeSet;
                    bool m_roleComputeSetHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * 计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 到期时间(包月)，按量为空
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标识(包月)
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 受限状态(如欠费隔离)
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * 是否自定义部署：1是 0否
                     */
                    int64_t m_isCustomDeploy;
                    bool m_isCustomDeployHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEDETAIL_H_
