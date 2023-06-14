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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_

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
                * DescribeMigrations请求参数结构体
                */
                class DescribeMigrationsRequest : public AbstractModel
                {
                public:
                    DescribeMigrationsRequest();
                    ~DescribeMigrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态集合。只要符合集合中某一状态的迁移任务，就会查出来
                     * @return StatusSet 状态集合。只要符合集合中某一状态的迁移任务，就会查出来
                     * 
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置状态集合。只要符合集合中某一状态的迁移任务，就会查出来
                     * @param _statusSet 状态集合。只要符合集合中某一状态的迁移任务，就会查出来
                     * 
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取迁移任务的名称，模糊匹配
                     * @return MigrateName 迁移任务的名称，模糊匹配
                     * 
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置迁移任务的名称，模糊匹配
                     * @param _migrateName 迁移任务的名称，模糊匹配
                     * 
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     * 
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为100
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

                    /**
                     * 获取查询结果按照关键字排序，可选值为name、createTime、startTime，endTime，status
                     * @return OrderBy 查询结果按照关键字排序，可选值为name、createTime、startTime，endTime，status
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置查询结果按照关键字排序，可选值为name、createTime、startTime，endTime，status
                     * @param _orderBy 查询结果按照关键字排序，可选值为name、createTime、startTime，endTime，status
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
                     * 获取排序方式，可选值为desc、asc
                     * @return OrderByType 排序方式，可选值为desc、asc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，可选值为desc、asc
                     * @param _orderByType 排序方式，可选值为desc、asc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 状态集合。只要符合集合中某一状态的迁移任务，就会查出来
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 迁移任务的名称，模糊匹配
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果按照关键字排序，可选值为name、createTime、startTime，endTime，status
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，可选值为desc、asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSREQUEST_H_
