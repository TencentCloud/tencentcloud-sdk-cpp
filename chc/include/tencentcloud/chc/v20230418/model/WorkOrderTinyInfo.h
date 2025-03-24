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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTINYINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTINYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 工单信息的简要，一般用于工单创建的返回
                */
                class WorkOrderTinyInfo : public AbstractModel
                {
                public:
                    WorkOrderTinyInfo();
                    ~WorkOrderTinyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工单id
                     * @return WorkOrderId 工单id
                     * 
                     */
                    std::string GetWorkOrderId() const;

                    /**
                     * 设置工单id
                     * @param _workOrderId 工单id
                     * 
                     */
                    void SetWorkOrderId(const std::string& _workOrderId);

                    /**
                     * 判断参数 WorkOrderId 是否已赋值
                     * @return WorkOrderId 是否已赋值
                     * 
                     */
                    bool WorkOrderIdHasBeenSet() const;

                    /**
                     * 获取服务类型，一个服务可能会产生多个工单
                     * @return ServiceType 服务类型，一个服务可能会产生多个工单
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型，一个服务可能会产生多个工单
                     * @param _serviceType 服务类型，一个服务可能会产生多个工单
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

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
                     * 设置工单类型
                     * @param _orderType 工单类型
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 工单id
                     */
                    std::string m_workOrderId;
                    bool m_workOrderIdHasBeenSet;

                    /**
                     * 服务类型，一个服务可能会产生多个工单
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 工单类型
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERTINYINFO_H_
