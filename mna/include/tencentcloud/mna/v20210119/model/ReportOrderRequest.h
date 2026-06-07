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
                     * 获取<p>订单编号唯一标识符</p>
                     * @return OrderId <p>订单编号唯一标识符</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单编号唯一标识符</p>
                     * @param _orderId <p>订单编号唯一标识符</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>用量类型</p>
                     * @return PackageType <p>用量类型</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>用量类型</p>
                     * @param _packageType <p>用量类型</p>
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
                     * 获取<p>上报月份，默认当前月</p>
                     * @return ReportMonth <p>上报月份，默认当前月</p>
                     * 
                     */
                    std::string GetReportMonth() const;

                    /**
                     * 设置<p>上报月份，默认当前月</p>
                     * @param _reportMonth <p>上报月份，默认当前月</p>
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
                     * <p>订单编号唯一标识符</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>用量类型</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>上报月份，默认当前月</p>
                     */
                    std::string m_reportMonth;
                    bool m_reportMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_REPORTORDERREQUEST_H_
