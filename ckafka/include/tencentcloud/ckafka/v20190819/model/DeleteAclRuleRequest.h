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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLRULEREQUEST_H_

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
                * DeleteAclRule请求参数结构体
                */
                class DeleteAclRuleRequest : public AbstractModel
                {
                public:
                    DeleteAclRuleRequest();
                    ~DeleteAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id信息
                     * @return InstanceId 实例id信息
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id信息
                     * @param _instanceId 实例id信息
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
                     * 获取acl规则名称
                     * @return RuleName acl规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置acl规则名称
                     * @param _ruleName acl规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 实例id信息
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * acl规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEACLRULEREQUEST_H_
