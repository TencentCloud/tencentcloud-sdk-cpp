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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * LLM 审计告警数据结构
                */
                class TrafficSandboxLLMAuditAlertInfo : public AbstractModel
                {
                public:
                    TrafficSandboxLLMAuditAlertInfo();
                    ~TrafficSandboxLLMAuditAlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警记录 ID</p>
                     * @return ID <p>告警记录 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>告警记录 ID</p>
                     * @param _iD <p>告警记录 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @return BelongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置<p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * @param _belongAssetType <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>命中的用户规则 ID</p>
                     * @return RuleID <p>命中的用户规则 ID</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>命中的用户规则 ID</p>
                     * @param _ruleID <p>命中的用户规则 ID</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>命中的用户规则名称</p>
                     * @return RuleName <p>命中的用户规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>命中的用户规则名称</p>
                     * @param _ruleName <p>命中的用户规则名称</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>命中的 LLM 审计系统规则名称</p>
                     * @return SystemRuleName <p>命中的 LLM 审计系统规则名称</p>
                     * 
                     */
                    std::string GetSystemRuleName() const;

                    /**
                     * 设置<p>命中的 LLM 审计系统规则名称</p>
                     * @param _systemRuleName <p>命中的 LLM 审计系统规则名称</p>
                     * 
                     */
                    void SetSystemRuleName(const std::string& _systemRuleName);

                    /**
                     * 判断参数 SystemRuleName 是否已赋值
                     * @return SystemRuleName 是否已赋值
                     * 
                     */
                    bool SystemRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>容器 ID</p>
                     * @return ContainerId <p>容器 ID</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器 ID</p>
                     * @param _containerId <p>容器 ID</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>容器名称</p>
                     * @return ContainerName <p>容器名称</p>
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名称</p>
                     * @param _containerName <p>容器名称</p>
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>命中风险描述</p>
                     * @return HitPayload <p>命中风险描述</p>
                     * 
                     */
                    std::string GetHitPayload() const;

                    /**
                     * 设置<p>命中风险描述</p>
                     * @param _hitPayload <p>命中风险描述</p>
                     * 
                     */
                    void SetHitPayload(const std::string& _hitPayload);

                    /**
                     * 判断参数 HitPayload 是否已赋值
                     * @return HitPayload 是否已赋值
                     * 
                     */
                    bool HitPayloadHasBeenSet() const;

                    /**
                     * 获取<p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * @return RuleAction <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置<p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * @param _ruleAction <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @return Level <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * @param _level <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * @return Status <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * @param _status <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>首次告警时间</p>
                     * @return FirstAlertTime <p>首次告警时间</p>
                     * 
                     */
                    std::string GetFirstAlertTime() const;

                    /**
                     * 设置<p>首次告警时间</p>
                     * @param _firstAlertTime <p>首次告警时间</p>
                     * 
                     */
                    void SetFirstAlertTime(const std::string& _firstAlertTime);

                    /**
                     * 判断参数 FirstAlertTime 是否已赋值
                     * @return FirstAlertTime 是否已赋值
                     * 
                     */
                    bool FirstAlertTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后告警时间</p>
                     * @return LastAlertTime <p>最后告警时间</p>
                     * 
                     */
                    std::string GetLastAlertTime() const;

                    /**
                     * 设置<p>最后告警时间</p>
                     * @param _lastAlertTime <p>最后告警时间</p>
                     * 
                     */
                    void SetLastAlertTime(const std::string& _lastAlertTime);

                    /**
                     * 判断参数 LastAlertTime 是否已赋值
                     * @return LastAlertTime 是否已赋值
                     * 
                     */
                    bool LastAlertTimeHasBeenSet() const;

                private:

                    /**
                     * <p>告警记录 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>归属资产类型<br>枚举值：<br>HOST：主机<br>CONTAINER：容器</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>命中的用户规则 ID</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>命中的用户规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>命中的 LLM 审计系统规则名称</p>
                     */
                    std::string m_systemRuleName;
                    bool m_systemRuleNameHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>容器 ID</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>容器名称</p>
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>命中风险描述</p>
                     */
                    std::string m_hitPayload;
                    bool m_hitPayloadHasBeenSet;

                    /**
                     * <p>命中动作<br>枚举值：<br>PASS：加白<br>BLOCK：拦截并告警<br>MONITOR：告警</p>
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>告警级别<br>枚举值：<br>INFO：提示<br>LOW：低危<br>MEDIUM：中危<br>HIGH：高危<br>CRITICAL：严重</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>处理状态<br>枚举值：<br>PENDING：未处理<br>HANDLED：已处理<br>IGNORE：已忽略<br>PASS：已加白<br>BLOCK：已拦截</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>首次告警时间</p>
                     */
                    std::string m_firstAlertTime;
                    bool m_firstAlertTimeHasBeenSet;

                    /**
                     * <p>最后告警时间</p>
                     */
                    std::string m_lastAlertTime;
                    bool m_lastAlertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXLLMAUDITALERTINFO_H_
