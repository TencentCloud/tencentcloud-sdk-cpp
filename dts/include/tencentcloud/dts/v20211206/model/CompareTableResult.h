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
                     * 获取<p>库名</p>
                     * @return Db <p>库名</p>
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置<p>库名</p>
                     * @param _db <p>库名</p>
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
                     * 获取<p>schema名</p>
                     * @return Schema <p>schema名</p>
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置<p>schema名</p>
                     * @param _schema <p>schema名</p>
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
                     * 获取<p>校验结果</p>
                     * @return Conclusion <p>校验结果</p>
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置<p>校验结果</p>
                     * @param _conclusion <p>校验结果</p>
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
                     * 获取<p>校验状态。仅全量阶段有意义</p>
                     * @return Status <p>校验状态。仅全量阶段有意义</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>校验状态。仅全量阶段有意义</p>
                     * @param _status <p>校验状态。仅全量阶段有意义</p>
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
                     * 获取<p>校验进度。仅全量阶段有意义</p>
                     * @return Progress <p>校验进度。仅全量阶段有意义</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>校验进度。仅全量阶段有意义</p>
                     * @param _progress <p>校验进度。仅全量阶段有意义</p>
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
                     * 获取<p>不一致行数</p>
                     * @return RowCount <p>不一致行数</p>
                     * 
                     */
                    int64_t GetRowCount() const;

                    /**
                     * 设置<p>不一致行数</p>
                     * @param _rowCount <p>不一致行数</p>
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
                     * 获取<p>该表开始校验的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return StartedAt <p>该表开始校验的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置<p>该表开始校验的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _startedAt <p>该表开始校验的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return FinishedAt <p>该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _finishedAt <p>该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>预计该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return ExpectedAt <p>预计该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetExpectedAt() const;

                    /**
                     * 设置<p>预计该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _expectedAt <p>预计该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>源端行数，如果是行数校验此值有意义</p>
                     * @return SrcItem <p>源端行数，如果是行数校验此值有意义</p>
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置<p>源端行数，如果是行数校验此值有意义</p>
                     * @param _srcItem <p>源端行数，如果是行数校验此值有意义</p>
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
                     * 获取<p>目标端行数，如果是行数校验此值有意义</p>
                     * @return DstItem <p>目标端行数，如果是行数校验此值有意义</p>
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置<p>目标端行数，如果是行数校验此值有意义</p>
                     * @param _dstItem <p>目标端行数，如果是行数校验此值有意义</p>
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
                     * <p>库名</p>
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * <p>schema名</p>
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * <p>表名</p>
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>校验结果</p>
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * <p>校验状态。仅全量阶段有意义</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>校验进度。仅全量阶段有意义</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>不一致行数</p>
                     */
                    int64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * <p>该表开始校验的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * <p>该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * <p>预计该表校验结束的时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_expectedAt;
                    bool m_expectedAtHasBeenSet;

                    /**
                     * <p>源端行数，如果是行数校验此值有意义</p>
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * <p>目标端行数，如果是行数校验此值有意义</p>
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPARETABLERESULT_H_
