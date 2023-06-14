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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXORDERSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXORDERSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/Paging.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexOrderSummaryList请求参数结构体
                */
                class QueryFlexOrderSummaryListRequest : public AbstractModel
                {
                public:
                    QueryFlexOrderSummaryListRequest();
                    ~QueryFlexOrderSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取汇总日期:yyyy-MM-dd
                     * @return SummaryDate 汇总日期:yyyy-MM-dd
                     * 
                     */
                    std::string GetSummaryDate() const;

                    /**
                     * 设置汇总日期:yyyy-MM-dd
                     * @param _summaryDate 汇总日期:yyyy-MM-dd
                     * 
                     */
                    void SetSummaryDate(const std::string& _summaryDate);

                    /**
                     * 判断参数 SummaryDate 是否已赋值
                     * @return SummaryDate 是否已赋值
                     * 
                     */
                    bool SummaryDateHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return PageNumber 分页
                     * 
                     */
                    Paging GetPageNumber() const;

                    /**
                     * 设置分页
                     * @param _pageNumber 分页
                     * 
                     */
                    void SetPageNumber(const Paging& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取汇总订单类型:FREEZE, SETTLEMENT,PAYMENT
                     * @return OrderType 汇总订单类型:FREEZE, SETTLEMENT,PAYMENT
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置汇总订单类型:FREEZE, SETTLEMENT,PAYMENT
                     * @param _orderType 汇总订单类型:FREEZE, SETTLEMENT,PAYMENT
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
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param _payeeId 收款用户ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 汇总日期:yyyy-MM-dd
                     */
                    std::string m_summaryDate;
                    bool m_summaryDateHasBeenSet;

                    /**
                     * 分页
                     */
                    Paging m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 汇总订单类型:FREEZE, SETTLEMENT,PAYMENT
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXORDERSUMMARYLISTREQUEST_H_
