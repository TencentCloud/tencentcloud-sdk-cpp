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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteAIGWCustomGuardrailPolicy请求参数结构体
                */
                class DeleteAIGWCustomGuardrailPolicyRequest : public AbstractModel
                {
                public:
                    DeleteAIGWCustomGuardrailPolicyRequest();
                    ~DeleteAIGWCustomGuardrailPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>策略 ID</p>
                     * @return PolicyId <p>策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略 ID</p>
                     * @param _policyId <p>策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYREQUEST_H_
