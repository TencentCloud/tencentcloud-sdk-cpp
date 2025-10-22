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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_REPORTORDERREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_REPORTORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * ReportOrder请求参数结构体
                */
                class ReportOrderRequest : public AbstractModel
                {
                public:
                    ReportOrderRequest();
                    ~ReportOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单编号唯一标识符
                     * @return OrderId 订单编号唯一标识符
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单编号唯一标识符
                     * @param _orderId 订单编号唯一标识符
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取用量类型
                     * @return PackageType 用量类型
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置用量类型
                     * @param _packageType 用量类型
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取上报月份，默认当前月
                     * @return ReportMonth 上报月份，默认当前月
                     * 
                     */
                    std::string GetReportMonth() const;

                    /**
                     * 设置上报月份，默认当前月
                     * @param _reportMonth 上报月份，默认当前月
                     * 
                     */
                    void SetReportMonth(const std::string& _reportMonth);

                    /**
                     * 判断参数 ReportMonth 是否已赋值
                     * @return ReportMonth 是否已赋值
                     * 
                     */
                    bool ReportMonthHasBeenSet() const;

                private:

                    /**
                     * 订单编号唯一标识符
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 用量类型
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 上报月份，默认当前月
                     */
                    std::string m_reportMonth;
                    bool m_reportMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_REPORTORDERREQUEST_H_
