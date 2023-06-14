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
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号
                     * @param _channelMerchantId 渠道商户号
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取外部结算流水号
                     * @return OutSettleId 外部结算流水号
                     * 
                     */
                    std::string GetOutSettleId() const;

                    /**
                     * 设置外部结算流水号
                     * @param _outSettleId 外部结算流水号
                     * 
                     */
                    void SetOutSettleId(const std::string& _outSettleId);

                    /**
                     * 判断参数 OutSettleId 是否已赋值
                     * @return OutSettleId 是否已赋值
                     * 
                     */
                    bool OutSettleIdHasBeenSet() const;

                    /**
                     * 获取结算金额
                     * @return SettleAmount 结算金额
                     * 
                     */
                    int64_t GetSettleAmount() const;

                    /**
                     * 设置结算金额
                     * @param _settleAmount 结算金额
                     * 
                     */
                    void SetSettleAmount(const int64_t& _settleAmount);

                    /**
                     * 判断参数 SettleAmount 是否已赋值
                     * @return SettleAmount 是否已赋值
                     * 
                     */
                    bool SettleAmountHasBeenSet() const;

                    /**
                     * 获取渠道名称。详见附录-枚举类型-ChannelName。
                     * @return ChannelName 渠道名称。详见附录-枚举类型-ChannelName。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-枚举类型-ChannelName。
                     * @param _channelName 渠道名称。详见附录-枚举类型-ChannelName。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道子商户号
                     * @return ChannelSubMerchantId 渠道子商户号
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户号
                     * @param _channelSubMerchantId 渠道子商户号
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取结算备注
                     * @return SettleDetail 结算备注
                     * 
                     */
                    std::string GetSettleDetail() const;

                    /**
                     * 设置结算备注
                     * @param _settleDetail 结算备注
                     * 
                     */
                    void SetSettleDetail(const std::string& _settleDetail);

                    /**
                     * 判断参数 SettleDetail 是否已赋值
                     * @return SettleDetail 是否已赋值
                     * 
                     */
                    bool SettleDetailHasBeenSet() const;

                    /**
                     * 获取结算成功回调地址
                     * @return NotifyUrl 结算成功回调地址
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置结算成功回调地址
                     * @param _notifyUrl 结算成功回调地址
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取附言
                     * @return Remark 附言
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置附言
                     * @param _remark 附言
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取结算第三方渠道扩展信息。通联国际必选
                     * @return ExternalSettleData 结算第三方渠道扩展信息。通联国际必选
                     * 
                     */
                    std::string GetExternalSettleData() const;

                    /**
                     * 设置结算第三方渠道扩展信息。通联国际必选
                     * @param _externalSettleData 结算第三方渠道扩展信息。通联国际必选
                     * 
                     */
                    void SetExternalSettleData(const std::string& _externalSettleData);

                    /**
                     * 判断参数 ExternalSettleData 是否已赋值
                     * @return ExternalSettleData 是否已赋值
                     * 
                     */
                    bool ExternalSettleDataHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @return Environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * @param _environment 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

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

                    /**
                     * 附言
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 结算第三方渠道扩展信息。通联国际必选
                     */
                    std::string m_externalSettleData;
                    bool m_externalSettleDataHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填 sandbox。缺省默认调用生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSETTLEORDERREQUEST_H_
