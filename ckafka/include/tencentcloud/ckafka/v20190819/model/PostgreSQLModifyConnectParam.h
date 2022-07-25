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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLMODIFYCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLMODIFYCONNECTPARAM_H_

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
                * PostgreSQL修改连接源参数
                */
                class PostgreSQLModifyConnectParam : public AbstractModel
                {
                public:
                    PostgreSQLModifyConnectParam();
                    ~PostgreSQLModifyConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PostgreSQL连接源的实例资源【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource PostgreSQL连接源的实例资源【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResource() const;

                    /**
                     * 设置PostgreSQL连接源的实例资源【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Resource PostgreSQL连接源的实例资源【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取PostgreSQL的连接port【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port PostgreSQL的连接port【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置PostgreSQL的连接port【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port PostgreSQL的连接port【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的实例vip【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceVip PostgreSQL连接源的实例vip【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置PostgreSQL连接源的实例vip【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceVip PostgreSQL连接源的实例vip【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的vpcId【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId PostgreSQL连接源的vpcId【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置PostgreSQL连接源的vpcId【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqVpcId PostgreSQL连接源的vpcId【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName PostgreSQL连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置PostgreSQL连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName PostgreSQL连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取PostgreSQL连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password PostgreSQL连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置PostgreSQL连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Password PostgreSQL连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取当type为TDSQL_C_POSTGRESQL时，该参数才有值【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 当type为TDSQL_C_POSTGRESQL时，该参数才有值【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置当type为TDSQL_C_POSTGRESQL时，该参数才有值【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 当type为TDSQL_C_POSTGRESQL时，该参数才有值【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     */
                    bool IsUpdateHasBeenSet() const;

                private:

                    /**
                     * PostgreSQL连接源的实例资源【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * PostgreSQL的连接port【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * PostgreSQL连接源的实例vip【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * PostgreSQL连接源的vpcId【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * PostgreSQL连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * PostgreSQL连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 当type为TDSQL_C_POSTGRESQL时，该参数才有值【不支持修改】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_POSTGRESQLMODIFYCONNECTPARAM_H_
