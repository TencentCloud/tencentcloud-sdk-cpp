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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeAclRule请求参数结构体
                */
                class DescribeAclRuleRequest : public AbstractModel
                {
                public:
                    DescribeAclRuleRequest();
                    ~DescribeAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @return InstanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @param _instanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ACL规则名
                     * @return RuleName ACL规则名
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL规则名
                     * @param _ruleName ACL规则名
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取ACL规则匹配类型 （PREFIXED：前缀匹配，PRESET：预设策略）
                     * @return PatternType ACL规则匹配类型 （PREFIXED：前缀匹配，PRESET：预设策略）
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL规则匹配类型 （PREFIXED：前缀匹配，PRESET：预设策略）
                     * @param _patternType ACL规则匹配类型 （PREFIXED：前缀匹配，PRESET：预设策略）
                     * 
                     */
                    void SetPatternType(const std::string& _patternType);

                    /**
                     * 判断参数 PatternType 是否已赋值
                     * @return PatternType 是否已赋值
                     * 
                     */
                    bool PatternTypeHasBeenSet() const;

                    /**
                     * 获取是否读取简略的ACL规则，默认值为false，表示不读取简略的ACL规则。
                     * @return IsSimplified 是否读取简略的ACL规则，默认值为false，表示不读取简略的ACL规则。
                     * 
                     */
                    bool GetIsSimplified() const;

                    /**
                     * 设置是否读取简略的ACL规则，默认值为false，表示不读取简略的ACL规则。
                     * @param _isSimplified 是否读取简略的ACL规则，默认值为false，表示不读取简略的ACL规则。
                     * 
                     */
                    void SetIsSimplified(const bool& _isSimplified);

                    /**
                     * 判断参数 IsSimplified 是否已赋值
                     * @return IsSimplified 是否已赋值
                     * 
                     */
                    bool IsSimplifiedHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ACL规则匹配类型 （PREFIXED：前缀匹配，PRESET：预设策略）
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * 是否读取简略的ACL规则，默认值为false，表示不读取简略的ACL规则。
                     */
                    bool m_isSimplified;
                    bool m_isSimplifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_
