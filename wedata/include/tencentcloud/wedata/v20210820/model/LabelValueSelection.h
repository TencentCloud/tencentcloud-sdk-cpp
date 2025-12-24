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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LABELVALUESELECTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LABELVALUESELECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 标签值选择列表
                */
                class LabelValueSelection : public AbstractModel
                {
                public:
                    LabelValueSelection();
                    ~LabelValueSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLabelId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelId(const int64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取标签值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue 标签值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue 标签值ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                private:

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签值ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LABELVALUESELECTION_H_
