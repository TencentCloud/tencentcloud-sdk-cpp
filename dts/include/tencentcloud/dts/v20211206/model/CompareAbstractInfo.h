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
                     * 获取对比结论: same,different
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conclusion 对比结论: same,different
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置对比结论: same,different
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Conclusion 对比结论: same,different
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取任务状态: success,failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态: success,failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态: success,failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 任务状态: success,failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取总的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTables 总的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalTables() const;

                    /**
                     * 设置总的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalTables 总的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalTables(const uint64_t& _totalTables);

                    /**
                     * 判断参数 TotalTables 是否已赋值
                     * @return TotalTables 是否已赋值
                     */
                    bool TotalTablesHasBeenSet() const;

                    /**
                     * 获取已校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckedTables 已校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCheckedTables() const;

                    /**
                     * 设置已校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckedTables 已校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckedTables(const uint64_t& _checkedTables);

                    /**
                     * 判断参数 CheckedTables 是否已赋值
                     * @return CheckedTables 是否已赋值
                     */
                    bool CheckedTablesHasBeenSet() const;

                    /**
                     * 获取不一致的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DifferentTables 不一致的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDifferentTables() const;

                    /**
                     * 设置不一致的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DifferentTables 不一致的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDifferentTables(const uint64_t& _differentTables);

                    /**
                     * 判断参数 DifferentTables 是否已赋值
                     * @return DifferentTables 是否已赋值
                     */
                    bool DifferentTablesHasBeenSet() const;

                    /**
                     * 获取跳过校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkippedTables 跳过校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSkippedTables() const;

                    /**
                     * 设置跳过校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkippedTables 跳过校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkippedTables(const uint64_t& _skippedTables);

                    /**
                     * 判断参数 SkippedTables 是否已赋值
                     * @return SkippedTables 是否已赋值
                     */
                    bool SkippedTablesHasBeenSet() const;

                    /**
                     * 获取不一致的数据行数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DifferentRows 不一致的数据行数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDifferentRows() const;

                    /**
                     * 设置不一致的数据行数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DifferentRows 不一致的数据行数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDifferentRows(const uint64_t& _differentRows);

                    /**
                     * 判断参数 DifferentRows 是否已赋值
                     * @return DifferentRows 是否已赋值
                     */
                    bool DifferentRowsHasBeenSet() const;

                private:

                    /**
                     * 对比结论: same,different
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 任务状态: success,failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 总的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalTables;
                    bool m_totalTablesHasBeenSet;

                    /**
                     * 已校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_checkedTables;
                    bool m_checkedTablesHasBeenSet;

                    /**
                     * 不一致的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_differentTables;
                    bool m_differentTablesHasBeenSet;

                    /**
                     * 跳过校验的表数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_skippedTables;
                    bool m_skippedTablesHasBeenSet;

                    /**
                     * 不一致的数据行数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_differentRows;
                    bool m_differentRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_
