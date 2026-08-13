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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREDIFFITEMSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREDIFFITEMSREQUEST_H_

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
                * DescribeSyncCompareDiffItems请求参数结构体
                */
                class DescribeSyncCompareDiffItemsRequest : public AbstractModel
                {
                public:
                    DescribeSyncCompareDiffItemsRequest();
                    ~DescribeSyncCompareDiffItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>迁移任务 Id</p>
                     * @return JobId <p>迁移任务 Id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>迁移任务 Id</p>
                     * @param _jobId <p>迁移任务 Id</p>
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
                     * 获取<p>校验任务 Id</p>
                     * @return CompareTaskId <p>校验任务 Id</p>
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置<p>校验任务 Id</p>
                     * @param _compareTaskId <p>校验任务 Id</p>
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
                     * 获取<p>数据库名</p>
                     * @return DBName <p>数据库名</p>
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _dBName <p>数据库名</p>
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
                     * 获取<p>schema名</p>
                     * @return SchemaName <p>schema名</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名</p>
                     * @param _schemaName <p>schema名</p>
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
                     * 获取<p>数据表名</p>
                     * @return TableName <p>数据表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>数据表名</p>
                     * @param _tableName <p>数据表名</p>
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
                     * 获取<p>数据分块号</p>
                     * @return ChunkId <p>数据分块号</p>
                     * 
                     */
                    int64_t GetChunkId() const;

                    /**
                     * 设置<p>数据分块号</p>
                     * @param _chunkId <p>数据分块号</p>
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
                     * 获取<p>分页条件，查询结果返回条数</p>
                     * @return Limit <p>分页条件，查询结果返回条数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页条件，查询结果返回条数</p>
                     * @param _limit <p>分页条件，查询结果返回条数</p>
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
                     * 获取<p>分页条件，查询的起始位置</p>
                     * @return Offset <p>分页条件，查询的起始位置</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页条件，查询的起始位置</p>
                     * @param _offset <p>分页条件，查询的起始位置</p>
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
                     * <p>迁移任务 Id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>校验任务 Id</p>
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>schema名</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>数据表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>数据分块号</p>
                     */
                    int64_t m_chunkId;
                    bool m_chunkIdHasBeenSet;

                    /**
                     * <p>分页条件，查询结果返回条数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页条件，查询的起始位置</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCCOMPAREDIFFITEMSREQUEST_H_
