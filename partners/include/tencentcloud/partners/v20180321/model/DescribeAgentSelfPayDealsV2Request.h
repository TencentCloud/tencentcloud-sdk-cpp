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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTSELFPAYDEALSV2REQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTSELFPAYDEALSV2REQUEST_H_

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
                * DescribeAgentSelfPayDealsV2请求参数结构体
                */
                class DescribeAgentSelfPayDealsV2Request : public AbstractModel
                {
                public:
                    DescribeAgentSelfPayDealsV2Request();
                    ~DescribeAgentSelfPayDealsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>下单人账号ID</p>
                     * @return OwnerUin <p>下单人账号ID</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>下单人账号ID</p>
                     * @param _ownerUin <p>下单人账号ID</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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
                     * 获取<p>限制数目 最大100</p>
                     * @return Limit <p>限制数目 最大100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制数目 最大100</p>
                     * @param _limit <p>限制数目 最大100</p>
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
                     * 获取<p>下单时间范围起始点(不传时会默认查最近15天内订单，传值时需要传最近15天内的起始时间)</p>
                     * @return CreatTimeRangeStart <p>下单时间范围起始点(不传时会默认查最近15天内订单，传值时需要传最近15天内的起始时间)</p>
                     * 
                     */
                    std::string GetCreatTimeRangeStart() const;

                    /**
                     * 设置<p>下单时间范围起始点(不传时会默认查最近15天内订单，传值时需要传最近15天内的起始时间)</p>
                     * @param _creatTimeRangeStart <p>下单时间范围起始点(不传时会默认查最近15天内订单，传值时需要传最近15天内的起始时间)</p>
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
                     * 获取<p>下单时间范围终止点</p>
                     * @return CreatTimeRangeEnd <p>下单时间范围终止点</p>
                     * 
                     */
                    std::string GetCreatTimeRangeEnd() const;

                    /**
                     * 设置<p>下单时间范围终止点</p>
                     * @param _creatTimeRangeEnd <p>下单时间范围终止点</p>
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
                     * 获取<p>订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)</p>
                     * @return Status <p>订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)</p>
                     * @param _status <p>订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)</p>
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

                private:

                    /**
                     * <p>下单人账号ID</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制数目 最大100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>下单时间范围起始点(不传时会默认查最近15天内订单，传值时需要传最近15天内的起始时间)</p>
                     */
                    std::string m_creatTimeRangeStart;
                    bool m_creatTimeRangeStartHasBeenSet;

                    /**
                     * <p>下单时间范围终止点</p>
                     */
                    std::string m_creatTimeRangeEnd;
                    bool m_creatTimeRangeEndHasBeenSet;

                    /**
                     * <p>0:下单时间降序；其他：下单时间升序</p>
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTSELFPAYDEALSV2REQUEST_H_
