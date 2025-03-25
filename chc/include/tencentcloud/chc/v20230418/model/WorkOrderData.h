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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_

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
                * 工单的常用信息返回
                */
                class WorkOrderData : public AbstractModel
                {
                public:
                    WorkOrderData();
                    ~WorkOrderData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工单号
                     * @return WorkOrderId 工单号
                     * 
                     */
                    std::string GetWorkOrderId() const;

                    /**
                     * 设置工单号
                     * @param _workOrderId 工单号
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

                    /**
                     * 获取工单状态
                     * @return OrderStatus 工单状态
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置工单状态
                     * @param _orderStatus 工单状态
                     * 
                     */
                    void SetOrderStatus(const std::string& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取工单创建人
                     * @return Creator 工单创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置工单创建人
                     * @param _creator 工单创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取工单创建时间
                     * @return CreateTime 工单创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置工单创建时间
                     * @param _createTime 工单创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取工单完成时间
                     * @return FinishTime 工单完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置工单完成时间
                     * @param _finishTime 工单完成时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 工单号
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

                    /**
                     * 工单状态
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 工单创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 工单创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 工单完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_
