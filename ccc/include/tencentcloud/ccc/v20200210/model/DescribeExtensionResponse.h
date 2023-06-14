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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeExtension返回参数结构体
                */
                class DescribeExtensionResponse : public AbstractModel
                {
                public:
                    DescribeExtensionResponse();
                    ~DescribeExtensionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分机号
                     * @return ExtensionId 分机号
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return ExtensionDomain 域名
                     * 
                     */
                    std::string GetExtensionDomain() const;

                    /**
                     * 判断参数 ExtensionDomain 是否已赋值
                     * @return ExtensionDomain 是否已赋值
                     * 
                     */
                    bool ExtensionDomainHasBeenSet() const;

                    /**
                     * 获取注册密码
                     * @return Password 注册密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取代理服务器地址
                     * @return OutboundProxy 代理服务器地址
                     * 
                     */
                    std::string GetOutboundProxy() const;

                    /**
                     * 判断参数 OutboundProxy 是否已赋值
                     * @return OutboundProxy 是否已赋值
                     * 
                     */
                    bool OutboundProxyHasBeenSet() const;

                    /**
                     * 获取传输协议
                     * @return Transport 传输协议
                     * 
                     */
                    std::string GetTransport() const;

                    /**
                     * 判断参数 Transport 是否已赋值
                     * @return Transport 是否已赋值
                     * 
                     */
                    bool TransportHasBeenSet() const;

                private:

                    /**
                     * 分机号
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_extensionDomain;
                    bool m_extensionDomainHasBeenSet;

                    /**
                     * 注册密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 代理服务器地址
                     */
                    std::string m_outboundProxy;
                    bool m_outboundProxyHasBeenSet;

                    /**
                     * 传输协议
                     */
                    std::string m_transport;
                    bool m_transportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONRESPONSE_H_
