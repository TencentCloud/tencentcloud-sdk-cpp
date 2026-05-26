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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseHeaderDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseConditionDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostExplorerSummary返回参数结构体
                */
                class DescribeCostExplorerSummaryResponse : public AbstractModel
                {
                public:
                    DescribeCostExplorerSummaryResponse();
                    ~DescribeCostExplorerSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据条数</p>
                     * @return Total <p>数据条数</p>
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>表头信息</p>
                     * @return Header <p>表头信息</p>
                     * 
                     */
                    AnalyseHeaderDetail GetHeader() const;

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取<p>数据明细</p>
                     * @return Detail <p>数据明细</p>
                     * 
                     */
                    std::vector<AnalyseDetail> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>数据总计</p>
                     * @return TotalDetail <p>数据总计</p>
                     * 
                     */
                    AnalyseDetail GetTotalDetail() const;

                    /**
                     * 判断参数 TotalDetail 是否已赋值
                     * @return TotalDetail 是否已赋值
                     * 
                     */
                    bool TotalDetailHasBeenSet() const;

                    /**
                     * 获取<p>筛选框</p>
                     * @return ConditionValue <p>筛选框</p>
                     * 
                     */
                    AnalyseConditionDetail GetConditionValue() const;

                    /**
                     * 判断参数 ConditionValue 是否已赋值
                     * @return ConditionValue 是否已赋值
                     * 
                     */
                    bool ConditionValueHasBeenSet() const;

                private:

                    /**
                     * <p>数据条数</p>
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>表头信息</p>
                     */
                    AnalyseHeaderDetail m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * <p>数据明细</p>
                     */
                    std::vector<AnalyseDetail> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>数据总计</p>
                     */
                    AnalyseDetail m_totalDetail;
                    bool m_totalDetailHasBeenSet;

                    /**
                     * <p>筛选框</p>
                     */
                    AnalyseConditionDetail m_conditionValue;
                    bool m_conditionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTEXPLORERSUMMARYRESPONSE_H_
