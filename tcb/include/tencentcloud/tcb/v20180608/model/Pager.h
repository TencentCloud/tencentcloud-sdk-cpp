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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PAGER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PAGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 分页信息
                */
                class Pager : public AbstractModel
                {
                public:
                    Pager();
                    ~Pager() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 分页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 分页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页返回记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 每页返回记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limit 每页返回记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取文档集合总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 文档集合总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置文档集合总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 文档集合总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 文档集合总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PAGER_H_
