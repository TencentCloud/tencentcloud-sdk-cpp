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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERPAYMENTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERPAYMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankRedirectInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-支付下单返回响应
                */
                class CreateOpenBankOrderPaymentResult : public AbstractModel
                {
                public:
                    CreateOpenBankOrderPaymentResult();
                    ~CreateOpenBankOrderPaymentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云企付平台订单号。
                     * @return ChannelOrderId 云企付平台订单号。
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付平台订单号。
                     * @param ChannelOrderId 云企付平台订单号。
                     */
                    void SetChannelOrderId(const std::string& _channelOrderId);

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdPayOrderId 第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetThirdPayOrderId() const;

                    /**
                     * 设置第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ThirdPayOrderId 第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetThirdPayOrderId(const std::string& _thirdPayOrderId);

                    /**
                     * 判断参数 ThirdPayOrderId 是否已赋值
                     * @return ThirdPayOrderId 是否已赋值
                     */
                    bool ThirdPayOrderIdHasBeenSet() const;

                    /**
                     * 获取小程序跳转参数渠道为TENPAY，付款方式为EBANK_PAYMENT时必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectInfo 小程序跳转参数渠道为TENPAY，付款方式为EBANK_PAYMENT时必选。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankRedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置小程序跳转参数渠道为TENPAY，付款方式为EBANK_PAYMENT时必选。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RedirectInfo 小程序跳转参数渠道为TENPAY，付款方式为EBANK_PAYMENT时必选。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @return OutOrderId 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @param OutOrderId 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     */
                    void SetOutOrderId(const std::string& _outOrderId);

                    /**
                     * 判断参数 OutOrderId 是否已赋值
                     * @return OutOrderId 是否已赋值
                     */
                    bool OutOrderIdHasBeenSet() const;

                private:

                    /**
                     * 云企付平台订单号。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdPayOrderId;
                    bool m_thirdPayOrderIdHasBeenSet;

                    /**
                     * 小程序跳转参数渠道为TENPAY，付款方式为EBANK_PAYMENT时必选。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankRedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERPAYMENTRESULT_H_
