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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEMODELROUTERGUARDRAILSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEMODELROUTERGUARDRAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/DisassociateGuardrailConfig.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DisassociateModelRouterGuardrails请求参数结构体
                */
                class DisassociateModelRouterGuardrailsRequest : public AbstractModel
                {
                public:
                    DisassociateModelRouterGuardrailsRequest();
                    ~DisassociateModelRouterGuardrailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待解除关联的 Guardrail 防护配置列表。</p><p>每个元素只需要填写 GuardrailId。</p>
                     * @return Guardrails <p>待解除关联的 Guardrail 防护配置列表。</p><p>每个元素只需要填写 GuardrailId。</p>
                     * 
                     */
                    std::vector<DisassociateGuardrailConfig> GetGuardrails() const;

                    /**
                     * 设置<p>待解除关联的 Guardrail 防护配置列表。</p><p>每个元素只需要填写 GuardrailId。</p>
                     * @param _guardrails <p>待解除关联的 Guardrail 防护配置列表。</p><p>每个元素只需要填写 GuardrailId。</p>
                     * 
                     */
                    void SetGuardrails(const std::vector<DisassociateGuardrailConfig>& _guardrails);

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
                     * <p>待解除关联的 Guardrail 防护配置列表。</p><p>每个元素只需要填写 GuardrailId。</p>
                     */
                    std::vector<DisassociateGuardrailConfig> m_guardrails;
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEMODELROUTERGUARDRAILSREQUEST_H_
