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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongActiveHealthCheck.h>
#include <tencentcloud/tse/v20201207/model/KongPassiveHealthCheck.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关健康检查配置
                */
                class UpstreamHealthCheckConfig : public AbstractModel
                {
                public:
                    UpstreamHealthCheckConfig();
                    ~UpstreamHealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启主动健康检查
                     * @return EnableActiveHealthCheck 开启主动健康检查
                     * 
                     */
                    bool GetEnableActiveHealthCheck() const;

                    /**
                     * 设置开启主动健康检查
                     * @param _enableActiveHealthCheck 开启主动健康检查
                     * 
                     */
                    void SetEnableActiveHealthCheck(const bool& _enableActiveHealthCheck);

                    /**
                     * 判断参数 EnableActiveHealthCheck 是否已赋值
                     * @return EnableActiveHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableActiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取主动健康检查配置
                     * @return ActiveHealthCheck 主动健康检查配置
                     * 
                     */
                    KongActiveHealthCheck GetActiveHealthCheck() const;

                    /**
                     * 设置主动健康检查配置
                     * @param _activeHealthCheck 主动健康检查配置
                     * 
                     */
                    void SetActiveHealthCheck(const KongActiveHealthCheck& _activeHealthCheck);

                    /**
                     * 判断参数 ActiveHealthCheck 是否已赋值
                     * @return ActiveHealthCheck 是否已赋值
                     * 
                     */
                    bool ActiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取开启被动健康检查
                     * @return EnablePassiveHealthCheck 开启被动健康检查
                     * 
                     */
                    bool GetEnablePassiveHealthCheck() const;

                    /**
                     * 设置开启被动健康检查
                     * @param _enablePassiveHealthCheck 开启被动健康检查
                     * 
                     */
                    void SetEnablePassiveHealthCheck(const bool& _enablePassiveHealthCheck);

                    /**
                     * 判断参数 EnablePassiveHealthCheck 是否已赋值
                     * @return EnablePassiveHealthCheck 是否已赋值
                     * 
                     */
                    bool EnablePassiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取被动健康检查配置
                     * @return PassiveHealthCheck 被动健康检查配置
                     * 
                     */
                    KongPassiveHealthCheck GetPassiveHealthCheck() const;

                    /**
                     * 设置被动健康检查配置
                     * @param _passiveHealthCheck 被动健康检查配置
                     * 
                     */
                    void SetPassiveHealthCheck(const KongPassiveHealthCheck& _passiveHealthCheck);

                    /**
                     * 判断参数 PassiveHealthCheck 是否已赋值
                     * @return PassiveHealthCheck 是否已赋值
                     * 
                     */
                    bool PassiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取连续健康阈值，单位：次
                     * @return Successes 连续健康阈值，单位：次
                     * 
                     */
                    uint64_t GetSuccesses() const;

                    /**
                     * 设置连续健康阈值，单位：次
                     * @param _successes 连续健康阈值，单位：次
                     * 
                     */
                    void SetSuccesses(const uint64_t& _successes);

                    /**
                     * 判断参数 Successes 是否已赋值
                     * @return Successes 是否已赋值
                     * 
                     */
                    bool SuccessesHasBeenSet() const;

                    /**
                     * 获取连续异常阈值，单位：次	
                     * @return Failures 连续异常阈值，单位：次	
                     * 
                     */
                    uint64_t GetFailures() const;

                    /**
                     * 设置连续异常阈值，单位：次	
                     * @param _failures 连续异常阈值，单位：次	
                     * 
                     */
                    void SetFailures(const uint64_t& _failures);

                    /**
                     * 判断参数 Failures 是否已赋值
                     * @return Failures 是否已赋值
                     * 
                     */
                    bool FailuresHasBeenSet() const;

                    /**
                     * 获取超时阈值，单位：次
                     * @return Timeouts 超时阈值，单位：次
                     * 
                     */
                    uint64_t GetTimeouts() const;

                    /**
                     * 设置超时阈值，单位：次
                     * @param _timeouts 超时阈值，单位：次
                     * 
                     */
                    void SetTimeouts(const uint64_t& _timeouts);

                    /**
                     * 判断参数 Timeouts 是否已赋值
                     * @return Timeouts 是否已赋值
                     * 
                     */
                    bool TimeoutsHasBeenSet() const;

                    /**
                     * 获取健康HTTP状态码
                     * @return HealthyHttpStatuses 健康HTTP状态码
                     * 
                     */
                    std::vector<uint64_t> GetHealthyHttpStatuses() const;

                    /**
                     * 设置健康HTTP状态码
                     * @param _healthyHttpStatuses 健康HTTP状态码
                     * 
                     */
                    void SetHealthyHttpStatuses(const std::vector<uint64_t>& _healthyHttpStatuses);

                    /**
                     * 判断参数 HealthyHttpStatuses 是否已赋值
                     * @return HealthyHttpStatuses 是否已赋值
                     * 
                     */
                    bool HealthyHttpStatusesHasBeenSet() const;

                    /**
                     * 获取异常HTTP状态码
                     * @return UnhealthyHttpStatuses 异常HTTP状态码
                     * 
                     */
                    std::vector<uint64_t> GetUnhealthyHttpStatuses() const;

                    /**
                     * 设置异常HTTP状态码
                     * @param _unhealthyHttpStatuses 异常HTTP状态码
                     * 
                     */
                    void SetUnhealthyHttpStatuses(const std::vector<uint64_t>& _unhealthyHttpStatuses);

                    /**
                     * 判断参数 UnhealthyHttpStatuses 是否已赋值
                     * @return UnhealthyHttpStatuses 是否已赋值
                     * 
                     */
                    bool UnhealthyHttpStatusesHasBeenSet() const;

                    /**
                     * 获取健康检查监控上报的数据屏蔽权重为0的节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreZeroWeightNodes 健康检查监控上报的数据屏蔽权重为0的节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetIgnoreZeroWeightNodes() const;

                    /**
                     * 设置健康检查监控上报的数据屏蔽权重为0的节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreZeroWeightNodes 健康检查监控上报的数据屏蔽权重为0的节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIgnoreZeroWeightNodes(const bool& _ignoreZeroWeightNodes);

                    /**
                     * 判断参数 IgnoreZeroWeightNodes 是否已赋值
                     * @return IgnoreZeroWeightNodes 是否已赋值
                     * @deprecated
                     */
                    bool IgnoreZeroWeightNodesHasBeenSet() const;

                    /**
                     * 获取健康检查支持权重为0节点
                     * @return ZeroWeightHeathCheck 健康检查支持权重为0节点
                     * 
                     */
                    bool GetZeroWeightHeathCheck() const;

                    /**
                     * 设置健康检查支持权重为0节点
                     * @param _zeroWeightHeathCheck 健康检查支持权重为0节点
                     * 
                     */
                    void SetZeroWeightHeathCheck(const bool& _zeroWeightHeathCheck);

                    /**
                     * 判断参数 ZeroWeightHeathCheck 是否已赋值
                     * @return ZeroWeightHeathCheck 是否已赋值
                     * 
                     */
                    bool ZeroWeightHeathCheckHasBeenSet() const;

                private:

                    /**
                     * 开启主动健康检查
                     */
                    bool m_enableActiveHealthCheck;
                    bool m_enableActiveHealthCheckHasBeenSet;

                    /**
                     * 主动健康检查配置
                     */
                    KongActiveHealthCheck m_activeHealthCheck;
                    bool m_activeHealthCheckHasBeenSet;

                    /**
                     * 开启被动健康检查
                     */
                    bool m_enablePassiveHealthCheck;
                    bool m_enablePassiveHealthCheckHasBeenSet;

                    /**
                     * 被动健康检查配置
                     */
                    KongPassiveHealthCheck m_passiveHealthCheck;
                    bool m_passiveHealthCheckHasBeenSet;

                    /**
                     * 连续健康阈值，单位：次
                     */
                    uint64_t m_successes;
                    bool m_successesHasBeenSet;

                    /**
                     * 连续异常阈值，单位：次	
                     */
                    uint64_t m_failures;
                    bool m_failuresHasBeenSet;

                    /**
                     * 超时阈值，单位：次
                     */
                    uint64_t m_timeouts;
                    bool m_timeoutsHasBeenSet;

                    /**
                     * 健康HTTP状态码
                     */
                    std::vector<uint64_t> m_healthyHttpStatuses;
                    bool m_healthyHttpStatusesHasBeenSet;

                    /**
                     * 异常HTTP状态码
                     */
                    std::vector<uint64_t> m_unhealthyHttpStatuses;
                    bool m_unhealthyHttpStatusesHasBeenSet;

                    /**
                     * 健康检查监控上报的数据屏蔽权重为0的节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreZeroWeightNodes;
                    bool m_ignoreZeroWeightNodesHasBeenSet;

                    /**
                     * 健康检查支持权重为0节点
                     */
                    bool m_zeroWeightHeathCheck;
                    bool m_zeroWeightHeathCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_
