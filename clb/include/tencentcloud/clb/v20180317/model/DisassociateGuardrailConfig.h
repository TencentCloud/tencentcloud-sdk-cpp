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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEGUARDRAILCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEGUARDRAILCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由待解除关联 Guardrail 防护配置
                */
                class DisassociateGuardrailConfig : public AbstractModel
                {
                public:
                    DisassociateGuardrailConfig();
                    ~DisassociateGuardrailConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Guardrail 防护配置 ID。</p><p>可通过 DescribeModelRouterGuardrails 获取；DisassociateModelRouterGuardrails 使用该字段定位要解除关联的防护配置。</p>
                     * @return GuardrailId <p>Guardrail 防护配置 ID。</p><p>可通过 DescribeModelRouterGuardrails 获取；DisassociateModelRouterGuardrails 使用该字段定位要解除关联的防护配置。</p>
                     * 
                     */
                    std::string GetGuardrailId() const;

                    /**
                     * 设置<p>Guardrail 防护配置 ID。</p><p>可通过 DescribeModelRouterGuardrails 获取；DisassociateModelRouterGuardrails 使用该字段定位要解除关联的防护配置。</p>
                     * @param _guardrailId <p>Guardrail 防护配置 ID。</p><p>可通过 DescribeModelRouterGuardrails 获取；DisassociateModelRouterGuardrails 使用该字段定位要解除关联的防护配置。</p>
                     * 
                     */
                    void SetGuardrailId(const std::string& _guardrailId);

                    /**
                     * 判断参数 GuardrailId 是否已赋值
                     * @return GuardrailId 是否已赋值
                     * 
                     */
                    bool GuardrailIdHasBeenSet() const;

                private:

                    /**
                     * <p>Guardrail 防护配置 ID。</p><p>可通过 DescribeModelRouterGuardrails 获取；DisassociateModelRouterGuardrails 使用该字段定位要解除关联的防护配置。</p>
                     */
                    std::string m_guardrailId;
                    bool m_guardrailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DISASSOCIATEGUARDRAILCONFIG_H_
