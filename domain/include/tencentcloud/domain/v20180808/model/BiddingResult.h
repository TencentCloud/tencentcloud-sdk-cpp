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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGRESULT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGRESULT_H_

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
                * 我竞价的域名结构体。
                */
                class BiddingResult : public AbstractModel
                {
                public:
                    BiddingResult();
                    ~BiddingResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预约ID
                     * @return BusinessID 预约ID
                     * 
                     */
                    std::string GetBusinessID() const;

                    /**
                     * 设置预约ID
                     * @param _businessID 预约ID
                     * 
                     */
                    void SetBusinessID(const std::string& _businessID);

                    /**
                     * 判断参数 BusinessID 是否已赋值
                     * @return BusinessID 是否已赋值
                     * 
                     */
                    bool BusinessIDHasBeenSet() const;

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
                     * 获取当前价格 单位元
                     * @return CurrentPrice 当前价格 单位元
                     * 
                     */
                    uint64_t GetCurrentPrice() const;

                    /**
                     * 设置当前价格 单位元
                     * @param _currentPrice 当前价格 单位元
                     * 
                     */
                    void SetCurrentPrice(const uint64_t& _currentPrice);

                    /**
                     * 判断参数 CurrentPrice 是否已赋值
                     * @return CurrentPrice 是否已赋值
                     * 
                     */
                    bool CurrentPriceHasBeenSet() const;

                    /**
                     * 获取当前用户昵称
                     * @return CurrentNickname 当前用户昵称
                     * 
                     */
                    std::string GetCurrentNickname() const;

                    /**
                     * 设置当前用户昵称
                     * @param _currentNickname 当前用户昵称
                     * 
                     */
                    void SetCurrentNickname(const std::string& _currentNickname);

                    /**
                     * 判断参数 CurrentNickname 是否已赋值
                     * @return CurrentNickname 是否已赋值
                     * 
                     */
                    bool CurrentNicknameHasBeenSet() const;

                    /**
                     * 获取我的出价 单位元
                     * @return BiddingPrice 我的出价 单位元
                     * 
                     */
                    uint64_t GetBiddingPrice() const;

                    /**
                     * 设置我的出价 单位元
                     * @param _biddingPrice 我的出价 单位元
                     * 
                     */
                    void SetBiddingPrice(const uint64_t& _biddingPrice);

                    /**
                     * 判断参数 BiddingPrice 是否已赋值
                     * @return BiddingPrice 是否已赋值
                     * 
                     */
                    bool BiddingPriceHasBeenSet() const;

                    /**
                     * 获取竞价保证金 单位元
                     * @return BiddingBondPrice 竞价保证金 单位元
                     * 
                     */
                    uint64_t GetBiddingBondPrice() const;

                    /**
                     * 设置竞价保证金 单位元
                     * @param _biddingBondPrice 竞价保证金 单位元
                     * 
                     */
                    void SetBiddingBondPrice(const uint64_t& _biddingBondPrice);

                    /**
                     * 判断参数 BiddingBondPrice 是否已赋值
                     * @return BiddingBondPrice 是否已赋值
                     * 
                     */
                    bool BiddingBondPriceHasBeenSet() const;

                    /**
                     * 获取竞价结束时间
                     * @return BiddingEndTime 竞价结束时间
                     * 
                     */
                    std::string GetBiddingEndTime() const;

                    /**
                     * 设置竞价结束时间
                     * @param _biddingEndTime 竞价结束时间
                     * 
                     */
                    void SetBiddingEndTime(const std::string& _biddingEndTime);

                    /**
                     * 判断参数 BiddingEndTime 是否已赋值
                     * @return BiddingEndTime 是否已赋值
                     * 
                     */
                    bool BiddingEndTimeHasBeenSet() const;

                    /**
                     * 获取竞价标识，1 领先，2 落后
                     * @return BiddingFlag 竞价标识，1 领先，2 落后
                     * 
                     */
                    uint64_t GetBiddingFlag() const;

                    /**
                     * 设置竞价标识，1 领先，2 落后
                     * @param _biddingFlag 竞价标识，1 领先，2 落后
                     * 
                     */
                    void SetBiddingFlag(const uint64_t& _biddingFlag);

                    /**
                     * 判断参数 BiddingFlag 是否已赋值
                     * @return BiddingFlag 是否已赋值
                     * 
                     */
                    bool BiddingFlagHasBeenSet() const;

                    /**
                     * 获取出价次数
                     * @return BiddingNum 出价次数
                     * 
                     */
                    uint64_t GetBiddingNum() const;

                    /**
                     * 设置出价次数
                     * @param _biddingNum 出价次数
                     * 
                     */
                    void SetBiddingNum(const uint64_t& _biddingNum);

                    /**
                     * 判断参数 BiddingNum 是否已赋值
                     * @return BiddingNum 是否已赋值
                     * 
                     */
                    bool BiddingNumHasBeenSet() const;

                    /**
                     * 获取2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     * @return Status 2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     * @param _status 2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 预约ID
                     */
                    std::string m_businessID;
                    bool m_businessIDHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 当前价格 单位元
                     */
                    uint64_t m_currentPrice;
                    bool m_currentPriceHasBeenSet;

                    /**
                     * 当前用户昵称
                     */
                    std::string m_currentNickname;
                    bool m_currentNicknameHasBeenSet;

                    /**
                     * 我的出价 单位元
                     */
                    uint64_t m_biddingPrice;
                    bool m_biddingPriceHasBeenSet;

                    /**
                     * 竞价保证金 单位元
                     */
                    uint64_t m_biddingBondPrice;
                    bool m_biddingBondPriceHasBeenSet;

                    /**
                     * 竞价结束时间
                     */
                    std::string m_biddingEndTime;
                    bool m_biddingEndTimeHasBeenSet;

                    /**
                     * 竞价标识，1 领先，2 落后
                     */
                    uint64_t m_biddingFlag;
                    bool m_biddingFlagHasBeenSet;

                    /**
                     * 出价次数
                     */
                    uint64_t m_biddingNum;
                    bool m_biddingNumHasBeenSet;

                    /**
                     * 2 竞价中  3 等待出价 4 竞价失败 10 竞价持有者赎回
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGRESULT_H_
