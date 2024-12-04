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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_

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
                * ModifyAclRule请求参数结构体
                */
                class ModifyAclRuleRequest : public AbstractModel
                {
                public:
                    ModifyAclRuleRequest();
                    ~ModifyAclRuleRequest() = default;
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
                     * 获取修改预设规则时传入,是否应用到新增的Topic
                     * @return IsApplied 修改预设规则时传入,是否应用到新增的Topic
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置修改预设规则时传入,是否应用到新增的Topic
                     * @param _isApplied 修改预设规则时传入,是否应用到新增的Topic
                     * 
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     * 
                     */
                    bool IsAppliedHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 修改预设规则时传入,是否应用到新增的Topic
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_
