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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULERESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/PolicyRuleTaskAttribute.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribePolicyRule返回参数结构体
                */
                class DescribePolicyRuleResponse : public AbstractModel
                {
                public:
                    DescribePolicyRuleResponse();
                    ~DescribePolicyRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则任务详情</p>
                     * @return PolicyRuleTaskList <p>规则任务详情</p>
                     * 
                     */
                    std::vector<PolicyRuleTaskAttribute> GetPolicyRuleTaskList() const;

                    /**
                     * 判断参数 PolicyRuleTaskList 是否已赋值
                     * @return PolicyRuleTaskList 是否已赋值
                     * 
                     */
                    bool PolicyRuleTaskListHasBeenSet() const;

                    /**
                     * 获取<p>任务总数</p>
                     * @return TotalCount <p>任务总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>规则任务详情</p>
                     */
                    std::vector<PolicyRuleTaskAttribute> m_policyRuleTaskList;
                    bool m_policyRuleTaskListHasBeenSet;

                    /**
                     * <p>任务总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEPOLICYRULERESPONSE_H_
