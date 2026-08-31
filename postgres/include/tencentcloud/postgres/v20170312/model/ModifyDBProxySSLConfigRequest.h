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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYSSLCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYSSLCONFIGREQUEST_H_

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
                * ModifyDBProxySSLConfig请求参数结构体
                */
                class ModifyDBProxySSLConfigRequest : public AbstractModel
                {
                public:
                    ModifyDBProxySSLConfigRequest();
                    ~ModifyDBProxySSLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，指定要修改 SSL 配置的数据库代理所属的目标实例
                     * @return DBInstanceId 实例 ID，指定要修改 SSL 配置的数据库代理所属的目标实例
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例 ID，指定要修改 SSL 配置的数据库代理所属的目标实例
                     * @param _dBInstanceId 实例 ID，指定要修改 SSL 配置的数据库代理所属的目标实例
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
                     * 获取代理组 ID，指定要修改 SSL 配置的代理组
                     * @return ProxyGroupId 代理组 ID，指定要修改 SSL 配置的代理组
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组 ID，指定要修改 SSL 配置的代理组
                     * @param _proxyGroupId 代理组 ID，指定要修改 SSL 配置的代理组
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取代理地址 ID，指定要修改 SSL 配置的代理连接地址
                     * @return ProxyAddressId 代理地址 ID，指定要修改 SSL 配置的代理连接地址
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置代理地址 ID，指定要修改 SSL 配置的代理连接地址
                     * @param _proxyAddressId 代理地址 ID，指定要修改 SSL 配置的代理连接地址
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                    /**
                     * 获取SSL 开关。true：开启 SSL；false：关闭 SSL
                     * @return SSLEnabled SSL 开关。true：开启 SSL；false：关闭 SSL
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 设置SSL 开关。true：开启 SSL；false：关闭 SSL
                     * @param _sSLEnabled SSL 开关。true：开启 SSL；false：关闭 SSL
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
                     * 获取连接地址。SSLEnabled 为 true 时必填，需与代理地址的 Vip 保持一致，用于 SSL 证书校验
                     * @return ConnectAddress 连接地址。SSLEnabled 为 true 时必填，需与代理地址的 Vip 保持一致，用于 SSL 证书校验
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 设置连接地址。SSLEnabled 为 true 时必填，需与代理地址的 Vip 保持一致，用于 SSL 证书校验
                     * @param _connectAddress 连接地址。SSLEnabled 为 true 时必填，需与代理地址的 Vip 保持一致，用于 SSL 证书校验
                     * 
                     */
                    void SetConnectAddress(const std::string& _connectAddress);

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，指定要修改 SSL 配置的数据库代理所属的目标实例
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 代理组 ID，指定要修改 SSL 配置的代理组
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理地址 ID，指定要修改 SSL 配置的代理连接地址
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * SSL 开关。true：开启 SSL；false：关闭 SSL
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * 连接地址。SSLEnabled 为 true 时必填，需与代理地址的 Vip 保持一致，用于 SSL 证书校验
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYSSLCONFIGREQUEST_H_
