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
                     * 获取校验配置参数
                     * @return Options 校验配置参数
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置校验配置参数
                     * @param _options 校验配置参数
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
                     * 获取一致性校验对比对象
                     * @return Objects 一致性校验对比对象
                     * 
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置一致性校验对比对象
                     * @param _objects 一致性校验对比对象
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
                     * 获取对比结论: same,different
                     * @return Conclusion 对比结论: same,different
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置对比结论: same,different
                     * @param _conclusion 对比结论: same,different
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
                     * 获取任务状态: success,failed
                     * @return Status 任务状态: success,failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态: success,failed
                     * @param _status 任务状态: success,failed
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
                     * 获取总的表数量
                     * @return TotalTables 总的表数量
                     * 
                     */
                    uint64_t GetTotalTables() const;

                    /**
                     * 设置总的表数量
                     * @param _totalTables 总的表数量
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
                     * 获取已校验的表数量
                     * @return CheckedTables 已校验的表数量
                     * 
                     */
                    uint64_t GetCheckedTables() const;

                    /**
                     * 设置已校验的表数量
                     * @param _checkedTables 已校验的表数量
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
                     * 获取不一致的表数量
                     * @return DifferentTables 不一致的表数量
                     * 
                     */
                    uint64_t GetDifferentTables() const;

                    /**
                     * 设置不一致的表数量
                     * @param _differentTables 不一致的表数量
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
                     * 获取跳过校验的表数量
                     * @return SkippedTables 跳过校验的表数量
                     * 
                     */
                    uint64_t GetSkippedTables() const;

                    /**
                     * 设置跳过校验的表数量
                     * @param _skippedTables 跳过校验的表数量
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
                     * 获取预估表总数
                     * @return NearlyTableCount 预估表总数
                     * 
                     */
                    uint64_t GetNearlyTableCount() const;

                    /**
                     * 设置预估表总数
                     * @param _nearlyTableCount 预估表总数
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
                     * 获取不一致的数据行数量
                     * @return DifferentRows 不一致的数据行数量
                     * 
                     */
                    uint64_t GetDifferentRows() const;

                    /**
                     * 设置不一致的数据行数量
                     * @param _differentRows 不一致的数据行数量
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
                     * 获取源库行数，当对比类型为**行数对比**时此项有意义
                     * @return SrcSampleRows 源库行数，当对比类型为**行数对比**时此项有意义
                     * 
                     */
                    uint64_t GetSrcSampleRows() const;

                    /**
                     * 设置源库行数，当对比类型为**行数对比**时此项有意义
                     * @param _srcSampleRows 源库行数，当对比类型为**行数对比**时此项有意义
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
                     * 获取目标库行数，当对比类型为**行数对比**时此项有意义
                     * @return DstSampleRows 目标库行数，当对比类型为**行数对比**时此项有意义
                     * 
                     */
                    uint64_t GetDstSampleRows() const;

                    /**
                     * 设置目标库行数，当对比类型为**行数对比**时此项有意义
                     * @param _dstSampleRows 目标库行数，当对比类型为**行数对比**时此项有意义
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
                     * 获取开始时间
                     * @return StartedAt 开始时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置开始时间
                     * @param _startedAt 开始时间
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
                     * 获取结束时间
                     * @return FinishedAt 结束时间
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置结束时间
                     * @param _finishedAt 结束时间
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
                     * 校验配置参数
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 一致性校验对比对象
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 对比结论: same,different
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 任务状态: success,failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 总的表数量
                     */
                    uint64_t m_totalTables;
                    bool m_totalTablesHasBeenSet;

                    /**
                     * 已校验的表数量
                     */
                    uint64_t m_checkedTables;
                    bool m_checkedTablesHasBeenSet;

                    /**
                     * 不一致的表数量
                     */
                    uint64_t m_differentTables;
                    bool m_differentTablesHasBeenSet;

                    /**
                     * 跳过校验的表数量
                     */
                    uint64_t m_skippedTables;
                    bool m_skippedTablesHasBeenSet;

                    /**
                     * 预估表总数
                     */
                    uint64_t m_nearlyTableCount;
                    bool m_nearlyTableCountHasBeenSet;

                    /**
                     * 不一致的数据行数量
                     */
                    uint64_t m_differentRows;
                    bool m_differentRowsHasBeenSet;

                    /**
                     * 源库行数，当对比类型为**行数对比**时此项有意义
                     */
                    uint64_t m_srcSampleRows;
                    bool m_srcSampleRowsHasBeenSet;

                    /**
                     * 目标库行数，当对比类型为**行数对比**时此项有意义
                     */
                    uint64_t m_dstSampleRows;
                    bool m_dstSampleRowsHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_
