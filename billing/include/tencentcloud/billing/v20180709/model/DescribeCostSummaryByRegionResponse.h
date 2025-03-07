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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionSummaryTotal.h>
#include <tencentcloud/billing/v20180709/model/ConsumptionRegionSummaryDataItem.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostSummaryByRegion返回参数结构体
                */
                class DescribeCostSummaryByRegionResponse : public AbstractModel
                {
                public:
                    DescribeCostSummaryByRegionResponse();
                    ~DescribeCostSummaryByRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据是否准备好，0未准备好，1准备好
                     * @return Ready 数据是否准备好，0未准备好，1准备好
                     * 
                     */
                    uint64_t GetReady() const;

                    /**
                     * 判断参数 Ready 是否已赋值
                     * @return Ready 是否已赋值
                     * 
                     */
                    bool ReadyHasBeenSet() const;

                    /**
                     * 获取消耗详情
                     * @return Total 消耗详情
                     * 
                     */
                    ConsumptionSummaryTotal GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取消耗按地域汇总详情
                     * @return Data 消耗按地域汇总详情
                     * 
                     */
                    std::vector<ConsumptionRegionSummaryDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取记录数量，NeedRecordNum为0时返回null
                     * @return RecordNum 记录数量，NeedRecordNum为0时返回null
                     * 
                     */
                    uint64_t GetRecordNum() const;

                    /**
                     * 判断参数 RecordNum 是否已赋值
                     * @return RecordNum 是否已赋值
                     * 
                     */
                    bool RecordNumHasBeenSet() const;

                private:

                    /**
                     * 数据是否准备好，0未准备好，1准备好
                     */
                    uint64_t m_ready;
                    bool m_readyHasBeenSet;

                    /**
                     * 消耗详情
                     */
                    ConsumptionSummaryTotal m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 消耗按地域汇总详情
                     */
                    std::vector<ConsumptionRegionSummaryDataItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 记录数量，NeedRecordNum为0时返回null
                     */
                    uint64_t m_recordNum;
                    bool m_recordNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTSUMMARYBYREGIONRESPONSE_H_
