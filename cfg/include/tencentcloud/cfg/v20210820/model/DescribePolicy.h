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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询-保护策略
                */
                class DescribePolicy : public AbstractModel
                {
                public:
                    DescribePolicy();
                    ~DescribePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保护策略ID列表
                     * @return TaskPolicyIdList 保护策略ID列表
                     * 
                     */
                    std::vector<std::string> GetTaskPolicyIdList() const;

                    /**
                     * 设置保护策略ID列表
                     * @param _taskPolicyIdList 保护策略ID列表
                     * 
                     */
                    void SetTaskPolicyIdList(const std::vector<std::string>& _taskPolicyIdList);

                    /**
                     * 判断参数 TaskPolicyIdList 是否已赋值
                     * @return TaskPolicyIdList 是否已赋值
                     * 
                     */
                    bool TaskPolicyIdListHasBeenSet() const;

                    /**
                     * 获取保护策略状态
                     * @return TaskPolicyStatus 保护策略状态
                     * 
                     */
                    std::string GetTaskPolicyStatus() const;

                    /**
                     * 设置保护策略状态
                     * @param _taskPolicyStatus 保护策略状态
                     * 
                     */
                    void SetTaskPolicyStatus(const std::string& _taskPolicyStatus);

                    /**
                     * 判断参数 TaskPolicyStatus 是否已赋值
                     * @return TaskPolicyStatus 是否已赋值
                     * 
                     */
                    bool TaskPolicyStatusHasBeenSet() const;

                    /**
                     * 获取策略规则
                     * @return TaskPolicyRule 策略规则
                     * 
                     */
                    std::string GetTaskPolicyRule() const;

                    /**
                     * 设置策略规则
                     * @param _taskPolicyRule 策略规则
                     * 
                     */
                    void SetTaskPolicyRule(const std::string& _taskPolicyRule);

                    /**
                     * 判断参数 TaskPolicyRule 是否已赋值
                     * @return TaskPolicyRule 是否已赋值
                     * 
                     */
                    bool TaskPolicyRuleHasBeenSet() const;

                    /**
                     * 获取护栏策略生效处理策略 1:顺序执行，2:暂停
                     * @return TaskPolicyDealType 护栏策略生效处理策略 1:顺序执行，2:暂停
                     * 
                     */
                    int64_t GetTaskPolicyDealType() const;

                    /**
                     * 设置护栏策略生效处理策略 1:顺序执行，2:暂停
                     * @param _taskPolicyDealType 护栏策略生效处理策略 1:顺序执行，2:暂停
                     * 
                     */
                    void SetTaskPolicyDealType(const int64_t& _taskPolicyDealType);

                    /**
                     * 判断参数 TaskPolicyDealType 是否已赋值
                     * @return TaskPolicyDealType 是否已赋值
                     * 
                     */
                    bool TaskPolicyDealTypeHasBeenSet() const;

                private:

                    /**
                     * 保护策略ID列表
                     */
                    std::vector<std::string> m_taskPolicyIdList;
                    bool m_taskPolicyIdListHasBeenSet;

                    /**
                     * 保护策略状态
                     */
                    std::string m_taskPolicyStatus;
                    bool m_taskPolicyStatusHasBeenSet;

                    /**
                     * 策略规则
                     */
                    std::string m_taskPolicyRule;
                    bool m_taskPolicyRuleHasBeenSet;

                    /**
                     * 护栏策略生效处理策略 1:顺序执行，2:暂停
                     */
                    int64_t m_taskPolicyDealType;
                    bool m_taskPolicyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_
