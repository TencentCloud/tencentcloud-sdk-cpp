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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATORDERINFO_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/market/v20191010/model/OfflineProductDeal.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * 企业微信订单信息
                */
                class WeChatOrderInfo : public AbstractModel
                {
                public:
                    WeChatOrderInfo();
                    ~WeChatOrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业微信订单号
                     * @return OrderId 企业微信订单号
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置企业微信订单号
                     * @param OrderId 企业微信订单号
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单状态。0-未⽀支付，1-已⽀支付，2-已关闭， 3-未⽀支付且已过期， 4-申请退款中， 5-申请退款成功， 6-退款被拒绝
                     * @return OrderStatus 订单状态。0-未⽀支付，1-已⽀支付，2-已关闭， 3-未⽀支付且已过期， 4-申请退款中， 5-申请退款成功， 6-退款被拒绝
                     */
                    int64_t GetOrderStatus() const;

                    /**
                     * 设置订单状态。0-未⽀支付，1-已⽀支付，2-已关闭， 3-未⽀支付且已过期， 4-申请退款中， 5-申请退款成功， 6-退款被拒绝
                     * @param OrderStatus 订单状态。0-未⽀支付，1-已⽀支付，2-已关闭， 3-未⽀支付且已过期， 4-申请退款中， 5-申请退款成功， 6-退款被拒绝
                     */
                    void SetOrderStatus(const int64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取订单类型。0-普通订单，1-扩容订单，2-续期，3-版本变更更
                     * @return OrderType 订单类型。0-普通订单，1-扩容订单，2-续期，3-版本变更更
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置订单类型。0-普通订单，1-扩容订单，2-续期，3-版本变更更
                     * @param OrderType 订单类型。0-普通订单，1-扩容订单，2-续期，3-版本变更更
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取应⽤id
                     * @return SuiteId 应⽤id
                     */
                    std::string GetSuiteId() const;

                    /**
                     * 设置应⽤id
                     * @param SuiteId 应⽤id
                     */
                    void SetSuiteId(const std::string& _suiteId);

                    /**
                     * 判断参数 SuiteId 是否已赋值
                     * @return SuiteId 是否已赋值
                     */
                    bool SuiteIdHasBeenSet() const;

                    /**
                     * 获取购买版本ID
                     * @return EditionId 购买版本ID
                     */
                    std::string GetEditionId() const;

                    /**
                     * 设置购买版本ID
                     * @param EditionId 购买版本ID
                     */
                    void SetEditionId(const std::string& _editionId);

                    /**
                     * 判断参数 EditionId 是否已赋值
                     * @return EditionId 是否已赋值
                     */
                    bool EditionIdHasBeenSet() const;

                    /**
                     * 获取购买版本名称
                     * @return EditionName 购买版本名称
                     */
                    std::string GetEditionName() const;

                    /**
                     * 设置购买版本名称
                     * @param EditionName 购买版本名称
                     */
                    void SetEditionName(const std::string& _editionName);

                    /**
                     * 判断参数 EditionName 是否已赋值
                     * @return EditionName 是否已赋值
                     */
                    bool EditionNameHasBeenSet() const;

                    /**
                     * 获取实付款金额，单位分
                     * @return Price 实付款金额，单位分
                     */
                    int64_t GetPrice() const;

                    /**
                     * 设置实付款金额，单位分
                     * @param Price 实付款金额，单位分
                     */
                    void SetPrice(const int64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取下单时间
                     * @return OrderTime 下单时间
                     */
                    int64_t GetOrderTime() const;

                    /**
                     * 设置下单时间
                     * @param OrderTime 下单时间
                     */
                    void SetOrderTime(const int64_t& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取付款时间
                     * @return PaidTime 付款时间
                     */
                    int64_t GetPaidTime() const;

                    /**
                     * 设置付款时间
                     * @param PaidTime 付款时间
                     */
                    void SetPaidTime(const int64_t& _paidTime);

                    /**
                     * 判断参数 PaidTime 是否已赋值
                     * @return PaidTime 是否已赋值
                     */
                    bool PaidTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资源使用开始时间
                     * @return UseBeginTime 资源使用开始时间
                     */
                    int64_t GetUseBeginTime() const;

                    /**
                     * 设置资源使用开始时间
                     * @param UseBeginTime 资源使用开始时间
                     */
                    void SetUseBeginTime(const int64_t& _useBeginTime);

                    /**
                     * 判断参数 UseBeginTime 是否已赋值
                     * @return UseBeginTime 是否已赋值
                     */
                    bool UseBeginTimeHasBeenSet() const;

                    /**
                     * 获取资源使用结束时间
                     * @return UseEndTime 资源使用结束时间
                     */
                    int64_t GetUseEndTime() const;

                    /**
                     * 设置资源使用结束时间
                     * @param UseEndTime 资源使用结束时间
                     */
                    void SetUseEndTime(const int64_t& _useEndTime);

                    /**
                     * 判断参数 UseEndTime 是否已赋值
                     * @return UseEndTime 是否已赋值
                     */
                    bool UseEndTimeHasBeenSet() const;

                    /**
                     * 获取磐石详细的四层订单
                     * @return Deals 磐石详细的四层订单
                     */
                    OfflineProductDeal GetDeals() const;

                    /**
                     * 设置磐石详细的四层订单
                     * @param Deals 磐石详细的四层订单
                     */
                    void SetDeals(const OfflineProductDeal& _deals);

                    /**
                     * 判断参数 Deals 是否已赋值
                     * @return Deals 是否已赋值
                     */
                    bool DealsHasBeenSet() const;

                private:

                    /**
                     * 企业微信订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单状态。0-未⽀支付，1-已⽀支付，2-已关闭， 3-未⽀支付且已过期， 4-申请退款中， 5-申请退款成功， 6-退款被拒绝
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 订单类型。0-普通订单，1-扩容订单，2-续期，3-版本变更更
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 应⽤id
                     */
                    std::string m_suiteId;
                    bool m_suiteIdHasBeenSet;

                    /**
                     * 购买版本ID
                     */
                    std::string m_editionId;
                    bool m_editionIdHasBeenSet;

                    /**
                     * 购买版本名称
                     */
                    std::string m_editionName;
                    bool m_editionNameHasBeenSet;

                    /**
                     * 实付款金额，单位分
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 下单时间
                     */
                    int64_t m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 付款时间
                     */
                    int64_t m_paidTime;
                    bool m_paidTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源使用开始时间
                     */
                    int64_t m_useBeginTime;
                    bool m_useBeginTimeHasBeenSet;

                    /**
                     * 资源使用结束时间
                     */
                    int64_t m_useEndTime;
                    bool m_useEndTimeHasBeenSet;

                    /**
                     * 磐石详细的四层订单
                     */
                    OfflineProductDeal m_deals;
                    bool m_dealsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_WECHATORDERINFO_H_
