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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRuleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateAclRule请求参数结构体
                */
                class CreateAclRuleRequest : public AbstractModel
                {
                public:
                    CreateAclRuleRequest();
                    ~CreateAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * @return ResourceType Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * @param _resourceType Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取ACL规则匹配类型，目前支持前缀匹配与预设策略，枚举值列表：PREFIXED/PRESET
                     * @return PatternType ACL规则匹配类型，目前支持前缀匹配与预设策略，枚举值列表：PREFIXED/PRESET
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL规则匹配类型，目前支持前缀匹配与预设策略，枚举值列表：PREFIXED/PRESET
                     * @param _patternType ACL规则匹配类型，目前支持前缀匹配与预设策略，枚举值列表：PREFIXED/PRESET
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
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取设置的ACL规则列表
                     * @return RuleList 设置的ACL规则列表
                     * 
                     */
                    std::vector<AclRuleInfo> GetRuleList() const;

                    /**
                     * 设置设置的ACL规则列表
                     * @param _ruleList 设置的ACL规则列表
                     * 
                     */
                    void SetRuleList(const std::vector<AclRuleInfo>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取表示前缀匹配的前缀的值
                     * @return Pattern 表示前缀匹配的前缀的值
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置表示前缀匹配的前缀的值
                     * @param _pattern 表示前缀匹配的前缀的值
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取预设ACL规则是否应用到新增的topic中
                     * @return IsApplied 预设ACL规则是否应用到新增的topic中
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置预设ACL规则是否应用到新增的topic中
                     * @param _isApplied 预设ACL规则是否应用到新增的topic中
                     * 
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     * 
                     */
                    bool IsAppliedHasBeenSet() const;

                    /**
                     * 获取ACL规则的备注
                     * @return Comment ACL规则的备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置ACL规则的备注
                     * @param _comment ACL规则的备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * ACL规则匹配类型，目前支持前缀匹配与预设策略，枚举值列表：PREFIXED/PRESET
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 设置的ACL规则列表
                     */
                    std::vector<AclRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * 表示前缀匹配的前缀的值
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 预设ACL规则是否应用到新增的topic中
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                    /**
                     * ACL规则的备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_
