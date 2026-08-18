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
                     * 获取<p>true 代表开通 ，false 代表未开通</p>
                     * @return SSLEnabled <p>true 代表开通 ，false 代表未开通</p>
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
                     * 获取<p>云端根证书下载链接</p>
                     * @return CAUrl <p>云端根证书下载链接</p>
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
                     * 获取<p>服务器证书中配置的内网或外网连接地址</p>
                     * @return ConnectAddress <p>服务器证书中配置的内网或外网连接地址</p>
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
                     * 获取<p>CA证书公钥，仅云盘版</p>
                     * @return CACert <p>CA证书公钥，仅云盘版</p>
                     * 
                     */
                    std::string GetCACert() const;

                    /**
                     * 判断参数 CACert 是否已赋值
                     * @return CACert 是否已赋值
                     * 
                     */
                    bool CACertHasBeenSet() const;

                    /**
                     * 获取<p>JKS公钥，仅云盘版</p>
                     * @return CAJKS <p>JKS公钥，仅云盘版</p>
                     * 
                     */
                    std::string GetCAJKS() const;

                    /**
                     * 判断参数 CAJKS 是否已赋值
                     * @return CAJKS 是否已赋值
                     * 
                     */
                    bool CAJKSHasBeenSet() const;

                    /**
                     * 获取<p>CAP7B公钥，仅云盘版</p>
                     * @return CAP7B <p>CAP7B公钥，仅云盘版</p>
                     * 
                     */
                    std::string GetCAP7B() const;

                    /**
                     * 判断参数 CAP7B 是否已赋值
                     * @return CAP7B 是否已赋值
                     * 
                     */
                    bool CAP7BHasBeenSet() const;

                private:

                    /**
                     * <p>true 代表开通 ，false 代表未开通</p>
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * <p>云端根证书下载链接</p>
                     */
                    std::string m_cAUrl;
                    bool m_cAUrlHasBeenSet;

                    /**
                     * <p>服务器证书中配置的内网或外网连接地址</p>
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                    /**
                     * <p>CA证书公钥，仅云盘版</p>
                     */
                    std::string m_cACert;
                    bool m_cACertHasBeenSet;

                    /**
                     * <p>JKS公钥，仅云盘版</p>
                     */
                    std::string m_cAJKS;
                    bool m_cAJKSHasBeenSet;

                    /**
                     * <p>CAP7B公钥，仅云盘版</p>
                     */
                    std::string m_cAP7B;
                    bool m_cAP7BHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESSLCONFIGRESPONSE_H_
