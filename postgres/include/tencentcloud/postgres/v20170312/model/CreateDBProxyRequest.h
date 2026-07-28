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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDBProxy请求参数结构体
                */
                class CreateDBProxyRequest : public AbstractModel
                {
                public:
                    CreateDBProxyRequest();
                    ~CreateDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * @return DBInstanceId <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     * @param _dBInstanceId <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
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
                     * 获取<p>Proxy 所在私有网络 ID，需与主实例所在 VPC 一致</p>
                     * @return VpcId <p>Proxy 所在私有网络 ID，需与主实例所在 VPC 一致</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Proxy 所在私有网络 ID，需与主实例所在 VPC 一致</p>
                     * @param _vpcId <p>Proxy 所在私有网络 ID，需与主实例所在 VPC 一致</p>
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
                     * 获取<p>Proxy 所在私有网络子网 ID</p>
                     * @return SubnetId <p>Proxy 所在私有网络子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Proxy 所在私有网络子网 ID</p>
                     * @param _subnetId <p>Proxy 所在私有网络子网 ID</p>
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
                     * 获取<p>Proxy 节点自定义规格列表，至少一个元素，按可用区分组</p>
                     * @return ProxyNodeCustom <p>Proxy 节点自定义规格列表，至少一个元素，按可用区分组</p>
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置<p>Proxy 节点自定义规格列表，至少一个元素，按可用区分组</p>
                     * @param _proxyNodeCustom <p>Proxy 节点自定义规格列表，至少一个元素，按可用区分组</p>
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
                     * 获取<p>Proxy 关联的安全组 ID 列表</p>
                     * @return SecurityGroup <p>Proxy 关联的安全组 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>Proxy 关联的安全组 ID 列表</p>
                     * @param _securityGroup <p>Proxy 关联的安全组 ID 列表</p>
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
                     * 获取<p>Proxy 描述信息</p><p>长度范围：[0, 256]</p>
                     * @return Description <p>Proxy 描述信息</p><p>长度范围：[0, 256]</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Proxy 描述信息</p><p>长度范围：[0, 256]</p>
                     * @param _description <p>Proxy 描述信息</p><p>长度范围：[0, 256]</p>
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
                     * 获取<p>连接池阈值（连接数），单位：个</p>
                     * @return ConnectionPoolLimit <p>连接池阈值（连接数），单位：个</p>
                     * 
                     */
                    int64_t GetConnectionPoolLimit() const;

                    /**
                     * 设置<p>连接池阈值（连接数），单位：个</p>
                     * @param _connectionPoolLimit <p>连接池阈值（连接数），单位：个</p>
                     * 
                     */
                    void SetConnectionPoolLimit(const int64_t& _connectionPoolLimit);

                    /**
                     * 判断参数 ConnectionPoolLimit 是否已赋值
                     * @return ConnectionPoolLimit 是否已赋值
                     * 
                     */
                    bool ConnectionPoolLimitHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式形如：postgres-xxxxxxxx</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>Proxy 所在私有网络 ID，需与主实例所在 VPC 一致</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Proxy 所在私有网络子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Proxy 节点自定义规格列表，至少一个元素，按可用区分组</p>
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * <p>Proxy 关联的安全组 ID 列表</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>Proxy 描述信息</p><p>长度范围：[0, 256]</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接池阈值（连接数），单位：个</p>
                     */
                    int64_t m_connectionPoolLimit;
                    bool m_connectionPoolLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYREQUEST_H_
