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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREDIFFITEMSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREDIFFITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareDiffItems请求参数结构体
                */
                class DescribeCompareDiffItemsRequest : public AbstractModel
                {
                public:
                    DescribeCompareDiffItemsRequest();
                    ~DescribeCompareDiffItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id
                     * @return JobId 迁移任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id
                     * @param _jobId 迁移任务 Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取校验任务 Id
                     * @return CompareTaskId 校验任务 Id
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置校验任务 Id
                     * @param _compareTaskId 校验任务 Id
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return DBName 数据库名
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名
                     * @param _dBName 数据库名
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
                     * 获取schema名
                     * @return SchemaName schema名
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名
                     * @param _schemaName schema名
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取数据表名
                     * @return TableName 数据表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名
                     * @param _tableName 数据表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取数据分块号
                     * @return ChunkId 数据分块号
                     * 
                     */
                    int64_t GetChunkId() const;

                    /**
                     * 设置数据分块号
                     * @param _chunkId 数据分块号
                     * 
                     */
                    void SetChunkId(const int64_t& _chunkId);

                    /**
                     * 判断参数 ChunkId 是否已赋值
                     * @return ChunkId 是否已赋值
                     * 
                     */
                    bool ChunkIdHasBeenSet() const;

                    /**
                     * 获取分页条件，查询结果返回条数
                     * @return Limit 分页条件，查询结果返回条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页条件，查询结果返回条数
                     * @param _limit 分页条件，查询结果返回条数
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
                     * 获取分页条件，查询的起始位置
                     * @return Offset 分页条件，查询的起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页条件，查询的起始位置
                     * @param _offset 分页条件，查询的起始位置
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
                     * 迁移任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 校验任务 Id
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * schema名
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 数据表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据分块号
                     */
                    int64_t m_chunkId;
                    bool m_chunkIdHasBeenSet;

                    /**
                     * 分页条件，查询结果返回条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页条件，查询的起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREDIFFITEMSREQUEST_H_
