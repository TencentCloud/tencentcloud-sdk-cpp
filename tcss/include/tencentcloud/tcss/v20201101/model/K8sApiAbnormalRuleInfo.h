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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * k8a api 异常请求规则详情
                */
                class K8sApiAbnormalRuleInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleInfo();
                    ~K8sApiAbnormalRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则信息列表
                     * @return RuleInfoList 规则信息列表
                     * 
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> GetRuleInfoList() const;

                    /**
                     * 设置规则信息列表
                     * @param _ruleInfoList 规则信息列表
                     * 
                     */
                    void SetRuleInfoList(const std::vector<K8sApiAbnormalRuleScopeInfo>& _ruleInfoList);

                    /**
                     * 判断参数 RuleInfoList 是否已赋值
                     * @return RuleInfoList 是否已赋值
                     * 
                     */
                    bool RuleInfoListHasBeenSet() const;

                    /**
                     * 获取生效集群IDSet
                     * @return EffectClusterIDSet 生效集群IDSet
                     * 
                     */
                    std::vector<std::string> GetEffectClusterIDSet() const;

                    /**
                     * 设置生效集群IDSet
                     * @param _effectClusterIDSet 生效集群IDSet
                     * 
                     */
                    void SetEffectClusterIDSet(const std::vector<std::string>& _effectClusterIDSet);

                    /**
                     * 判断参数 EffectClusterIDSet 是否已赋值
                     * @return EffectClusterIDSet 是否已赋值
                     * 
                     */
                    bool EffectClusterIDSetHasBeenSet() const;

                    /**
                     * 获取规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * @return RuleType 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * @param _ruleType 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取是否所有集群生效
                     * @return EffectAllCluster 是否所有集群生效
                     * 
                     */
                    bool GetEffectAllCluster() const;

                    /**
                     * 设置是否所有集群生效
                     * @param _effectAllCluster 是否所有集群生效
                     * 
                     */
                    void SetEffectAllCluster(const bool& _effectAllCluster);

                    /**
                     * 判断参数 EffectAllCluster 是否已赋值
                     * @return EffectAllCluster 是否已赋值
                     * 
                     */
                    bool EffectAllClusterHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleID 规则ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _ruleID 规则ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 状态
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则信息列表
                     */
                    std::vector<K8sApiAbnormalRuleScopeInfo> m_ruleInfoList;
                    bool m_ruleInfoListHasBeenSet;

                    /**
                     * 生效集群IDSet
                     */
                    std::vector<std::string> m_effectClusterIDSet;
                    bool m_effectClusterIDSetHasBeenSet;

                    /**
                     * 规则类型
RT_SYSTEM 系统规则
RT_USER 用户自定义
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 是否所有集群生效
                     */
                    bool m_effectAllCluster;
                    bool m_effectAllClusterHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULEINFO_H_
