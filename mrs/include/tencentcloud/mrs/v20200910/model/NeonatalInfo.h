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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_NEONATALINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_NEONATALINFO_H_

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
                * 新生儿信息
                */
                class NeonatalInfo : public AbstractModel
                {
                public:
                    NeonatalInfo();
                    ~NeonatalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新生儿名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeonatalName 新生儿名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNeonatalName() const;

                    /**
                     * 设置新生儿名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeonatalName 新生儿名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeonatalName(const std::string& _neonatalName);

                    /**
                     * 判断参数 NeonatalName 是否已赋值
                     * @return NeonatalName 是否已赋值
                     */
                    bool NeonatalNameHasBeenSet() const;

                    /**
                     * 获取新生儿性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeonatalGender 新生儿性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNeonatalGender() const;

                    /**
                     * 设置新生儿性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeonatalGender 新生儿性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeonatalGender(const std::string& _neonatalGender);

                    /**
                     * 判断参数 NeonatalGender 是否已赋值
                     * @return NeonatalGender 是否已赋值
                     */
                    bool NeonatalGenderHasBeenSet() const;

                    /**
                     * 获取出生身长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthLength 出生身长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthLength() const;

                    /**
                     * 设置出生身长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthLength 出生身长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthLength(const std::string& _birthLength);

                    /**
                     * 判断参数 BirthLength 是否已赋值
                     * @return BirthLength 是否已赋值
                     */
                    bool BirthLengthHasBeenSet() const;

                    /**
                     * 获取出生体重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthWeight 出生体重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthWeight() const;

                    /**
                     * 设置出生体重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthWeight 出生体重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthWeight(const std::string& _birthWeight);

                    /**
                     * 判断参数 BirthWeight 是否已赋值
                     * @return BirthWeight 是否已赋值
                     */
                    bool BirthWeightHasBeenSet() const;

                    /**
                     * 获取出生孕周
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GestationalAge 出生孕周
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGestationalAge() const;

                    /**
                     * 设置出生孕周
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GestationalAge 出生孕周
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGestationalAge(const std::string& _gestationalAge);

                    /**
                     * 判断参数 GestationalAge 是否已赋值
                     * @return GestationalAge 是否已赋值
                     */
                    bool GestationalAgeHasBeenSet() const;

                    /**
                     * 获取出生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthTime 出生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthTime() const;

                    /**
                     * 设置出生时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthTime 出生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthTime(const std::string& _birthTime);

                    /**
                     * 判断参数 BirthTime 是否已赋值
                     * @return BirthTime 是否已赋值
                     */
                    bool BirthTimeHasBeenSet() const;

                    /**
                     * 获取出生地点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthPlace 出生地点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置出生地点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthPlace 出生地点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取医疗机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalInstitutions 医疗机构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMedicalInstitutions() const;

                    /**
                     * 设置医疗机构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MedicalInstitutions 医疗机构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMedicalInstitutions(const std::string& _medicalInstitutions);

                    /**
                     * 判断参数 MedicalInstitutions 是否已赋值
                     * @return MedicalInstitutions 是否已赋值
                     */
                    bool MedicalInstitutionsHasBeenSet() const;

                private:

                    /**
                     * 新生儿名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_neonatalName;
                    bool m_neonatalNameHasBeenSet;

                    /**
                     * 新生儿性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_neonatalGender;
                    bool m_neonatalGenderHasBeenSet;

                    /**
                     * 出生身长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthLength;
                    bool m_birthLengthHasBeenSet;

                    /**
                     * 出生体重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthWeight;
                    bool m_birthWeightHasBeenSet;

                    /**
                     * 出生孕周
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gestationalAge;
                    bool m_gestationalAgeHasBeenSet;

                    /**
                     * 出生时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthTime;
                    bool m_birthTimeHasBeenSet;

                    /**
                     * 出生地点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 医疗机构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_medicalInstitutions;
                    bool m_medicalInstitutionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_NEONATALINFO_H_
