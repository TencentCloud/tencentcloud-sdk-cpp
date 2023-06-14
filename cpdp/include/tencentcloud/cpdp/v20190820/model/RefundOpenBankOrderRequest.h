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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDOPENBANKORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDOPENBANKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * RefundOpenBankOrder请求参数结构体
                */
                class RefundOpenBankOrderRequest : public AbstractModel
                {
                public:
                    RefundOpenBankOrderRequest();
                    ~RefundOpenBankOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部商户退款单号。
                     * @return OutRefundId 外部商户退款单号。
                     * 
                     */
                    std::string GetOutRefundId() const;

                    /**
                     * 设置外部商户退款单号。
                     * @param _outRefundId 外部商户退款单号。
                     * 
                     */
                    void SetOutRefundId(const std::string& _outRefundId);

                    /**
                     * 判断参数 OutRefundId 是否已赋值
                     * @return OutRefundId 是否已赋值
                     * 
                     */
                    bool OutRefundIdHasBeenSet() const;

                    /**
                     * 获取退款金额。单位分。
                     * @return RefundAmount 退款金额。单位分。
                     * 
                     */
                    int64_t GetRefundAmount() const;

                    /**
                     * 设置退款金额。单位分。
                     * @param _refundAmount 退款金额。单位分。
                     * 
                     */
                    void SetRefundAmount(const int64_t& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取渠道商户号。外部平台接入云企付平台下发。必填。
                     * @return ChannelMerchantId 渠道商户号。外部平台接入云企付平台下发。必填。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户号。外部平台接入云企付平台下发。必填。
                     * @param _channelMerchantId 渠道商户号。外部平台接入云企付平台下发。必填。
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
                     * 获取外部商户订单号，与云企付渠道订单号二者不能同时为空。
                     * @return OutOrderId 外部商户订单号，与云企付渠道订单号二者不能同时为空。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号，与云企付渠道订单号二者不能同时为空。
                     * @param _outOrderId 外部商户订单号，与云企付渠道订单号二者不能同时为空。
                     * 
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     * 
                     */
                    bool OutOrderIdHasBeenSet() const;

                    /**
                     * 获取云企付渠道订单号，与外部订单号二者不能同时为空。
                     * @return ChannelOrderId 云企付渠道订单号，与外部订单号二者不能同时为空。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付渠道订单号，与外部订单号二者不能同时为空。
                     * @param _channelOrderId 云企付渠道订单号，与外部订单号二者不能同时为空。
                     * 
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取退款通知地址。
                     * @return NotifyUrl 退款通知地址。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置退款通知地址。
                     * @param _notifyUrl 退款通知地址。
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
                     * 获取退款原因。
当EBANK_PAYMENT担保支付订单退款时，此字段必传。
                     * @return RefundReason 退款原因。
当EBANK_PAYMENT担保支付订单退款时，此字段必传。
                     * 
                     */
                    std::string GetRefundReason() const;

                    /**
                     * 设置退款原因。
当EBANK_PAYMENT担保支付订单退款时，此字段必传。
                     * @param _refundReason 退款原因。
当EBANK_PAYMENT担保支付订单退款时，此字段必传。
                     * 
                     */
                    void SetRefundReason(const std::string& _refundReason);

                    /**
                     * 判断参数 RefundReason 是否已赋值
                     * @return RefundReason 是否已赋值
                     * 
                     */
                    bool RefundReasonHasBeenSet() const;

                    /**
                     * 获取第三方渠道退款附加信息。详见附录-复杂类型。
若未作特殊说明，则无需传入。
                     * @return ExternalRefundData 第三方渠道退款附加信息。详见附录-复杂类型。
若未作特殊说明，则无需传入。
                     * 
                     */
                    std::string GetExternalRefundData() const;

                    /**
                     * 设置第三方渠道退款附加信息。详见附录-复杂类型。
若未作特殊说明，则无需传入。
                     * @param _externalRefundData 第三方渠道退款附加信息。详见附录-复杂类型。
若未作特殊说明，则无需传入。
                     * 
                     */
                    void SetExternalRefundData(const std::string& _externalRefundData);

                    /**
                     * 判断参数 ExternalRefundData 是否已赋值
                     * @return ExternalRefundData 是否已赋值
                     * 
                     */
                    bool ExternalRefundDataHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
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
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取分账信息列表。
                     * @return ProfitShareInfoList 分账信息列表。
                     * 
                     */
                    std::vector<OpenBankProfitShareInfo> GetProfitShareInfoList() const;

                    /**
                     * 设置分账信息列表。
                     * @param _profitShareInfoList 分账信息列表。
                     * 
                     */
                    void SetProfitShareInfoList(const std::vector<OpenBankProfitShareInfo>& _profitShareInfoList);

                    /**
                     * 判断参数 ProfitShareInfoList 是否已赋值
                     * @return ProfitShareInfoList 是否已赋值
                     * 
                     */
                    bool ProfitShareInfoListHasBeenSet() const;

                private:

                    /**
                     * 外部商户退款单号。
                     */
                    std::string m_outRefundId;
                    bool m_outRefundIdHasBeenSet;

                    /**
                     * 退款金额。单位分。
                     */
                    int64_t m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * 渠道商户号。外部平台接入云企付平台下发。必填。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部商户订单号，与云企付渠道订单号二者不能同时为空。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 云企付渠道订单号，与外部订单号二者不能同时为空。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 退款通知地址。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 退款原因。
当EBANK_PAYMENT担保支付订单退款时，此字段必传。
                     */
                    std::string m_refundReason;
                    bool m_refundReasonHasBeenSet;

                    /**
                     * 第三方渠道退款附加信息。详见附录-复杂类型。
若未作特殊说明，则无需传入。
                     */
                    std::string m_externalRefundData;
                    bool m_externalRefundDataHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 分账信息列表。
                     */
                    std::vector<OpenBankProfitShareInfo> m_profitShareInfoList;
                    bool m_profitShareInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDOPENBANKORDERREQUEST_H_
