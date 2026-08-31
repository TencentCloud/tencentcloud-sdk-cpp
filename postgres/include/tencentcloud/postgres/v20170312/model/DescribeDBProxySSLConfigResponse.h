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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBPROXYSSLCONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBPROXYSSLCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBProxySSLConfig返回参数结构体
                */
                class DescribeDBProxySSLConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBProxySSLConfigResponse();
                    ~DescribeDBProxySSLConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL 是否开启。true 表示已开启，false 表示未开启。</p>
                     * @return SSLEnabled <p>SSL 是否开启。true 表示已开启，false 表示未开启。</p>
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                    /**
                     * 获取<p>SSL 连接的地址（VIP 或域名）。</p>
                     * @return ConnectAddress <p>SSL 连接的地址（VIP 或域名）。</p>
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                    /**
                     * 获取<p>CA 证书下载地址。仅在 SSL 开启时有值。</p>
                     * @return CAUrl <p>CA 证书下载地址。仅在 SSL 开启时有值。</p>
                     * 
                     */
                    std::string GetCAUrl() const;

                    /**
                     * 判断参数 CAUrl 是否已赋值
                     * @return CAUrl 是否已赋值
                     * 
                     */
                    bool CAUrlHasBeenSet() const;

                private:

                    /**
                     * <p>SSL 是否开启。true 表示已开启，false 表示未开启。</p>
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * <p>SSL 连接的地址（VIP 或域名）。</p>
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                    /**
                     * <p>CA 证书下载地址。仅在 SSL 开启时有值。</p>
                     */
                    std::string m_cAUrl;
                    bool m_cAUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBPROXYSSLCONFIGRESPONSE_H_
