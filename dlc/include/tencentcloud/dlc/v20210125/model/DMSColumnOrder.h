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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMNORDER_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMNORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 列排序对象
                */
                class DMSColumnOrder : public AbstractModel
                {
                public:
                    DMSColumnOrder();
                    ~DMSColumnOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Col 列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCol() const;

                    /**
                     * 设置列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _col 列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCol(const std::string& _col);

                    /**
                     * 判断参数 Col 是否已赋值
                     * @return Col 是否已赋值
                     * 
                     */
                    bool ColHasBeenSet() const;

                    /**
                     * 获取排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Order 排序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _order 排序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 列名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_col;
                    bool m_colHasBeenSet;

                    /**
                     * 排序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSCOLUMNORDER_H_
