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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * SeriesInfo类型的二维数组
                */
                class RowValues : public AbstractModel
                {
                public:
                    RowValues();
                    ~RowValues() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowValue 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetRowValue() const;

                    /**
                     * 设置数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowValue 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowValue(const std::vector<int64_t>& _rowValue);

                    /**
                     * 判断参数 RowValue 是否已赋值
                     * @return RowValue 是否已赋值
                     * 
                     */
                    bool RowValueHasBeenSet() const;

                private:

                    /**
                     * 数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_rowValue;
                    bool m_rowValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_
