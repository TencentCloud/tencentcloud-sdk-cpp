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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TCHOUSEPINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TCHOUSEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionLocation.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * TCHouseP 结构
                */
                class TCHousePInfo : public AbstractModel
                {
                public:
                    TCHousePInfo();
                    ~TCHousePInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>JdbcUrl</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JdbcUrl <p>JdbcUrl</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJdbcUrl() const;

                    /**
                     * 设置<p>JdbcUrl</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jdbcUrl <p>JdbcUrl</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJdbcUrl(const std::string& _jdbcUrl);

                    /**
                     * 判断参数 JdbcUrl 是否已赋值
                     * @return JdbcUrl 是否已赋值
                     * 
                     */
                    bool JdbcUrlHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user <p>用户名</p>
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
                     * 获取<p>密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password <p>密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password <p>密码</p>
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
                     * 获取<p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location <p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DatasourceConnectionLocation GetLocation() const;

                    /**
                     * 设置<p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location <p>地址</p>
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
                     * 获取<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName <p>数据库名称</p>
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
                     * 获取<p>地址信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessInfo <p>地址信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置<p>地址信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessInfo <p>地址信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>JdbcUrl</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jdbcUrl;
                    bool m_jdbcUrlHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DatasourceConnectionLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>地址信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TCHOUSEPINFO_H_
