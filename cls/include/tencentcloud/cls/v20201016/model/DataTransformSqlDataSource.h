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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 外部表SQL信息
                */
                class DataTransformSqlDataSource : public AbstractModel
                {
                public:
                    DataTransformSqlDataSource();
                    ~DataTransformSqlDataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源类型 1:MySql;2:自建mysql;3:pgsql
                     * @return DataSource 数据源类型 1:MySql;2:自建mysql;3:pgsql
                     * 
                     */
                    uint64_t GetDataSource() const;

                    /**
                     * 设置数据源类型 1:MySql;2:自建mysql;3:pgsql
                     * @param _dataSource 数据源类型 1:MySql;2:自建mysql;3:pgsql
                     * 
                     */
                    void SetDataSource(const uint64_t& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取InstanceId所属地域。例如：ap-guangzhou
                     * @return Region InstanceId所属地域。例如：ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置InstanceId所属地域。例如：ap-guangzhou
                     * @param _region InstanceId所属地域。例如：ap-guangzhou
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例Id。
- 当DataSource为1时，表示云数据库Mysql 实例id，如：cdb-zxcvbnm

                     * @return InstanceId 实例Id。
- 当DataSource为1时，表示云数据库Mysql 实例id，如：cdb-zxcvbnm

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id。
- 当DataSource为1时，表示云数据库Mysql 实例id，如：cdb-zxcvbnm

                     * @param _instanceId 实例Id。
- 当DataSource为1时，表示云数据库Mysql 实例id，如：cdb-zxcvbnm

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
                     * 获取mysql访问用户名
                     * @return User mysql访问用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置mysql访问用户名
                     * @param _user mysql访问用户名
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
                     * 获取别名。数据加工语句中使用
                     * @return AliasName 别名。数据加工语句中使用
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置别名。数据加工语句中使用
                     * @param _aliasName 别名。数据加工语句中使用
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取mysql访问密码。
                     * @return Password mysql访问密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置mysql访问密码。
                     * @param _password mysql访问密码。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 数据源类型 1:MySql;2:自建mysql;3:pgsql
                     */
                    uint64_t m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * InstanceId所属地域。例如：ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例Id。
- 当DataSource为1时，表示云数据库Mysql 实例id，如：cdb-zxcvbnm

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * mysql访问用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 别名。数据加工语句中使用
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * mysql访问密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMSQLDATASOURCE_H_
