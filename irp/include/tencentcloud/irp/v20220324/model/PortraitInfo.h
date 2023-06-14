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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_PORTRAITINFO_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_PORTRAITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/UserIdInfo.h>
#include <tencentcloud/irp/v20220324/model/TagInfo.h>
#include <tencentcloud/irp/v20220324/model/AuthorInfo.h>
#include <tencentcloud/irp/v20220324/model/DislikeInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 画像信息
                */
                class PortraitInfo : public AbstractModel
                {
                public:
                    PortraitInfo();
                    ~PortraitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户id列表
                     * @return UserIdList 用户id列表
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户id列表
                     * @param _userIdList 用户id列表
                     * 
                     */
                    void SetUserIdList(const std::vector<UserIdInfo>& _userIdList);

                    /**
                     * 判断参数 UserIdList 是否已赋值
                     * @return UserIdList 是否已赋值
                     * 
                     */
                    bool UserIdListHasBeenSet() const;

                    /**
                     * 获取如果"userIdType"是10则必传，在微信开放平台上查看appId
                     * @return AppId 如果"userIdType"是10则必传，在微信开放平台上查看appId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置如果"userIdType"是10则必传，在微信开放平台上查看appId
                     * @param _appId 如果"userIdType"是10则必传，在微信开放平台上查看appId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户年龄，值域在 0-200
                     * @return Age 用户年龄，值域在 0-200
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置用户年龄，值域在 0-200
                     * @param _age 用户年龄，值域在 0-200
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取用户性别：0-未知，1-男， 2-女
                     * @return Gender 用户性别：0-未知，1-男， 2-女
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置用户性别：0-未知，1-男， 2-女
                     * @param _gender 用户性别：0-未知，1-男， 2-女
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取用户学历 ：小学，初中，高中，大专，本科，硕士，博士
                     * @return Degree 用户学历 ：小学，初中，高中，大专，本科，硕士，博士
                     * 
                     */
                    std::string GetDegree() const;

                    /**
                     * 设置用户学历 ：小学，初中，高中，大专，本科，硕士，博士
                     * @param _degree 用户学历 ：小学，初中，高中，大专，本科，硕士，博士
                     * 
                     */
                    void SetDegree(const std::string& _degree);

                    /**
                     * 判断参数 Degree 是否已赋值
                     * @return Degree 是否已赋值
                     * 
                     */
                    bool DegreeHasBeenSet() const;

                    /**
                     * 获取用户毕业学校全称
                     * @return School 用户毕业学校全称
                     * 
                     */
                    std::string GetSchool() const;

                    /**
                     * 设置用户毕业学校全称
                     * @param _school 用户毕业学校全称
                     * 
                     */
                    void SetSchool(const std::string& _school);

                    /**
                     * 判断参数 School 是否已赋值
                     * @return School 是否已赋值
                     * 
                     */
                    bool SchoolHasBeenSet() const;

                    /**
                     * 获取用户职业，保证业务的唯一性
                     * @return Occupation 用户职业，保证业务的唯一性
                     * 
                     */
                    std::string GetOccupation() const;

                    /**
                     * 设置用户职业，保证业务的唯一性
                     * @param _occupation 用户职业，保证业务的唯一性
                     * 
                     */
                    void SetOccupation(const std::string& _occupation);

                    /**
                     * 判断参数 Occupation 是否已赋值
                     * @return Occupation 是否已赋值
                     * 
                     */
                    bool OccupationHasBeenSet() const;

                    /**
                     * 获取用户所属行业，保证业务的唯一性
                     * @return Industry 用户所属行业，保证业务的唯一性
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置用户所属行业，保证业务的唯一性
                     * @param _industry 用户所属行业，保证业务的唯一性
                     * 
                     */
                    void SetIndustry(const std::string& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                    /**
                     * 获取用户常驻国家，统一用简写，比如中国则填写CN
                     * @return ResidentCountry 用户常驻国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    std::string GetResidentCountry() const;

                    /**
                     * 设置用户常驻国家，统一用简写，比如中国则填写CN
                     * @param _residentCountry 用户常驻国家，统一用简写，比如中国则填写CN
                     * 
                     */
                    void SetResidentCountry(const std::string& _residentCountry);

                    /**
                     * 判断参数 ResidentCountry 是否已赋值
                     * @return ResidentCountry 是否已赋值
                     * 
                     */
                    bool ResidentCountryHasBeenSet() const;

                    /**
                     * 获取用户常驻省份
                     * @return ResidentProvince 用户常驻省份
                     * 
                     */
                    std::string GetResidentProvince() const;

                    /**
                     * 设置用户常驻省份
                     * @param _residentProvince 用户常驻省份
                     * 
                     */
                    void SetResidentProvince(const std::string& _residentProvince);

                    /**
                     * 判断参数 ResidentProvince 是否已赋值
                     * @return ResidentProvince 是否已赋值
                     * 
                     */
                    bool ResidentProvinceHasBeenSet() const;

                    /**
                     * 获取用户常驻城市
                     * @return ResidentCity 用户常驻城市
                     * 
                     */
                    std::string GetResidentCity() const;

                    /**
                     * 设置用户常驻城市
                     * @param _residentCity 用户常驻城市
                     * 
                     */
                    void SetResidentCity(const std::string& _residentCity);

                    /**
                     * 判断参数 ResidentCity 是否已赋值
                     * @return ResidentCity 是否已赋值
                     * 
                     */
                    bool ResidentCityHasBeenSet() const;

                    /**
                     * 获取用户常驻区县
                     * @return ResidentDistrict 用户常驻区县
                     * 
                     */
                    std::string GetResidentDistrict() const;

                    /**
                     * 设置用户常驻区县
                     * @param _residentDistrict 用户常驻区县
                     * 
                     */
                    void SetResidentDistrict(const std::string& _residentDistrict);

                    /**
                     * 判断参数 ResidentDistrict 是否已赋值
                     * @return ResidentDistrict 是否已赋值
                     * 
                     */
                    bool ResidentDistrictHasBeenSet() const;

                    /**
                     * 获取用户手机的MD5值
                     * @return PhoneMd5 用户手机的MD5值
                     * 
                     */
                    std::string GetPhoneMd5() const;

                    /**
                     * 设置用户手机的MD5值
                     * @param _phoneMd5 用户手机的MD5值
                     * 
                     */
                    void SetPhoneMd5(const std::string& _phoneMd5);

                    /**
                     * 判断参数 PhoneMd5 是否已赋值
                     * @return PhoneMd5 是否已赋值
                     * 
                     */
                    bool PhoneMd5HasBeenSet() const;

                    /**
                     * 获取用户手机的IMEI号
                     * @return PhoneImei 用户手机的IMEI号
                     * 
                     */
                    std::string GetPhoneImei() const;

                    /**
                     * 设置用户手机的IMEI号
                     * @param _phoneImei 用户手机的IMEI号
                     * 
                     */
                    void SetPhoneImei(const std::string& _phoneImei);

                    /**
                     * 判断参数 PhoneImei 是否已赋值
                     * @return PhoneImei 是否已赋值
                     * 
                     */
                    bool PhoneImeiHasBeenSet() const;

                    /**
                     * 获取设备idfa信息
                     * @return Idfa 设备idfa信息
                     * 
                     */
                    std::string GetIdfa() const;

                    /**
                     * 设置设备idfa信息
                     * @param _idfa 设备idfa信息
                     * 
                     */
                    void SetIdfa(const std::string& _idfa);

                    /**
                     * 判断参数 Idfa 是否已赋值
                     * @return Idfa 是否已赋值
                     * 
                     */
                    bool IdfaHasBeenSet() const;

                    /**
                     * 获取用户注册时间，秒级时间戳（1639624786）
                     * @return RegisterTimestamp 用户注册时间，秒级时间戳（1639624786）
                     * 
                     */
                    int64_t GetRegisterTimestamp() const;

                    /**
                     * 设置用户注册时间，秒级时间戳（1639624786）
                     * @param _registerTimestamp 用户注册时间，秒级时间戳（1639624786）
                     * 
                     */
                    void SetRegisterTimestamp(const int64_t& _registerTimestamp);

                    /**
                     * 判断参数 RegisterTimestamp 是否已赋值
                     * @return RegisterTimestamp 是否已赋值
                     * 
                     */
                    bool RegisterTimestampHasBeenSet() const;

                    /**
                     * 获取用户会员等级
                     * @return MembershipLevel 用户会员等级
                     * 
                     */
                    std::string GetMembershipLevel() const;

                    /**
                     * 设置用户会员等级
                     * @param _membershipLevel 用户会员等级
                     * 
                     */
                    void SetMembershipLevel(const std::string& _membershipLevel);

                    /**
                     * 判断参数 MembershipLevel 是否已赋值
                     * @return MembershipLevel 是否已赋值
                     * 
                     */
                    bool MembershipLevelHasBeenSet() const;

                    /**
                     * 获取用户上一次登录时间，秒级时间戳（1639624786）
                     * @return LastLoginTimestamp 用户上一次登录时间，秒级时间戳（1639624786）
                     * 
                     */
                    int64_t GetLastLoginTimestamp() const;

                    /**
                     * 设置用户上一次登录时间，秒级时间戳（1639624786）
                     * @param _lastLoginTimestamp 用户上一次登录时间，秒级时间戳（1639624786）
                     * 
                     */
                    void SetLastLoginTimestamp(const int64_t& _lastLoginTimestamp);

                    /**
                     * 判断参数 LastLoginTimestamp 是否已赋值
                     * @return LastLoginTimestamp 是否已赋值
                     * 
                     */
                    bool LastLoginTimestampHasBeenSet() const;

                    /**
                     * 获取用户上一次登录的ip
                     * @return LastLoginIp 用户上一次登录的ip
                     * 
                     */
                    std::string GetLastLoginIp() const;

                    /**
                     * 设置用户上一次登录的ip
                     * @param _lastLoginIp 用户上一次登录的ip
                     * 
                     */
                    void SetLastLoginIp(const std::string& _lastLoginIp);

                    /**
                     * 判断参数 LastLoginIp 是否已赋值
                     * @return LastLoginIp 是否已赋值
                     * 
                     */
                    bool LastLoginIpHasBeenSet() const;

                    /**
                     * 获取用户信息的最后修改时间戳，秒级时间戳（1639624786）
                     * @return LastModifyTimestamp 用户信息的最后修改时间戳，秒级时间戳（1639624786）
                     * 
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置用户信息的最后修改时间戳，秒级时间戳（1639624786）
                     * @param _lastModifyTimestamp 用户信息的最后修改时间戳，秒级时间戳（1639624786）
                     * 
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     * 
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                    /**
                     * 获取用户标签
                     * @return TagInfoList 用户标签
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置用户标签
                     * @param _tagInfoList 用户标签
                     * 
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取用户关注作者列表
                     * @return AuthorInfoList 用户关注作者列表
                     * 
                     */
                    std::vector<AuthorInfo> GetAuthorInfoList() const;

                    /**
                     * 设置用户关注作者列表
                     * @param _authorInfoList 用户关注作者列表
                     * 
                     */
                    void SetAuthorInfoList(const std::vector<AuthorInfo>& _authorInfoList);

                    /**
                     * 判断参数 AuthorInfoList 是否已赋值
                     * @return AuthorInfoList 是否已赋值
                     * 
                     */
                    bool AuthorInfoListHasBeenSet() const;

                    /**
                     * 获取用户不喜欢列表
                     * @return DislikeInfoList 用户不喜欢列表
                     * 
                     */
                    std::vector<DislikeInfo> GetDislikeInfoList() const;

                    /**
                     * 设置用户不喜欢列表
                     * @param _dislikeInfoList 用户不喜欢列表
                     * 
                     */
                    void SetDislikeInfoList(const std::vector<DislikeInfo>& _dislikeInfoList);

                    /**
                     * 判断参数 DislikeInfoList 是否已赋值
                     * @return DislikeInfoList 是否已赋值
                     * 
                     */
                    bool DislikeInfoListHasBeenSet() const;

                    /**
                     * 获取json字符串，用于画像数据的扩展
                     * @return Extension json字符串，用于画像数据的扩展
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，用于画像数据的扩展
                     * @param _extension json字符串，用于画像数据的扩展
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                    /**
                     * 获取设备oaid信息
                     * @return Oaid 设备oaid信息
                     * 
                     */
                    std::string GetOaid() const;

                    /**
                     * 设置设备oaid信息
                     * @param _oaid 设备oaid信息
                     * 
                     */
                    void SetOaid(const std::string& _oaid);

                    /**
                     * 判断参数 Oaid 是否已赋值
                     * @return Oaid 是否已赋值
                     * 
                     */
                    bool OaidHasBeenSet() const;

                    /**
                     * 获取设备AndroidId信息
                     * @return AndroidId 设备AndroidId信息
                     * 
                     */
                    std::string GetAndroidId() const;

                    /**
                     * 设置设备AndroidId信息
                     * @param _androidId 设备AndroidId信息
                     * 
                     */
                    void SetAndroidId(const std::string& _androidId);

                    /**
                     * 判断参数 AndroidId 是否已赋值
                     * @return AndroidId 是否已赋值
                     * 
                     */
                    bool AndroidIdHasBeenSet() const;

                private:

                    /**
                     * 用户id列表
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 如果"userIdType"是10则必传，在微信开放平台上查看appId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户年龄，值域在 0-200
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 用户性别：0-未知，1-男， 2-女
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 用户学历 ：小学，初中，高中，大专，本科，硕士，博士
                     */
                    std::string m_degree;
                    bool m_degreeHasBeenSet;

                    /**
                     * 用户毕业学校全称
                     */
                    std::string m_school;
                    bool m_schoolHasBeenSet;

                    /**
                     * 用户职业，保证业务的唯一性
                     */
                    std::string m_occupation;
                    bool m_occupationHasBeenSet;

                    /**
                     * 用户所属行业，保证业务的唯一性
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * 用户常驻国家，统一用简写，比如中国则填写CN
                     */
                    std::string m_residentCountry;
                    bool m_residentCountryHasBeenSet;

                    /**
                     * 用户常驻省份
                     */
                    std::string m_residentProvince;
                    bool m_residentProvinceHasBeenSet;

                    /**
                     * 用户常驻城市
                     */
                    std::string m_residentCity;
                    bool m_residentCityHasBeenSet;

                    /**
                     * 用户常驻区县
                     */
                    std::string m_residentDistrict;
                    bool m_residentDistrictHasBeenSet;

                    /**
                     * 用户手机的MD5值
                     */
                    std::string m_phoneMd5;
                    bool m_phoneMd5HasBeenSet;

                    /**
                     * 用户手机的IMEI号
                     */
                    std::string m_phoneImei;
                    bool m_phoneImeiHasBeenSet;

                    /**
                     * 设备idfa信息
                     */
                    std::string m_idfa;
                    bool m_idfaHasBeenSet;

                    /**
                     * 用户注册时间，秒级时间戳（1639624786）
                     */
                    int64_t m_registerTimestamp;
                    bool m_registerTimestampHasBeenSet;

                    /**
                     * 用户会员等级
                     */
                    std::string m_membershipLevel;
                    bool m_membershipLevelHasBeenSet;

                    /**
                     * 用户上一次登录时间，秒级时间戳（1639624786）
                     */
                    int64_t m_lastLoginTimestamp;
                    bool m_lastLoginTimestampHasBeenSet;

                    /**
                     * 用户上一次登录的ip
                     */
                    std::string m_lastLoginIp;
                    bool m_lastLoginIpHasBeenSet;

                    /**
                     * 用户信息的最后修改时间戳，秒级时间戳（1639624786）
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                    /**
                     * 用户标签
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 用户关注作者列表
                     */
                    std::vector<AuthorInfo> m_authorInfoList;
                    bool m_authorInfoListHasBeenSet;

                    /**
                     * 用户不喜欢列表
                     */
                    std::vector<DislikeInfo> m_dislikeInfoList;
                    bool m_dislikeInfoListHasBeenSet;

                    /**
                     * json字符串，用于画像数据的扩展
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                    /**
                     * 设备oaid信息
                     */
                    std::string m_oaid;
                    bool m_oaidHasBeenSet;

                    /**
                     * 设备AndroidId信息
                     */
                    std::string m_androidId;
                    bool m_androidIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_PORTRAITINFO_H_
