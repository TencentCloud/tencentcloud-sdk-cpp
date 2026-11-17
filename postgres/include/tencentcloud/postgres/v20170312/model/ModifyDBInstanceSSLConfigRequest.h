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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_

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
                * ModifyDBInstanceSSLConfig请求参数结构体
                */
                class ModifyDBInstanceSSLConfigRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSSLConfigRequest();
                    ~ModifyDBInstanceSSLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例 ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例 ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>开启或关闭SSL。true - 开启 ；false - 关闭。</p>
                     * @return SSLEnabled <p>开启或关闭SSL。true - 开启 ；false - 关闭。</p>
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 设置<p>开启或关闭SSL。true - 开启 ；false - 关闭。</p>
                     * @param _sSLEnabled <p>开启或关闭SSL。true - 开启 ；false - 关闭。</p>
                     * 
                     */
                    void SetSSLEnabled(const bool& _sSLEnabled);

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                    /**
                     * 获取<p>SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。</p>
                     * @return ConnectAddress <p>SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。</p>
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 设置<p>SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。</p>
                     * @param _connectAddress <p>SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。</p>
                     * 
                     */
                    void SetConnectAddress(const std::string& _connectAddress);

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                    /**
                     * 获取<p>SSL证书来源。</p><p>枚举值：</p><ul><li>cloud： 平台自签发的云端证书</li><li>custom： 腾讯云SSL证书产品托管的用户自有证书</li></ul>
                     * @return CertSource <p>SSL证书来源。</p><p>枚举值：</p><ul><li>cloud： 平台自签发的云端证书</li><li>custom： 腾讯云SSL证书产品托管的用户自有证书</li></ul>
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置<p>SSL证书来源。</p><p>枚举值：</p><ul><li>cloud： 平台自签发的云端证书</li><li>custom： 腾讯云SSL证书产品托管的用户自有证书</li></ul>
                     * @param _certSource <p>SSL证书来源。</p><p>枚举值：</p><ul><li>cloud： 平台自签发的云端证书</li><li>custom： 腾讯云SSL证书产品托管的用户自有证书</li></ul>
                     * 
                     */
                    void SetCertSource(const std::string& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云 SSL 证书产品的证书 ID。证书类型为custom时必须填写。</p>
                     * @return CertificateId <p>腾讯云 SSL 证书产品的证书 ID。证书类型为custom时必须填写。</p>
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置<p>腾讯云 SSL 证书产品的证书 ID。证书类型为custom时必须填写。</p>
                     * @param _certificateId <p>腾讯云 SSL 证书产品的证书 ID。证书类型为custom时必须填写。</p>
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>开启或关闭SSL。true - 开启 ；false - 关闭。</p>
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * <p>SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。</p>
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                    /**
                     * <p>SSL证书来源。</p><p>枚举值：</p><ul><li>cloud： 平台自签发的云端证书</li><li>custom： 腾讯云SSL证书产品托管的用户自有证书</li></ul>
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * <p>腾讯云 SSL 证书产品的证书 ID。证书类型为custom时必须填写。</p>
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
