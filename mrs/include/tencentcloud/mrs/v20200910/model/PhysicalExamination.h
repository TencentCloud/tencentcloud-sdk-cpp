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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/GeneralExaminationBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/InternalMedicineBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/StomatologyBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/OtolaryngologyBaseItem.h>
#include <tencentcloud/mrs/v20200910/model/GynaecologyBaseItem.h>
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
                * 体检报告综合信息
                */
                class PhysicalExamination : public AbstractModel
                {
                public:
                    PhysicalExamination();
                    ~PhysicalExamination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一般检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GeneralExamination 一般检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GeneralExaminationBaseItem GetGeneralExamination() const;

                    /**
                     * 设置一般检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _generalExamination 一般检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGeneralExamination(const GeneralExaminationBaseItem& _generalExamination);

                    /**
                     * 判断参数 GeneralExamination 是否已赋值
                     * @return GeneralExamination 是否已赋值
                     * 
                     */
                    bool GeneralExaminationHasBeenSet() const;

                    /**
                     * 获取内科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalMedicine 内科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InternalMedicineBaseItem GetInternalMedicine() const;

                    /**
                     * 设置内科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalMedicine 内科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalMedicine(const InternalMedicineBaseItem& _internalMedicine);

                    /**
                     * 判断参数 InternalMedicine 是否已赋值
                     * @return InternalMedicine 是否已赋值
                     * 
                     */
                    bool InternalMedicineHasBeenSet() const;

                    /**
                     * 获取外科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Surgery 外科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SurgeryBaseItem GetSurgery() const;

                    /**
                     * 设置外科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _surgery 外科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSurgery(const SurgeryBaseItem& _surgery);

                    /**
                     * 判断参数 Surgery 是否已赋值
                     * @return Surgery 是否已赋值
                     * 
                     */
                    bool SurgeryHasBeenSet() const;

                    /**
                     * 获取口腔科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stomatology 口腔科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StomatologyBaseItem GetStomatology() const;

                    /**
                     * 设置口腔科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stomatology 口腔科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStomatology(const StomatologyBaseItem& _stomatology);

                    /**
                     * 判断参数 Stomatology 是否已赋值
                     * @return Stomatology 是否已赋值
                     * 
                     */
                    bool StomatologyHasBeenSet() const;

                    /**
                     * 获取眼科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ophthalmology 眼科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OphthalmologyBaseItem GetOphthalmology() const;

                    /**
                     * 设置眼科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ophthalmology 眼科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOphthalmology(const OphthalmologyBaseItem& _ophthalmology);

                    /**
                     * 判断参数 Ophthalmology 是否已赋值
                     * @return Ophthalmology 是否已赋值
                     * 
                     */
                    bool OphthalmologyHasBeenSet() const;

                    /**
                     * 获取耳鼻喉科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Otolaryngology 耳鼻喉科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OtolaryngologyBaseItem GetOtolaryngology() const;

                    /**
                     * 设置耳鼻喉科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otolaryngology 耳鼻喉科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtolaryngology(const OtolaryngologyBaseItem& _otolaryngology);

                    /**
                     * 判断参数 Otolaryngology 是否已赋值
                     * @return Otolaryngology 是否已赋值
                     * 
                     */
                    bool OtolaryngologyHasBeenSet() const;

                    /**
                     * 获取妇科
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gynaecology 妇科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GynaecologyBaseItem GetGynaecology() const;

                    /**
                     * 设置妇科
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gynaecology 妇科
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGynaecology(const GynaecologyBaseItem& _gynaecology);

                    /**
                     * 判断参数 Gynaecology 是否已赋值
                     * @return Gynaecology 是否已赋值
                     * 
                     */
                    bool GynaecologyHasBeenSet() const;

                    /**
                     * 获取未标准化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unclassified 未标准化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValueItem> GetUnclassified() const;

                    /**
                     * 设置未标准化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unclassified 未标准化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnclassified(const std::vector<KeyValueItem>& _unclassified);

                    /**
                     * 判断参数 Unclassified 是否已赋值
                     * @return Unclassified 是否已赋值
                     * 
                     */
                    bool UnclassifiedHasBeenSet() const;

                private:

                    /**
                     * 一般检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GeneralExaminationBaseItem m_generalExamination;
                    bool m_generalExaminationHasBeenSet;

                    /**
                     * 内科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternalMedicineBaseItem m_internalMedicine;
                    bool m_internalMedicineHasBeenSet;

                    /**
                     * 外科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SurgeryBaseItem m_surgery;
                    bool m_surgeryHasBeenSet;

                    /**
                     * 口腔科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StomatologyBaseItem m_stomatology;
                    bool m_stomatologyHasBeenSet;

                    /**
                     * 眼科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OphthalmologyBaseItem m_ophthalmology;
                    bool m_ophthalmologyHasBeenSet;

                    /**
                     * 耳鼻喉科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OtolaryngologyBaseItem m_otolaryngology;
                    bool m_otolaryngologyHasBeenSet;

                    /**
                     * 妇科
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GynaecologyBaseItem m_gynaecology;
                    bool m_gynaecologyHasBeenSet;

                    /**
                     * 未标准化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValueItem> m_unclassified;
                    bool m_unclassifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATION_H_
