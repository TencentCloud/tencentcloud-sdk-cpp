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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICSEARCHINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICSEARCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionLocation.h>
#include <tencentcloud/dlc/v20210125/model/IpPortPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Elasticsearch数据源的详细信息
                */
                class ElasticsearchInfo : public AbstractModel
                {
                public:
                    ElasticsearchInfo();
                    ~ElasticsearchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码，需要base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码，需要base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，需要base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 密码，需要base64编码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据源的VPC和子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 数据源的VPC和子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DatasourceConnectionLocation GetLocation() const;

                    /**
                     * 设置数据源的VPC和子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 数据源的VPC和子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const DatasourceConnectionLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取默认数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 默认数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置默认数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 默认数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取访问Elasticsearch的ip、端口信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInfo 访问Elasticsearch的ip、端口信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IpPortPair> GetServiceInfo() const;

                    /**
                     * 设置访问Elasticsearch的ip、端口信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceInfo 访问Elasticsearch的ip、端口信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceInfo(const std::vector<IpPortPair>& _serviceInfo);

                    /**
                     * 判断参数 ServiceInfo 是否已赋值
                     * @return ServiceInfo 是否已赋值
                     * 
                     */
                    bool ServiceInfoHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码，需要base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 数据源的VPC和子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DatasourceConnectionLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 默认数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 访问Elasticsearch的ip、端口信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IpPortPair> m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICSEARCHINFO_H_
