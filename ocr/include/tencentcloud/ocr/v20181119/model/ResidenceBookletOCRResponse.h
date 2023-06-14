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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RESIDENCEBOOKLETOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RESIDENCEBOOKLETOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ResidenceBookletOCR返回参数结构体
                */
                class ResidenceBookletOCRResponse : public AbstractModel
                {
                public:
                    ResidenceBookletOCRResponse();
                    ~ResidenceBookletOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取户号
                     * @return HouseholdNumber 户号
                     * 
                     */
                    std::string GetHouseholdNumber() const;

                    /**
                     * 判断参数 HouseholdNumber 是否已赋值
                     * @return HouseholdNumber 是否已赋值
                     * 
                     */
                    bool HouseholdNumberHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取出生地
                     * @return BirthPlace 出生地
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取民族
                     * @return Nation 民族
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取籍贯
                     * @return NativePlace 籍贯
                     * 
                     */
                    std::string GetNativePlace() const;

                    /**
                     * 判断参数 NativePlace 是否已赋值
                     * @return NativePlace 是否已赋值
                     * 
                     */
                    bool NativePlaceHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return BirthDate 出生日期
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取公民身份证件编号
                     * @return IdCardNumber 公民身份证件编号
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取文化程度
                     * @return EducationDegree 文化程度
                     * 
                     */
                    std::string GetEducationDegree() const;

                    /**
                     * 判断参数 EducationDegree 是否已赋值
                     * @return EducationDegree 是否已赋值
                     * 
                     */
                    bool EducationDegreeHasBeenSet() const;

                    /**
                     * 获取服务处所
                     * @return ServicePlace 服务处所
                     * 
                     */
                    std::string GetServicePlace() const;

                    /**
                     * 判断参数 ServicePlace 是否已赋值
                     * @return ServicePlace 是否已赋值
                     * 
                     */
                    bool ServicePlaceHasBeenSet() const;

                    /**
                     * 获取户别
                     * @return Household 户别
                     * 
                     */
                    std::string GetHousehold() const;

                    /**
                     * 判断参数 Household 是否已赋值
                     * @return Household 是否已赋值
                     * 
                     */
                    bool HouseholdHasBeenSet() const;

                    /**
                     * 获取住址
                     * @return Address 住址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取承办人签章文字
                     * @return Signature 承办人签章文字
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取签发日期
                     * @return IssueDate 签发日期
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取户主页编号
                     * @return HomePageNumber 户主页编号
                     * 
                     */
                    std::string GetHomePageNumber() const;

                    /**
                     * 判断参数 HomePageNumber 是否已赋值
                     * @return HomePageNumber 是否已赋值
                     * 
                     */
                    bool HomePageNumberHasBeenSet() const;

                    /**
                     * 获取户主姓名
                     * @return HouseholderName 户主姓名
                     * 
                     */
                    std::string GetHouseholderName() const;

                    /**
                     * 判断参数 HouseholderName 是否已赋值
                     * @return HouseholderName 是否已赋值
                     * 
                     */
                    bool HouseholderNameHasBeenSet() const;

                    /**
                     * 获取户主或与户主关系
                     * @return Relationship 户主或与户主关系
                     * 
                     */
                    std::string GetRelationship() const;

                    /**
                     * 判断参数 Relationship 是否已赋值
                     * @return Relationship 是否已赋值
                     * 
                     */
                    bool RelationshipHasBeenSet() const;

                    /**
                     * 获取本市（县）其他住址
                     * @return OtherAddresses 本市（县）其他住址
                     * 
                     */
                    std::string GetOtherAddresses() const;

                    /**
                     * 判断参数 OtherAddresses 是否已赋值
                     * @return OtherAddresses 是否已赋值
                     * 
                     */
                    bool OtherAddressesHasBeenSet() const;

                    /**
                     * 获取宗教信仰
                     * @return ReligiousBelief 宗教信仰
                     * 
                     */
                    std::string GetReligiousBelief() const;

                    /**
                     * 判断参数 ReligiousBelief 是否已赋值
                     * @return ReligiousBelief 是否已赋值
                     * 
                     */
                    bool ReligiousBeliefHasBeenSet() const;

                    /**
                     * 获取身高
                     * @return Height 身高
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取血型
                     * @return BloodType 血型
                     * 
                     */
                    std::string GetBloodType() const;

                    /**
                     * 判断参数 BloodType 是否已赋值
                     * @return BloodType 是否已赋值
                     * 
                     */
                    bool BloodTypeHasBeenSet() const;

                    /**
                     * 获取婚姻状况
                     * @return MaritalStatus 婚姻状况
                     * 
                     */
                    std::string GetMaritalStatus() const;

                    /**
                     * 判断参数 MaritalStatus 是否已赋值
                     * @return MaritalStatus 是否已赋值
                     * 
                     */
                    bool MaritalStatusHasBeenSet() const;

                    /**
                     * 获取兵役状况
                     * @return VeteranStatus 兵役状况
                     * 
                     */
                    std::string GetVeteranStatus() const;

                    /**
                     * 判断参数 VeteranStatus 是否已赋值
                     * @return VeteranStatus 是否已赋值
                     * 
                     */
                    bool VeteranStatusHasBeenSet() const;

                    /**
                     * 获取职业
                     * @return Profession 职业
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取何时由何地迁来本市(县)
                     * @return MoveToCityInformation 何时由何地迁来本市(县)
                     * 
                     */
                    std::string GetMoveToCityInformation() const;

                    /**
                     * 判断参数 MoveToCityInformation 是否已赋值
                     * @return MoveToCityInformation 是否已赋值
                     * 
                     */
                    bool MoveToCityInformationHasBeenSet() const;

                    /**
                     * 获取何时由何地迁来本址
                     * @return MoveToSiteInformation 何时由何地迁来本址
                     * 
                     */
                    std::string GetMoveToSiteInformation() const;

                    /**
                     * 判断参数 MoveToSiteInformation 是否已赋值
                     * @return MoveToSiteInformation 是否已赋值
                     * 
                     */
                    bool MoveToSiteInformationHasBeenSet() const;

                    /**
                     * 获取登记日期
                     * @return RegistrationDate 登记日期
                     * 
                     */
                    std::string GetRegistrationDate() const;

                    /**
                     * 判断参数 RegistrationDate 是否已赋值
                     * @return RegistrationDate 是否已赋值
                     * 
                     */
                    bool RegistrationDateHasBeenSet() const;

                    /**
                     * 获取曾用名
                     * @return FormerName 曾用名
                     * 
                     */
                    std::string GetFormerName() const;

                    /**
                     * 判断参数 FormerName 是否已赋值
                     * @return FormerName 是否已赋值
                     * 
                     */
                    bool FormerNameHasBeenSet() const;

                private:

                    /**
                     * 户号
                     */
                    std::string m_householdNumber;
                    bool m_householdNumberHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 出生地
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 民族
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 籍贯
                     */
                    std::string m_nativePlace;
                    bool m_nativePlaceHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * 公民身份证件编号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 文化程度
                     */
                    std::string m_educationDegree;
                    bool m_educationDegreeHasBeenSet;

                    /**
                     * 服务处所
                     */
                    std::string m_servicePlace;
                    bool m_servicePlaceHasBeenSet;

                    /**
                     * 户别
                     */
                    std::string m_household;
                    bool m_householdHasBeenSet;

                    /**
                     * 住址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 承办人签章文字
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * 签发日期
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 户主页编号
                     */
                    std::string m_homePageNumber;
                    bool m_homePageNumberHasBeenSet;

                    /**
                     * 户主姓名
                     */
                    std::string m_householderName;
                    bool m_householderNameHasBeenSet;

                    /**
                     * 户主或与户主关系
                     */
                    std::string m_relationship;
                    bool m_relationshipHasBeenSet;

                    /**
                     * 本市（县）其他住址
                     */
                    std::string m_otherAddresses;
                    bool m_otherAddressesHasBeenSet;

                    /**
                     * 宗教信仰
                     */
                    std::string m_religiousBelief;
                    bool m_religiousBeliefHasBeenSet;

                    /**
                     * 身高
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 血型
                     */
                    std::string m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * 婚姻状况
                     */
                    std::string m_maritalStatus;
                    bool m_maritalStatusHasBeenSet;

                    /**
                     * 兵役状况
                     */
                    std::string m_veteranStatus;
                    bool m_veteranStatusHasBeenSet;

                    /**
                     * 职业
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * 何时由何地迁来本市(县)
                     */
                    std::string m_moveToCityInformation;
                    bool m_moveToCityInformationHasBeenSet;

                    /**
                     * 何时由何地迁来本址
                     */
                    std::string m_moveToSiteInformation;
                    bool m_moveToSiteInformationHasBeenSet;

                    /**
                     * 登记日期
                     */
                    std::string m_registrationDate;
                    bool m_registrationDateHasBeenSet;

                    /**
                     * 曾用名
                     */
                    std::string m_formerName;
                    bool m_formerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RESIDENCEBOOKLETOCRRESPONSE_H_
