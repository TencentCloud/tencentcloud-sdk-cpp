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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/OrderStep.h>
#include <tencentcloud/chc/v20230418/model/DeviceHistory.h>
#include <tencentcloud/chc/v20230418/model/DeviceOrderBaseInfo.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeDeviceWorkOrderDetail返回参数结构体
                */
                class DescribeDeviceWorkOrderDetailResponse : public AbstractModel
                {
                public:
                    DescribeDeviceWorkOrderDetailResponse();
                    ~DescribeDeviceWorkOrderDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取工单ID
                     * @return OrderId 工单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取服务类型
                     * @return ServiceType 服务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取工单类型
                     * @return OrderType 工单类型
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取工单状态
                     * @return OrderStatus 工单状态
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取工单流程状态
                     * @return StepSet 工单流程状态
                     * 
                     */
                    std::vector<OrderStep> GetStepSet() const;

                    /**
                     * 判断参数 StepSet 是否已赋值
                     * @return StepSet 是否已赋值
                     * 
                     */
                    bool StepSetHasBeenSet() const;

                    /**
                     * 获取工单设备信息
                     * @return DeviceSet 工单设备信息
                     * 
                     */
                    std::vector<DeviceHistory> GetDeviceSet() const;

                    /**
                     * 判断参数 DeviceSet 是否已赋值
                     * @return DeviceSet 是否已赋值
                     * 
                     */
                    bool DeviceSetHasBeenSet() const;

                    /**
                     * 获取工单的入参信息
                     * @return BaseInfo 工单的入参信息
                     * 
                     */
                    DeviceOrderBaseInfo GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取工单的拒绝原因，工单状态为reject的时候返回
                     * @return RejectReason 工单的拒绝原因，工单状态为reject的时候返回
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 判断参数 RejectReason 是否已赋值
                     * @return RejectReason 是否已赋值
                     * 
                     */
                    bool RejectReasonHasBeenSet() const;

                private:

                    /**
                     * 工单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 工单类型
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 工单状态
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 工单流程状态
                     */
                    std::vector<OrderStep> m_stepSet;
                    bool m_stepSetHasBeenSet;

                    /**
                     * 工单设备信息
                     */
                    std::vector<DeviceHistory> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * 工单的入参信息
                     */
                    DeviceOrderBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 工单的拒绝原因，工单状态为reject的时候返回
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_
