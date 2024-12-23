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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_ATTRIBUTESFORBODY_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_ATTRIBUTESFORBODY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/ImageRect.h>
#include <tencentcloud/tiia/v20190529/model/BodyAttributes.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 属性检测到的人体
                */
                class AttributesForBody : public AbstractModel
                {
                public:
                    AttributesForBody();
                    ~AttributesForBody() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体框。当不开启人体检测时，内部参数默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rect 人体框。当不开启人体检测时，内部参数默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageRect GetRect() const;

                    /**
                     * 设置人体框。当不开启人体检测时，内部参数默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rect 人体框。当不开启人体检测时，内部参数默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRect(const ImageRect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取人体检测置信度。取值0-1之间，当不开启人体检测开关时默认为0。
                     * @return DetectConfidence 人体检测置信度。取值0-1之间，当不开启人体检测开关时默认为0。
                     * 
                     */
                    double GetDetectConfidence() const;

                    /**
                     * 设置人体检测置信度。取值0-1之间，当不开启人体检测开关时默认为0。
                     * @param _detectConfidence 人体检测置信度。取值0-1之间，当不开启人体检测开关时默认为0。
                     * 
                     */
                    void SetDetectConfidence(const double& _detectConfidence);

                    /**
                     * 判断参数 DetectConfidence 是否已赋值
                     * @return DetectConfidence 是否已赋值
                     * 
                     */
                    bool DetectConfidenceHasBeenSet() const;

                    /**
                     * 获取属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attributes 属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BodyAttributes> GetAttributes() const;

                    /**
                     * 设置属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attributes 属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttributes(const std::vector<BodyAttributes>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                private:

                    /**
                     * 人体框。当不开启人体检测时，内部参数默认为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageRect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * 人体检测置信度。取值0-1之间，当不开启人体检测开关时默认为0。
                     */
                    double m_detectConfidence;
                    bool m_detectConfidenceHasBeenSet;

                    /**
                     * 属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BodyAttributes> m_attributes;
                    bool m_attributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_ATTRIBUTESFORBODY_H_
