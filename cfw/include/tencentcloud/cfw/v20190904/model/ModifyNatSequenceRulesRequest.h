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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATSEQUENCERULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATSEQUENCERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RuleChangeItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyNatSequenceRules请求参数结构体
                */
                class ModifyNatSequenceRulesRequest : public AbstractModel
                {
                public:
                    ModifyNatSequenceRulesRequest();
                    ~ModifyNatSequenceRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则快速排序：OrderIndex，原始序号；NewOrderIndex：新序号
                     * @return RuleChangeItems 规则快速排序：OrderIndex，原始序号；NewOrderIndex：新序号
                     * 
                     */
                    std::vector<RuleChangeItem> GetRuleChangeItems() const;

                    /**
                     * 设置规则快速排序：OrderIndex，原始序号；NewOrderIndex：新序号
                     * @param _ruleChangeItems 规则快速排序：OrderIndex，原始序号；NewOrderIndex：新序号
                     * 
                     */
                    void SetRuleChangeItems(const std::vector<RuleChangeItem>& _ruleChangeItems);

                    /**
                     * 判断参数 RuleChangeItems 是否已赋值
                     * @return RuleChangeItems 是否已赋值
                     * 
                     */
                    bool RuleChangeItemsHasBeenSet() const;

                    /**
                     * 获取规则方向：1，入站；0，出站
                     * @return Direction 规则方向：1，入站；0，出站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置规则方向：1，入站；0，出站
                     * @param _direction 规则方向：1，入站；0，出站
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 规则快速排序：OrderIndex，原始序号；NewOrderIndex：新序号
                     */
                    std::vector<RuleChangeItem> m_ruleChangeItems;
                    bool m_ruleChangeItemsHasBeenSet;

                    /**
                     * 规则方向：1，入站；0，出站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATSEQUENCERULESREQUEST_H_
