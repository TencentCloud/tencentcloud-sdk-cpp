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
                     * 获取preject id
                     * @return ProjectId preject id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置preject id
                     * @param _projectId preject id
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
                     * 获取rule group exec id
                     * @return RuleGroupExecId rule group exec id
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置rule group exec id
                     * @param _ruleGroupExecId rule group exec id
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
                     * 获取group exec state
                     * @return RuleGroupState group exec state
                     * 
                     */
                    std::string GetRuleGroupState() const;

                    /**
                     * 设置group exec state
                     * @param _ruleGroupState group exec state
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
                     * 获取runner rule exec result list
                     * @return RuleExecResults runner rule exec result list
                     * 
                     */
                    std::vector<RunnerRuleExecResult> GetRuleExecResults() const;

                    /**
                     * 设置runner rule exec result list
                     * @param _ruleExecResults runner rule exec result list
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
                     * preject id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * rule group exec id
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * group exec state
                     */
                    std::string m_ruleGroupState;
                    bool m_ruleGroupStateHasBeenSet;

                    /**
                     * runner rule exec result list
                     */
                    std::vector<RunnerRuleExecResult> m_ruleExecResults;
                    bool m_ruleExecResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITRULEGROUPEXECRESULTREQUEST_H_
