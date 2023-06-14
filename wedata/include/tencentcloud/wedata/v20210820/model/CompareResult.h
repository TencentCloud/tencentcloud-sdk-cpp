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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareResultItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 质量检查对比结果
                */
                class CompareResult : public AbstractModel
                {
                public:
                    CompareResult();
                    ~CompareResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对比结果项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 对比结果项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CompareResultItem> GetItems() const;

                    /**
                     * 设置对比结果项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 对比结果项列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<CompareResultItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取检测总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRows 检测总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalRows() const;

                    /**
                     * 设置检测总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRows 检测总行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRows(const uint64_t& _totalRows);

                    /**
                     * 判断参数 TotalRows 是否已赋值
                     * @return TotalRows 是否已赋值
                     * 
                     */
                    bool TotalRowsHasBeenSet() const;

                    /**
                     * 获取检测通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassRows 检测通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPassRows() const;

                    /**
                     * 设置检测通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passRows 检测通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassRows(const uint64_t& _passRows);

                    /**
                     * 判断参数 PassRows 是否已赋值
                     * @return PassRows 是否已赋值
                     * 
                     */
                    bool PassRowsHasBeenSet() const;

                    /**
                     * 获取检测不通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerRows 检测不通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTriggerRows() const;

                    /**
                     * 设置检测不通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerRows 检测不通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerRows(const uint64_t& _triggerRows);

                    /**
                     * 判断参数 TriggerRows 是否已赋值
                     * @return TriggerRows 是否已赋值
                     * 
                     */
                    bool TriggerRowsHasBeenSet() const;

                private:

                    /**
                     * 对比结果项列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CompareResultItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 检测总行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalRows;
                    bool m_totalRowsHasBeenSet;

                    /**
                     * 检测通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_passRows;
                    bool m_passRowsHasBeenSet;

                    /**
                     * 检测不通过行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerRows;
                    bool m_triggerRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMPARERESULT_H_
