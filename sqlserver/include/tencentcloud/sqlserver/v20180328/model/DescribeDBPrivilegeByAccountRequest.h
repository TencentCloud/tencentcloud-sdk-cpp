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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBPRIVILEGEBYACCOUNTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBPRIVILEGEBYACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBPrivilegeByAccount请求参数结构体
                */
                class DescribeDBPrivilegeByAccountRequest : public AbstractModel
                {
                public:
                    DescribeDBPrivilegeByAccountRequest();
                    ~DescribeDBPrivilegeByAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 实例ID，形如mssql-njj2mtpl
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
                     * 获取账号名称
                     * @return AccountName 账号名称
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名称
                     * @param _accountName 账号名称
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取账号关联的数据库名称
                     * @return DBName 账号关联的数据库名称
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置账号关联的数据库名称
                     * @param _dBName 账号关联的数据库名称
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 账号名称
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 账号关联的数据库名称
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBPRIVILEGEBYACCOUNTREQUEST_H_
