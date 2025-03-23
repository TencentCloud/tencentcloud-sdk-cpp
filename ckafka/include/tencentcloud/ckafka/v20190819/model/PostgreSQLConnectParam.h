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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLCONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * PostgreSQL连接源参数
                */
                class PostgreSQLConnectParam : public AbstractModel
                {
                public:
                    PostgreSQLConnectParam();
                    ~PostgreSQLConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PostgreSQL的连接port
                     * @return Port PostgreSQL的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置PostgreSQL的连接port
                     * @param _port PostgreSQL的连接port
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的用户名
                     * @return UserName PostgreSQL连接源的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置PostgreSQL连接源的用户名
                     * @param _userName PostgreSQL连接源的用户名
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
                     * 获取PostgreSQL连接源的密码
                     * @return Password PostgreSQL连接源的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置PostgreSQL连接源的密码
                     * @param _password PostgreSQL连接源的密码
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
                     * 获取PostgreSQL连接源的实例资源
                     * @return Resource PostgreSQL连接源的实例资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置PostgreSQL连接源的实例资源
                     * @param _resource PostgreSQL连接源的实例资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的实例vip，当为腾讯云实例时，必填
                     * @return ServiceVip PostgreSQL连接源的实例vip，当为腾讯云实例时，必填
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置PostgreSQL连接源的实例vip，当为腾讯云实例时，必填
                     * @param _serviceVip PostgreSQL连接源的实例vip，当为腾讯云实例时，必填
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的vpcId，当为腾讯云实例时，必填
                     * @return UniqVpcId PostgreSQL连接源的vpcId，当为腾讯云实例时，必填
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置PostgreSQL连接源的vpcId，当为腾讯云实例时，必填
                     * @param _uniqVpcId PostgreSQL连接源的vpcId，当为腾讯云实例时，必填
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
                     * 获取当type为TDSQL_C_POSTGRESQL时，必填
                     * @return ClusterId 当type为TDSQL_C_POSTGRESQL时，必填
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置当type为TDSQL_C_POSTGRESQL时，必填
                     * @param _clusterId 当type为TDSQL_C_POSTGRESQL时，必填
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取是否更新到关联的Datahub任务
                     * @return IsUpdate 是否更新到关联的Datahub任务
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
                     * @param _isUpdate 是否更新到关联的Datahub任务
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源是否为自建集群
                     * @return SelfBuilt PostgreSQL连接源是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置PostgreSQL连接源是否为自建集群
                     * @param _selfBuilt PostgreSQL连接源是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                private:

                    /**
                     * PostgreSQL的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * PostgreSQL连接源的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * PostgreSQL连接源的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * PostgreSQL连接源的实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * PostgreSQL连接源的实例vip，当为腾讯云实例时，必填
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * PostgreSQL连接源的vpcId，当为腾讯云实例时，必填
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 当type为TDSQL_C_POSTGRESQL时，必填
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * PostgreSQL连接源是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLCONNECTPARAM_H_
