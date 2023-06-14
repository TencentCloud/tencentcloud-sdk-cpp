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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OLDSUBREFUND_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OLDSUBREFUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 子单退款信息
                */
                class OldSubRefund : public AbstractModel
                {
                public:
                    OldSubRefund();
                    ~OldSubRefund() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付机构退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalRefundId 支付机构退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalRefundId() const;

                    /**
                     * 设置支付机构退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalRefundId 支付机构退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalRefundId(const std::string& _channelExternalRefundId);

                    /**
                     * 判断参数 ChannelExternalRefundId 是否已赋值
                     * @return ChannelExternalRefundId 是否已赋值
                     * 
                     */
                    bool ChannelExternalRefundIdHasBeenSet() const;

                    /**
                     * 获取支付机构支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalOrderId 支付机构支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalOrderId() const;

                    /**
                     * 设置支付机构支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalOrderId 支付机构支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalOrderId(const std::string& _channelExternalOrderId);

                    /**
                     * 判断参数 ChannelExternalOrderId 是否已赋值
                     * @return ChannelExternalOrderId 是否已赋值
                     * 
                     */
                    bool ChannelExternalOrderIdHasBeenSet() const;

                    /**
                     * 获取渠道退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelRefundId 渠道退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelRefundId() const;

                    /**
                     * 设置渠道退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelRefundId 渠道退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelRefundId(const std::string& _channelRefundId);

                    /**
                     * 判断参数 ChannelRefundId 是否已赋值
                     * @return ChannelRefundId 是否已赋值
                     * 
                     */
                    bool ChannelRefundIdHasBeenSet() const;

                    /**
                     * 获取子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubOutTradeNo 子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubOutTradeNo() const;

                    /**
                     * 设置子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subOutTradeNo 子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubOutTradeNo(const std::string& _subOutTradeNo);

                    /**
                     * 判断参数 SubOutTradeNo 是否已赋值
                     * @return SubOutTradeNo 是否已赋值
                     * 
                     */
                    bool SubOutTradeNoHasBeenSet() const;

                    /**
                     * 获取子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundAmt 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundAmt() const;

                    /**
                     * 设置子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundAmt 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundAmt(const std::string& _refundAmt);

                    /**
                     * 判断参数 RefundAmt 是否已赋值
                     * @return RefundAmt 是否已赋值
                     * 
                     */
                    bool RefundAmtHasBeenSet() const;

                private:

                    /**
                     * 支付机构退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalRefundId;
                    bool m_channelExternalRefundIdHasBeenSet;

                    /**
                     * 支付机构支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 渠道退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelRefundId;
                    bool m_channelRefundIdHasBeenSet;

                    /**
                     * 子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

                    /**
                     * 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundAmt;
                    bool m_refundAmtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OLDSUBREFUND_H_
