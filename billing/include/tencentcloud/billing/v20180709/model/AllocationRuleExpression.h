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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账规则表达式
                */
                class AllocationRuleExpression : public AbstractModel
                {
                public:
                    AllocationRuleExpression();
                    ~AllocationRuleExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RuleKey：分账维度
枚举值：
ownerUin - 使用者UIN,
operateUin - 操作者UIN,
businessCode - 产品一层编码,
productCode - 产品二层编码,
itemCode - 产品四层编码,
projectId - 项目ID,
regionId - 地域ID,
resourceId - 资源ID,
tag - 标签键值对,
payMode - 计费模式,
instanceType - 实例类型,
actionType - 交易类型
                     * @return RuleKey RuleKey：分账维度
枚举值：
ownerUin - 使用者UIN,
operateUin - 操作者UIN,
businessCode - 产品一层编码,
productCode - 产品二层编码,
itemCode - 产品四层编码,
projectId - 项目ID,
regionId - 地域ID,
resourceId - 资源ID,
tag - 标签键值对,
payMode - 计费模式,
instanceType - 实例类型,
actionType - 交易类型
                     * 
                     */
                    std::string GetRuleKey() const;

                    /**
                     * 设置RuleKey：分账维度
枚举值：
ownerUin - 使用者UIN,
operateUin - 操作者UIN,
businessCode - 产品一层编码,
productCode - 产品二层编码,
itemCode - 产品四层编码,
projectId - 项目ID,
regionId - 地域ID,
resourceId - 资源ID,
tag - 标签键值对,
payMode - 计费模式,
instanceType - 实例类型,
actionType - 交易类型
                     * @param _ruleKey RuleKey：分账维度
枚举值：
ownerUin - 使用者UIN,
operateUin - 操作者UIN,
businessCode - 产品一层编码,
productCode - 产品二层编码,
itemCode - 产品四层编码,
projectId - 项目ID,
regionId - 地域ID,
resourceId - 资源ID,
tag - 标签键值对,
payMode - 计费模式,
instanceType - 实例类型,
actionType - 交易类型
                     * 
                     */
                    void SetRuleKey(const std::string& _ruleKey);

                    /**
                     * 判断参数 RuleKey 是否已赋值
                     * @return RuleKey 是否已赋值
                     * 
                     */
                    bool RuleKeyHasBeenSet() const;

                    /**
                     * 获取分账维度规则
枚举值：
in - 是
not in - 不是
                     * @return Operator 分账维度规则
枚举值：
in - 是
not in - 不是
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置分账维度规则
枚举值：
in - 是
not in - 不是
                     * @param _operator 分账维度规则
枚举值：
in - 是
not in - 不是
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取分账维度值，例如当RuleKey为businessCode时，["p_cbs","p_sqlserver"]表示产品一层是"p_cbs","p_sqlserver"的费用
                     * @return RuleValue 分账维度值，例如当RuleKey为businessCode时，["p_cbs","p_sqlserver"]表示产品一层是"p_cbs","p_sqlserver"的费用
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置分账维度值，例如当RuleKey为businessCode时，["p_cbs","p_sqlserver"]表示产品一层是"p_cbs","p_sqlserver"的费用
                     * @param _ruleValue 分账维度值，例如当RuleKey为businessCode时，["p_cbs","p_sqlserver"]表示产品一层是"p_cbs","p_sqlserver"的费用
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取分账逻辑连接词，枚举值如下：
and - 且
or - 或
                     * @return Connectors 分账逻辑连接词，枚举值如下：
and - 且
or - 或
                     * 
                     */
                    std::string GetConnectors() const;

                    /**
                     * 设置分账逻辑连接词，枚举值如下：
and - 且
or - 或
                     * @param _connectors 分账逻辑连接词，枚举值如下：
and - 且
or - 或
                     * 
                     */
                    void SetConnectors(const std::string& _connectors);

                    /**
                     * 判断参数 Connectors 是否已赋值
                     * @return Connectors 是否已赋值
                     * 
                     */
                    bool ConnectorsHasBeenSet() const;

                    /**
                     * 获取嵌套规则
                     * @return Children 嵌套规则
                     * 
                     */
                    std::vector<AllocationRuleExpression> GetChildren() const;

                    /**
                     * 设置嵌套规则
                     * @param _children 嵌套规则
                     * 
                     */
                    void SetChildren(const std::vector<AllocationRuleExpression>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * RuleKey：分账维度
枚举值：
ownerUin - 使用者UIN,
operateUin - 操作者UIN,
businessCode - 产品一层编码,
productCode - 产品二层编码,
itemCode - 产品四层编码,
projectId - 项目ID,
regionId - 地域ID,
resourceId - 资源ID,
tag - 标签键值对,
payMode - 计费模式,
instanceType - 实例类型,
actionType - 交易类型
                     */
                    std::string m_ruleKey;
                    bool m_ruleKeyHasBeenSet;

                    /**
                     * 分账维度规则
枚举值：
in - 是
not in - 不是
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 分账维度值，例如当RuleKey为businessCode时，["p_cbs","p_sqlserver"]表示产品一层是"p_cbs","p_sqlserver"的费用
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * 分账逻辑连接词，枚举值如下：
and - 且
or - 或
                     */
                    std::string m_connectors;
                    bool m_connectorsHasBeenSet;

                    /**
                     * 嵌套规则
                     */
                    std::vector<AllocationRuleExpression> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRULEEXPRESSION_H_
