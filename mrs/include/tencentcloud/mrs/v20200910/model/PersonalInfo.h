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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALINFO_H_

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
                * 个人信息
                */
                class PersonalInfo : public AbstractModel
                {
                public:
                    PersonalInfo();
                    ~PersonalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender 性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGender() const;

                    /**
                     * 设置性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Gender 性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Age 年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAge() const;

                    /**
                     * 设置年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Age 年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取身份证号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IDCard 身份证号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIDCard() const;

                    /**
                     * 设置身份证号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IDCard 身份证号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIDCard(const std::string& _iDCard);

                    /**
                     * 判断参数 IDCard 是否已赋值
                     * @return IDCard 是否已赋值
                     */
                    bool IDCardHasBeenSet() const;

                    /**
                     * 获取健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCardNum 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHealthCardNum() const;

                    /**
                     * 设置健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthCardNum 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthCardNum(const std::string& _healthCardNum);

                    /**
                     * 判断参数 HealthCardNum 是否已赋值
                     * @return HealthCardNum 是否已赋值
                     */
                    bool HealthCardNumHasBeenSet() const;

                    /**
                     * 获取社保号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SocialSecurityCardNum 社保号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSocialSecurityCardNum() const;

                    /**
                     * 设置社保号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SocialSecurityCardNum 社保号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSocialSecurityCardNum(const std::string& _socialSecurityCardNum);

                    /**
                     * 判断参数 SocialSecurityCardNum 是否已赋值
                     * @return SocialSecurityCardNum 是否已赋值
                     */
                    bool SocialSecurityCardNumHasBeenSet() const;

                    /**
                     * 获取出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthday 出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Birthday 出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ethnicity 民族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEthnicity() const;

                    /**
                     * 设置民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ethnicity 民族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEthnicity(const std::string& _ethnicity);

                    /**
                     * 判断参数 Ethnicity 是否已赋值
                     * @return Ethnicity 是否已赋值
                     */
                    bool EthnicityHasBeenSet() const;

                    /**
                     * 获取国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Nationality 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Married 婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMarried() const;

                    /**
                     * 设置婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Married 婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMarried(const std::string& _married);

                    /**
                     * 判断参数 Married 是否已赋值
                     * @return Married 是否已赋值
                     */
                    bool MarriedHasBeenSet() const;

                    /**
                     * 获取职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profession 职业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Profession 职业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EducationBackground 教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEducationBackground() const;

                    /**
                     * 设置教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EducationBackground 教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEducationBackground(const std::string& _educationBackground);

                    /**
                     * 判断参数 EducationBackground 是否已赋值
                     * @return EducationBackground 是否已赋值
                     */
                    bool EducationBackgroundHasBeenSet() const;

                    /**
                     * 获取籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthPlace 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BirthPlace 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取医保卡类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalInsuranceType 医保卡类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMedicalInsuranceType() const;

                    /**
                     * 设置医保卡类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MedicalInsuranceType 医保卡类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMedicalInsuranceType(const std::string& _medicalInsuranceType);

                    /**
                     * 判断参数 MedicalInsuranceType 是否已赋值
                     * @return MedicalInsuranceType 是否已赋值
                     */
                    bool MedicalInsuranceTypeHasBeenSet() const;

                    /**
                     * 获取联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkPhone 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLinkPhone() const;

                    /**
                     * 设置联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LinkPhone 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLinkPhone(const std::string& _linkPhone);

                    /**
                     * 判断参数 LinkPhone 是否已赋值
                     * @return LinkPhone 是否已赋值
                     */
                    bool LinkPhoneHasBeenSet() const;

                    /**
                     * 获取联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkAddress 联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLinkAddress() const;

                    /**
                     * 设置联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LinkAddress 联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLinkAddress(const std::string& _linkAddress);

                    /**
                     * 判断参数 LinkAddress 是否已赋值
                     * @return LinkAddress 是否已赋值
                     */
                    bool LinkAddressHasBeenSet() const;

                    /**
                     * 获取家属姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KinsfolkName 家属姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKinsfolkName() const;

                    /**
                     * 设置家属姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KinsfolkName 家属姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKinsfolkName(const std::string& _kinsfolkName);

                    /**
                     * 判断参数 KinsfolkName 是否已赋值
                     * @return KinsfolkName 是否已赋值
                     */
                    bool KinsfolkNameHasBeenSet() const;

                    /**
                     * 获取家属关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KinsfolkRelation 家属关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKinsfolkRelation() const;

                    /**
                     * 设置家属关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KinsfolkRelation 家属关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKinsfolkRelation(const std::string& _kinsfolkRelation);

                    /**
                     * 判断参数 KinsfolkRelation 是否已赋值
                     * @return KinsfolkRelation 是否已赋值
                     */
                    bool KinsfolkRelationHasBeenSet() const;

                    /**
                     * 获取家属联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KinsfolkPhone 家属联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKinsfolkPhone() const;

                    /**
                     * 设置家属联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KinsfolkPhone 家属联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKinsfolkPhone(const std::string& _kinsfolkPhone);

                    /**
                     * 判断参数 KinsfolkPhone 是否已赋值
                     * @return KinsfolkPhone 是否已赋值
                     */
                    bool KinsfolkPhoneHasBeenSet() const;

                private:

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 身份证号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iDCard;
                    bool m_iDCardHasBeenSet;

                    /**
                     * 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCardNum;
                    bool m_healthCardNumHasBeenSet;

                    /**
                     * 社保号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_socialSecurityCardNum;
                    bool m_socialSecurityCardNumHasBeenSet;

                    /**
                     * 出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 民族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ethnicity;
                    bool m_ethnicityHasBeenSet;

                    /**
                     * 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_married;
                    bool m_marriedHasBeenSet;

                    /**
                     * 职业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * 教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_educationBackground;
                    bool m_educationBackgroundHasBeenSet;

                    /**
                     * 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 医保卡类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_medicalInsuranceType;
                    bool m_medicalInsuranceTypeHasBeenSet;

                    /**
                     * 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkPhone;
                    bool m_linkPhoneHasBeenSet;

                    /**
                     * 联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkAddress;
                    bool m_linkAddressHasBeenSet;

                    /**
                     * 家属姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kinsfolkName;
                    bool m_kinsfolkNameHasBeenSet;

                    /**
                     * 家属关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kinsfolkRelation;
                    bool m_kinsfolkRelationHasBeenSet;

                    /**
                     * 家属联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kinsfolkPhone;
                    bool m_kinsfolkPhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALINFO_H_
