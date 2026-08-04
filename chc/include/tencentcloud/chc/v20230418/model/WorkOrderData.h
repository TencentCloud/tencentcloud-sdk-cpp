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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                     * 获取<p>工单号</p>
                     * @return WorkOrderId <p>工单号</p>
                     * 
                     */
                    std::string GetWorkOrderId() const;

                    /**
                     * 设置<p>工单号</p>
                     * @param _workOrderId <p>工单号</p>
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
                     * 获取<p>服务类型，一个服务可能会产生多个工单</p>
                     * @return ServiceType <p>服务类型，一个服务可能会产生多个工单</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型，一个服务可能会产生多个工单</p>
                     * @param _serviceType <p>服务类型，一个服务可能会产生多个工单</p>
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
                     * 获取<p>工单类型</p>
                     * @return OrderType <p>工单类型</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>工单类型</p>
                     * @param _orderType <p>工单类型</p>
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
                     * 获取<p>工单状态</p>
                     * @return OrderStatus <p>工单状态</p>
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置<p>工单状态</p>
                     * @param _orderStatus <p>工单状态</p>
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
                     * 获取<p>工单创建人</p>
                     * @return Creator <p>工单创建人</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>工单创建人</p>
                     * @param _creator <p>工单创建人</p>
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
                     * 获取<p>工单创建时间</p>
                     * @return CreateTime <p>工单创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>工单创建时间</p>
                     * @param _createTime <p>工单创建时间</p>
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
                     * 获取<p>工单完成时间</p>
                     * @return FinishTime <p>工单完成时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>工单完成时间</p>
                     * @param _finishTime <p>工单完成时间</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>工单关联的dcops单号</p>
                     * @return TicketId <p>工单关联的dcops单号</p>
                     * 
                     */
                    std::string GetTicketId() const;

                    /**
                     * 设置<p>工单关联的dcops单号</p>
                     * @param _ticketId <p>工单关联的dcops单号</p>
                     * 
                     */
                    void SetTicketId(const std::string& _ticketId);

                    /**
                     * 判断参数 TicketId 是否已赋值
                     * @return TicketId 是否已赋值
                     * 
                     */
                    bool TicketIdHasBeenSet() const;

                    /**
                     * 获取<p>SLA</p>
                     * @return SLAInfo <p>SLA</p>
                     * 
                     */
                    SLAInfo GetSLAInfo() const;

                    /**
                     * 设置<p>SLA</p>
                     * @param _sLAInfo <p>SLA</p>
                     * 
                     */
                    void SetSLAInfo(const SLAInfo& _sLAInfo);

                    /**
                     * 判断参数 SLAInfo 是否已赋值
                     * @return SLAInfo 是否已赋值
                     * 
                     */
                    bool SLAInfoHasBeenSet() const;

                private:

                    /**
                     * <p>工单号</p>
                     */
                    std::string m_workOrderId;
                    bool m_workOrderIdHasBeenSet;

                    /**
                     * <p>服务类型，一个服务可能会产生多个工单</p>
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
                     * <p>工单创建人</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>工单创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>工单完成时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>工单关联的dcops单号</p>
                     */
                    std::string m_ticketId;
                    bool m_ticketIdHasBeenSet;

                    /**
                     * <p>SLA</p>
                     */
                    SLAInfo m_sLAInfo;
                    bool m_sLAInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WORKORDERDATA_H_
