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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_

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
                * ModifyDBProxyAddress请求参数结构体
                */
                class ModifyDBProxyAddressRequest : public AbstractModel
                {
                public:
                    ModifyDBProxyAddressRequest();
                    ~ModifyDBProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return DBInstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _dBInstanceId <p>实例ID</p>
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
                     * 获取<p>Proxy地址ID</p>
                     * @return AddressId <p>Proxy地址ID</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>Proxy地址ID</p>
                     * @param _addressId <p>Proxy地址ID</p>
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取<p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * @return ProxyGroupId <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     * @param _proxyGroupId <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
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
                     * 获取<p>地址描述/备注（最多 256 字符）</p>
                     * @return Description <p>地址描述/备注（最多 256 字符）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>地址描述/备注（最多 256 字符）</p>
                     * @param _description <p>地址描述/备注（最多 256 字符）</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * @return ConnectionPool <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * @param _connectionPool <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     * 
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Proxy地址ID</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>Proxy代理组 ID（不传则默认操作该实例下唯一的代理）</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>地址描述/备注（最多 256 字符）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接池开关</p><p>枚举值：</p><ul><li>true： 开启</li><li>false： 关闭</li></ul>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBPROXYADDRESSREQUEST_H_
