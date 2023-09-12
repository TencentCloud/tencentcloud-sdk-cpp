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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINERESPIRATORYSYSTEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINERESPIRATORYSYSTEM_H_

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
                * 体检报告-内科-呼吸系统
                */
                class InternalMedicineRespiratorySystem : public AbstractModel
                {
                public:
                    InternalMedicineRespiratorySystem();
                    ~InternalMedicineRespiratorySystem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取呼吸系统总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 呼吸系统总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetText() const;

                    /**
                     * 设置呼吸系统总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 呼吸系统总体描述
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
                     * 获取胸廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Thoracic 胸廓
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetThoracic() const;

                    /**
                     * 设置胸廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thoracic 胸廓
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThoracic(const KeyValueItem& _thoracic);

                    /**
                     * 判断参数 Thoracic 是否已赋值
                     * @return Thoracic 是否已赋值
                     * 
                     */
                    bool ThoracicHasBeenSet() const;

                    /**
                     * 获取痰量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sputum 痰量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetSputum() const;

                    /**
                     * 设置痰量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sputum 痰量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSputum(const KeyValueItem& _sputum);

                    /**
                     * 判断参数 Sputum 是否已赋值
                     * @return Sputum 是否已赋值
                     * 
                     */
                    bool SputumHasBeenSet() const;

                    /**
                     * 获取肺部叩诊
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LungPercussion 肺部叩诊
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueItem GetLungPercussion() const;

                    /**
                     * 设置肺部叩诊
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lungPercussion 肺部叩诊
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLungPercussion(const KeyValueItem& _lungPercussion);

                    /**
                     * 判断参数 LungPercussion 是否已赋值
                     * @return LungPercussion 是否已赋值
                     * 
                     */
                    bool LungPercussionHasBeenSet() const;

                    /**
                     * 获取肺部听诊其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LungAuscultation 肺部听诊其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValueItem> GetLungAuscultation() const;

                    /**
                     * 设置肺部听诊其他
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lungAuscultation 肺部听诊其他
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLungAuscultation(const std::vector<KeyValueItem>& _lungAuscultation);

                    /**
                     * 判断参数 LungAuscultation 是否已赋值
                     * @return LungAuscultation 是否已赋值
                     * 
                     */
                    bool LungAuscultationHasBeenSet() const;

                private:

                    /**
                     * 呼吸系统总体描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 胸廓
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_thoracic;
                    bool m_thoracicHasBeenSet;

                    /**
                     * 痰量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_sputum;
                    bool m_sputumHasBeenSet;

                    /**
                     * 肺部叩诊
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueItem m_lungPercussion;
                    bool m_lungPercussionHasBeenSet;

                    /**
                     * 肺部听诊其他
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValueItem> m_lungAuscultation;
                    bool m_lungAuscultationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINERESPIRATORYSYSTEM_H_
