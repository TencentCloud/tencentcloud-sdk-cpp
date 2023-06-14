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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERRECHARGERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERRECHARGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/OpenBankRechargeRedirectInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-充值下单返回响应
                */
                class CreateOpenBankOrderRechargeResult : public AbstractModel
                {
                public:
                    CreateOpenBankOrderRechargeResult();
                    ~CreateOpenBankOrderRechargeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云企付平台订单号。
                     * @return ChannelOrderId 云企付平台订单号。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付平台订单号。
                     * @param _channelOrderId 云企付平台订单号。
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
                     * 获取第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdPayOrderId 第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdPayOrderId() const;

                    /**
                     * 设置第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdPayOrderId 第三方支付平台返回支付订单号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdPayOrderId(const std::string& _thirdPayOrderId);

                    /**
                     * 判断参数 ThirdPayOrderId 是否已赋值
                     * @return ThirdPayOrderId 是否已赋值
                     * 
                     */
                    bool ThirdPayOrderIdHasBeenSet() const;

                    /**
                     * 获取跳转参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectInfo 跳转参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OpenBankRechargeRedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置跳转参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectInfo 跳转参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectInfo(const OpenBankRechargeRedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @return OutOrderId 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     * @param _outOrderId 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
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
                     * 获取充值状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealStatus 充值状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealStatus() const;

                    /**
                     * 设置充值状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealStatus 充值状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealStatus(const std::string& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     * 
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取充值返回描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealMessage 充值返回描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealMessage() const;

                    /**
                     * 设置充值返回描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealMessage 充值返回描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealMessage(const std::string& _dealMessage);

                    /**
                     * 判断参数 DealMessage 是否已赋值
                     * @return DealMessage 是否已赋值
                     * 
                     */
                    bool DealMessageHasBeenSet() const;

                    /**
                     * 获取PC web端跳转链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PcWebUrl PC web端跳转链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPcWebUrl() const;

                    /**
                     * 设置PC web端跳转链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pcWebUrl PC web端跳转链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPcWebUrl(const std::string& _pcWebUrl);

                    /**
                     * 判断参数 PcWebUrl 是否已赋值
                     * @return PcWebUrl 是否已赋值
                     * 
                     */
                    bool PcWebUrlHasBeenSet() const;

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
                     * 跳转参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OpenBankRechargeRedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 外部商户订单号，只能是数字、大小写字母，且在同一个接入平台下唯一。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 充值状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * 充值返回描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealMessage;
                    bool m_dealMessageHasBeenSet;

                    /**
                     * PC web端跳转链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pcWebUrl;
                    bool m_pcWebUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKORDERRECHARGERESULT_H_
