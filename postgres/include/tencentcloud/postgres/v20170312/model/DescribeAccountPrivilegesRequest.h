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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabaseObject.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges请求参数结构体
                */
                class DescribeAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesRequest();
                    ~DescribeAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。	
                     * @return DBInstanceId 实例ID。	
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。	
                     * @param _dBInstanceId 实例ID。	
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
                     * 获取查询此账号对某数据库对象所拥有的权限信息。
                     * @return UserName 查询此账号对某数据库对象所拥有的权限信息。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置查询此账号对某数据库对象所拥有的权限信息。
                     * @param _userName 查询此账号对某数据库对象所拥有的权限信息。
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
                     * 获取要查询的数据库对象信息
                     * @return DatabaseObjectSet 要查询的数据库对象信息
                     * 
                     */
                    std::vector<DatabaseObject> GetDatabaseObjectSet() const;

                    /**
                     * 设置要查询的数据库对象信息
                     * @param _databaseObjectSet 要查询的数据库对象信息
                     * 
                     */
                    void SetDatabaseObjectSet(const std::vector<DatabaseObject>& _databaseObjectSet);

                    /**
                     * 判断参数 DatabaseObjectSet 是否已赋值
                     * @return DatabaseObjectSet 是否已赋值
                     * 
                     */
                    bool DatabaseObjectSetHasBeenSet() const;

                private:

                    /**
                     * 实例ID。	
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询此账号对某数据库对象所拥有的权限信息。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 要查询的数据库对象信息
                     */
                    std::vector<DatabaseObject> m_databaseObjectSet;
                    bool m_databaseObjectSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
