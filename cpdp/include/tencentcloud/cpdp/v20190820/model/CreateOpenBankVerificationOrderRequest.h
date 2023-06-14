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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKVERIFICATIONORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKVERIFICATIONORDERREQUEST_H_

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
                * CreateOpenBankVerificationOrder请求参数结构体
                */
                class CreateOpenBankVerificationOrderRequest : public AbstractModel
                {
                public:
                    CreateOpenBankVerificationOrderRequest();
                    ~CreateOpenBankVerificationOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @return ChannelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     * @param _channelMerchantId 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
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
                     * 获取外部核销申请订单号
                     * @return OutVerificationId 外部核销申请订单号
                     * 
                     */
                    std::string GetOutVerificationId() const;

                    /**
                     * 设置外部核销申请订单号
                     * @param _outVerificationId 外部核销申请订单号
                     * 
                     */
                    void SetOutVerificationId(const std::string& _outVerificationId);

                    /**
                     * 判断参数 OutVerificationId 是否已赋值
                     * @return OutVerificationId 是否已赋值
                     * 
                     */
                    bool OutVerificationIdHasBeenSet() const;

                    /**
                     * 获取核销金额，单位分
                     * @return VerificationAmount 核销金额，单位分
                     * 
                     */
                    int64_t GetVerificationAmount() const;

                    /**
                     * 设置核销金额，单位分
                     * @param _verificationAmount 核销金额，单位分
                     * 
                     */
                    void SetVerificationAmount(const int64_t& _verificationAmount);

                    /**
                     * 判断参数 VerificationAmount 是否已赋值
                     * @return VerificationAmount 是否已赋值
                     * 
                     */
                    bool VerificationAmountHasBeenSet() const;

                    /**
                     * 获取外部支付订单号。调用创建支付订单时，下单支付时的外部订单号。与ChannelOrderId不能同时为空。
                     * @return OutOrderId 外部支付订单号。调用创建支付订单时，下单支付时的外部订单号。与ChannelOrderId不能同时为空。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部支付订单号。调用创建支付订单时，下单支付时的外部订单号。与ChannelOrderId不能同时为空。
                     * @param _outOrderId 外部支付订单号。调用创建支付订单时，下单支付时的外部订单号。与ChannelOrderId不能同时为空。
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
                     * 获取云企付渠道订单号。调用创建支付订单时，下单支付时的云企付渠道订单号。与OutOrderId不能同时为空。
                     * @return ChannelOrderId 云企付渠道订单号。调用创建支付订单时，下单支付时的云企付渠道订单号。与OutOrderId不能同时为空。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付渠道订单号。调用创建支付订单时，下单支付时的云企付渠道订单号。与OutOrderId不能同时为空。
                     * @param _channelOrderId 云企付渠道订单号。调用创建支付订单时，下单支付时的云企付渠道订单号。与OutOrderId不能同时为空。
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
                     * 获取核销成功回调地址。若不上送，则不回调通知。
                     * @return NotifyUrl 核销成功回调地址。若不上送，则不回调通知。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置核销成功回调地址。若不上送，则不回调通知。
                     * @param _notifyUrl 核销成功回调地址。若不上送，则不回调通知。
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
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
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
                     * 获取第三方支付渠道需要额外上送字段。详情见附录描述。
                     * @return ExternalVerificationData 第三方支付渠道需要额外上送字段。详情见附录描述。
                     * 
                     */
                    std::string GetExternalVerificationData() const;

                    /**
                     * 设置第三方支付渠道需要额外上送字段。详情见附录描述。
                     * @param _externalVerificationData 第三方支付渠道需要额外上送字段。详情见附录描述。
                     * 
                     */
                    void SetExternalVerificationData(const std::string& _externalVerificationData);

                    /**
                     * 判断参数 ExternalVerificationData 是否已赋值
                     * @return ExternalVerificationData 是否已赋值
                     * 
                     */
                    bool ExternalVerificationDataHasBeenSet() const;

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

                private:

                    /**
                     * 云企付渠道商户号。外部接入平台入驻云企付平台后下发。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 外部核销申请订单号
                     */
                    std::string m_outVerificationId;
                    bool m_outVerificationIdHasBeenSet;

                    /**
                     * 核销金额，单位分
                     */
                    int64_t m_verificationAmount;
                    bool m_verificationAmountHasBeenSet;

                    /**
                     * 外部支付订单号。调用创建支付订单时，下单支付时的外部订单号。与ChannelOrderId不能同时为空。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 云企付渠道订单号。调用创建支付订单时，下单支付时的云企付渠道订单号。与OutOrderId不能同时为空。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 核销成功回调地址。若不上送，则不回调通知。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 第三方支付渠道需要额外上送字段。详情见附录描述。
                     */
                    std::string m_externalVerificationData;
                    bool m_externalVerificationDataHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKVERIFICATIONORDERREQUEST_H_
