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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性校验摘要信息
                */
                class CompareAbstractInfo : public AbstractModel
                {
                public:
                    CompareAbstractInfo();
                    ~CompareAbstractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>校验配置参数</p>
                     * @return Options <p>校验配置参数</p>
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置<p>校验配置参数</p>
                     * @param _options <p>校验配置参数</p>
                     * 
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>一致性校验对比对象</p>
                     * @return Objects <p>一致性校验对比对象</p>
                     * 
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置<p>一致性校验对比对象</p>
                     * @param _objects <p>一致性校验对比对象</p>
                     * 
                     */
                    void SetObjects(const CompareObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取<p>对比结论: same,different</p>
                     * @return Conclusion <p>对比结论: same,different</p>
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置<p>对比结论: same,different</p>
                     * @param _conclusion <p>对比结论: same,different</p>
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
                     * 获取<p>任务状态: success,failed</p>
                     * @return Status <p>任务状态: success,failed</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态: success,failed</p>
                     * @param _status <p>任务状态: success,failed</p>
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
                     * 获取<p>总的表数量</p>
                     * @return TotalTables <p>总的表数量</p>
                     * 
                     */
                    uint64_t GetTotalTables() const;

                    /**
                     * 设置<p>总的表数量</p>
                     * @param _totalTables <p>总的表数量</p>
                     * 
                     */
                    void SetTotalTables(const uint64_t& _totalTables);

                    /**
                     * 判断参数 TotalTables 是否已赋值
                     * @return TotalTables 是否已赋值
                     * 
                     */
                    bool TotalTablesHasBeenSet() const;

                    /**
                     * 获取<p>已校验的表数量</p>
                     * @return CheckedTables <p>已校验的表数量</p>
                     * 
                     */
                    uint64_t GetCheckedTables() const;

                    /**
                     * 设置<p>已校验的表数量</p>
                     * @param _checkedTables <p>已校验的表数量</p>
                     * 
                     */
                    void SetCheckedTables(const uint64_t& _checkedTables);

                    /**
                     * 判断参数 CheckedTables 是否已赋值
                     * @return CheckedTables 是否已赋值
                     * 
                     */
                    bool CheckedTablesHasBeenSet() const;

                    /**
                     * 获取<p>不一致的表数量</p>
                     * @return DifferentTables <p>不一致的表数量</p>
                     * 
                     */
                    uint64_t GetDifferentTables() const;

                    /**
                     * 设置<p>不一致的表数量</p>
                     * @param _differentTables <p>不一致的表数量</p>
                     * 
                     */
                    void SetDifferentTables(const uint64_t& _differentTables);

                    /**
                     * 判断参数 DifferentTables 是否已赋值
                     * @return DifferentTables 是否已赋值
                     * 
                     */
                    bool DifferentTablesHasBeenSet() const;

                    /**
                     * 获取<p>跳过校验的表数量</p>
                     * @return SkippedTables <p>跳过校验的表数量</p>
                     * 
                     */
                    uint64_t GetSkippedTables() const;

                    /**
                     * 设置<p>跳过校验的表数量</p>
                     * @param _skippedTables <p>跳过校验的表数量</p>
                     * 
                     */
                    void SetSkippedTables(const uint64_t& _skippedTables);

                    /**
                     * 判断参数 SkippedTables 是否已赋值
                     * @return SkippedTables 是否已赋值
                     * 
                     */
                    bool SkippedTablesHasBeenSet() const;

                    /**
                     * 获取<p>预估表总数</p>
                     * @return NearlyTableCount <p>预估表总数</p>
                     * 
                     */
                    uint64_t GetNearlyTableCount() const;

                    /**
                     * 设置<p>预估表总数</p>
                     * @param _nearlyTableCount <p>预估表总数</p>
                     * 
                     */
                    void SetNearlyTableCount(const uint64_t& _nearlyTableCount);

                    /**
                     * 判断参数 NearlyTableCount 是否已赋值
                     * @return NearlyTableCount 是否已赋值
                     * 
                     */
                    bool NearlyTableCountHasBeenSet() const;

                    /**
                     * 获取<p>不一致的数据行数量</p>
                     * @return DifferentRows <p>不一致的数据行数量</p>
                     * 
                     */
                    uint64_t GetDifferentRows() const;

                    /**
                     * 设置<p>不一致的数据行数量</p>
                     * @param _differentRows <p>不一致的数据行数量</p>
                     * 
                     */
                    void SetDifferentRows(const uint64_t& _differentRows);

                    /**
                     * 判断参数 DifferentRows 是否已赋值
                     * @return DifferentRows 是否已赋值
                     * 
                     */
                    bool DifferentRowsHasBeenSet() const;

                    /**
                     * 获取<p>源库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * @return SrcSampleRows <p>源库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * 
                     */
                    uint64_t GetSrcSampleRows() const;

                    /**
                     * 设置<p>源库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * @param _srcSampleRows <p>源库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * 
                     */
                    void SetSrcSampleRows(const uint64_t& _srcSampleRows);

                    /**
                     * 判断参数 SrcSampleRows 是否已赋值
                     * @return SrcSampleRows 是否已赋值
                     * 
                     */
                    bool SrcSampleRowsHasBeenSet() const;

                    /**
                     * 获取<p>目标库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * @return DstSampleRows <p>目标库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * 
                     */
                    uint64_t GetDstSampleRows() const;

                    /**
                     * 设置<p>目标库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * @param _dstSampleRows <p>目标库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     * 
                     */
                    void SetDstSampleRows(const uint64_t& _dstSampleRows);

                    /**
                     * 判断参数 DstSampleRows 是否已赋值
                     * @return DstSampleRows 是否已赋值
                     * 
                     */
                    bool DstSampleRowsHasBeenSet() const;

                    /**
                     * 获取<p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return StartedAt <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置<p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _startedAt <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * 获取<p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @return FinishedAt <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     * @param _finishedAt <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
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
                     * <p>校验配置参数</p>
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>一致性校验对比对象</p>
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * <p>对比结论: same,different</p>
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * <p>任务状态: success,failed</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>总的表数量</p>
                     */
                    uint64_t m_totalTables;
                    bool m_totalTablesHasBeenSet;

                    /**
                     * <p>已校验的表数量</p>
                     */
                    uint64_t m_checkedTables;
                    bool m_checkedTablesHasBeenSet;

                    /**
                     * <p>不一致的表数量</p>
                     */
                    uint64_t m_differentTables;
                    bool m_differentTablesHasBeenSet;

                    /**
                     * <p>跳过校验的表数量</p>
                     */
                    uint64_t m_skippedTables;
                    bool m_skippedTablesHasBeenSet;

                    /**
                     * <p>预估表总数</p>
                     */
                    uint64_t m_nearlyTableCount;
                    bool m_nearlyTableCountHasBeenSet;

                    /**
                     * <p>不一致的数据行数量</p>
                     */
                    uint64_t m_differentRows;
                    bool m_differentRowsHasBeenSet;

                    /**
                     * <p>源库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     */
                    uint64_t m_srcSampleRows;
                    bool m_srcSampleRowsHasBeenSet;

                    /**
                     * <p>目标库行数，当对比类型为<strong>行数对比</strong>时此项有意义</p>
                     */
                    uint64_t m_dstSampleRows;
                    bool m_dstSampleRowsHasBeenSet;

                    /**
                     * <p>开始时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * <p>结束时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>yyyy-mm-dd hh:mm:ss</code>（北京时间）</p>
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_
