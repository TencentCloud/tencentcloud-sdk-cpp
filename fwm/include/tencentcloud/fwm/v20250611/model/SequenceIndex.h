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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_SEQUENCEINDEX_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_SEQUENCEINDEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 规则序号调整结构
                */
                class SequenceIndex : public AbstractModel
                {
                public:
                    SequenceIndex();
                    ~SequenceIndex() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderIndex 原规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置原规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderIndex 原规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取新规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewOrderIndex 新规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNewOrderIndex() const;

                    /**
                     * 设置新规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newOrderIndex 新规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewOrderIndex(const int64_t& _newOrderIndex);

                    /**
                     * 判断参数 NewOrderIndex 是否已赋值
                     * @return NewOrderIndex 是否已赋值
                     * 
                     */
                    bool NewOrderIndexHasBeenSet() const;

                private:

                    /**
                     * 原规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 新规则序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_newOrderIndex;
                    bool m_newOrderIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_SEQUENCEINDEX_H_
