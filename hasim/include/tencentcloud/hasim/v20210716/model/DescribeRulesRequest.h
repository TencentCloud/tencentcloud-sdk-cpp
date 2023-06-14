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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULESREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeRules请求参数结构体
                */
                class DescribeRulesRequest : public AbstractModel
                {
                public:
                    DescribeRulesRequest();
                    ~DescribeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动化规则ID
                     * @return RuleID 自动化规则ID
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置自动化规则ID
                     * @param _ruleID 自动化规则ID
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取自动化规则ID
                     * @return RuleIDs 自动化规则ID
                     * 
                     */
                    std::vector<int64_t> GetRuleIDs() const;

                    /**
                     * 设置自动化规则ID
                     * @param _ruleIDs 自动化规则ID
                     * 
                     */
                    void SetRuleIDs(const std::vector<int64_t>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否激活
                     * @return IsActive 是否激活
                     * 
                     */
                    int64_t GetIsActive() const;

                    /**
                     * 设置是否激活
                     * @param _isActive 是否激活
                     * 
                     */
                    void SetIsActive(const int64_t& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取翻页大小
                     * @return Limit 翻页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页大小
                     * @param _limit 翻页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页偏移
                     * @return Offset 翻页偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移
                     * @param _offset 翻页偏移
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 自动化规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 自动化规则ID
                     */
                    std::vector<int64_t> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否激活
                     */
                    int64_t m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 翻页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULESREQUEST_H_
