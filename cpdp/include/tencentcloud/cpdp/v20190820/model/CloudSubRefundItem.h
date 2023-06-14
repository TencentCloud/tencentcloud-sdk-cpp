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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBREFUNDITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBREFUNDITEM_H_

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
                class CloudSubRefundItem : public AbstractModel
                {
                public:
                    CloudSubRefundItem();
                    ~CloudSubRefundItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道方应答的退款ID，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalRefundId 渠道方应答的退款ID，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalRefundId() const;

                    /**
                     * 设置渠道方应答的退款ID，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalRefundId 渠道方应答的退款ID，透传处理
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
                     * 获取渠道方应答的订单号，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalOrderId 渠道方应答的订单号，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalOrderId() const;

                    /**
                     * 设置渠道方应答的订单号，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalOrderId 渠道方应答的订单号，透传处理
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
                     * 获取子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundAmt 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefundAmt() const;

                    /**
                     * 设置子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundAmt 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundAmt(const int64_t& _refundAmt);

                    /**
                     * 判断参数 RefundAmt 是否已赋值
                     * @return RefundAmt 是否已赋值
                     * 
                     */
                    bool RefundAmtHasBeenSet() const;

                    /**
                     * 获取子单订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubOutTradeNo 子单订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubOutTradeNo() const;

                    /**
                     * 设置子单订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subOutTradeNo 子单订单号
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
                     * 获取子单退款id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRefundId 子单退款id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubRefundId() const;

                    /**
                     * 设置子单退款id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRefundId 子单退款id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubRefundId(const std::string& _subRefundId);

                    /**
                     * 判断参数 SubRefundId 是否已赋值
                     * @return SubRefundId 是否已赋值
                     * 
                     */
                    bool SubRefundIdHasBeenSet() const;

                    /**
                     * 获取子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取渠道子单支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubOrderId 渠道子单支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubOrderId() const;

                    /**
                     * 设置渠道子单支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubOrderId 渠道子单支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSubOrderId(const std::string& _channelSubOrderId);

                    /**
                     * 判断参数 ChannelSubOrderId 是否已赋值
                     * @return ChannelSubOrderId 是否已赋值
                     * 
                     */
                    bool ChannelSubOrderIdHasBeenSet() const;

                    /**
                     * 获取渠道子退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubRefundId 渠道子退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubRefundId() const;

                    /**
                     * 设置渠道子退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubRefundId 渠道子退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSubRefundId(const std::string& _channelSubRefundId);

                    /**
                     * 判断参数 ChannelSubRefundId 是否已赋值
                     * @return ChannelSubRefundId 是否已赋值
                     * 
                     */
                    bool ChannelSubRefundIdHasBeenSet() const;

                private:

                    /**
                     * 渠道方应答的退款ID，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalRefundId;
                    bool m_channelExternalRefundIdHasBeenSet;

                    /**
                     * 渠道方应答的订单号，透传处理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalOrderId;
                    bool m_channelExternalOrderIdHasBeenSet;

                    /**
                     * 子单退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refundAmt;
                    bool m_refundAmtHasBeenSet;

                    /**
                     * 子单订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

                    /**
                     * 子单退款id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subRefundId;
                    bool m_subRefundIdHasBeenSet;

                    /**
                     * 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 渠道子单支付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubOrderId;
                    bool m_channelSubOrderIdHasBeenSet;

                    /**
                     * 渠道子退款订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubRefundId;
                    bool m_channelSubRefundIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBREFUNDITEM_H_
