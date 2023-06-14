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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleConfig.h>
#include <tencentcloud/wedata/v20210820/model/RuleExecConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CommitRuleGroupTask请求参数结构体
                */
                class CommitRuleGroupTaskRequest : public AbstractModel
                {
                public:
                    CommitRuleGroupTaskRequest();
                    ~CommitRuleGroupTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return RuleGroupId 规则组ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
                     * @param _ruleGroupId 规则组ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取触发类型 1.手动触发 2.调度事中触发 3.周期调度触发
                     * @return TriggerType 触发类型 1.手动触发 2.调度事中触发 3.周期调度触发
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置触发类型 1.手动触发 2.调度事中触发 3.周期调度触发
                     * @param _triggerType 触发类型 1.手动触发 2.调度事中触发 3.周期调度触发
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取规则配置列表
                     * @return ExecRuleConfig 规则配置列表
                     * 
                     */
                    std::vector<RuleConfig> GetExecRuleConfig() const;

                    /**
                     * 设置规则配置列表
                     * @param _execRuleConfig 规则配置列表
                     * 
                     */
                    void SetExecRuleConfig(const std::vector<RuleConfig>& _execRuleConfig);

                    /**
                     * 判断参数 ExecRuleConfig 是否已赋值
                     * @return ExecRuleConfig 是否已赋值
                     * 
                     */
                    bool ExecRuleConfigHasBeenSet() const;

                    /**
                     * 获取执行配置
                     * @return ExecConfig 执行配置
                     * 
                     */
                    RuleExecConfig GetExecConfig() const;

                    /**
                     * 设置执行配置
                     * @param _execConfig 执行配置
                     * 
                     */
                    void SetExecConfig(const RuleExecConfig& _execConfig);

                    /**
                     * 判断参数 ExecConfig 是否已赋值
                     * @return ExecConfig 是否已赋值
                     * 
                     */
                    bool ExecConfigHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取该规则运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * @return EngineType 该规则运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置该规则运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * @param _engineType 该规则运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 触发类型 1.手动触发 2.调度事中触发 3.周期调度触发
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 规则配置列表
                     */
                    std::vector<RuleConfig> m_execRuleConfig;
                    bool m_execRuleConfigHasBeenSet;

                    /**
                     * 执行配置
                     */
                    RuleExecConfig m_execConfig;
                    bool m_execConfigHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 该规则运行的执行引擎，不传时会请求该数据源下默认的执行引擎
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPTASKREQUEST_H_
