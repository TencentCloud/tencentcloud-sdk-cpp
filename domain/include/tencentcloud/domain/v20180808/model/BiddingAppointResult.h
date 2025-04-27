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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGAPPOINTRESULT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGAPPOINTRESULT_H_

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
                * 我预定的域名结构体。
                */
                class BiddingAppointResult : public AbstractModel
                {
                public:
                    BiddingAppointResult();
                    ~BiddingAppointResult() = default;
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
                     * 获取预定价格 单位元
                     * @return AppointPrice 预定价格 单位元
                     * 
                     */
                    uint64_t GetAppointPrice() const;

                    /**
                     * 设置预定价格 单位元
                     * @param _appointPrice 预定价格 单位元
                     * 
                     */
                    void SetAppointPrice(const uint64_t& _appointPrice);

                    /**
                     * 判断参数 AppointPrice 是否已赋值
                     * @return AppointPrice 是否已赋值
                     * 
                     */
                    bool AppointPriceHasBeenSet() const;

                    /**
                     * 获取预约保证金 单位元
                     * @return AppointBondPrice 预约保证金 单位元
                     * 
                     */
                    uint64_t GetAppointBondPrice() const;

                    /**
                     * 设置预约保证金 单位元
                     * @param _appointBondPrice 预约保证金 单位元
                     * 
                     */
                    void SetAppointBondPrice(const uint64_t& _appointBondPrice);

                    /**
                     * 判断参数 AppointBondPrice 是否已赋值
                     * @return AppointBondPrice 是否已赋值
                     * 
                     */
                    bool AppointBondPriceHasBeenSet() const;

                    /**
                     * 获取预约结束时间
                     * @return AppointEndTime 预约结束时间
                     * 
                     */
                    std::string GetAppointEndTime() const;

                    /**
                     * 设置预约结束时间
                     * @param _appointEndTime 预约结束时间
                     * 
                     */
                    void SetAppointEndTime(const std::string& _appointEndTime);

                    /**
                     * 判断参数 AppointEndTime 是否已赋值
                     * @return AppointEndTime 是否已赋值
                     * 
                     */
                    bool AppointEndTimeHasBeenSet() const;

                    /**
                     * 获取预约人数
                     * @return AppointNum 预约人数
                     * 
                     */
                    uint64_t GetAppointNum() const;

                    /**
                     * 设置预约人数
                     * @param _appointNum 预约人数
                     * 
                     */
                    void SetAppointNum(const uint64_t& _appointNum);

                    /**
                     * 判断参数 AppointNum 是否已赋值
                     * @return AppointNum 是否已赋值
                     * 
                     */
                    bool AppointNumHasBeenSet() const;

                    /**
                     * 获取1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * @return Status 1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     * @param _status 1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
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
                     * 预定价格 单位元
                     */
                    uint64_t m_appointPrice;
                    bool m_appointPriceHasBeenSet;

                    /**
                     * 预约保证金 单位元
                     */
                    uint64_t m_appointBondPrice;
                    bool m_appointBondPriceHasBeenSet;

                    /**
                     * 预约结束时间
                     */
                    std::string m_appointEndTime;
                    bool m_appointEndTimeHasBeenSet;

                    /**
                     * 预约人数
                     */
                    uint64_t m_appointNum;
                    bool m_appointNumHasBeenSet;

                    /**
                     * 1 已预约，2 竞价中，3 等待出价 4 竞价失败 5 等待支付 6 等待转移，7 转移中 8 交易成功 9 预约持有者赎回 10 竞价持有者赎回 11 其他阶段持有者赎回 12 违约
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGAPPOINTRESULT_H_
