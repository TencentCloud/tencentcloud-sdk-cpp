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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARY_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenSummaryBillingItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 主包Token总结
                */
                class TokenSummary : public AbstractModel
                {
                public:
                    TokenSummary();
                    ~TokenSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐包当前计费周期序号
                     * @return CycleSeq 套餐包当前计费周期序号
                     * 
                     */
                    int64_t GetCycleSeq() const;

                    /**
                     * 设置套餐包当前计费周期序号
                     * @param _cycleSeq 套餐包当前计费周期序号
                     * 
                     */
                    void SetCycleSeq(const int64_t& _cycleSeq);

                    /**
                     * 判断参数 CycleSeq 是否已赋值
                     * @return CycleSeq 是否已赋值
                     * 
                     */
                    bool CycleSeqHasBeenSet() const;

                    /**
                     * 获取套餐包计费周期开始时间（RFC3339）
                     * @return CycleStartTime 套餐包计费周期开始时间（RFC3339）
                     * 
                     */
                    std::string GetCycleStartTime() const;

                    /**
                     * 设置套餐包计费周期开始时间（RFC3339）
                     * @param _cycleStartTime 套餐包计费周期开始时间（RFC3339）
                     * 
                     */
                    void SetCycleStartTime(const std::string& _cycleStartTime);

                    /**
                     * 判断参数 CycleStartTime 是否已赋值
                     * @return CycleStartTime 是否已赋值
                     * 
                     */
                    bool CycleStartTimeHasBeenSet() const;

                    /**
                     * 获取套餐包当前计费周期结束时间（RFC3339）
                     * @return CycleEndTime 套餐包当前计费周期结束时间（RFC3339）
                     * 
                     */
                    std::string GetCycleEndTime() const;

                    /**
                     * 设置套餐包当前计费周期结束时间（RFC3339）
                     * @param _cycleEndTime 套餐包当前计费周期结束时间（RFC3339）
                     * 
                     */
                    void SetCycleEndTime(const std::string& _cycleEndTime);

                    /**
                     * 判断参数 CycleEndTime 是否已赋值
                     * @return CycleEndTime 是否已赋值
                     * 
                     */
                    bool CycleEndTimeHasBeenSet() const;

                    /**
                     * 获取按计费项分组的 token 汇总列表
                     * @return BillingItems 按计费项分组的 token 汇总列表
                     * 
                     */
                    std::vector<TokenSummaryBillingItem> GetBillingItems() const;

                    /**
                     * 设置按计费项分组的 token 汇总列表
                     * @param _billingItems 按计费项分组的 token 汇总列表
                     * 
                     */
                    void SetBillingItems(const std::vector<TokenSummaryBillingItem>& _billingItems);

                    /**
                     * 判断参数 BillingItems 是否已赋值
                     * @return BillingItems 是否已赋值
                     * 
                     */
                    bool BillingItemsHasBeenSet() const;

                private:

                    /**
                     * 套餐包当前计费周期序号
                     */
                    int64_t m_cycleSeq;
                    bool m_cycleSeqHasBeenSet;

                    /**
                     * 套餐包计费周期开始时间（RFC3339）
                     */
                    std::string m_cycleStartTime;
                    bool m_cycleStartTimeHasBeenSet;

                    /**
                     * 套餐包当前计费周期结束时间（RFC3339）
                     */
                    std::string m_cycleEndTime;
                    bool m_cycleEndTimeHasBeenSet;

                    /**
                     * 按计费项分组的 token 汇总列表
                     */
                    std::vector<TokenSummaryBillingItem> m_billingItems;
                    bool m_billingItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARY_H_
