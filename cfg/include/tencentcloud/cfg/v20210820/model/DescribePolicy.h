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
                     * 获取<p>保护策略ID列表</p>
                     * @return TaskPolicyIdList <p>保护策略ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetTaskPolicyIdList() const;

                    /**
                     * 设置<p>保护策略ID列表</p>
                     * @param _taskPolicyIdList <p>保护策略ID列表</p>
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
                     * 获取<p>保护策略状态</p><p>枚举值：</p><ul><li>已触发： 表示已触发护栏策略</li><li>未触发： 表示未触发护栏策略</li><li>已恢复： 表示护栏策略已恢复</li></ul>
                     * @return TaskPolicyStatus <p>保护策略状态</p><p>枚举值：</p><ul><li>已触发： 表示已触发护栏策略</li><li>未触发： 表示未触发护栏策略</li><li>已恢复： 表示护栏策略已恢复</li></ul>
                     * 
                     */
                    std::string GetTaskPolicyStatus() const;

                    /**
                     * 设置<p>保护策略状态</p><p>枚举值：</p><ul><li>已触发： 表示已触发护栏策略</li><li>未触发： 表示未触发护栏策略</li><li>已恢复： 表示护栏策略已恢复</li></ul>
                     * @param _taskPolicyStatus <p>保护策略状态</p><p>枚举值：</p><ul><li>已触发： 表示已触发护栏策略</li><li>未触发： 表示未触发护栏策略</li><li>已恢复： 表示护栏策略已恢复</li></ul>
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
                     * 获取<p>策略规则</p>
                     * @return TaskPolicyRule <p>策略规则</p>
                     * 
                     */
                    std::string GetTaskPolicyRule() const;

                    /**
                     * 设置<p>策略规则</p>
                     * @param _taskPolicyRule <p>策略规则</p>
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
                     * 获取<p>护栏策略生效处理策略 1:顺序执行，2:暂停</p>
                     * @return TaskPolicyDealType <p>护栏策略生效处理策略 1:顺序执行，2:暂停</p>
                     * 
                     */
                    int64_t GetTaskPolicyDealType() const;

                    /**
                     * 设置<p>护栏策略生效处理策略 1:顺序执行，2:暂停</p>
                     * @param _taskPolicyDealType <p>护栏策略生效处理策略 1:顺序执行，2:暂停</p>
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
                     * <p>保护策略ID列表</p>
                     */
                    std::vector<std::string> m_taskPolicyIdList;
                    bool m_taskPolicyIdListHasBeenSet;

                    /**
                     * <p>保护策略状态</p><p>枚举值：</p><ul><li>已触发： 表示已触发护栏策略</li><li>未触发： 表示未触发护栏策略</li><li>已恢复： 表示护栏策略已恢复</li></ul>
                     */
                    std::string m_taskPolicyStatus;
                    bool m_taskPolicyStatusHasBeenSet;

                    /**
                     * <p>策略规则</p>
                     */
                    std::string m_taskPolicyRule;
                    bool m_taskPolicyRuleHasBeenSet;

                    /**
                     * <p>护栏策略生效处理策略 1:顺序执行，2:暂停</p>
                     */
                    int64_t m_taskPolicyDealType;
                    bool m_taskPolicyDealTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEPOLICY_H_
