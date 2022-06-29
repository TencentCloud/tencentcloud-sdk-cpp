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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyCDBProxyConnectionPool请求参数结构体
                */
                class ModifyCDBProxyConnectionPoolRequest : public AbstractModel
                {
                public:
                    ModifyCDBProxyConnectionPoolRequest();
                    ~ModifyCDBProxyConnectionPoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库代理ID
                     * @return ProxyGroupId 数据库代理ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理ID
                     * @param ProxyGroupId 数据库代理ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取是否开启连接池，true：开启连接池；
                             false：关闭连接池。
                     * @return OpenConnectionPool 是否开启连接池，true：开启连接池；
                             false：关闭连接池。
                     */
                    bool GetOpenConnectionPool() const;

                    /**
                     * 设置是否开启连接池，true：开启连接池；
                             false：关闭连接池。
                     * @param OpenConnectionPool 是否开启连接池，true：开启连接池；
                             false：关闭连接池。
                     */
                    void SetOpenConnectionPool(const bool& _openConnectionPool);

                    /**
                     * 判断参数 OpenConnectionPool 是否已赋值
                     * @return OpenConnectionPool 是否已赋值
                     */
                    bool OpenConnectionPoolHasBeenSet() const;

                    /**
                     * 获取连接池类型，
通过DescribeProxyConnectionPoolConf获取连接池类型值
                     * @return ConnectionPoolType 连接池类型，
通过DescribeProxyConnectionPoolConf获取连接池类型值
                     */
                    std::string GetConnectionPoolType() const;

                    /**
                     * 设置连接池类型，
通过DescribeProxyConnectionPoolConf获取连接池类型值
                     * @param ConnectionPoolType 连接池类型，
通过DescribeProxyConnectionPoolConf获取连接池类型值
                     */
                    void SetConnectionPoolType(const std::string& _connectionPoolType);

                    /**
                     * 判断参数 ConnectionPoolType 是否已赋值
                     * @return ConnectionPoolType 是否已赋值
                     */
                    bool ConnectionPoolTypeHasBeenSet() const;

                    /**
                     * 获取连接保留阈值：单位（秒）
                     * @return PoolConnectionTimeOut 连接保留阈值：单位（秒）
                     */
                    int64_t GetPoolConnectionTimeOut() const;

                    /**
                     * 设置连接保留阈值：单位（秒）
                     * @param PoolConnectionTimeOut 连接保留阈值：单位（秒）
                     */
                    void SetPoolConnectionTimeOut(const int64_t& _poolConnectionTimeOut);

                    /**
                     * 判断参数 PoolConnectionTimeOut 是否已赋值
                     * @return PoolConnectionTimeOut 是否已赋值
                     */
                    bool PoolConnectionTimeOutHasBeenSet() const;

                private:

                    /**
                     * 数据库代理ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 是否开启连接池，true：开启连接池；
                             false：关闭连接池。
                     */
                    bool m_openConnectionPool;
                    bool m_openConnectionPoolHasBeenSet;

                    /**
                     * 连接池类型，
通过DescribeProxyConnectionPoolConf获取连接池类型值
                     */
                    std::string m_connectionPoolType;
                    bool m_connectionPoolTypeHasBeenSet;

                    /**
                     * 连接保留阈值：单位（秒）
                     */
                    int64_t m_poolConnectionTimeOut;
                    bool m_poolConnectionTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYCONNECTIONPOOLREQUEST_H_
