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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/OrderStep.h>
#include <tencentcloud/chc/v20230418/model/DeviceHistory.h>
#include <tencentcloud/chc/v20230418/model/DeviceOrderBaseInfo.h>
#include <tencentcloud/chc/v20230418/model/SLAInfo.h>


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
                     * 获取<p>工单ID</p>
                     * @return OrderId <p>工单ID</p>
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
                     * 获取<p>服务类型</p>
                     * @return ServiceType <p>服务类型</p>
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
                     * 获取<p>工单类型</p>
                     * @return OrderType <p>工单类型</p>
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
                     * 获取<p>工单状态</p>
                     * @return OrderStatus <p>工单状态</p>
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
                     * 获取<p>工单流程状态</p>
                     * @return StepSet <p>工单流程状态</p>
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
                     * 获取<p>工单设备信息</p>
                     * @return DeviceSet <p>工单设备信息</p>
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
                     * 获取<p>工单的入参信息</p>
                     * @return BaseInfo <p>工单的入参信息</p>
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
                     * 获取<p>工单的拒绝原因，工单状态为reject的时候返回</p>
                     * @return RejectReason <p>工单的拒绝原因，工单状态为reject的时候返回</p>
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 判断参数 RejectReason 是否已赋值
                     * @return RejectReason 是否已赋值
                     * 
                     */
                    bool RejectReasonHasBeenSet() const;

                    /**
                     * 获取<p>工单 SLA 信息</p>
                     * @return SLAInfo <p>工单 SLA 信息</p>
                     * 
                     */
                    SLAInfo GetSLAInfo() const;

                    /**
                     * 判断参数 SLAInfo 是否已赋值
                     * @return SLAInfo 是否已赋值
                     * 
                     */
                    bool SLAInfoHasBeenSet() const;

                    /**
                     * 获取<p>前序未完成的工单号</p>
                     * @return PreOrderSet <p>前序未完成的工单号</p>
                     * 
                     */
                    std::vector<std::string> GetPreOrderSet() const;

                    /**
                     * 判断参数 PreOrderSet 是否已赋值
                     * @return PreOrderSet 是否已赋值
                     * 
                     */
                    bool PreOrderSetHasBeenSet() const;

                private:

                    /**
                     * <p>工单ID</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>服务类型</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>工单类型</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>工单状态</p>
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>工单流程状态</p>
                     */
                    std::vector<OrderStep> m_stepSet;
                    bool m_stepSetHasBeenSet;

                    /**
                     * <p>工单设备信息</p>
                     */
                    std::vector<DeviceHistory> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * <p>工单的入参信息</p>
                     */
                    DeviceOrderBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * <p>工单的拒绝原因，工单状态为reject的时候返回</p>
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * <p>工单 SLA 信息</p>
                     */
                    SLAInfo m_sLAInfo;
                    bool m_sLAInfoHasBeenSet;

                    /**
                     * <p>前序未完成的工单号</p>
                     */
                    std::vector<std::string> m_preOrderSet;
                    bool m_preOrderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILRESPONSE_H_
