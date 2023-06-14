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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERRESPONSE_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeCustomer返回参数结构体
                */
                class DescribeCustomerResponse : public AbstractModel
                {
                public:
                    DescribeCustomerResponse();
                    ~DescribeCustomerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取地址列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressList 地址列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAddressList() const;

                    /**
                     * 判断参数 AddressList 是否已赋值
                     * @return AddressList 是否已赋值
                     * 
                     */
                    bool AddressListHasBeenSet() const;

                    /**
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取生日
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthday 生日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取设备
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Device 设备
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDevice() const;

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取行业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Industrys 行业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndustrys() const;

                    /**
                     * 判断参数 Industrys 是否已赋值
                     * @return Industrys 是否已赋值
                     * 
                     */
                    bool IndustrysHasBeenSet() const;

                    /**
                     * 获取上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastActiveTime 上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastActiveTime() const;

                    /**
                     * 判断参数 LastActiveTime 是否已赋值
                     * @return LastActiveTime 是否已赋值
                     * 
                     */
                    bool LastActiveTimeHasBeenSet() const;

                    /**
                     * 获取是否星标 1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkFlag 是否星标 1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarkFlag() const;

                    /**
                     * 判断参数 MarkFlag 是否已赋值
                     * @return MarkFlag 是否已赋值
                     * 
                     */
                    bool MarkFlagHasBeenSet() const;

                    /**
                     * 获取手机型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 手机型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取消费特点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayFeature 消费特点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayFeature() const;

                    /**
                     * 判断参数 PayFeature 是否已赋值
                     * @return PayFeature 是否已赋值
                     * 
                     */
                    bool PayFeatureHasBeenSet() const;

                    /**
                     * 获取手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取手机号码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneList 手机号码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoneList() const;

                    /**
                     * 判断参数 PhoneList 是否已赋值
                     * @return PhoneList 是否已赋值
                     * 
                     */
                    bool PhoneListHasBeenSet() const;

                    /**
                     * 获取最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealName 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取员工标识 0：非员工 1：员工
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelChannelFlag 员工标识 0：非员工 1：员工
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelChannelFlag() const;

                    /**
                     * 判断参数 RelChannelFlag 是否已赋值
                     * @return RelChannelFlag 是否已赋值
                     * 
                     */
                    bool RelChannelFlagHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取最初来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAudienceVo 最初来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceAudienceVo() const;

                    /**
                     * 判断参数 SourceAudienceVo 是否已赋值
                     * @return SourceAudienceVo 是否已赋值
                     * 
                     */
                    bool SourceAudienceVoHasBeenSet() const;

                    /**
                     * 获取关注公众号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubWechats 关注公众号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubWechats() const;

                    /**
                     * 判断参数 SubWechats 是否已赋值
                     * @return SubWechats 是否已赋值
                     * 
                     */
                    bool SubWechatsHasBeenSet() const;

                    /**
                     * 获取微信unionid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnionId 微信unionid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnionId() const;

                    /**
                     * 判断参数 UnionId 是否已赋值
                     * @return UnionId 是否已赋值
                     * 
                     */
                    bool UnionIdHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserTypes 用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserTypes() const;

                    /**
                     * 判断参数 UserTypes 是否已赋值
                     * @return UserTypes 是否已赋值
                     * 
                     */
                    bool UserTypesHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxCity 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxCity() const;

                    /**
                     * 判断参数 WxCity 是否已赋值
                     * @return WxCity 是否已赋值
                     * 
                     */
                    bool WxCityHasBeenSet() const;

                    /**
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxCountry 国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxCountry() const;

                    /**
                     * 判断参数 WxCountry 是否已赋值
                     * @return WxCountry 是否已赋值
                     * 
                     */
                    bool WxCountryHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxNickname 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxNickname() const;

                    /**
                     * 判断参数 WxNickname 是否已赋值
                     * @return WxNickname 是否已赋值
                     * 
                     */
                    bool WxNicknameHasBeenSet() const;

                    /**
                     * 获取省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxProvince 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxProvince() const;

                    /**
                     * 判断参数 WxProvince 是否已赋值
                     * @return WxProvince 是否已赋值
                     * 
                     */
                    bool WxProvinceHasBeenSet() const;

                private:

                    /**
                     * 地址列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_addressList;
                    bool m_addressListHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 头像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 生日
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 设备
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 行业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_industrys;
                    bool m_industrysHasBeenSet;

                    /**
                     * 上次登录时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastActiveTime;
                    bool m_lastActiveTimeHasBeenSet;

                    /**
                     * 是否星标 1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_markFlag;
                    bool m_markFlagHasBeenSet;

                    /**
                     * 手机型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 消费特点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payFeature;
                    bool m_payFeatureHasBeenSet;

                    /**
                     * 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 手机号码列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phoneList;
                    bool m_phoneListHasBeenSet;

                    /**
                     * 最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 员工标识 0：非员工 1：员工
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relChannelFlag;
                    bool m_relChannelFlagHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 最初来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceAudienceVo;
                    bool m_sourceAudienceVoHasBeenSet;

                    /**
                     * 关注公众号列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subWechats;
                    bool m_subWechatsHasBeenSet;

                    /**
                     * 微信unionid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unionId;
                    bool m_unionIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userTypes;
                    bool m_userTypesHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxCity;
                    bool m_wxCityHasBeenSet;

                    /**
                     * 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxCountry;
                    bool m_wxCountryHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxNickname;
                    bool m_wxNicknameHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxProvince;
                    bool m_wxProvinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBECUSTOMERRESPONSE_H_
