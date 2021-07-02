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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FINDING_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Tuber.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检查所见内容，常见于病理，检查报告
                */
                class Finding : public AbstractModel
                {
                public:
                    Finding();
                    ~Finding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取肿瘤结节列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TuberList 肿瘤结节列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tuber> GetTuberList() const;

                    /**
                     * 设置肿瘤结节列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TuberList 肿瘤结节列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTuberList(const std::vector<Tuber>& _tuberList);

                    /**
                     * 判断参数 TuberList 是否已赋值
                     * @return TuberList 是否已赋值
                     */
                    bool TuberListHasBeenSet() const;

                private:

                    /**
                     * 原文文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 肿瘤结节列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tuber> m_tuberList;
                    bool m_tuberListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FINDING_H_
