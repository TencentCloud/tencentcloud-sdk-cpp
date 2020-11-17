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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSAMOUNTDATASTRUCT_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSAMOUNTDATASTRUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信子账号额度接口出参
                */
                class SmsAmountDataStruct : public AbstractModel
                {
                public:
                    SmsAmountDataStruct();
                    ~SmsAmountDataStruct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短信活动配额
                     * @return SmsCampaignAmount 短信活动配额
                     */
                    uint64_t GetSmsCampaignAmount() const;

                    /**
                     * 设置短信活动配额
                     * @param SmsCampaignAmount 短信活动配额
                     */
                    void SetSmsCampaignAmount(const uint64_t& _smsCampaignAmount);

                    /**
                     * 判断参数 SmsCampaignAmount 是否已赋值
                     * @return SmsCampaignAmount 是否已赋值
                     */
                    bool SmsCampaignAmountHasBeenSet() const;

                    /**
                     * 获取短信活动消耗配额
                     * @return SmsCampaignConsume 短信活动消耗配额
                     */
                    uint64_t GetSmsCampaignConsume() const;

                    /**
                     * 设置短信活动消耗配额
                     * @param SmsCampaignConsume 短信活动消耗配额
                     */
                    void SetSmsCampaignConsume(const uint64_t& _smsCampaignConsume);

                    /**
                     * 判断参数 SmsCampaignConsume 是否已赋值
                     * @return SmsCampaignConsume 是否已赋值
                     */
                    bool SmsCampaignConsumeHasBeenSet() const;

                    /**
                     * 获取短信发送额度
                     * @return SmsSendAmount 短信发送额度
                     */
                    uint64_t GetSmsSendAmount() const;

                    /**
                     * 设置短信发送额度
                     * @param SmsSendAmount 短信发送额度
                     */
                    void SetSmsSendAmount(const uint64_t& _smsSendAmount);

                    /**
                     * 判断参数 SmsSendAmount 是否已赋值
                     * @return SmsSendAmount 是否已赋值
                     */
                    bool SmsSendAmountHasBeenSet() const;

                    /**
                     * 获取短信发送消耗额度
                     * @return SmsSendConsume 短信发送消耗额度
                     */
                    uint64_t GetSmsSendConsume() const;

                    /**
                     * 设置短信发送消耗额度
                     * @param SmsSendConsume 短信发送消耗额度
                     */
                    void SetSmsSendConsume(const uint64_t& _smsSendConsume);

                    /**
                     * 判断参数 SmsSendConsume 是否已赋值
                     * @return SmsSendConsume 是否已赋值
                     */
                    bool SmsSendConsumeHasBeenSet() const;

                    /**
                     * 获取超短活动额度
                     * @return MmsCampaignAmount 超短活动额度
                     */
                    uint64_t GetMmsCampaignAmount() const;

                    /**
                     * 设置超短活动额度
                     * @param MmsCampaignAmount 超短活动额度
                     */
                    void SetMmsCampaignAmount(const uint64_t& _mmsCampaignAmount);

                    /**
                     * 判断参数 MmsCampaignAmount 是否已赋值
                     * @return MmsCampaignAmount 是否已赋值
                     */
                    bool MmsCampaignAmountHasBeenSet() const;

                    /**
                     * 获取超短活动消耗额度
                     * @return MmsCampaignConsume 超短活动消耗额度
                     */
                    uint64_t GetMmsCampaignConsume() const;

                    /**
                     * 设置超短活动消耗额度
                     * @param MmsCampaignConsume 超短活动消耗额度
                     */
                    void SetMmsCampaignConsume(const uint64_t& _mmsCampaignConsume);

                    /**
                     * 判断参数 MmsCampaignConsume 是否已赋值
                     * @return MmsCampaignConsume 是否已赋值
                     */
                    bool MmsCampaignConsumeHasBeenSet() const;

                    /**
                     * 获取超短短信额度
                     * @return MmsSendAmount 超短短信额度
                     */
                    uint64_t GetMmsSendAmount() const;

                    /**
                     * 设置超短短信额度
                     * @param MmsSendAmount 超短短信额度
                     */
                    void SetMmsSendAmount(const uint64_t& _mmsSendAmount);

                    /**
                     * 判断参数 MmsSendAmount 是否已赋值
                     * @return MmsSendAmount 是否已赋值
                     */
                    bool MmsSendAmountHasBeenSet() const;

                    /**
                     * 获取超短短信消耗额度
                     * @return MmsSendConsume 超短短信消耗额度
                     */
                    uint64_t GetMmsSendConsume() const;

                    /**
                     * 设置超短短信消耗额度
                     * @param MmsSendConsume 超短短信消耗额度
                     */
                    void SetMmsSendConsume(const uint64_t& _mmsSendConsume);

                    /**
                     * 判断参数 MmsSendConsume 是否已赋值
                     * @return MmsSendConsume 是否已赋值
                     */
                    bool MmsSendConsumeHasBeenSet() const;

                private:

                    /**
                     * 短信活动配额
                     */
                    uint64_t m_smsCampaignAmount;
                    bool m_smsCampaignAmountHasBeenSet;

                    /**
                     * 短信活动消耗配额
                     */
                    uint64_t m_smsCampaignConsume;
                    bool m_smsCampaignConsumeHasBeenSet;

                    /**
                     * 短信发送额度
                     */
                    uint64_t m_smsSendAmount;
                    bool m_smsSendAmountHasBeenSet;

                    /**
                     * 短信发送消耗额度
                     */
                    uint64_t m_smsSendConsume;
                    bool m_smsSendConsumeHasBeenSet;

                    /**
                     * 超短活动额度
                     */
                    uint64_t m_mmsCampaignAmount;
                    bool m_mmsCampaignAmountHasBeenSet;

                    /**
                     * 超短活动消耗额度
                     */
                    uint64_t m_mmsCampaignConsume;
                    bool m_mmsCampaignConsumeHasBeenSet;

                    /**
                     * 超短短信额度
                     */
                    uint64_t m_mmsSendAmount;
                    bool m_mmsSendAmountHasBeenSet;

                    /**
                     * 超短短信消耗额度
                     */
                    uint64_t m_mmsSendConsume;
                    bool m_mmsSendConsumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSAMOUNTDATASTRUCT_H_
