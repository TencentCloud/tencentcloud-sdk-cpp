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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateCdbProxy请求参数结构体
                */
                class CreateCdbProxyRequest : public AbstractModel
                {
                public:
                    CreateCdbProxyRequest();
                    ~CreateCdbProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return UniqVpcId 私有网络ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _uniqVpcId 私有网络ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有子网ID
                     * @return UniqSubnetId 私有子网ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有子网ID
                     * @param _uniqSubnetId 私有子网ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取节点规格配置
                     * @return ProxyNodeCustom 节点规格配置
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置节点规格配置
                     * @param _proxyNodeCustom 节点规格配置
                     * 
                     */
                    void SetProxyNodeCustom(const std::vector<ProxyNodeCustom>& _proxyNodeCustom);

                    /**
                     * 判断参数 ProxyNodeCustom 是否已赋值
                     * @return ProxyNodeCustom 是否已赋值
                     * 
                     */
                    bool ProxyNodeCustomHasBeenSet() const;

                    /**
                     * 获取安全组
                     * @return SecurityGroup 安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组
                     * @param _securityGroup 安全组
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取连接池阈值
                     * @return ConnectionPoolLimit 连接池阈值
                     * 
                     */
                    uint64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置连接池阈值
                     * @param _connectionPoolLimit 连接池阈值
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 节点规格配置
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * 安全组
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 连接池阈值
                     */
                    uint64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATECDBPROXYREQUEST_H_
