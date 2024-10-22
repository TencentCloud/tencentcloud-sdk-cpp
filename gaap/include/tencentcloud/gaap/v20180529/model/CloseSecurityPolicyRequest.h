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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CloseSecurityPolicy请求参数结构体
                */
                class CloseSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CloseSecurityPolicyRequest();
                    ~CloseSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID。操作通道组时无需填此参数。
                     * @return ProxyId 通道ID。操作通道组时无需填此参数。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID。操作通道组时无需填此参数。
                     * @param _proxyId 通道ID。操作通道组时无需填此参数。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取安全组策略ID。操作通道组时须填此参数。
                     * @return PolicyId 安全组策略ID。操作通道组时须填此参数。
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全组策略ID。操作通道组时须填此参数。
                     * @param _policyId 安全组策略ID。操作通道组时须填此参数。
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
                     * 通道ID。操作通道组时无需填此参数。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 安全组策略ID。操作通道组时须填此参数。
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_
