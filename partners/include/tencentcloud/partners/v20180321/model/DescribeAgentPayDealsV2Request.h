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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTPAYDEALSV2REQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTPAYDEALSV2REQUEST_H_

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
                * DescribeAgentPayDealsV2请求参数结构体
                */
                class DescribeAgentPayDealsV2Request : public AbstractModel
                {
                public:
                    DescribeAgentPayDealsV2Request();
                    ~DescribeAgentPayDealsV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取限制数目 最大100
                     * @return Limit 限制数目 最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目 最大100
                     * @param _limit 限制数目 最大100
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
                     * 获取下单时间范围起始点(不传时会默认查15天内订单，传值时需要传15天内的起始时间)
                     * @return CreatTimeRangeStart 下单时间范围起始点(不传时会默认查15天内订单，传值时需要传15天内的起始时间)
                     * 
                     */
                    std::string GetCreatTimeRangeStart() const;

                    /**
                     * 设置下单时间范围起始点(不传时会默认查15天内订单，传值时需要传15天内的起始时间)
                     * @param _creatTimeRangeStart 下单时间范围起始点(不传时会默认查15天内订单，传值时需要传15天内的起始时间)
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
                     * 获取下单时间范围终止点
                     * @return CreatTimeRangeEnd 下单时间范围终止点
                     * 
                     */
                    std::string GetCreatTimeRangeEnd() const;

                    /**
                     * 设置下单时间范围终止点
                     * @param _creatTimeRangeEnd 下单时间范围终止点
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
                     * 获取0:下单时间降序；其他：下单时间升序
                     * @return Order 0:下单时间降序；其他：下单时间升序
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置0:下单时间降序；其他：下单时间升序
                     * @param _order 0:下单时间降序；其他：下单时间升序
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
                     * 获取订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
                     * @return Status 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
                     * @param _status 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
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
                     * 获取下单人账号ID列表
                     * @return OwnerUins 下单人账号ID列表
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置下单人账号ID列表
                     * @param _ownerUins 下单人账号ID列表
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
                     * 获取子订单号列表
                     * @return DealNames 子订单号列表
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置子订单号列表
                     * @param _dealNames 子订单号列表
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
                     * 获取大订单号列表
                     * @return BigDealIds 大订单号列表
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 设置大订单号列表
                     * @param _bigDealIds 大订单号列表
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
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目 最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 下单时间范围起始点(不传时会默认查15天内订单，传值时需要传15天内的起始时间)
                     */
                    std::string m_creatTimeRangeStart;
                    bool m_creatTimeRangeStartHasBeenSet;

                    /**
                     * 下单时间范围终止点
                     */
                    std::string m_creatTimeRangeEnd;
                    bool m_creatTimeRangeEndHasBeenSet;

                    /**
                     * 0:下单时间降序；其他：下单时间升序
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下单人账号ID列表
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * 子订单号列表
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * 大订单号列表
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTPAYDEALSV2REQUEST_H_
