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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ORDERDTO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ORDERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 字段排序
                */
                class OrderDto : public AbstractModel
                {
                public:
                    OrderDto();
                    ~OrderDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Column 字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _column 字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取是否升序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Asc 是否升序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAsc() const;

                    /**
                     * 设置是否升序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asc 是否升序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * 字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * 是否升序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ORDERDTO_H_
