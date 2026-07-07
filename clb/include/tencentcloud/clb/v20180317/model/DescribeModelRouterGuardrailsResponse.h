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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERGUARDRAILSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERGUARDRAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/GuardrailConfig.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterGuardrails返回参数结构体
                */
                class DescribeModelRouterGuardrailsResponse : public AbstractModel
                {
                public:
                    DescribeModelRouterGuardrailsResponse();
                    ~DescribeModelRouterGuardrailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前已关联的 Guardrail 防护配置列表。</p><p>当前最多返回 1 个元素。</p>
                     * @return Guardrails <p>当前已关联的 Guardrail 防护配置列表。</p><p>当前最多返回 1 个元素。</p>
                     * 
                     */
                    std::vector<GuardrailConfig> GetGuardrails() const;

                    /**
                     * 判断参数 Guardrails 是否已赋值
                     * @return Guardrails 是否已赋值
                     * 
                     */
                    bool GuardrailsHasBeenSet() const;

                private:

                    /**
                     * <p>当前已关联的 Guardrail 防护配置列表。</p><p>当前最多返回 1 个元素。</p>
                     */
                    std::vector<GuardrailConfig> m_guardrails;
                    bool m_guardrailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERGUARDRAILSRESPONSE_H_
