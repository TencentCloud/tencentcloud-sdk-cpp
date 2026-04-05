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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULERESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateForwardingRule返回参数结构体
                */
                class CreateForwardingRuleResponse : public AbstractModel
                {
                public:
                    CreateForwardingRuleResponse();
                    ~CreateForwardingRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务ID。
                     * @return TaskId 异步任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取七层转发规则ID。
                     * @return ForwardingRuleId 七层转发规则ID。
                     * 
                     */
                    std::string GetForwardingRuleId() const;

                    /**
                     * 判断参数 ForwardingRuleId 是否已赋值
                     * @return ForwardingRuleId 是否已赋值
                     * 
                     */
                    bool ForwardingRuleIdHasBeenSet() const;

                private:

                    /**
                     * 异步任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 七层转发规则ID。
                     */
                    std::string m_forwardingRuleId;
                    bool m_forwardingRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULERESPONSE_H_
