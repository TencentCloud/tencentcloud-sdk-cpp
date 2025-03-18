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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEROWDETAIL_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEROWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/RowsCountDifference.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * mongodb行数校验不一致性详情结果
                */
                class DifferenceRowDetail : public AbstractModel
                {
                public:
                    DifferenceRowDetail();
                    ~DifferenceRowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不一致总数
                     * @return TotalCount 不一致总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置不一致总数
                     * @param _totalCount 不一致总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取不一致列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 不一致列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RowsCountDifference> GetItems() const;

                    /**
                     * 设置不一致列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 不一致列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<RowsCountDifference>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 不一致总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 不一致列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowsCountDifference> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DIFFERENCEROWDETAIL_H_
