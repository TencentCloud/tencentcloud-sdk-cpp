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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_FEEDUSERINFO_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_FEEDUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/UserIdInfo.h>
#include <tencentcloud/irp/v20220805/model/DislikeInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 信息流用户信息
                */
                class FeedUserInfo : public AbstractModel
                {
                public:
                    FeedUserInfo();
                    ~FeedUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * @return UserId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * @param _userId 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @return UserIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * 
                     */
                    std::vector<UserIdInfo> GetUserIdList() const;

                    /**
                     * 设置用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     * @param _userIdList 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
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
                     * 获取用户标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @return Tags 用户标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置用户标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * @param _tags 用户标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取过滤列表，<b>会在推荐结果里过滤掉这类内容</b>
                     * @return DislikeInfoList 过滤列表，<b>会在推荐结果里过滤掉这类内容</b>
                     * 
                     */
                    std::vector<DislikeInfo> GetDislikeInfoList() const;

                    /**
                     * 设置过滤列表，<b>会在推荐结果里过滤掉这类内容</b>
                     * @param _dislikeInfoList 过滤列表，<b>会在推荐结果里过滤掉这类内容</b>
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
                     * 获取用户年龄
                     * @return Age 用户年龄
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置用户年龄
                     * @param _age 用户年龄
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
                     * 获取用户性别： 0 - 未知 1 - 男 2 - 女
                     * @return Gender 用户性别： 0 - 未知 1 - 男 2 - 女
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置用户性别： 0 - 未知 1 - 男 2 - 女
                     * @param _gender 用户性别： 0 - 未知 1 - 男 2 - 女
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
                     * 获取用户职业
                     * @return Occupation 用户职业
                     * 
                     */
                    std::string GetOccupation() const;

                    /**
                     * 设置用户职业
                     * @param _occupation 用户职业
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
                     * 获取用户所属行业
                     * @return Industry 用户所属行业
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置用户所属行业
                     * @param _industry 用户所属行业
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
                     * 获取用户常驻国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”
                     * @return ResidentCountry 用户常驻国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”
                     * 
                     */
                    std::string GetResidentCountry() const;

                    /**
                     * 设置用户常驻国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”
                     * @param _residentCountry 用户常驻国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”
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
                     * 获取用户常驻省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”
                     * @return ResidentProvince 用户常驻省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”
                     * 
                     */
                    std::string GetResidentProvince() const;

                    /**
                     * 设置用户常驻省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”
                     * @param _residentProvince 用户常驻省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”
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
                     * 获取用户常驻城市，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，
                     * @return ResidentCity 用户常驻城市，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，
                     * 
                     */
                    std::string GetResidentCity() const;

                    /**
                     * 设置用户常驻城市，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，
                     * @param _residentCity 用户常驻城市，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，
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
                     * 获取json字符串，用于画像数据的扩展，需要base64加密
                     * @return Extension json字符串，用于画像数据的扩展，需要base64加密
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置json字符串，用于画像数据的扩展，需要base64加密
                     * @param _extension json字符串，用于画像数据的扩展，需要base64加密
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * 用户唯一ID，客户自定义用户ID，作为一个用户的唯一标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户设备ID数组，可传入用户的多个类型ID，详见UserIdInfo结构体，建议补齐，<b>用于构建用户画像信息</b>
                     */
                    std::vector<UserIdInfo> m_userIdList;
                    bool m_userIdListHasBeenSet;

                    /**
                     * 用户标签，多个标签用英文冒号联接，<b>用作特征，强烈建议</b>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 过滤列表，<b>会在推荐结果里过滤掉这类内容</b>
                     */
                    std::vector<DislikeInfo> m_dislikeInfoList;
                    bool m_dislikeInfoListHasBeenSet;

                    /**
                     * 用户年龄
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 用户性别： 0 - 未知 1 - 男 2 - 女
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
                     * 用户职业
                     */
                    std::string m_occupation;
                    bool m_occupationHasBeenSet;

                    /**
                     * 用户所属行业
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * 用户常驻国家，ISO 3166-1 alpha-2编码，参考<a href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2" target="_blank">ISO 3166-1 alpha-2</a>，中国：“CN”
                     */
                    std::string m_residentCountry;
                    bool m_residentCountryHasBeenSet;

                    /**
                     * 用户常驻省份，ISO 3166-2行政区编码，如中国参考<a href="https://zh.wikipedia.org/wiki/ISO_3166-2:CN" target="_blank">ISO_3166-2:CN</a>，广东省：“CN-GD”
                     */
                    std::string m_residentProvince;
                    bool m_residentProvinceHasBeenSet;

                    /**
                     * 用户常驻城市，统一用国家最新标准地区行政编码，如：<a href="https://www.mca.gov.cn/article/sj/xzqh/2020/" target="_blank">2020年行政区编码</a>，
                     */
                    std::string m_residentCity;
                    bool m_residentCityHasBeenSet;

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
                     * json字符串，用于画像数据的扩展，需要base64加密
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_FEEDUSERINFO_H_
