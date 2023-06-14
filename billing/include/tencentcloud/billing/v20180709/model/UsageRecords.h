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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/UsageDetails.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 使用记录
                */
                class UsageRecords : public AbstractModel
                {
                public:
                    UsageRecords();
                    ~UsageRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用金额（微分）
                     * @return UsedAmount 使用金额（微分）
                     * 
                     */
                    int64_t GetUsedAmount() const;

                    /**
                     * 设置使用金额（微分）
                     * @param _usedAmount 使用金额（微分）
                     * 
                     */
                    void SetUsedAmount(const int64_t& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取使用时间
                     * @return UsedTime 使用时间
                     * 
                     */
                    std::string GetUsedTime() const;

                    /**
                     * 设置使用时间
                     * @param _usedTime 使用时间
                     * 
                     */
                    void SetUsedTime(const std::string& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取使用记录细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageDetails 使用记录细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsageDetails> GetUsageDetails() const;

                    /**
                     * 设置使用记录细节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageDetails 使用记录细节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageDetails(const std::vector<UsageDetails>& _usageDetails);

                    /**
                     * 判断参数 UsageDetails 是否已赋值
                     * @return UsageDetails 是否已赋值
                     * 
                     */
                    bool UsageDetailsHasBeenSet() const;

                private:

                    /**
                     * 使用金额（微分）
                     */
                    int64_t m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 使用时间
                     */
                    std::string m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * 使用记录细节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsageDetails> m_usageDetails;
                    bool m_usageDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_
