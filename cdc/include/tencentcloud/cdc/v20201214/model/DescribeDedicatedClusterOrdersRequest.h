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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterOrders请求参数结构体
                */
                class DescribeDedicatedClusterOrdersRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterOrdersRequest();
                    ~DescribeDedicatedClusterOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照专用集群id过滤
                     * @return DedicatedClusterIds 按照专用集群id过滤
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterIds() const;

                    /**
                     * 设置按照专用集群id过滤
                     * @param _dedicatedClusterIds 按照专用集群id过滤
                     * 
                     */
                    void SetDedicatedClusterIds(const std::vector<std::string>& _dedicatedClusterIds);

                    /**
                     * 判断参数 DedicatedClusterIds 是否已赋值
                     * @return DedicatedClusterIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdsHasBeenSet() const;

                    /**
                     * 获取按照专用集群订单id过滤
                     * @return DedicatedClusterOrderIds 按照专用集群订单id过滤
                     * 
                     */
                    std::string GetDedicatedClusterOrderIds() const;

                    /**
                     * 设置按照专用集群订单id过滤
                     * @param _dedicatedClusterOrderIds 按照专用集群订单id过滤
                     * 
                     */
                    void SetDedicatedClusterOrderIds(const std::string& _dedicatedClusterOrderIds);

                    /**
                     * 判断参数 DedicatedClusterOrderIds 是否已赋值
                     * @return DedicatedClusterOrderIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取订单状态为过滤条件：PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED  OFFLINE
                     * @return Status 订单状态为过滤条件：PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED  OFFLINE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置订单状态为过滤条件：PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED  OFFLINE
                     * @param _status 订单状态为过滤条件：PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED  OFFLINE
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取订单类型为过滤条件：CREATE  EXTEND
                     * @return ActionType 订单类型为过滤条件：CREATE  EXTEND
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置订单类型为过滤条件：CREATE  EXTEND
                     * @param _actionType 订单类型为过滤条件：CREATE  EXTEND
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取订单类型列表
                     * @return OrderTypes 订单类型列表
                     * 
                     */
                    std::vector<std::string> GetOrderTypes() const;

                    /**
                     * 设置订单类型列表
                     * @param _orderTypes 订单类型列表
                     * 
                     */
                    void SetOrderTypes(const std::vector<std::string>& _orderTypes);

                    /**
                     * 判断参数 OrderTypes 是否已赋值
                     * @return OrderTypes 是否已赋值
                     * 
                     */
                    bool OrderTypesHasBeenSet() const;

                private:

                    /**
                     * 按照专用集群id过滤
                     */
                    std::vector<std::string> m_dedicatedClusterIds;
                    bool m_dedicatedClusterIdsHasBeenSet;

                    /**
                     * 按照专用集群订单id过滤
                     */
                    std::string m_dedicatedClusterOrderIds;
                    bool m_dedicatedClusterOrderIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 订单状态为过滤条件：PENDING INCONSTRUCTION DELIVERING DELIVERED EXPIRED CANCELLED  OFFLINE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订单类型为过滤条件：CREATE  EXTEND
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 订单类型列表
                     */
                    std::vector<std::string> m_orderTypes;
                    bool m_orderTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERORDERSREQUEST_H_
