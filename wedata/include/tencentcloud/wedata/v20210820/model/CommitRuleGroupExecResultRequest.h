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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPEXECRESULTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPEXECRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RunnerRuleExecResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CommitRuleGroupExecResult请求参数结构体
                */
                class CommitRuleGroupExecResultRequest : public AbstractModel
                {
                public:
                    CommitRuleGroupExecResultRequest();
                    ~CommitRuleGroupExecResultRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取规则组执行ID
                     * @return RuleGroupExecId 规则组执行ID
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置规则组执行ID
                     * @param _ruleGroupExecId 规则组执行ID
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取规则组执行状态
                     * @return RuleGroupState 规则组执行状态
                     * 
                     */
                    std::string GetRuleGroupState() const;

                    /**
                     * 设置规则组执行状态
                     * @param _ruleGroupState 规则组执行状态
                     * 
                     */
                    void SetRuleGroupState(const std::string& _ruleGroupState);

                    /**
                     * 判断参数 RuleGroupState 是否已赋值
                     * @return RuleGroupState 是否已赋值
                     * 
                     */
                    bool RuleGroupStateHasBeenSet() const;

                    /**
                     * 获取规则执行结果集合
                     * @return RuleExecResults 规则执行结果集合
                     * 
                     */
                    std::vector<RunnerRuleExecResult> GetRuleExecResults() const;

                    /**
                     * 设置规则执行结果集合
                     * @param _ruleExecResults 规则执行结果集合
                     * 
                     */
                    void SetRuleExecResults(const std::vector<RunnerRuleExecResult>& _ruleExecResults);

                    /**
                     * 判断参数 RuleExecResults 是否已赋值
                     * @return RuleExecResults 是否已赋值
                     * 
                     */
                    bool RuleExecResultsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则组执行ID
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * 规则组执行状态
                     */
                    std::string m_ruleGroupState;
                    bool m_ruleGroupStateHasBeenSet;

                    /**
                     * 规则执行结果集合
                     */
                    std::vector<RunnerRuleExecResult> m_ruleExecResults;
                    bool m_ruleExecResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPEXECRESULTREQUEST_H_
