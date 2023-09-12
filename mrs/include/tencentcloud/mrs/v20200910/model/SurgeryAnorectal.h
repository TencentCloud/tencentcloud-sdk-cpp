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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYANORECTAL_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYANORECTAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-外科-肛门直肠
                */
                class SurgeryAnorectal : public AbstractModel
                {
                public:
                    SurgeryAnorectal();
                    ~SurgeryAnorectal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取肛门直肠总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 肛门直肠总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置肛门直肠总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 肛门直肠总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const KeyValueItem& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取直肠指检
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DigitalRectalExamination 直肠指检
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetDigitalRectalExamination() const;

                    /**
                     * 设置直肠指检
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _digitalRectalExamination 直肠指检
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDigitalRectalExamination(const KeyValueItem& _digitalRectalExamination);

                    /**
                     * 判断参数 DigitalRectalExamination 是否已赋值
                     * @return DigitalRectalExamination 是否已赋值
                     * 
                     */
                    bool DigitalRectalExaminationHasBeenSet() const;

                    /**
                     * 获取痔疮
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hemorrhoid 痔疮
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetHemorrhoid() const;

                    /**
                     * 设置痔疮
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hemorrhoid 痔疮
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHemorrhoid(const KeyValueItem& _hemorrhoid);

                    /**
                     * 判断参数 Hemorrhoid 是否已赋值
                     * @return Hemorrhoid 是否已赋值
                     * 
                     */
                    bool HemorrhoidHasBeenSet() const;

                private:

                    /**
                     * 肛门直肠总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 直肠指检
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_digitalRectalExamination;
                    bool m_digitalRectalExaminationHasBeenSet;

                    /**
                     * 痔疮
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_hemorrhoid;
                    bool m_hemorrhoidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYANORECTAL_H_
