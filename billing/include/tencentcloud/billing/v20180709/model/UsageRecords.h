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
                     * @return UsageDetails 使用记录细节
                     * 
                     */
                    std::vector<UsageDetails> GetUsageDetails() const;

                    /**
                     * 设置使用记录细节
                     * @param _usageDetails 使用记录细节
                     * 
                     */
                    void SetUsageDetails(const std::vector<UsageDetails>& _usageDetails);

                    /**
                     * 判断参数 UsageDetails 是否已赋值
                     * @return UsageDetails 是否已赋值
                     * 
                     */
                    bool UsageDetailsHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取查询的券id
                     * @return VoucherId 查询的券id
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置查询的券id
                     * @param _voucherId 查询的券id
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取交易场景：（adjust：调账、common：正常交易场景）
                     * @return PayScene 交易场景：（adjust：调账、common：正常交易场景）
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置交易场景：（adjust：调账、common：正常交易场景）
                     * @param _payScene 交易场景：（adjust：调账、common：正常交易场景）
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取唯一id,对应交易:预付费的dealName,调账/后付费的outTradeNo
                     * @return SeqId 唯一id,对应交易:预付费的dealName,调账/后付费的outTradeNo
                     * 
                     */
                    std::string GetSeqId() const;

                    /**
                     * 设置唯一id,对应交易:预付费的dealName,调账/后付费的outTradeNo
                     * @param _seqId 唯一id,对应交易:预付费的dealName,调账/后付费的outTradeNo
                     * 
                     */
                    void SetSeqId(const std::string& _seqId);

                    /**
                     * 判断参数 SeqId 是否已赋值
                     * @return SeqId 是否已赋值
                     * 
                     */
                    bool SeqIdHasBeenSet() const;

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
                     */
                    std::vector<UsageDetails> m_usageDetails;
                    bool m_usageDetailsHasBeenSet;

                    /**
                     * 付费模式
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 查询的券id
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * 交易场景：（adjust：调账、common：正常交易场景）
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * 唯一id,对应交易:预付费的dealName,调账/后付费的outTradeNo
                     */
                    std::string m_seqId;
                    bool m_seqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_
