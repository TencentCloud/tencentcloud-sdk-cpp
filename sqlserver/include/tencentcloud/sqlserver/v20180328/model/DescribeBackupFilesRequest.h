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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_

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
                * DescribeBackupFiles请求参数结构体
                */
                class DescribeBackupFilesRequest : public AbstractModel
                {
                public:
                    DescribeBackupFilesRequest();
                    ~DescribeBackupFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 实例ID，形如mssql-njj2mtpl
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-njj2mtpl
                     * @param InstanceId 实例ID，形如mssql-njj2mtpl
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取聚合ID, 可通过接口DescribeBackups获取
                     * @return GroupId 聚合ID, 可通过接口DescribeBackups获取
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置聚合ID, 可通过接口DescribeBackups获取
                     * @param GroupId 聚合ID, 可通过接口DescribeBackups获取
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为20
                     * @param Limit 分页返回，每页返回的数目，取值为1-100，默认值为20
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param Offset 分页返回，页编号，默认值为第0页
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取按照备份的库名称筛选，不填则不筛选此项
                     * @return DatabaseName 按照备份的库名称筛选，不填则不筛选此项
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置按照备份的库名称筛选，不填则不筛选此项
                     * @param DatabaseName 按照备份的库名称筛选，不填则不筛选此项
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取列表项排序，目前只按照备份大小排序（desc-降序，asc-升序），默认desc
                     * @return OrderBy 列表项排序，目前只按照备份大小排序（desc-降序，asc-升序），默认desc
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置列表项排序，目前只按照备份大小排序（desc-降序，asc-升序），默认desc
                     * @param OrderBy 列表项排序，目前只按照备份大小排序（desc-降序，asc-升序），默认desc
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 聚合ID, 可通过接口DescribeBackups获取
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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

                    /**
                     * 按照备份的库名称筛选，不填则不筛选此项
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 列表项排序，目前只按照备份大小排序（desc-降序，asc-升序），默认desc
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPFILESREQUEST_H_
