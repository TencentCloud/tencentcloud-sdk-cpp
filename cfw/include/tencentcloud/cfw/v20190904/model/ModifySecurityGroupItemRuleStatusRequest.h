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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupItemRuleStatus请求参数结构体
                */
                class ModifySecurityGroupItemRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupItemRuleStatusRequest();
                    ~ModifySecurityGroupItemRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取方向，0：出站，1：入站，默认1
                     * @return Direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站，默认1
                     * @param _direction 方向，0：出站，1：入站，默认1
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取是否开关开启，0：未开启，1：开启
                     * @return Status 是否开关开启，0：未开启，1：开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否开关开启，0：未开启，1：开启
                     * @param _status 是否开关开启，0：未开启，1：开启
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更改的企业安全组规则的执行顺序
                     * @return RuleSequence 更改的企业安全组规则的执行顺序
                     * 
                     */
                    uint64_t GetRuleSequence() const;

                    /**
                     * 设置更改的企业安全组规则的执行顺序
                     * @param _ruleSequence 更改的企业安全组规则的执行顺序
                     * 
                     */
                    void SetRuleSequence(const uint64_t& _ruleSequence);

                    /**
                     * 判断参数 RuleSequence 是否已赋值
                     * @return RuleSequence 是否已赋值
                     * 
                     */
                    bool RuleSequenceHasBeenSet() const;

                private:

                    /**
                     * 方向，0：出站，1：入站，默认1
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 是否开关开启，0：未开启，1：开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更改的企业安全组规则的执行顺序
                     */
                    uint64_t m_ruleSequence;
                    bool m_ruleSequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPITEMRULESTATUSREQUEST_H_
