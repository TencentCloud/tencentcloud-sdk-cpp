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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYADDRESS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ProxyRoute.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Proxy 接入地址信息，包含 VIP/VPort、读写分离与连接池相关配置以及对应路由列表。
                */
                class ProxyAddress : public AbstractModel
                {
                public:
                    ProxyAddress();
                    ~ProxyAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Proxy 接入地址 ID</p>
                     * @return AddressId <p>Proxy 接入地址 ID</p>
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置<p>Proxy 接入地址 ID</p>
                     * @param _addressId <p>Proxy 接入地址 ID</p>
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
                     * 获取<p>Proxy 接入地址 IP</p>
                     * @return Vip <p>Proxy 接入地址 IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Proxy 接入地址 IP</p>
                     * @param _vip <p>Proxy 接入地址 IP</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 接入地址端口</p>
                     * @return Vport <p>Proxy 接入地址端口</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Proxy 接入地址端口</p>
                     * @param _vport <p>Proxy 接入地址端口</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID</p>
                     * @return SubnetId <p>子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p>
                     * @param _subnetId <p>子网 ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>接入地址描述</p>
                     * @return Description <p>接入地址描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>接入地址描述</p>
                     * @param _description <p>接入地址描述</p>
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
                     * 获取<p>是否开启连接池：0-未开启，1-开启</p>
                     * @return ConnectionPool <p>是否开启连接池：0-未开启，1-开启</p>
                     * 
                     */
                    bool GetConnectionPool() const;

                    /**
                     * 设置<p>是否开启连接池：0-未开启，1-开启</p>
                     * @param _connectionPool <p>是否开启连接池：0-未开启，1-开启</p>
                     * 
                     */
                    void SetConnectionPool(const bool& _connectionPool);

                    /**
                     * 判断参数 ConnectionPool 是否已赋值
                     * @return ConnectionPool 是否已赋值
                     * 
                     */
                    bool ConnectionPoolHasBeenSet() const;

                    /**
                     * 获取<p>路由列表</p>
                     * @return Routes <p>路由列表</p>
                     * 
                     */
                    std::vector<ProxyRoute> GetRoutes() const;

                    /**
                     * 设置<p>路由列表</p>
                     * @param _routes <p>路由列表</p>
                     * 
                     */
                    void SetRoutes(const std::vector<ProxyRoute>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                    /**
                     * 获取<p>连接池大小</p>
                     * @return ConnectionPoolLimit <p>连接池大小</p>
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置<p>连接池大小</p>
                     * @param _connectionPoolLimit <p>连接池大小</p>
                     * 
                     */
                    void SetConnectionPoolLimit(const uint64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                private:

                    /**
                     * <p>Proxy 接入地址 ID</p>
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * <p>Proxy 接入地址 IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Proxy 接入地址端口</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>接入地址描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否开启连接池：0-未开启，1-开启</p>
                     */
                    bool m_connectionPool;
                    bool m_connectionPoolHasBeenSet;

                    /**
                     * <p>路由列表</p>
                     */
                    std::vector<ProxyRoute> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * <p>连接池大小</p>
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYADDRESS_H_
