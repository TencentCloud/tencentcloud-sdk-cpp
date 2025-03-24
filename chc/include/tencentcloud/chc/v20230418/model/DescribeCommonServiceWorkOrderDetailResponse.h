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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECOMMONSERVICEWORKORDERDETAILRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECOMMONSERVICEWORKORDERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/OrderStep.h>
#include <tencentcloud/chc/v20230418/model/CommonServiceBaseInfo.h>
#include <tencentcloud/chc/v20230418/model/DevicePosition.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCommonServiceWorkOrderDetail返回参数结构体
                */
                class DescribeCommonServiceWorkOrderDetailResponse : public AbstractModel
                {
                public:
                    DescribeCommonServiceWorkOrderDetailResponse();
                    ~DescribeCommonServiceWorkOrderDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进度
                     * @return StepSet 进度
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
                     * 获取基本信息
                     * @return BaseInfo 基本信息
                     * 
                     */
                    CommonServiceBaseInfo GetBaseInfo() const;

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取设备信息
                     * @return DeviceSet 设备信息
                     * 
                     */
                    std::vector<DevicePosition> GetDeviceSet() const;

                    /**
                     * 判断参数 DeviceSet 是否已赋值
                     * @return DeviceSet 是否已赋值
                     * 
                     */
                    bool DeviceSetHasBeenSet() const;

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
                     * 获取拒绝原因
                     * @return RejectReason 拒绝原因
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
                     * 进度
                     */
                    std::vector<OrderStep> m_stepSet;
                    bool m_stepSetHasBeenSet;

                    /**
                     * 基本信息
                     */
                    CommonServiceBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * 设备信息
                     */
                    std::vector<DevicePosition> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     * 工单状态
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 拒绝原因
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECOMMONSERVICEWORKORDERDETAILRESPONSE_H_
