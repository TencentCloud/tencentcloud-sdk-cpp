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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELEVALUATIONWORKORDERDETAILRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELEVALUATIONWORKORDERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/OrderStep.h>
#include <tencentcloud/chc/v20230418/model/ModelEvaluationBaseInfo.h>
#include <tencentcloud/chc/v20230418/model/ModelVersionDetail.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeModelEvaluationWorkOrderDetail返回参数结构体
                */
                class DescribeModelEvaluationWorkOrderDetailResponse : public AbstractModel
                {
                public:
                    DescribeModelEvaluationWorkOrderDetailResponse();
                    ~DescribeModelEvaluationWorkOrderDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取工单进度
                     * @return StepSet 工单进度
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
                     * 获取工单详情
                     * @return BaseInfo 工单详情
                     * 
                     */
                    ModelEvaluationBaseInfo GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取评估中的网络设备型号详情
                     * @return NetDeviceModelSet 评估中的网络设备型号详情
                     * 
                     */
                    std::vector<ModelVersionDetail> GetNetDeviceModelSet() const;

                    /**
                     * 判断参数 NetDeviceModelSet 是否已赋值
                     * @return NetDeviceModelSet 是否已赋值
                     * 
                     */
                    bool NetDeviceModelSetHasBeenSet() const;

                    /**
                     * 获取评估中的服务器型号详情
                     * @return ServerModelSet 评估中的服务器型号详情
                     * 
                     */
                    std::vector<ModelVersionDetail> GetServerModelSet() const;

                    /**
                     * 判断参数 ServerModelSet 是否已赋值
                     * @return ServerModelSet 是否已赋值
                     * 
                     */
                    bool ServerModelSetHasBeenSet() const;

                    /**
                     * 获取订单状态, process 处理中 ，reject 已拒绝 ，finish 已完成，exception 异常
                     * @return OrderStatus 订单状态, process 处理中 ，reject 已拒绝 ，finish 已完成，exception 异常
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
                     * 获取工单拒绝原因
                     * @return RejectReason 工单拒绝原因
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
                     * 工单进度
                     */
                    std::vector<OrderStep> m_stepSet;
                    bool m_stepSetHasBeenSet;

                    /**
                     * 工单详情
                     */
                    ModelEvaluationBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 评估中的网络设备型号详情
                     */
                    std::vector<ModelVersionDetail> m_netDeviceModelSet;
                    bool m_netDeviceModelSetHasBeenSet;

                    /**
                     * 评估中的服务器型号详情
                     */
                    std::vector<ModelVersionDetail> m_serverModelSet;
                    bool m_serverModelSetHasBeenSet;

                    /**
                     * 订单状态, process 处理中 ，reject 已拒绝 ，finish 已完成，exception 异常
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 工单拒绝原因
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELEVALUATIONWORKORDERDETAILRESPONSE_H_
