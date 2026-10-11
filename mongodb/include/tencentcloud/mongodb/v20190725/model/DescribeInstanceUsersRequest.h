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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEUSERSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeInstanceUsers请求参数结构体
                */
                class DescribeInstanceUsersRequest : public AbstractModel
                {
                public:
                    DescribeInstanceUsersRequest();
                    ~DescribeInstanceUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>用户名，为空则查询所有用户</p>
                     * @return UserName <p>用户名，为空则查询所有用户</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名，为空则查询所有用户</p>
                     * @param _userName <p>用户名，为空则查询所有用户</p>
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
                     * 获取<p>数据库名，为空则查询所有数据库的账号</p>
                     * @return Database <p>数据库名，为空则查询所有数据库的账号</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>数据库名，为空则查询所有数据库的账号</p>
                     * @param _database <p>数据库名，为空则查询所有数据库的账号</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，可选值：UserName；不传则默认按 UserName 排序</p>
                     * @return OrderBy <p>排序字段，可选值：UserName；不传则默认按 UserName 排序</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段，可选值：UserName；不传则默认按 UserName 排序</p>
                     * @param _orderBy <p>排序字段，可选值：UserName；不传则默认按 UserName 排序</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式，可选值：asc（升序）、desc（降序），默认 asc</p>
                     * @return OrderType <p>排序方式，可选值：asc（升序）、desc（降序），默认 asc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序方式，可选值：asc（升序）、desc（降序），默认 asc</p>
                     * @param _orderType <p>排序方式，可选值：asc（升序）、desc（降序），默认 asc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认为 0</p>
                     * @return Offset <p>分页偏移量，默认为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为 0</p>
                     * @param _offset <p>分页偏移量，默认为 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认为 20，最大 100</p>
                     * @return Limit <p>每页数量，默认为 20，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认为 20，最大 100</p>
                     * @param _limit <p>每页数量，默认为 20，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名，为空则查询所有用户</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>数据库名，为空则查询所有数据库的账号</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>排序字段，可选值：UserName；不传则默认按 UserName 排序</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式，可选值：asc（升序）、desc（降序），默认 asc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认为 20，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEUSERSREQUEST_H_
