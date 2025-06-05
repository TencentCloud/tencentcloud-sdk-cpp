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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_EXPORTCUSTOMERWORKORDERDETAILREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_EXPORTCUSTOMERWORKORDERDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ExportCustomerWorkOrderDetail请求参数结构体
                */
                class ExportCustomerWorkOrderDetailRequest : public AbstractModel
                {
                public:
                    ExportCustomerWorkOrderDetailRequest();
                    ~ExportCustomerWorkOrderDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务工单类型
                     * @return WorkOrderType 服务工单类型
                     * 
                     */
                    std::vector<std::string> GetWorkOrderType() const;

                    /**
                     * 设置服务工单类型
                     * @param _workOrderType 服务工单类型
                     * 
                     */
                    void SetWorkOrderType(const std::vector<std::string>& _workOrderType);

                    /**
                     * 判断参数 WorkOrderType 是否已赋值
                     * @return WorkOrderType 是否已赋值
                     * 
                     */
                    bool WorkOrderTypeHasBeenSet() const;

                    /**
                     * 获取要导出的工单的起始时间
                     * @return BeginDateTime 要导出的工单的起始时间
                     * 
                     */
                    std::string GetBeginDateTime() const;

                    /**
                     * 设置要导出的工单的起始时间
                     * @param _beginDateTime 要导出的工单的起始时间
                     * 
                     */
                    void SetBeginDateTime(const std::string& _beginDateTime);

                    /**
                     * 判断参数 BeginDateTime 是否已赋值
                     * @return BeginDateTime 是否已赋值
                     * 
                     */
                    bool BeginDateTimeHasBeenSet() const;

                    /**
                     * 获取要导出的工单的结束时间
                     * @return EndDateTime 要导出的工单的结束时间
                     * 
                     */
                    std::string GetEndDateTime() const;

                    /**
                     * 设置要导出的工单的结束时间
                     * @param _endDateTime 要导出的工单的结束时间
                     * 
                     */
                    void SetEndDateTime(const std::string& _endDateTime);

                    /**
                     * 判断参数 EndDateTime 是否已赋值
                     * @return EndDateTime 是否已赋值
                     * 
                     */
                    bool EndDateTimeHasBeenSet() const;

                private:

                    /**
                     * 服务工单类型
                     */
                    std::vector<std::string> m_workOrderType;
                    bool m_workOrderTypeHasBeenSet;

                    /**
                     * 要导出的工单的起始时间
                     */
                    std::string m_beginDateTime;
                    bool m_beginDateTimeHasBeenSet;

                    /**
                     * 要导出的工单的结束时间
                     */
                    std::string m_endDateTime;
                    bool m_endDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_EXPORTCUSTOMERWORKORDERDETAILREQUEST_H_
