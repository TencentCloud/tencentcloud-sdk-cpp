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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPASelfBuildMetaResource请求参数结构体
                */
                class CreateDSPASelfBuildMetaResourceRequest : public AbstractModel
                {
                public:
                    CreateDSPASelfBuildMetaResourceRequest();
                    ~CreateDSPASelfBuildMetaResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dspa实例ID。
                     * @return DspaId Dspa实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置Dspa实例ID。
                     * @param _dspaId Dspa实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取自建数据库类型。目前支持的自建数据库类型按照协议进行区分，支持两种开源数据库协议：
mysql_like_proto -- Mysql协议类关系型数据库，
postgre_like_proto -- Postgre协议类关系型数据库。
其他闭源协议的数据库如SqlServer、Oracle等暂不支持。
                     * @return MetaType 自建数据库类型。目前支持的自建数据库类型按照协议进行区分，支持两种开源数据库协议：
mysql_like_proto -- Mysql协议类关系型数据库，
postgre_like_proto -- Postgre协议类关系型数据库。
其他闭源协议的数据库如SqlServer、Oracle等暂不支持。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置自建数据库类型。目前支持的自建数据库类型按照协议进行区分，支持两种开源数据库协议：
mysql_like_proto -- Mysql协议类关系型数据库，
postgre_like_proto -- Postgre协议类关系型数据库。
其他闭源协议的数据库如SqlServer、Oracle等暂不支持。
                     * @param _metaType 自建数据库类型。目前支持的自建数据库类型按照协议进行区分，支持两种开源数据库协议：
mysql_like_proto -- Mysql协议类关系型数据库，
postgre_like_proto -- Postgre协议类关系型数据库。
其他闭源协议的数据库如SqlServer、Oracle等暂不支持。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取自建云资源ID。
                     * @return ResourceId 自建云资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置自建云资源ID。
                     * @param _resourceId 自建云资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自建云资源的VPC ID。
                     * @return ResourceUniqueVpcId 自建云资源的VPC ID。
                     * 
                     */
                    std::string GetResourceUniqueVpcId() const;

                    /**
                     * 设置自建云资源的VPC ID。
                     * @param _resourceUniqueVpcId 自建云资源的VPC ID。
                     * 
                     */
                    void SetResourceUniqueVpcId(const std::string& _resourceUniqueVpcId);

                    /**
                     * 判断参数 ResourceUniqueVpcId 是否已赋值
                     * @return ResourceUniqueVpcId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取自建云资源的Subnet ID。
                     * @return ResourceUniqueSubnetId 自建云资源的Subnet ID。
                     * 
                     */
                    std::string GetResourceUniqueSubnetId() const;

                    /**
                     * 设置自建云资源的Subnet ID。
                     * @param _resourceUniqueSubnetId 自建云资源的Subnet ID。
                     * 
                     */
                    void SetResourceUniqueSubnetId(const std::string& _resourceUniqueSubnetId);

                    /**
                     * 判断参数 ResourceUniqueSubnetId 是否已赋值
                     * @return ResourceUniqueSubnetId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取自建云资源所处的服务类型，可选：
cvm - 通过云服务器直接访问。
clb - 通过LB的方式进行访问。
                     * @return ResourceAccessType 自建云资源所处的服务类型，可选：
cvm - 通过云服务器直接访问。
clb - 通过LB的方式进行访问。
                     * 
                     */
                    std::string GetResourceAccessType() const;

                    /**
                     * 设置自建云资源所处的服务类型，可选：
cvm - 通过云服务器直接访问。
clb - 通过LB的方式进行访问。
                     * @param _resourceAccessType 自建云资源所处的服务类型，可选：
cvm - 通过云服务器直接访问。
clb - 通过LB的方式进行访问。
                     * 
                     */
                    void SetResourceAccessType(const std::string& _resourceAccessType);

                    /**
                     * 判断参数 ResourceAccessType 是否已赋值
                     * @return ResourceAccessType 是否已赋值
                     * 
                     */
                    bool ResourceAccessTypeHasBeenSet() const;

                    /**
                     * 获取可用于访问自建云资源的IP。
emr的连接不需要使用该字段
                     * @return ResourceVip 可用于访问自建云资源的IP。
emr的连接不需要使用该字段
                     * 
                     */
                    std::string GetResourceVip() const;

                    /**
                     * 设置可用于访问自建云资源的IP。
emr的连接不需要使用该字段
                     * @param _resourceVip 可用于访问自建云资源的IP。
emr的连接不需要使用该字段
                     * 
                     */
                    void SetResourceVip(const std::string& _resourceVip);

                    /**
                     * 判断参数 ResourceVip 是否已赋值
                     * @return ResourceVip 是否已赋值
                     * 
                     */
                    bool ResourceVipHasBeenSet() const;

                    /**
                     * 获取可用于访问自建云资源的端口。
emr的连接不需要使用该字段
                     * @return ResourceVPort 可用于访问自建云资源的端口。
emr的连接不需要使用该字段
                     * 
                     */
                    uint64_t GetResourceVPort() const;

                    /**
                     * 设置可用于访问自建云资源的端口。
emr的连接不需要使用该字段
                     * @param _resourceVPort 可用于访问自建云资源的端口。
emr的连接不需要使用该字段
                     * 
                     */
                    void SetResourceVPort(const uint64_t& _resourceVPort);

                    /**
                     * 判断参数 ResourceVPort 是否已赋值
                     * @return ResourceVPort 是否已赋值
                     * 
                     */
                    bool ResourceVPortHasBeenSet() const;

                    /**
                     * 获取账户名。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * @return UserName 账户名。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账户名。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * @param _userName 账户名。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取账户密码。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * @return Password 账户密码。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置账户密码。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * @param _password 账户密码。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取资源名称，1-60个字符。
                     * @return ResourceName 资源名称，1-60个字符。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称，1-60个字符。
                     * @param _resourceName 资源名称，1-60个字符。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取实例类型
databse
sid
serviceName
                     * @return InstanceType 实例类型
databse
sid
serviceName
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
databse
sid
serviceName
                     * @param _instanceType 实例类型
databse
sid
serviceName
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例值
                     * @return InstanceValue 实例值
                     * 
                     */
                    std::string GetInstanceValue() const;

                    /**
                     * 设置实例值
                     * @param _instanceValue 实例值
                     * 
                     */
                    void SetInstanceValue(const std::string& _instanceValue);

                    /**
                     * 判断参数 InstanceValue 是否已赋值
                     * @return InstanceValue 是否已赋值
                     * 
                     */
                    bool InstanceValueHasBeenSet() const;

                    /**
                     * 获取授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * @return AuthRange 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * 
                     */
                    std::string GetAuthRange() const;

                    /**
                     * 设置授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * @param _authRange 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * 
                     */
                    void SetAuthRange(const std::string& _authRange);

                    /**
                     * 判断参数 AuthRange 是否已赋值
                     * @return AuthRange 是否已赋值
                     * 
                     */
                    bool AuthRangeHasBeenSet() const;

                private:

                    /**
                     * Dspa实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 自建数据库类型。目前支持的自建数据库类型按照协议进行区分，支持两种开源数据库协议：
mysql_like_proto -- Mysql协议类关系型数据库，
postgre_like_proto -- Postgre协议类关系型数据库。
其他闭源协议的数据库如SqlServer、Oracle等暂不支持。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 自建云资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自建云资源的VPC ID。
                     */
                    std::string m_resourceUniqueVpcId;
                    bool m_resourceUniqueVpcIdHasBeenSet;

                    /**
                     * 自建云资源的Subnet ID。
                     */
                    std::string m_resourceUniqueSubnetId;
                    bool m_resourceUniqueSubnetIdHasBeenSet;

                    /**
                     * 自建云资源所处的服务类型，可选：
cvm - 通过云服务器直接访问。
clb - 通过LB的方式进行访问。
                     */
                    std::string m_resourceAccessType;
                    bool m_resourceAccessTypeHasBeenSet;

                    /**
                     * 可用于访问自建云资源的IP。
emr的连接不需要使用该字段
                     */
                    std::string m_resourceVip;
                    bool m_resourceVipHasBeenSet;

                    /**
                     * 可用于访问自建云资源的端口。
emr的连接不需要使用该字段
                     */
                    uint64_t m_resourceVPort;
                    bool m_resourceVPortHasBeenSet;

                    /**
                     * 账户名。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账户密码。如果emr_hive的连接方式为“LDAP”，则复用该字段
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 资源名称，1-60个字符。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 实例类型
databse
sid
serviceName
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例值
                     */
                    std::string m_instanceValue;
                    bool m_instanceValueHasBeenSet;

                    /**
                     * 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     */
                    std::string m_authRange;
                    bool m_authRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPASELFBUILDMETARESOURCEREQUEST_H_
