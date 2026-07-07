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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERGUARDRAILSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERGUARDRAILSREQUEST_H_

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
                * ModifyModelRouterGuardrails请求参数结构体
                */
                class ModifyModelRouterGuardrailsRequest : public AbstractModel
                {
                public:
                    ModifyModelRouterGuardrailsRequest();
                    ~ModifyModelRouterGuardrailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待修改的 Guardrail 防护配置列表。</p><p>当前最多支持 1 个元素。每个元素必须填写 GuardrailId；当 Type 为 WAF 或未传按 WAF 处理时，InstanceId 和 ServiceId 必填；InputCheckDepth 为选填，不传时沿用当前已关联 Guardrail 的取值。</p>
                     * @return Guardrails <p>待修改的 Guardrail 防护配置列表。</p><p>当前最多支持 1 个元素。每个元素必须填写 GuardrailId；当 Type 为 WAF 或未传按 WAF 处理时，InstanceId 和 ServiceId 必填；InputCheckDepth 为选填，不传时沿用当前已关联 Guardrail 的取值。</p>
                     * 
                     */
                    std::vector<GuardrailConfig> GetGuardrails() const;

                    /**
                     * 设置<p>待修改的 Guardrail 防护配置列表。</p><p>当前最多支持 1 个元素。每个元素必须填写 GuardrailId；当 Type 为 WAF 或未传按 WAF 处理时，InstanceId 和 ServiceId 必填；InputCheckDepth 为选填，不传时沿用当前已关联 Guardrail 的取值。</p>
                     * @param _guardrails <p>待修改的 Guardrail 防护配置列表。</p><p>当前最多支持 1 个元素。每个元素必须填写 GuardrailId；当 Type 为 WAF 或未传按 WAF 处理时，InstanceId 和 ServiceId 必填；InputCheckDepth 为选填，不传时沿用当前已关联 Guardrail 的取值。</p>
                     * 
                     */
                    void SetGuardrails(const std::vector<GuardrailConfig>& _guardrails);

                    /**
                     * 判断参数 Guardrails 是否已赋值
                     * @return Guardrails 是否已赋值
                     * 
                     */
                    bool GuardrailsHasBeenSet() const;

                    /**
                     * 获取<p>模型路由实例 ID。</p>
                     * @return ModelRouterId <p>模型路由实例 ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例 ID。</p>
                     * @param _modelRouterId <p>模型路由实例 ID。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                private:

                    /**
                     * <p>待修改的 Guardrail 防护配置列表。</p><p>当前最多支持 1 个元素。每个元素必须填写 GuardrailId；当 Type 为 WAF 或未传按 WAF 处理时，InstanceId 和 ServiceId 必填；InputCheckDepth 为选填，不传时沿用当前已关联 Guardrail 的取值。</p>
                     */
                    std::vector<GuardrailConfig> m_guardrails;
                    bool m_guardrailsHasBeenSet;

                    /**
                     * <p>模型路由实例 ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELROUTERGUARDRAILSREQUEST_H_
