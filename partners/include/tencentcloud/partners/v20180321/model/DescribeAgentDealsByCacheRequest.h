/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSBYCACHEREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSBYCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeAgentDealsByCache请求参数结构体
                */
                class DescribeAgentDealsByCacheRequest : public AbstractModel
                {
                public:
                    DescribeAgentDealsByCacheRequest();
                    ~DescribeAgentDealsByCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>限制数目 最大200</p>
                     * @return Limit <p>限制数目 最大200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制数目 最大200</p>
                     * @param _limit <p>限制数目 最大200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>下单时间范围起始点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * @return CreatTimeRangeStart <p>下单时间范围起始点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * 
                     */
                    std::string GetCreatTimeRangeStart() const;

                    /**
                     * 设置<p>下单时间范围起始点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * @param _creatTimeRangeStart <p>下单时间范围起始点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * 
                     */
                    void SetCreatTimeRangeStart(const std::string& _creatTimeRangeStart);

                    /**
                     * 判断参数 CreatTimeRangeStart 是否已赋值
                     * @return CreatTimeRangeStart 是否已赋值
                     * 
                     */
                    bool CreatTimeRangeStartHasBeenSet() const;

                    /**
                     * 获取<p>下单时间范围终止点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * @return CreatTimeRangeEnd <p>下单时间范围终止点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * 
                     */
                    std::string GetCreatTimeRangeEnd() const;

                    /**
                     * 设置<p>下单时间范围终止点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * @param _creatTimeRangeEnd <p>下单时间范围终止点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     * 
                     */
                    void SetCreatTimeRangeEnd(const std::string& _creatTimeRangeEnd);

                    /**
                     * 判断参数 CreatTimeRangeEnd 是否已赋值
                     * @return CreatTimeRangeEnd 是否已赋值
                     * 
                     */
                    bool CreatTimeRangeEndHasBeenSet() const;

                    /**
                     * 获取<p>0:下单时间降序；其他：下单时间升序</p>
                     * @return Order <p>0:下单时间降序；其他：下单时间升序</p>
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置<p>0:下单时间降序；其他：下单时间升序</p>
                     * @param _order <p>0:下单时间降序；其他：下单时间升序</p>
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>子订单状态(1-待支付,2-已支付,3-发货中,4-已发货,5-发货失败,6-已退款,7-已取消,8-已过期,9-已失效,12-支付中,13-退款中,30-处理中)</p><p>控制台订单状态为以上状态的组合：未支付(1) 处理中(2,3,5,12,13,30) 已取消(7) 交易成功(4) 已过期(8) 已退款(6) 订单错误(9)</p>
                     * @return Status <p>子订单状态(1-待支付,2-已支付,3-发货中,4-已发货,5-发货失败,6-已退款,7-已取消,8-已过期,9-已失效,12-支付中,13-退款中,30-处理中)</p><p>控制台订单状态为以上状态的组合：未支付(1) 处理中(2,3,5,12,13,30) 已取消(7) 交易成功(4) 已过期(8) 已退款(6) 订单错误(9)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>子订单状态(1-待支付,2-已支付,3-发货中,4-已发货,5-发货失败,6-已退款,7-已取消,8-已过期,9-已失效,12-支付中,13-退款中,30-处理中)</p><p>控制台订单状态为以上状态的组合：未支付(1) 处理中(2,3,5,12,13,30) 已取消(7) 交易成功(4) 已过期(8) 已退款(6) 订单错误(9)</p>
                     * @param _status <p>子订单状态(1-待支付,2-已支付,3-发货中,4-已发货,5-发货失败,6-已退款,7-已取消,8-已过期,9-已失效,12-支付中,13-退款中,30-处理中)</p><p>控制台订单状态为以上状态的组合：未支付(1) 处理中(2,3,5,12,13,30) 已取消(7) 交易成功(4) 已过期(8) 已退款(6) 订单错误(9)</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>下单人账号ID列表</p>
                     * @return OwnerUins <p>下单人账号ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置<p>下单人账号ID列表</p>
                     * @param _ownerUins <p>下单人账号ID列表</p>
                     * 
                     */
                    void SetOwnerUins(const std::vector<std::string>& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取<p>子订单号列表</p>
                     * @return DealNames <p>子订单号列表</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置<p>子订单号列表</p>
                     * @param _dealNames <p>子订单号列表</p>
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>大订单号列表</p>
                     * @return BigDealIds <p>大订单号列表</p>
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 设置<p>大订单号列表</p>
                     * @param _bigDealIds <p>大订单号列表</p>
                     * 
                     */
                    void SetBigDealIds(const std::vector<std::string>& _bigDealIds);

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                    /**
                     * 获取<p>支付方式，0：自付；1：代付</p>
                     * @return PayerMode <p>支付方式，0：自付；1：代付</p>
                     * 
                     */
                    uint64_t GetPayerMode() const;

                    /**
                     * 设置<p>支付方式，0：自付；1：代付</p>
                     * @param _payerMode <p>支付方式，0：自付；1：代付</p>
                     * 
                     */
                    void SetPayerMode(const uint64_t& _payerMode);

                    /**
                     * 判断参数 PayerMode 是否已赋值
                     * @return PayerMode 是否已赋值
                     * 
                     */
                    bool PayerModeHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制数目 最大200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>下单时间范围起始点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     */
                    std::string m_creatTimeRangeStart;
                    bool m_creatTimeRangeStartHasBeenSet;

                    /**
                     * <p>下单时间范围终止点【*请必传并控制时间范围最大90天，避免出现超时】</p>
                     */
                    std::string m_creatTimeRangeEnd;
                    bool m_creatTimeRangeEndHasBeenSet;

                    /**
                     * <p>0:下单时间降序；其他：下单时间升序</p>
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>子订单状态(1-待支付,2-已支付,3-发货中,4-已发货,5-发货失败,6-已退款,7-已取消,8-已过期,9-已失效,12-支付中,13-退款中,30-处理中)</p><p>控制台订单状态为以上状态的组合：未支付(1) 处理中(2,3,5,12,13,30) 已取消(7) 交易成功(4) 已过期(8) 已退款(6) 订单错误(9)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>下单人账号ID列表</p>
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>子订单号列表</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>大订单号列表</p>
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                    /**
                     * <p>支付方式，0：自付；1：代付</p>
                     */
                    uint64_t m_payerMode;
                    bool m_payerModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSBYCACHEREQUEST_H_
