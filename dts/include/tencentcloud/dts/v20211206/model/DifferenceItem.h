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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 校验不一致的表详情
                */
                class DifferenceItem : public AbstractModel
                {
                public:
                    DifferenceItem();
                    ~DifferenceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库名</p>
                     * @return Db <p>数据库名</p>
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _db <p>数据库名</p>
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取<p>schema</p>
                     * @return Schema <p>schema</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>schema</p>
                     * @param _schema <p>schema</p>
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取<p>表名</p>
                     * @return Table <p>表名</p>
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置<p>表名</p>
                     * @param _table <p>表名</p>
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>分块号</p>
                     * @return Chunk <p>分块号</p>
                     * 
                     */
                    int64_t GetChunk() const;

                    /**
                     * 设置<p>分块号</p>
                     * @param _chunk <p>分块号</p>
                     * 
                     */
                    void SetChunk(const int64_t& _chunk);

                    /**
                     * 判断参数 Chunk 是否已赋值
                     * @return Chunk 是否已赋值
                     * 
                     */
                    bool ChunkHasBeenSet() const;

                    /**
                     * 获取<p>源库数值</p>
                     * @return SrcItem <p>源库数值</p>
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置<p>源库数值</p>
                     * @param _srcItem <p>源库数值</p>
                     * 
                     */
                    void SetSrcItem(const std::string& _srcItem);

                    /**
                     * 判断参数 SrcItem 是否已赋值
                     * @return SrcItem 是否已赋值
                     * 
                     */
                    bool SrcItemHasBeenSet() const;

                    /**
                     * 获取<p>目标库数值</p>
                     * @return DstItem <p>目标库数值</p>
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置<p>目标库数值</p>
                     * @param _dstItem <p>目标库数值</p>
                     * 
                     */
                    void SetDstItem(const std::string& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                    /**
                     * 获取<p>索引名称</p>
                     * @return IndexName <p>索引名称</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>索引名称</p>
                     * @param _indexName <p>索引名称</p>
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>索引下边界</p>
                     * @return LowerBoundary <p>索引下边界</p>
                     * 
                     */
                    std::string GetLowerBoundary() const;

                    /**
                     * 设置<p>索引下边界</p>
                     * @param _lowerBoundary <p>索引下边界</p>
                     * 
                     */
                    void SetLowerBoundary(const std::string& _lowerBoundary);

                    /**
                     * 判断参数 LowerBoundary 是否已赋值
                     * @return LowerBoundary 是否已赋值
                     * 
                     */
                    bool LowerBoundaryHasBeenSet() const;

                    /**
                     * 获取<p>索引上边界</p>
                     * @return UpperBoundary <p>索引上边界</p>
                     * 
                     */
                    std::string GetUpperBoundary() const;

                    /**
                     * 设置<p>索引上边界</p>
                     * @param _upperBoundary <p>索引上边界</p>
                     * 
                     */
                    void SetUpperBoundary(const std::string& _upperBoundary);

                    /**
                     * 判断参数 UpperBoundary 是否已赋值
                     * @return UpperBoundary 是否已赋值
                     * 
                     */
                    bool UpperBoundaryHasBeenSet() const;

                    /**
                     * 获取<p>对比消耗时间,单位为 ms</p>
                     * @return CostTime <p>对比消耗时间,单位为 ms</p>
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置<p>对比消耗时间,单位为 ms</p>
                     * @param _costTime <p>对比消耗时间,单位为 ms</p>
                     * 
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取<p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return FinishedAt <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _finishedAt <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * <p>schema</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>表名</p>
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>分块号</p>
                     */
                    int64_t m_chunk;
                    bool m_chunkHasBeenSet;

                    /**
                     * <p>源库数值</p>
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * <p>目标库数值</p>
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * <p>索引名称</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>索引下边界</p>
                     */
                    std::string m_lowerBoundary;
                    bool m_lowerBoundaryHasBeenSet;

                    /**
                     * <p>索引上边界</p>
                     */
                    std::string m_upperBoundary;
                    bool m_upperBoundaryHasBeenSet;

                    /**
                     * <p>对比消耗时间,单位为 ms</p>
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * <p>完成时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_
