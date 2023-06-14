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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 专家服务订单信息
                */
                class ExpertServiceOrderInfo : public AbstractModel
                {
                public:
                    ExpertServiceOrderInfo();
                    ~ExpertServiceOrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    uint64_t GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
                     * 
                     */
                    void SetOrderId(const uint64_t& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单类型 1应急 2 旗舰重保 3 安全管家
                     * @return InquireType 订单类型 1应急 2 旗舰重保 3 安全管家
                     * 
                     */
                    uint64_t GetInquireType() const;

                    /**
                     * 设置订单类型 1应急 2 旗舰重保 3 安全管家
                     * @param _inquireType 订单类型 1应急 2 旗舰重保 3 安全管家
                     * 
                     */
                    void SetInquireType(const uint64_t& _inquireType);

                    /**
                     * 判断参数 InquireType 是否已赋值
                     * @return InquireType 是否已赋值
                     * 
                     */
                    bool InquireTypeHasBeenSet() const;

                    /**
                     * 获取服务数量
                     * @return InquireNum 服务数量
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 设置服务数量
                     * @param _inquireNum 服务数量
                     * 
                     */
                    void SetInquireNum(const uint64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取服务开始时间
                     * @return BeginTime 服务开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置服务开始时间
                     * @param _beginTime 服务开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取服务结束时间
                     * @return EndTime 服务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置服务结束时间
                     * @param _endTime 服务结束时间
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
                     * 获取服务时长几个月
                     * @return ServiceTime 服务时长几个月
                     * 
                     */
                    uint64_t GetServiceTime() const;

                    /**
                     * 设置服务时长几个月
                     * @param _serviceTime 服务时长几个月
                     * 
                     */
                    void SetServiceTime(const uint64_t& _serviceTime);

                    /**
                     * 判断参数 ServiceTime 是否已赋值
                     * @return ServiceTime 是否已赋值
                     * 
                     */
                    bool ServiceTimeHasBeenSet() const;

                    /**
                     * 获取订单状态 0 未启动 1 服务中 2已过期 3完成，4退费销毁
                     * @return Status 订单状态 0 未启动 1 服务中 2已过期 3完成，4退费销毁
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置订单状态 0 未启动 1 服务中 2已过期 3完成，4退费销毁
                     * @param _status 订单状态 0 未启动 1 服务中 2已过期 3完成，4退费销毁
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 订单id
                     */
                    uint64_t m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单类型 1应急 2 旗舰重保 3 安全管家
                     */
                    uint64_t m_inquireType;
                    bool m_inquireTypeHasBeenSet;

                    /**
                     * 服务数量
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * 服务开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 服务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务时长几个月
                     */
                    uint64_t m_serviceTime;
                    bool m_serviceTimeHasBeenSet;

                    /**
                     * 订单状态 0 未启动 1 服务中 2已过期 3完成，4退费销毁
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_
