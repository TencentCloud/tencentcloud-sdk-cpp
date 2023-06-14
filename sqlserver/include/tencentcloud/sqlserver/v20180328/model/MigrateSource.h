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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 迁移任务的源类型
                */
                class MigrateSource : public AbstractModel
                {
                public:
                    MigrateSource();
                    ~MigrateSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移源实例的ID，MigrateType=1(TencentDB for SQLServers)时使用，格式如：mssql-si2823jyl
                     * @return InstanceId 迁移源实例的ID，MigrateType=1(TencentDB for SQLServers)时使用，格式如：mssql-si2823jyl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置迁移源实例的ID，MigrateType=1(TencentDB for SQLServers)时使用，格式如：mssql-si2823jyl
                     * @param _instanceId 迁移源实例的ID，MigrateType=1(TencentDB for SQLServers)时使用，格式如：mssql-si2823jyl
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
                     * 获取迁移源Cvm的ID，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @return CvmId 迁移源Cvm的ID，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    std::string GetCvmId() const;

                    /**
                     * 设置迁移源Cvm的ID，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @param _cvmId 迁移源Cvm的ID，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    void SetCvmId(const std::string& _cvmId);

                    /**
                     * 判断参数 CvmId 是否已赋值
                     * @return CvmId 是否已赋值
                     * 
                     */
                    bool CvmIdHasBeenSet() const;

                    /**
                     * 获取迁移源Cvm的Vpc网络标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：vpc-6ys9ont9
                     * @return VpcId 迁移源Cvm的Vpc网络标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：vpc-6ys9ont9
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置迁移源Cvm的Vpc网络标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：vpc-6ys9ont9
                     * @param _vpcId 迁移源Cvm的Vpc网络标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：vpc-6ys9ont9
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
                     * 获取迁移源Cvm的Vpc下的子网标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：subnet-h9extioi
                     * @return SubnetId 迁移源Cvm的Vpc下的子网标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：subnet-h9extioi
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置迁移源Cvm的Vpc下的子网标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：subnet-h9extioi
                     * @param _subnetId 迁移源Cvm的Vpc下的子网标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：subnet-h9extioi
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
                     * 获取用户名，MigrateType=1或MigrateType=2使用
                     * @return UserName 用户名，MigrateType=1或MigrateType=2使用
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，MigrateType=1或MigrateType=2使用
                     * @param _userName 用户名，MigrateType=1或MigrateType=2使用
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
                     * 获取密码，MigrateType=1或MigrateType=2使用
                     * @return Password 密码，MigrateType=1或MigrateType=2使用
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，MigrateType=1或MigrateType=2使用
                     * @param _password 密码，MigrateType=1或MigrateType=2使用
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
                     * 获取迁移源Cvm自建库的内网IP，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @return Ip 迁移源Cvm自建库的内网IP，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置迁移源Cvm自建库的内网IP，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @param _ip 迁移源Cvm自建库的内网IP，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取迁移源Cvm自建库的端口号，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @return Port 迁移源Cvm自建库的端口号，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置迁移源Cvm自建库的端口号，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * @param _port 迁移源Cvm自建库的端口号，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取离线迁移的源备份地址，MigrateType=4或MigrateType=5使用
                     * @return Url 离线迁移的源备份地址，MigrateType=4或MigrateType=5使用
                     * 
                     */
                    std::vector<std::string> GetUrl() const;

                    /**
                     * 设置离线迁移的源备份地址，MigrateType=4或MigrateType=5使用
                     * @param _url 离线迁移的源备份地址，MigrateType=4或MigrateType=5使用
                     * 
                     */
                    void SetUrl(const std::vector<std::string>& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取离线迁移的源备份密码，MigrateType=4或MigrateType=5使用
                     * @return UrlPassword 离线迁移的源备份密码，MigrateType=4或MigrateType=5使用
                     * 
                     */
                    std::string GetUrlPassword() const;

                    /**
                     * 设置离线迁移的源备份密码，MigrateType=4或MigrateType=5使用
                     * @param _urlPassword 离线迁移的源备份密码，MigrateType=4或MigrateType=5使用
                     * 
                     */
                    void SetUrlPassword(const std::string& _urlPassword);

                    /**
                     * 判断参数 UrlPassword 是否已赋值
                     * @return UrlPassword 是否已赋值
                     * 
                     */
                    bool UrlPasswordHasBeenSet() const;

                private:

                    /**
                     * 迁移源实例的ID，MigrateType=1(TencentDB for SQLServers)时使用，格式如：mssql-si2823jyl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 迁移源Cvm的ID，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     */
                    std::string m_cvmId;
                    bool m_cvmIdHasBeenSet;

                    /**
                     * 迁移源Cvm的Vpc网络标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：vpc-6ys9ont9
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 迁移源Cvm的Vpc下的子网标识，MigrateType=2(云服务器自建SQLServer数据库)时使用，格式如：subnet-h9extioi
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 用户名，MigrateType=1或MigrateType=2使用
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 密码，MigrateType=1或MigrateType=2使用
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 迁移源Cvm自建库的内网IP，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 迁移源Cvm自建库的端口号，MigrateType=2(云服务器自建SQLServer数据库)时使用
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 离线迁移的源备份地址，MigrateType=4或MigrateType=5使用
                     */
                    std::vector<std::string> m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 离线迁移的源备份密码，MigrateType=4或MigrateType=5使用
                     */
                    std::string m_urlPassword;
                    bool m_urlPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATESOURCE_H_
