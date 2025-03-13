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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEBIDINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEBIDINFO_H_

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
                * 合作商竞价详情
                */
                class ReserveBidInfo : public AbstractModel
                {
                public:
                    ReserveBidInfo();
                    ~ReserveBidInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取出价
                     * @return Price 出价
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 设置出价
                     * @param _price 出价
                     * 
                     */
                    void SetPrice(const int64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取出价时间
                     * @return BidTime 出价时间
                     * 
                     */
                    std::string GetBidTime() const;

                    /**
                     * 设置出价时间
                     * @param _bidTime 出价时间
                     * 
                     */
                    void SetBidTime(const std::string& _bidTime);

                    /**
                     * 判断参数 BidTime 是否已赋值
                     * @return BidTime 是否已赋值
                     * 
                     */
                    bool BidTimeHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return BidStatus 当前状态
                     * 
                     */
                    std::string GetBidStatus() const;

                    /**
                     * 设置当前状态
                     * @param _bidStatus 当前状态
                     * 
                     */
                    void SetBidStatus(const std::string& _bidStatus);

                    /**
                     * 判断参数 BidStatus 是否已赋值
                     * @return BidStatus 是否已赋值
                     * 
                     */
                    bool BidStatusHasBeenSet() const;

                private:

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 出价
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 出价时间
                     */
                    std::string m_bidTime;
                    bool m_bidTimeHasBeenSet;

                    /**
                     * 当前状态
                     */
                    std::string m_bidStatus;
                    bool m_bidStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEBIDINFO_H_
