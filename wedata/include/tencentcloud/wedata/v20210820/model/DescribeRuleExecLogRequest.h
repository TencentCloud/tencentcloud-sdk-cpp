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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECLOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleExecLog请求参数结构体
                */
                class DescribeRuleExecLogRequest : public AbstractModel
                {
                public:
                    DescribeRuleExecLogRequest();
                    ~DescribeRuleExecLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则执行Id
                     * @return RuleExecId 规则执行Id
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置规则执行Id
                     * @param _ruleExecId 规则执行Id
                     * 
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     * 
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取规则组执行id
                     * @return RuleGroupExecId 规则组执行id
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置规则组执行id
                     * @param _ruleGroupExecId 规则组执行id
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                private:

                    /**
                     * 规则执行Id
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则组执行id
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECLOGREQUEST_H_
