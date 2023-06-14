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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyAbnormalProcessRuleStatus请求参数结构体
                */
                class ModifyAbnormalProcessRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyAbnormalProcessRuleStatusRequest();
                    ~ModifyAbnormalProcessRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略的ids
                     * @return RuleIdSet 策略的ids
                     * 
                     */
                    std::vector<std::string> GetRuleIdSet() const;

                    /**
                     * 设置策略的ids
                     * @param _ruleIdSet 策略的ids
                     * 
                     */
                    void SetRuleIdSet(const std::vector<std::string>& _ruleIdSet);

                    /**
                     * 判断参数 RuleIdSet 是否已赋值
                     * @return RuleIdSet 是否已赋值
                     * 
                     */
                    bool RuleIdSetHasBeenSet() const;

                    /**
                     * 获取策略开关，true开启，false关闭
                     * @return IsEnable 策略开关，true开启，false关闭
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置策略开关，true开启，false关闭
                     * @param _isEnable 策略开关，true开启，false关闭
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * 策略的ids
                     */
                    std::vector<std::string> m_ruleIdSet;
                    bool m_ruleIdSetHasBeenSet;

                    /**
                     * 策略开关，true开启，false关闭
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYABNORMALPROCESSRULESTATUSREQUEST_H_
