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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_CUSTOMERINFO_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_CUSTOMERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 客户档案
                */
                class CustomerInfo : public AbstractModel
                {
                public:
                    CustomerInfo();
                    ~CustomerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Activity 总活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivity() const;

                    /**
                     * 设置总活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activity 总活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivity(const int64_t& _activity);

                    /**
                     * 判断参数 Activity 是否已赋值
                     * @return Activity 是否已赋值
                     * 
                     */
                    bool ActivityHasBeenSet() const;

                    /**
                     * 获取客户ID
                     * @return AudienceUserId 客户ID
                     * 
                     */
                    std::string GetAudienceUserId() const;

                    /**
                     * 设置客户ID
                     * @param _audienceUserId 客户ID
                     * 
                     */
                    void SetAudienceUserId(const std::string& _audienceUserId);

                    /**
                     * 判断参数 AudienceUserId 是否已赋值
                     * @return AudienceUserId 是否已赋值
                     * 
                     */
                    bool AudienceUserIdHasBeenSet() const;

                    /**
                     * 获取头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatar 头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取最近记录城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 最近记录城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置最近记录城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 最近记录城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取最活跃时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastActiveTime 最活跃时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastActiveTime() const;

                    /**
                     * 设置最活跃时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastActiveTime 最活跃时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastActiveTime(const std::string& _lastActiveTime);

                    /**
                     * 判断参数 LastActiveTime 是否已赋值
                     * @return LastActiveTime 是否已赋值
                     * 
                     */
                    bool LastActiveTimeHasBeenSet() const;

                    /**
                     * 获取是否星标客户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarkFlag 是否星标客户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMarkFlag() const;

                    /**
                     * 设置是否星标客户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _markFlag 是否星标客户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMarkFlag(const std::string& _markFlag);

                    /**
                     * 判断参数 MarkFlag 是否已赋值
                     * @return MarkFlag 是否已赋值
                     * 
                     */
                    bool MarkFlagHasBeenSet() const;

                    /**
                     * 获取30天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthActive 30天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonthActive() const;

                    /**
                     * 设置30天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monthActive 30天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonthActive(const int64_t& _monthActive);

                    /**
                     * 判断参数 MonthActive 是否已赋值
                     * @return MonthActive 是否已赋值
                     * 
                     */
                    bool MonthActiveHasBeenSet() const;

                    /**
                     * 获取30天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthRecommend 30天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonthRecommend() const;

                    /**
                     * 设置30天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monthRecommend 30天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonthRecommend(const int64_t& _monthRecommend);

                    /**
                     * 判断参数 MonthRecommend 是否已赋值
                     * @return MonthRecommend 是否已赋值
                     * 
                     */
                    bool MonthRecommendHasBeenSet() const;

                    /**
                     * 获取手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phone 手机号
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
                     * 获取最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _province 最近记录省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvince(const std::string& _province);

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
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _realName 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取员工标识 0 未关联 1 已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelChannelFlag 员工标识 0 未关联 1 已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelChannelFlag() const;

                    /**
                     * 设置员工标识 0 未关联 1 已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relChannelFlag 员工标识 0 未关联 1 已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelChannelFlag(const int64_t& _relChannelFlag);

                    /**
                     * 判断参数 RelChannelFlag 是否已赋值
                     * @return RelChannelFlag 是否已赋值
                     * 
                     */
                    bool RelChannelFlagHasBeenSet() const;

                    /**
                     * 获取性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSex() const;

                    /**
                     * 设置性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sex 性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSex(const int64_t& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取传播力（好友数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spread 传播力（好友数）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSpread() const;

                    /**
                     * 设置传播力（好友数）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spread 传播力（好友数）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpread(const int64_t& _spread);

                    /**
                     * 判断参数 Spread 是否已赋值
                     * @return Spread 是否已赋值
                     * 
                     */
                    bool SpreadHasBeenSet() const;

                    /**
                     * 获取7天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekActive 7天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeekActive() const;

                    /**
                     * 设置7天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekActive 7天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekActive(const int64_t& _weekActive);

                    /**
                     * 判断参数 WeekActive 是否已赋值
                     * @return WeekActive 是否已赋值
                     * 
                     */
                    bool WeekActiveHasBeenSet() const;

                    /**
                     * 获取7天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeekRecommend 7天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeekRecommend() const;

                    /**
                     * 设置7天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekRecommend 7天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekRecommend(const int64_t& _weekRecommend);

                    /**
                     * 判断参数 WeekRecommend 是否已赋值
                     * @return WeekRecommend 是否已赋值
                     * 
                     */
                    bool WeekRecommendHasBeenSet() const;

                    /**
                     * 获取微信城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxCity 微信城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxCity() const;

                    /**
                     * 设置微信城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wxCity 微信城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWxCity(const std::string& _wxCity);

                    /**
                     * 判断参数 WxCity 是否已赋值
                     * @return WxCity 是否已赋值
                     * 
                     */
                    bool WxCityHasBeenSet() const;

                    /**
                     * 获取微信国家或地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxCountry 微信国家或地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxCountry() const;

                    /**
                     * 设置微信国家或地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wxCountry 微信国家或地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWxCountry(const std::string& _wxCountry);

                    /**
                     * 判断参数 WxCountry 是否已赋值
                     * @return WxCountry 是否已赋值
                     * 
                     */
                    bool WxCountryHasBeenSet() const;

                    /**
                     * 获取微信呢称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxNickname 微信呢称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxNickname() const;

                    /**
                     * 设置微信呢称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wxNickname 微信呢称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWxNickname(const std::string& _wxNickname);

                    /**
                     * 判断参数 WxNickname 是否已赋值
                     * @return WxNickname 是否已赋值
                     * 
                     */
                    bool WxNicknameHasBeenSet() const;

                    /**
                     * 获取微信省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxProvince 微信省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWxProvince() const;

                    /**
                     * 设置微信省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wxProvince 微信省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWxProvince(const std::string& _wxProvince);

                    /**
                     * 判断参数 WxProvince 是否已赋值
                     * @return WxProvince 是否已赋值
                     * 
                     */
                    bool WxProvinceHasBeenSet() const;

                private:

                    /**
                     * 总活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activity;
                    bool m_activityHasBeenSet;

                    /**
                     * 客户ID
                     */
                    std::string m_audienceUserId;
                    bool m_audienceUserIdHasBeenSet;

                    /**
                     * 头像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 最近记录城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 最活跃时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastActiveTime;
                    bool m_lastActiveTimeHasBeenSet;

                    /**
                     * 是否星标客户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_markFlag;
                    bool m_markFlagHasBeenSet;

                    /**
                     * 30天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monthActive;
                    bool m_monthActiveHasBeenSet;

                    /**
                     * 30天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monthRecommend;
                    bool m_monthRecommendHasBeenSet;

                    /**
                     * 手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

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
                     * 员工标识 0 未关联 1 已关联
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relChannelFlag;
                    bool m_relChannelFlagHasBeenSet;

                    /**
                     * 性别 1男 2女
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 传播力（好友数）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_spread;
                    bool m_spreadHasBeenSet;

                    /**
                     * 7天活跃度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weekActive;
                    bool m_weekActiveHasBeenSet;

                    /**
                     * 7天推荐度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weekRecommend;
                    bool m_weekRecommendHasBeenSet;

                    /**
                     * 微信城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxCity;
                    bool m_wxCityHasBeenSet;

                    /**
                     * 微信国家或地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxCountry;
                    bool m_wxCountryHasBeenSet;

                    /**
                     * 微信呢称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxNickname;
                    bool m_wxNicknameHasBeenSet;

                    /**
                     * 微信省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wxProvince;
                    bool m_wxProvinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_CUSTOMERINFO_H_
