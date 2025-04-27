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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_AUCTIONINFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_AUCTIONINFO_H_

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
                * 用于域名预释放详情页面
                */
                class AuctionInfo : public AbstractModel
                {
                public:
                    AuctionInfo();
                    ~AuctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取竞拍人
                     * @return Bidder 竞拍人
                     * 
                     */
                    std::string GetBidder() const;

                    /**
                     * 设置竞拍人
                     * @param _bidder 竞拍人
                     * 
                     */
                    void SetBidder(const std::string& _bidder);

                    /**
                     * 判断参数 Bidder 是否已赋值
                     * @return Bidder 是否已赋值
                     * 
                     */
                    bool BidderHasBeenSet() const;

                    /**
                     * 获取竞拍时间
                     * @return AuctionTime 竞拍时间
                     * 
                     */
                    std::string GetAuctionTime() const;

                    /**
                     * 设置竞拍时间
                     * @param _auctionTime 竞拍时间
                     * 
                     */
                    void SetAuctionTime(const std::string& _auctionTime);

                    /**
                     * 判断参数 AuctionTime 是否已赋值
                     * @return AuctionTime 是否已赋值
                     * 
                     */
                    bool AuctionTimeHasBeenSet() const;

                    /**
                     * 获取竞拍价格 单位元
                     * @return AuctionPrice 竞拍价格 单位元
                     * 
                     */
                    double GetAuctionPrice() const;

                    /**
                     * 设置竞拍价格 单位元
                     * @param _auctionPrice 竞拍价格 单位元
                     * 
                     */
                    void SetAuctionPrice(const double& _auctionPrice);

                    /**
                     * 判断参数 AuctionPrice 是否已赋值
                     * @return AuctionPrice 是否已赋值
                     * 
                     */
                    bool AuctionPriceHasBeenSet() const;

                    /**
                     * 获取状态 up: 领先 down: 落后
                     * @return Status 状态 up: 领先 down: 落后
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 up: 领先 down: 落后
                     * @param _status 状态 up: 领先 down: 落后
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 竞拍人
                     */
                    std::string m_bidder;
                    bool m_bidderHasBeenSet;

                    /**
                     * 竞拍时间
                     */
                    std::string m_auctionTime;
                    bool m_auctionTimeHasBeenSet;

                    /**
                     * 竞拍价格 单位元
                     */
                    double m_auctionPrice;
                    bool m_auctionPriceHasBeenSet;

                    /**
                     * 状态 up: 领先 down: 落后
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_AUCTIONINFO_H_
