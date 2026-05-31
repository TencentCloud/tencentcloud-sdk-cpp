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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token 汇总计费项
                */
                class TokenSummaryBillingItem : public AbstractModel
                {
                public:
                    TokenSummaryBillingItem();
                    ~TokenSummaryBillingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项。取值：input（输入 Token）、output（输出 Token）、cache（缓存 Token）、call_count（调用次数）。
                     * @return BillingItem 计费项。取值：input（输入 Token）、output（输出 Token）、cache（缓存 Token）、call_count（调用次数）。
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置计费项。取值：input（输入 Token）、output（输出 Token）、cache（缓存 Token）、call_count（调用次数）。
                     * @param _billingItem 计费项。取值：input（输入 Token）、output（输出 Token）、cache（缓存 Token）、call_count（调用次数）。
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取该计费项在周期内的原始用量汇总，单位：tokens。
                     * @return TotalQty 该计费项在周期内的原始用量汇总，单位：tokens。
                     * 
                     */
                    int64_t GetTotalQty() const;

                    /**
                     * 设置该计费项在周期内的原始用量汇总，单位：tokens。
                     * @param _totalQty 该计费项在周期内的原始用量汇总，单位：tokens。
                     * 
                     */
                    void SetTotalQty(const int64_t& _totalQty);

                    /**
                     * 判断参数 TotalQty 是否已赋值
                     * @return TotalQty 是否已赋值
                     * 
                     */
                    bool TotalQtyHasBeenSet() const;

                private:

                    /**
                     * 计费项。取值：input（输入 Token）、output（输出 Token）、cache（缓存 Token）、call_count（调用次数）。
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * 该计费项在周期内的原始用量汇总，单位：tokens。
                     */
                    int64_t m_totalQty;
                    bool m_totalQtyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_
