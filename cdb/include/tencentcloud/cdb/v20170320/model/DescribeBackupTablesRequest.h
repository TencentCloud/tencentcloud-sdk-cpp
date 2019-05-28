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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupTables请求参数结构体
                */
                class DescribeBackupTablesRequest : public AbstractModel
                {
                public:
                    DescribeBackupTablesRequest();
                    ~DescribeBackupTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @param InstanceId 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间，格式为：2017-07-12 10:29:20。
                     * @return StartTime 开始时间，格式为：2017-07-12 10:29:20。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式为：2017-07-12 10:29:20。
                     * @param StartTime 开始时间，格式为：2017-07-12 10:29:20。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取指定的数据库名。
                     * @return DatabaseName 指定的数据库名。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置指定的数据库名。
                     * @param DatabaseName 指定的数据库名。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取要查询的数据表名前缀。
                     * @return SearchTable 要查询的数据表名前缀。
                     */
                    std::string GetSearchTable() const;

                    /**
                     * 设置要查询的数据表名前缀。
                     * @param SearchTable 要查询的数据表名前缀。
                     */
                    void SetSearchTable(const std::string& _searchTable);

                    /**
                     * 判断参数 SearchTable 是否已赋值
                     * @return SearchTable 是否已赋值
                     */
                    bool SearchTableHasBeenSet() const;

                    /**
                     * 获取分页偏移。
                     * @return Offset 分页偏移。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移。
                     * @param Offset 分页偏移。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小，最小值为1，最大值为2000。
                     * @return Limit 分页大小，最小值为1，最大值为2000。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，最小值为1，最大值为2000。
                     * @param Limit 分页大小，最小值为1，最大值为2000。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，格式为：2017-07-12 10:29:20。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 指定的数据库名。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 要查询的数据表名前缀。
                     */
                    std::string m_searchTable;
                    bool m_searchTableHasBeenSet;

                    /**
                     * 分页偏移。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，最小值为1，最大值为2000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPTABLESREQUEST_H_
