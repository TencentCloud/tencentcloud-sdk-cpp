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
                     * 获取数据库名
                     * @return Db 数据库名
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库名
                     * @param _db 数据库名
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
                     * 获取表名
                     * @return Table 表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表名
                     * @param _table 表名
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
                     * 获取分块号
                     * @return Chunk 分块号
                     * 
                     */
                    int64_t GetChunk() const;

                    /**
                     * 设置分块号
                     * @param _chunk 分块号
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
                     * 获取源库数值
                     * @return SrcItem 源库数值
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置源库数值
                     * @param _srcItem 源库数值
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
                     * 获取目标库数值
                     * @return DstItem 目标库数值
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置目标库数值
                     * @param _dstItem 目标库数值
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
                     * 获取索引名称
                     * @return IndexName 索引名称
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名称
                     * @param _indexName 索引名称
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
                     * 获取索引下边界
                     * @return LowerBoundary 索引下边界
                     * 
                     */
                    std::string GetLowerBoundary() const;

                    /**
                     * 设置索引下边界
                     * @param _lowerBoundary 索引下边界
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
                     * 获取索引上边界
                     * @return UpperBoundary 索引上边界
                     * 
                     */
                    std::string GetUpperBoundary() const;

                    /**
                     * 设置索引上边界
                     * @param _upperBoundary 索引上边界
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
                     * 获取对比消耗时间,单位为 ms
                     * @return CostTime 对比消耗时间,单位为 ms
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置对比消耗时间,单位为 ms
                     * @param _costTime 对比消耗时间,单位为 ms
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
                     * 获取完成时间
                     * @return FinishedAt 完成时间
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置完成时间
                     * @param _finishedAt 完成时间
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
                     * 数据库名
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 分块号
                     */
                    int64_t m_chunk;
                    bool m_chunkHasBeenSet;

                    /**
                     * 源库数值
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * 目标库数值
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                    /**
                     * 索引名称
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 索引下边界
                     */
                    std::string m_lowerBoundary;
                    bool m_lowerBoundaryHasBeenSet;

                    /**
                     * 索引上边界
                     */
                    std::string m_upperBoundary;
                    bool m_upperBoundaryHasBeenSet;

                    /**
                     * 对比消耗时间,单位为 ms
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 完成时间
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEITEM_H_
