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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListRemediationExecutions请求参数结构体
                */
                class ListRemediationExecutionsRequest : public AbstractModel
                {
                public:
                    ListRemediationExecutionsRequest();
                    ~ListRemediationExecutionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则 ID
                     * @return RuleId 规则 ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则 ID
                     * @param _ruleId 规则 ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取分页条数。默认20， 取值1~200
                     * @return Limit 分页条数。默认20， 取值1~200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页条数。默认20， 取值1~200
                     * @param _limit 分页条数。默认20， 取值1~200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取修正状态 1：运行中 2：成功 3：失败
                     * @return ExecutionStatus 修正状态 1：运行中 2：成功 3：失败
                     * 
                     */
                    uint64_t GetExecutionStatus() const;

                    /**
                     * 设置修正状态 1：运行中 2：成功 3：失败
                     * @param _executionStatus 修正状态 1：运行中 2：成功 3：失败
                     * 
                     */
                    void SetExecutionStatus(const uint64_t& _executionStatus);

                    /**
                     * 判断参数 ExecutionStatus 是否已赋值
                     * @return ExecutionStatus 是否已赋值
                     * 
                     */
                    bool ExecutionStatusHasBeenSet() const;

                private:

                    /**
                     * 规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 分页条数。默认20， 取值1~200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 修正状态 1：运行中 2：成功 3：失败
                     */
                    uint64_t m_executionStatus;
                    bool m_executionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONEXECUTIONSREQUEST_H_
