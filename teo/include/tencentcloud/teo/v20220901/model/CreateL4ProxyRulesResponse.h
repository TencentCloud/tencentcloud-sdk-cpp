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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateL4ProxyRules返回参数结构体
                */
                class CreateL4ProxyRulesResponse : public AbstractModel
                {
                public:
                    CreateL4ProxyRulesResponse();
                    ~CreateL4ProxyRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新增转发规则的 ID，以数组的形式返回。
                     * @return L4ProxyRuleIds 新增转发规则的 ID，以数组的形式返回。
                     * 
                     */
                    std::vector<std::string> GetL4ProxyRuleIds() const;

                    /**
                     * 判断参数 L4ProxyRuleIds 是否已赋值
                     * @return L4ProxyRuleIds 是否已赋值
                     * 
                     */
                    bool L4ProxyRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 新增转发规则的 ID，以数组的形式返回。
                     */
                    std::vector<std::string> m_l4ProxyRuleIds;
                    bool m_l4ProxyRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEL4PROXYRULESRESPONSE_H_
