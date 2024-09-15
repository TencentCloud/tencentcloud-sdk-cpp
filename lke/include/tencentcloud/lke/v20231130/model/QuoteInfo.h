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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUOTEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUOTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 搜索引擎参考来源索引
                */
                class QuoteInfo : public AbstractModel
                {
                public:
                    QuoteInfo();
                    ~QuoteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参考来源位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 参考来源位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPosition() const;

                    /**
                     * 设置参考来源位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 参考来源位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const uint64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取参考来源索引顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 参考来源索引顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置参考来源索引顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 参考来源索引顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 参考来源位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 参考来源索引顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUOTEINFO_H_
