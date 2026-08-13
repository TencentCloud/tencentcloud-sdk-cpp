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
                     * 获取<p>服务id</p>
                     * @return ServiceId <p>服务id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务id</p>
                     * @param _serviceId <p>服务id</p>
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
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
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
                     * 获取<p>服务状态</p>
                     * @return ServiceState <p>服务状态</p>
                     * 
                     */
                    std::string GetServiceState() const;

                    /**
                     * 设置<p>服务状态</p>
                     * @param _serviceState <p>服务状态</p>
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
                     * 获取<p>运行中的副本数</p>
                     * @return RunningReplicas <p>运行中的副本数</p>
                     * 
                     */
                    uint64_t GetRunningReplicas() const;

                    /**
                     * 设置<p>运行中的副本数</p>
                     * @param _runningReplicas <p>运行中的副本数</p>
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
                     * 获取<p>期望的副本总数</p>
                     * @return TotalReplicas <p>期望的副本总数</p>
                     * 
                     */
                    uint64_t GetTotalReplicas() const;

                    /**
                     * 设置<p>期望的副本总数</p>
                     * @param _totalReplicas <p>期望的副本总数</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>算力套餐详情</p>
                     * @return ComputeSet <p>算力套餐详情</p>
                     * 
                     */
                    std::vector<ComputeDetail> GetComputeSet() const;

                    /**
                     * 设置<p>算力套餐详情</p>
                     * @param _computeSet <p>算力套餐详情</p>
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
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
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
                     * 获取<p>服务部署信息</p>
                     * @return DeploymentConfigs <p>服务部署信息</p>
                     * 
                     */
                    std::vector<DeploymentConfig> GetDeploymentConfigs() const;

                    /**
                     * 设置<p>服务部署信息</p>
                     * @param _deploymentConfigs <p>服务部署信息</p>
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
                     * 获取<p>服务超参数配置</p>
                     * @return HyperParam <p>服务超参数配置</p>
                     * 
                     */
                    HyperParam GetHyperParam() const;

                    /**
                     * 设置<p>服务超参数配置</p>
                     * @param _hyperParam <p>服务超参数配置</p>
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
                     * 获取<p>安全类型</p>
                     * @return SecurityType <p>安全类型</p>
                     * 
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置<p>安全类型</p>
                     * @param _securityType <p>安全类型</p>
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
                     * 获取<p>角色算力配置列表</p>
                     * @return RoleComputeSet <p>角色算力配置列表</p>
                     * 
                     */
                    std::vector<ComputeDetail> GetRoleComputeSet() const;

                    /**
                     * 设置<p>角色算力配置列表</p>
                     * @param _roleComputeSet <p>角色算力配置列表</p>
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
                     * 获取<p>目标副本数</p>
                     * @return TargetReplicas <p>目标副本数</p>
                     * 
                     */
                    uint64_t GetTargetReplicas() const;

                    /**
                     * 设置<p>目标副本数</p>
                     * @param _targetReplicas <p>目标副本数</p>
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
                     * 获取<p>计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)</p>
                     * @return ChargeType <p>计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)</p>
                     * @param _chargeType <p>计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)</p>
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
                     * 获取<p>到期时间(包月)，按量为空</p>
                     * @return ExpireTime <p>到期时间(包月)，按量为空</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>到期时间(包月)，按量为空</p>
                     * @param _expireTime <p>到期时间(包月)，按量为空</p>
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
                     * 获取<p>自动续费标识(包月)</p>
                     * @return RenewFlag <p>自动续费标识(包月)</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识(包月)</p>
                     * @param _renewFlag <p>自动续费标识(包月)</p>
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
                     * 获取<p>受限状态(如欠费隔离)</p>
                     * @return RestrictState <p>受限状态(如欠费隔离)</p>
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置<p>受限状态(如欠费隔离)</p>
                     * @param _restrictState <p>受限状态(如欠费隔离)</p>
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
                     * 获取<p>是否自定义部署：1是 0否</p>
                     * @return IsCustomDeploy <p>是否自定义部署：1是 0否</p>
                     * 
                     */
                    int64_t GetIsCustomDeploy() const;

                    /**
                     * 设置<p>是否自定义部署：1是 0否</p>
                     * @param _isCustomDeploy <p>是否自定义部署：1是 0否</p>
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
                     * <p>服务id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务状态</p>
                     */
                    std::string m_serviceState;
                    bool m_serviceStateHasBeenSet;

                    /**
                     * <p>运行中的副本数</p>
                     */
                    uint64_t m_runningReplicas;
                    bool m_runningReplicasHasBeenSet;

                    /**
                     * <p>期望的副本总数</p>
                     */
                    uint64_t m_totalReplicas;
                    bool m_totalReplicasHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>算力套餐详情</p>
                     */
                    std::vector<ComputeDetail> m_computeSet;
                    bool m_computeSetHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>服务部署信息</p>
                     */
                    std::vector<DeploymentConfig> m_deploymentConfigs;
                    bool m_deploymentConfigsHasBeenSet;

                    /**
                     * <p>服务超参数配置</p>
                     */
                    HyperParam m_hyperParam;
                    bool m_hyperParamHasBeenSet;

                    /**
                     * <p>安全类型</p>
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * <p>角色算力配置列表</p>
                     */
                    std::vector<ComputeDetail> m_roleComputeSet;
                    bool m_roleComputeSetHasBeenSet;

                    /**
                     * <p>目标副本数</p>
                     */
                    uint64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * <p>计费类型：POSTPAID_BY_HOUR(按量)/PREPAID_BY_MONTH(包月)</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>到期时间(包月)，按量为空</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>自动续费标识(包月)</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>受限状态(如欠费隔离)</p>
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * <p>是否自定义部署：1是 0否</p>
                     */
                    int64_t m_isCustomDeploy;
                    bool m_isCustomDeployHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_SERVICEDETAIL_H_
