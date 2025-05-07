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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PREAUCTIONINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PREAUCTIONINFO_H_

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
                * 预释放竞价列表
                */
                class PreAuctionInfo : public AbstractModel
                {
                public:
                    PreAuctionInfo();
                    ~PreAuctionInfo() = default;
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
                     * 获取竞价倒计时
格式:YYYY-MM-DD HH:mm:ss
                     * @return BiddingTime 竞价倒计时
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetBiddingTime() const;

                    /**
                     * 设置竞价倒计时
格式:YYYY-MM-DD HH:mm:ss
                     * @param _biddingTime 竞价倒计时
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetBiddingTime(const std::string& _biddingTime);

                    /**
                     * 判断参数 BiddingTime 是否已赋值
                     * @return BiddingTime 是否已赋值
                     * 
                     */
                    bool BiddingTimeHasBeenSet() const;

                    /**
                     * 获取出价次数
                     * @return BidCount 出价次数
                     * 
                     */
                    int64_t GetBidCount() const;

                    /**
                     * 设置出价次数
                     * @param _bidCount 出价次数
                     * 
                     */
                    void SetBidCount(const int64_t& _bidCount);

                    /**
                     * 判断参数 BidCount 是否已赋值
                     * @return BidCount 是否已赋值
                     * 
                     */
                    bool BidCountHasBeenSet() const;

                    /**
                     * 获取当前价格 单位元
                     * @return Price 当前价格 单位元
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置当前价格 单位元
                     * @param _price 当前价格 单位元
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
                     * 获取用户操作 
bid：出价 
noAction：无法操作
                     * @return Op 用户操作 
bid：出价 
noAction：无法操作
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置用户操作 
bid：出价 
noAction：无法操作
                     * @param _op 用户操作 
bid：出价 
noAction：无法操作
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

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

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 竞价倒计时
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_biddingTime;
                    bool m_biddingTimeHasBeenSet;

                    /**
                     * 出价次数
                     */
                    int64_t m_bidCount;
                    bool m_bidCountHasBeenSet;

                    /**
                     * 当前价格 单位元
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 用户操作 
bid：出价 
noAction：无法操作
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 业务ID
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PREAUCTIONINFO_H_
