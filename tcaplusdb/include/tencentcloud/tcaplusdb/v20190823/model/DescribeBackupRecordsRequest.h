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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeBackupRecords请求参数结构体
                */
                class DescribeBackupRecordsRequest : public AbstractModel
                {
                public:
                    DescribeBackupRecordsRequest();
                    ~DescribeBackupRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，用于获取指定集群的单据
                     * @return ClusterId 集群ID，用于获取指定集群的单据
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，用于获取指定集群的单据
                     * @param _clusterId 集群ID，用于获取指定集群的单据
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return Limit 分页
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页
                     * @param _limit 分页
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
                     * 获取分页
                     * @return Offset 分页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页
                     * @param _offset 分页
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
                     * 获取表格组id，用于过滤
                     * @return TableGroupId 表格组id，用于过滤
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组id，用于过滤
                     * @param _tableGroupId 表格组id，用于过滤
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格名，用于过滤
                     * @return TableName 表格名，用于过滤
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表格名，用于过滤
                     * @param _tableName 表格名，用于过滤
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 集群ID，用于获取指定集群的单据
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 表格组id，用于过滤
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格名，用于过滤
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEBACKUPRECORDSREQUEST_H_
