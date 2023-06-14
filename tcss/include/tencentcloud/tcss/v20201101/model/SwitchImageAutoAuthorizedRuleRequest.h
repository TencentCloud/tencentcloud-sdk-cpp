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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SWITCHIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SWITCHIMAGEAUTOAUTHORIZEDRULEREQUEST_H_

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
                * SwitchImageAutoAuthorizedRule请求参数结构体
                */
                class SwitchImageAutoAuthorizedRuleRequest : public AbstractModel
                {
                public:
                    SwitchImageAutoAuthorizedRuleRequest();
                    ~SwitchImageAutoAuthorizedRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则是否生效，0:不生效，1:已生效
                     * @return IsEnabled 规则是否生效，0:不生效，1:已生效
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置规则是否生效，0:不生效，1:已生效
                     * @param _isEnabled 规则是否生效，0:不生效，1:已生效
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 规则是否生效，0:不生效，1:已生效
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 规则id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SWITCHIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
