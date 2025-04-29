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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRERELEASEINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRERELEASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 预释放列表信息
                */
                class PreReleaseInfo : public AbstractModel
                {
                public:
                    PreReleaseInfo();
                    ~PreReleaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取预订倒计时(YYYY-MM-DD hh:mm:ss)
                     * @return ReservationTime 预订倒计时(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    std::string GetReservationTime() const;

                    /**
                     * 设置预订倒计时(YYYY-MM-DD hh:mm:ss)
                     * @param _reservationTime 预订倒计时(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    void SetReservationTime(const std::string& _reservationTime);

                    /**
                     * 判断参数 ReservationTime 是否已赋值
                     * @return ReservationTime 是否已赋值
                     * 
                     */
                    bool ReservationTimeHasBeenSet() const;

                    /**
                     * 获取域名注册时间(YYYY-MM-DD hh:mm:ss)
                     * @return RegTime 域名注册时间(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 设置域名注册时间(YYYY-MM-DD hh:mm:ss)
                     * @param _regTime 域名注册时间(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    void SetRegTime(const std::string& _regTime);

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取域名删除时间(YYYY-MM-DD hh:mm:ss)
                     * @return DelTime 域名删除时间(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    std::string GetDelTime() const;

                    /**
                     * 设置域名删除时间(YYYY-MM-DD hh:mm:ss)
                     * @param _delTime 域名删除时间(YYYY-MM-DD hh:mm:ss)
                     * 
                     */
                    void SetDelTime(const std::string& _delTime);

                    /**
                     * 判断参数 DelTime 是否已赋值
                     * @return DelTime 是否已赋值
                     * 
                     */
                    bool DelTimeHasBeenSet() const;

                    /**
                     * 获取当前人数
                     * @return CurrentPeople 当前人数
                     * 
                     */
                    int64_t GetCurrentPeople() const;

                    /**
                     * 设置当前人数
                     * @param _currentPeople 当前人数
                     * 
                     */
                    void SetCurrentPeople(const int64_t& _currentPeople);

                    /**
                     * 判断参数 CurrentPeople 是否已赋值
                     * @return CurrentPeople 是否已赋值
                     * 
                     */
                    bool CurrentPeopleHasBeenSet() const;

                    /**
                     * 获取当前价格
                     * @return Price 当前价格
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置当前价格
                     * @param _price 当前价格
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取是否收藏
true：收藏
false：未收藏
                     * @return IsFollow 是否收藏
true：收藏
false：未收藏
                     * 
                     */
                    bool GetIsFollow() const;

                    /**
                     * 设置是否收藏
true：收藏
false：未收藏
                     * @param _isFollow 是否收藏
true：收藏
false：未收藏
                     * 
                     */
                    void SetIsFollow(const bool& _isFollow);

                    /**
                     * 判断参数 IsFollow 是否已赋值
                     * @return IsFollow 是否已赋值
                     * 
                     */
                    bool IsFollowHasBeenSet() const;

                    /**
                     * 获取是否已经预约
true：预约
false：未预约
                     * @return IsAppoint 是否已经预约
true：预约
false：未预约
                     * 
                     */
                    bool GetIsAppoint() const;

                    /**
                     * 设置是否已经预约
true：预约
false：未预约
                     * @param _isAppoint 是否已经预约
true：预约
false：未预约
                     * 
                     */
                    void SetIsAppoint(const bool& _isAppoint);

                    /**
                     * 判断参数 IsAppoint 是否已赋值
                     * @return IsAppoint 是否已赋值
                     * 
                     */
                    bool IsAppointHasBeenSet() const;

                    /**
                     * 获取业务ID
                     * @return BusinessId 业务ID
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID
                     * @param _businessId 业务ID
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取是否为原持有者
true：是原持有人
false：非原持有人
                     * @return IsDomainUser 是否为原持有者
true：是原持有人
false：非原持有人
                     * 
                     */
                    bool GetIsDomainUser() const;

                    /**
                     * 设置是否为原持有者
true：是原持有人
false：非原持有人
                     * @param _isDomainUser 是否为原持有者
true：是原持有人
false：非原持有人
                     * 
                     */
                    void SetIsDomainUser(const bool& _isDomainUser);

                    /**
                     * 判断参数 IsDomainUser 是否已赋值
                     * @return IsDomainUser 是否已赋值
                     * 
                     */
                    bool IsDomainUserHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 预订倒计时(YYYY-MM-DD hh:mm:ss)
                     */
                    std::string m_reservationTime;
                    bool m_reservationTimeHasBeenSet;

                    /**
                     * 域名注册时间(YYYY-MM-DD hh:mm:ss)
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 域名删除时间(YYYY-MM-DD hh:mm:ss)
                     */
                    std::string m_delTime;
                    bool m_delTimeHasBeenSet;

                    /**
                     * 当前人数
                     */
                    int64_t m_currentPeople;
                    bool m_currentPeopleHasBeenSet;

                    /**
                     * 当前价格
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 是否收藏
true：收藏
false：未收藏
                     */
                    bool m_isFollow;
                    bool m_isFollowHasBeenSet;

                    /**
                     * 是否已经预约
true：预约
false：未预约
                     */
                    bool m_isAppoint;
                    bool m_isAppointHasBeenSet;

                    /**
                     * 业务ID
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 是否为原持有者
true：是原持有人
false：非原持有人
                     */
                    bool m_isDomainUser;
                    bool m_isDomainUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRERELEASEINFO_H_
