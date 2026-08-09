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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDealsByCond请求参数结构体
                */
                class DescribeDealsByCondRequest : public AbstractModel
                {
                public:
                    DescribeDealsByCondRequest();
                    ~DescribeDealsByCondRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间 2016-01-01 00:00:00</p>
                     * @return StartTime <p>开始时间 2016-01-01 00:00:00</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间 2016-01-01 00:00:00</p>
                     * @param _startTime <p>开始时间 2016-01-01 00:00:00</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间 2016-02-01 00:00:00 建议跨度不超过3个月</p>
                     * @return EndTime <p>结束时间 2016-02-01 00:00:00 建议跨度不超过3个月</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间 2016-02-01 00:00:00 建议跨度不超过3个月</p>
                     * @param _endTime <p>结束时间 2016-02-01 00:00:00 建议跨度不超过3个月</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * @return Limit <p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * @param _limit <p>一页多少条数据，默认是20条，最大不超过1000</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>第多少页，从0开始，默认是0</p>
                     * @return Offset <p>第多少页，从0开始，默认是0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>第多少页，从0开始，默认是0</p>
                     * @param _offset <p>第多少页，从0开始，默认是0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>订单状态</p><p>枚举值：</p><ul><li>1：  待支付</li><li>2：  已支付</li><li>3：  发货中</li><li>4：  已发货</li><li>5：  发货失败</li><li>6：  已退款</li><li>7：  已取消</li><li>8：  订单过期</li><li>9 ：  订单已失效</li><li>10：  产品已失效</li><li>11：  代付拒绝</li><li>12：  支付中</li><li>13：  退款中</li><li>30：  服务市场订单待用户确认完成</li></ul><p>默认值：4（已发货，成功的订单）</p><p>其中，状态2、3、5、12、13、30 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>统一显示“处理中”；<br>状态4 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中显示交易成功；<br>状态9、10 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中无对应状态</p>
                     * @return Status <p>订单状态</p><p>枚举值：</p><ul><li>1：  待支付</li><li>2：  已支付</li><li>3：  发货中</li><li>4：  已发货</li><li>5：  发货失败</li><li>6：  已退款</li><li>7：  已取消</li><li>8：  订单过期</li><li>9 ：  订单已失效</li><li>10：  产品已失效</li><li>11：  代付拒绝</li><li>12：  支付中</li><li>13：  退款中</li><li>30：  服务市场订单待用户确认完成</li></ul><p>默认值：4（已发货，成功的订单）</p><p>其中，状态2、3、5、12、13、30 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>统一显示“处理中”；<br>状态4 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中显示交易成功；<br>状态9、10 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中无对应状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>订单状态</p><p>枚举值：</p><ul><li>1：  待支付</li><li>2：  已支付</li><li>3：  发货中</li><li>4：  已发货</li><li>5：  发货失败</li><li>6：  已退款</li><li>7：  已取消</li><li>8：  订单过期</li><li>9 ：  订单已失效</li><li>10：  产品已失效</li><li>11：  代付拒绝</li><li>12：  支付中</li><li>13：  退款中</li><li>30：  服务市场订单待用户确认完成</li></ul><p>默认值：4（已发货，成功的订单）</p><p>其中，状态2、3、5、12、13、30 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>统一显示“处理中”；<br>状态4 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中显示交易成功；<br>状态9、10 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中无对应状态</p>
                     * @param _status <p>订单状态</p><p>枚举值：</p><ul><li>1：  待支付</li><li>2：  已支付</li><li>3：  发货中</li><li>4：  已发货</li><li>5：  发货失败</li><li>6：  已退款</li><li>7：  已取消</li><li>8：  订单过期</li><li>9 ：  订单已失效</li><li>10：  产品已失效</li><li>11：  代付拒绝</li><li>12：  支付中</li><li>13：  退款中</li><li>30：  服务市场订单待用户确认完成</li></ul><p>默认值：4（已发货，成功的订单）</p><p>其中，状态2、3、5、12、13、30 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>统一显示“处理中”；<br>状态4 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中显示交易成功；<br>状态9、10 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中无对应状态</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>子订单号</p>
                     * @return OrderId <p>子订单号</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>子订单号</p>
                     * @param _orderId <p>子订单号</p>
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取<p>大订单号</p>
                     * @return BigDealId <p>大订单号</p>
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置<p>大订单号</p>
                     * @param _bigDealId <p>大订单号</p>
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>订单状态</p>
                     * @return StatusSet <p>订单状态</p>
                     * 
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置<p>订单状态</p>
                     * @param _statusSet <p>订单状态</p>
                     * 
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间 2016-01-01 00:00:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间 2016-02-01 00:00:00 建议跨度不超过3个月</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>一页多少条数据，默认是20条，最大不超过1000</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>第多少页，从0开始，默认是0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>订单状态</p><p>枚举值：</p><ul><li>1：  待支付</li><li>2：  已支付</li><li>3：  发货中</li><li>4：  已发货</li><li>5：  发货失败</li><li>6：  已退款</li><li>7：  已取消</li><li>8：  订单过期</li><li>9 ：  订单已失效</li><li>10：  产品已失效</li><li>11：  代付拒绝</li><li>12：  支付中</li><li>13：  退款中</li><li>30：  服务市场订单待用户确认完成</li></ul><p>默认值：4（已发货，成功的订单）</p><p>其中，状态2、3、5、12、13、30 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>统一显示“处理中”；<br>状态4 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中显示交易成功；<br>状态9、10 在<a href="https://console.cloud.tencent.com/expense/deal">控制台</a>中无对应状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>子订单号</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>大订单号</p>
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>订单状态</p>
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_
