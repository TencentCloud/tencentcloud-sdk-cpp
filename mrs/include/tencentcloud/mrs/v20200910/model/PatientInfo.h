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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_

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
                * 患者信息
                */
                class PatientInfo : public AbstractModel
                {
                public:
                    PatientInfo();
                    ~PatientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sex 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Age 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _age 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCard 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCard 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCardNo 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthCardNo() const;

                    /**
                     * 设置健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCardNo 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCardNo(const std::string& _healthCardNo);

                    /**
                     * 判断参数 HealthCardNo 是否已赋值
                     * @return HealthCardNo 是否已赋值
                     * 
                     */
                    bool HealthCardNoHasBeenSet() const;

                    /**
                     * 获取社保卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SocialSecurityCardNo 社保卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSocialSecurityCardNo() const;

                    /**
                     * 设置社保卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _socialSecurityCardNo 社保卡号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSocialSecurityCardNo(const std::string& _socialSecurityCardNo);

                    /**
                     * 判断参数 SocialSecurityCardNo 是否已赋值
                     * @return SocialSecurityCardNo 是否已赋值
                     * 
                     */
                    bool SocialSecurityCardNoHasBeenSet() const;

                    /**
                     * 获取出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthday 出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthday 出生日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ethnicity 民族
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEthnicity() const;

                    /**
                     * 设置民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ethnicity 民族
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEthnicity(const std::string& _ethnicity);

                    /**
                     * 判断参数 Ethnicity 是否已赋值
                     * @return Ethnicity 是否已赋值
                     * 
                     */
                    bool EthnicityHasBeenSet() const;

                    /**
                     * 获取婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Married 婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarried() const;

                    /**
                     * 设置婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _married 婚姻状况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarried(const std::string& _married);

                    /**
                     * 判断参数 Married 是否已赋值
                     * @return Married 是否已赋值
                     * 
                     */
                    bool MarriedHasBeenSet() const;

                    /**
                     * 获取职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profession 职业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profession 职业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EducationBackground 教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEducationBackground() const;

                    /**
                     * 设置教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _educationBackground 教育程度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEducationBackground(const std::string& _educationBackground);

                    /**
                     * 判断参数 EducationBackground 是否已赋值
                     * @return EducationBackground 是否已赋值
                     * 
                     */
                    bool EducationBackgroundHasBeenSet() const;

                    /**
                     * 获取国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 设置国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nationality 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNationality(const std::string& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthPlace 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthPlace 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取医保类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalInsuranceType 医保类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMedicalInsuranceType() const;

                    /**
                     * 设置医保类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medicalInsuranceType 医保类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedicalInsuranceType(const std::string& _medicalInsuranceType);

                    /**
                     * 判断参数 MedicalInsuranceType 是否已赋值
                     * @return MedicalInsuranceType 是否已赋值
                     * 
                     */
                    bool MedicalInsuranceTypeHasBeenSet() const;

                    /**
                     * 获取标准化年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgeNorm 标准化年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgeNorm() const;

                    /**
                     * 设置标准化年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ageNorm 标准化年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgeNorm(const std::string& _ageNorm);

                    /**
                     * 判断参数 AgeNorm 是否已赋值
                     * @return AgeNorm 是否已赋值
                     * 
                     */
                    bool AgeNormHasBeenSet() const;

                    /**
                     * 获取民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nation 民族
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置民族
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nation 民族
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取婚姻代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarriedCode 婚姻代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarriedCode() const;

                    /**
                     * 设置婚姻代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _marriedCode 婚姻代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarriedCode(const std::string& _marriedCode);

                    /**
                     * 判断参数 MarriedCode 是否已赋值
                     * @return MarriedCode 是否已赋值
                     * 
                     */
                    bool MarriedCodeHasBeenSet() const;

                    /**
                     * 获取职业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProfessionCode 职业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProfessionCode() const;

                    /**
                     * 设置职业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _professionCode 职业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfessionCode(const std::string& _professionCode);

                    /**
                     * 判断参数 ProfessionCode 是否已赋值
                     * @return ProfessionCode 是否已赋值
                     * 
                     */
                    bool ProfessionCodeHasBeenSet() const;

                    /**
                     * 获取居民医保代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalInsuranceTypeCode 居民医保代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMedicalInsuranceTypeCode() const;

                    /**
                     * 设置居民医保代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medicalInsuranceTypeCode 居民医保代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedicalInsuranceTypeCode(const std::string& _medicalInsuranceTypeCode);

                    /**
                     * 判断参数 MedicalInsuranceTypeCode 是否已赋值
                     * @return MedicalInsuranceTypeCode 是否已赋值
                     * 
                     */
                    bool MedicalInsuranceTypeCodeHasBeenSet() const;

                    /**
                     * 获取床号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BedNo 床号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBedNo() const;

                    /**
                     * 设置床号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bedNo 床号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBedNo(const std::string& _bedNo);

                    /**
                     * 判断参数 BedNo 是否已赋值
                     * @return BedNo 是否已赋值
                     * 
                     */
                    bool BedNoHasBeenSet() const;

                private:

                    /**
                     * 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 健康卡号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCardNo;
                    bool m_healthCardNoHasBeenSet;

                    /**
                     * 社保卡号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_socialSecurityCardNo;
                    bool m_socialSecurityCardNoHasBeenSet;

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
                     * 国籍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 籍贯
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 医保类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_medicalInsuranceType;
                    bool m_medicalInsuranceTypeHasBeenSet;

                    /**
                     * 标准化年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ageNorm;
                    bool m_ageNormHasBeenSet;

                    /**
                     * 民族
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 婚姻代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_marriedCode;
                    bool m_marriedCodeHasBeenSet;

                    /**
                     * 职业代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_professionCode;
                    bool m_professionCodeHasBeenSet;

                    /**
                     * 居民医保代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_medicalInsuranceTypeCode;
                    bool m_medicalInsuranceTypeCodeHasBeenSet;

                    /**
                     * 床号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bedNo;
                    bool m_bedNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_
