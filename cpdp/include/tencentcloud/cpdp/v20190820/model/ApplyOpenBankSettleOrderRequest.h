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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * ApplyOpenBankSettleOrder请求参数结构体
                */
                class ApplyOpenBankSettleOrderRequest : public AbstractModel
                {
                public:
                    ApplyOpenBankSettleOrderRequest();
                    ~ApplyOpenBankSettleOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户号
                     * @return ChannelMerchantId 渠道商户号
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号
                     * @param ChannelMerchantId 渠道商户号
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部结算流水号
                     * @return OutSettleId 外部结算流水号
                     */
                    std::string GetOutSettleId() const;

                    /**
                     * 设置外部结算流水号
                     * @param OutSettleId 外部结算流水号
                     */
                    void SetOutSettleId(const std::string& _outSettleId);

                    /**
                     * 判断参数 OutSettleId 是否已赋值
                     * @return OutSettleId 是否已赋值
                     */
                    bool OutSettleIdHasBeenSet() const;

                    /**
                     * 获取结算金额
                     * @return SettleAmount 结算金额
                     */
                    int64_t GetSettleAmount() const;

                    /**
                     * 设置结算金额
                     * @param SettleAmount 结算金额
                     */
                    void SetSettleAmount(const int64_t& _settleAmount);

                    /**
                     * 判断参数 SettleAmount 是否已赋值
                     * @return SettleAmount 是否已赋值
                     */
                    bool SettleAmountHasBeenSet() const;

                    /**
                     * 获取渠道名称。详见附录-枚举类型-ChannelName。
                     * @return ChannelName 渠道名称。详见附录-枚举类型-ChannelName。
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-枚举类型-ChannelName。
                     * @param ChannelName 渠道名称。详见附录-枚举类型-ChannelName。
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道子商户号
                     * @return ChannelSubMerchantId 渠道子商户号
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号
                     * @param ChannelSubMerchantId 渠道子商户号
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取结算备注
                     * @return SettleDetail 结算备注
                     */
                    std::string GetSettleDetail() const;

                    /**
                     * 设置结算备注
                     * @param SettleDetail 结算备注
                     */
                    void SetSettleDetail(const std::string& _settleDetail);

                    /**
                     * 判断参数 SettleDetail 是否已赋值
                     * @return SettleDetail 是否已赋值
                     */
                    bool SettleDetailHasBeenSet() const;

                    /**
                     * 获取结算成功回调地址
                     * @return NotifyUrl 结算成功回调地址
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置结算成功回调地址
                     * @param NotifyUrl 结算成功回调地址
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     */
                    bool NotifyUrlHasBeenSet() const;

                private:

                    /**
                     * 渠道商户号
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部结算流水号
                     */
                    std::string m_outSettleId;
                    bool m_outSettleIdHasBeenSet;

                    /**
                     * 结算金额
                     */
                    int64_t m_settleAmount;
                    bool m_settleAmountHasBeenSet;

                    /**
                     * 渠道名称。详见附录-枚举类型-ChannelName。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道子商户号
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 结算备注
                     */
                    std::string m_settleDetail;
                    bool m_settleDetailHasBeenSet;

                    /**
                     * 结算成功回调地址
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERREQUEST_H_
