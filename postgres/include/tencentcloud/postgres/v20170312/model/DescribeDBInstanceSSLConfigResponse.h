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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_

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
                * DescribeDBInstanceSSLConfig返回参数结构体
                */
                class DescribeDBInstanceSSLConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceSSLConfigResponse();
                    ~DescribeDBInstanceSSLConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true 代表开通 ，false 代表未开通
                     * @return SSLEnabled true 代表开通 ，false 代表未开通
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
                     * 获取云端根证书下载链接
                     * @return CAUrl 云端根证书下载链接
                     * 
                     */
                    std::string GetCAUrl() const;

                    /**
                     * 判断参数 CAUrl 是否已赋值
                     * @return CAUrl 是否已赋值
                     * 
                     */
                    bool CAUrlHasBeenSet() const;

                    /**
                     * 获取服务器证书中配置的内网或外网连接地址
                     * @return ConnectAddress 服务器证书中配置的内网或外网连接地址
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                private:

                    /**
                     * true 代表开通 ，false 代表未开通
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * 云端根证书下载链接
                     */
                    std::string m_cAUrl;
                    bool m_cAUrlHasBeenSet;

                    /**
                     * 服务器证书中配置的内网或外网连接地址
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_
