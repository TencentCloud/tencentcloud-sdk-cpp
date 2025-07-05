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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Rule.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量规则分页
                */
                class RulePage : public AbstractModel
                {
                public:
                    RulePage();
                    ~RulePage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Rule> GetItems() const;

                    /**
                     * 设置规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<Rule>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Rule> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEPAGE_H_
