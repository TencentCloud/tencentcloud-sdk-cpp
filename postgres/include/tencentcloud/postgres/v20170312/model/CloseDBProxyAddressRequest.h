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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBPROXYADDRESSREQUEST_H_

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
                * CloseDBProxyAddress请求参数结构体
                */
                class CloseDBProxyAddressRequest : public AbstractModel
                {
                public:
                    CloseDBProxyAddressRequest();
                    ~CloseDBProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，指定要关闭代理地址的目标实例</p>
                     * @return DBInstanceId <p>实例 ID，指定要关闭代理地址的目标实例</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例 ID，指定要关闭代理地址的目标实例</p>
                     * @param _dBInstanceId <p>实例 ID，指定要关闭代理地址的目标实例</p>
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
                     * 获取<p>代理地址 ID，指定要关闭（删除）的代理地址</p>
                     * @return AddressId <p>代理地址 ID，指定要关闭（删除）的代理地址</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>代理地址 ID，指定要关闭（删除）的代理地址</p>
                     * @param _addressId <p>代理地址 ID，指定要关闭（删除）的代理地址</p>
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
                     * 获取<p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * @return ProxyGroupId <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * @param _proxyGroupId <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，指定要关闭代理地址的目标实例</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>代理地址 ID，指定要关闭（删除）的代理地址</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>代理组 ID。不传则按实例自动查找其默认代理组</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBPROXYADDRESSREQUEST_H_
