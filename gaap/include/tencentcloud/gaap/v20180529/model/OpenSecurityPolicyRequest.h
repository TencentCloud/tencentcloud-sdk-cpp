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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_

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
                * OpenSecurityPolicy请求参数结构体
                */
                class OpenSecurityPolicyRequest : public AbstractModel
                {
                public:
                    OpenSecurityPolicyRequest();
                    ~OpenSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需开启安全策略的通道ID
                     * @return ProxyId 需开启安全策略的通道ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置需开启安全策略的通道ID
                     * @param _proxyId 需开启安全策略的通道ID
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
                     * 获取安全策略ID
                     * @return PolicyId 安全策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置安全策略ID
                     * @param _policyId 安全策略ID
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
                     * 需开启安全策略的通道ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 安全策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_
