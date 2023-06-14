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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ROWITEM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ROWITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/RowValue.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 文本行信息
                */
                class RowItem : public AbstractModel
                {
                public:
                    RowItem();
                    ~RowItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取rowValue 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values rowValue 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RowValue> GetValues() const;

                    /**
                     * 设置rowValue 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values rowValue 数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<RowValue>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * rowValue 数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowValue> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ROWITEM_H_
