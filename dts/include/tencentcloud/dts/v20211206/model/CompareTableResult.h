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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLERESULT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLERESULT_H_

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
                * 不一致的表的校验结果详情。增量和全量都是这个结构，某些字段对增量没有意义，可以忽略。
                */
                class CompareTableResult : public AbstractModel
                {
                public:
                    CompareTableResult();
                    ~CompareTableResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取库名
                     * @return Db 库名
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置库名
                     * @param _db 库名
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
                     * 获取schema名
                     * @return Schema schema名
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置schema名
                     * @param _schema schema名
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
                     * 获取校验结果
                     * @return Conclusion 校验结果
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置校验结果
                     * @param _conclusion 校验结果
                     * 
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取校验状态。仅全量阶段有意义
                     * @return Status 校验状态。仅全量阶段有意义
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置校验状态。仅全量阶段有意义
                     * @param _status 校验状态。仅全量阶段有意义
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取校验进度。仅全量阶段有意义
                     * @return Progress 校验进度。仅全量阶段有意义
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置校验进度。仅全量阶段有意义
                     * @param _progress 校验进度。仅全量阶段有意义
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取不一致行数
                     * @return RowCount 不一致行数
                     * 
                     */
                    int64_t GetRowCount() const;

                    /**
                     * 设置不一致行数
                     * @param _rowCount 不一致行数
                     * 
                     */
                    void SetRowCount(const int64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取该表开始校验的时间
                     * @return StartedAt 该表开始校验的时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置该表开始校验的时间
                     * @param _startedAt 该表开始校验的时间
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取该表校验结束的时间
                     * @return FinishedAt 该表校验结束的时间
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置该表校验结束的时间
                     * @param _finishedAt 该表校验结束的时间
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                    /**
                     * 获取预计该表校验结束的时间
                     * @return ExpectedAt 预计该表校验结束的时间
                     * 
                     */
                    std::string GetExpectedAt() const;

                    /**
                     * 设置预计该表校验结束的时间
                     * @param _expectedAt 预计该表校验结束的时间
                     * 
                     */
                    void SetExpectedAt(const std::string& _expectedAt);

                    /**
                     * 判断参数 ExpectedAt 是否已赋值
                     * @return ExpectedAt 是否已赋值
                     * 
                     */
                    bool ExpectedAtHasBeenSet() const;

                    /**
                     * 获取源端行数，如果是行数校验此值有意义
                     * @return SrcItem 源端行数，如果是行数校验此值有意义
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置源端行数，如果是行数校验此值有意义
                     * @param _srcItem 源端行数，如果是行数校验此值有意义
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
                     * 获取目标端行数，如果是行数校验此值有意义
                     * @return DstItem 目标端行数，如果是行数校验此值有意义
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置目标端行数，如果是行数校验此值有意义
                     * @param _dstItem 目标端行数，如果是行数校验此值有意义
                     * 
                     */
                    void SetDstItem(const std::string& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                private:

                    /**
                     * 库名
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * schema名
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 校验结果
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 校验状态。仅全量阶段有意义
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 校验进度。仅全量阶段有意义
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 不一致行数
                     */
                    int64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * 该表开始校验的时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 该表校验结束的时间
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * 预计该表校验结束的时间
                     */
                    std::string m_expectedAt;
                    bool m_expectedAtHasBeenSet;

                    /**
                     * 源端行数，如果是行数校验此值有意义
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * 目标端行数，如果是行数校验此值有意义
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLERESULT_H_
