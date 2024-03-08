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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationTrendByMonth请求参数结构体
                */
                class DescribeAllocationTrendByMonthRequest : public AbstractModel
                {
                public:
                    DescribeAllocationTrendByMonthRequest();
                    ~DescribeAllocationTrendByMonthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账单月份，格式为2024-02，不传默认当前月
                     * @return Month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式为2024-02，不传默认当前月
                     * @param _month 账单月份，格式为2024-02，不传默认当前月
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取分账单元唯一标识
                     * @return TreeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置分账单元唯一标识
                     * @param _treeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取产品编码，用作筛选
                     * @return BusinessCode 产品编码，用作筛选
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置产品编码，用作筛选
                     * @param _businessCode 产品编码，用作筛选
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                private:

                    /**
                     * 账单月份，格式为2024-02，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 分账单元唯一标识
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * 产品编码，用作筛选
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_
