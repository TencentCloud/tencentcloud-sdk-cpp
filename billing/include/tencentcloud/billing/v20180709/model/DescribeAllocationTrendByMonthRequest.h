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
                     * 获取<p>账单月份，格式为2024-02，不传默认当前月</p>
                     * @return Month <p>账单月份，格式为2024-02，不传默认当前月</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>账单月份，格式为2024-02，不传默认当前月</p>
                     * @param _month <p>账单月份，格式为2024-02，不传默认当前月</p>
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
                     * 获取<p>分账单元唯一标识</p>
                     * @return TreeNodeUniqKey <p>分账单元唯一标识</p>
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置<p>分账单元唯一标识</p>
                     * @param _treeNodeUniqKey <p>分账单元唯一标识</p>
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
                     * 获取<p>产品编码，用作筛选</p>
                     * @return BusinessCode <p>产品编码，用作筛选</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品编码，用作筛选</p>
                     * @param _businessCode <p>产品编码，用作筛选</p>
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
                     * <p>账单月份，格式为2024-02，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>分账单元唯一标识</p>
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * <p>产品编码，用作筛选</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_
