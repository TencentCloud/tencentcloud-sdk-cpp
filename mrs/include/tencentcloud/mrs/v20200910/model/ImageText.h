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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETEXT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 报告图片信息
                */
                class ImageText : public AbstractModel
                {
                public:
                    ImageText();
                    ~ImageText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字内容可信度，0-100评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Confidence 文字内容可信度，0-100评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置文字内容可信度，0-100评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Confidence 文字内容可信度，0-100评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取图片文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 图片文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置图片文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 图片文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取文本旋转角度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotateAngle 文本旋转角度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetRotateAngle() const;

                    /**
                     * 设置文本旋转角度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RotateAngle 文本旋转角度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRotateAngle(const double& _rotateAngle);

                    /**
                     * 判断参数 RotateAngle 是否已赋值
                     * @return RotateAngle 是否已赋值
                     */
                    bool RotateAngleHasBeenSet() const;

                private:

                    /**
                     * 文字内容可信度，0-100评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 图片文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文本旋转角度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rotateAngle;
                    bool m_rotateAngleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETEXT_H_
