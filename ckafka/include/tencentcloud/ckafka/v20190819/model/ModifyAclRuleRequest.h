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
                     * 获取<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
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
                     * 获取<p>ACL规则名</p>
                     * @return RuleName <p>ACL规则名</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>ACL规则名</p>
                     * @param _ruleName <p>ACL规则名</p>
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
                     * 获取<p>修改预设规则时传入,是否应用到新增的Topic</p><p>枚举值：</p><ul><li>0： 不允许应用到新增的topic</li><li>1： 允许应用到新增的topic</li></ul><p>默认值：0</p>
                     * @return IsApplied <p>修改预设规则时传入,是否应用到新增的Topic</p><p>枚举值：</p><ul><li>0： 不允许应用到新增的topic</li><li>1： 允许应用到新增的topic</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置<p>修改预设规则时传入,是否应用到新增的Topic</p><p>枚举值：</p><ul><li>0： 不允许应用到新增的topic</li><li>1： 允许应用到新增的topic</li></ul><p>默认值：0</p>
                     * @param _isApplied <p>修改预设规则时传入,是否应用到新增的Topic</p><p>枚举值：</p><ul><li>0： 不允许应用到新增的topic</li><li>1： 允许应用到新增的topic</li></ul><p>默认值：0</p>
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
                     * <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ACL规则名</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>修改预设规则时传入,是否应用到新增的Topic</p><p>枚举值：</p><ul><li>0： 不允许应用到新增的topic</li><li>1： 允许应用到新增的topic</li></ul><p>默认值：0</p>
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYACLRULEREQUEST_H_
