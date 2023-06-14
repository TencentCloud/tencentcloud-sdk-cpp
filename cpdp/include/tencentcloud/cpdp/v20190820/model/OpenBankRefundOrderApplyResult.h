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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREFUNDORDERAPPLYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREFUNDORDERAPPLYRESULT_H_

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
                * 云企付-退款申请结果
                */
                class OpenBankRefundOrderApplyResult : public AbstractModel
                {
                public:
                    OpenBankRefundOrderApplyResult();
                    ~OpenBankRefundOrderApplyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云企付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelOrderId 云企付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 设置云企付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelOrderId 云企付订单号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取云企付退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelRefundId 云企付退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelRefundId() const;

                    /**
                     * 设置云企付退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelRefundId 云企付退款流水号
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
                     * 获取外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutRefundId 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutRefundId() const;

                    /**
                     * 设置外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outRefundId 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取外部商户订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutOrderId 外部商户订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutOrderId() const;

                    /**
                     * 设置外部商户订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outOrderId 外部商户订单号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundMessage 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundMessage() const;

                    /**
                     * 设置退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundMessage 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundMessage(const std::string& _refundMessage);

                    /**
                     * 判断参数 RefundMessage 是否已赋值
                     * @return RefundMessage 是否已赋值
                     * 
                     */
                    bool RefundMessageHasBeenSet() const;

                    /**
                     * 获取退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundAmount 退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRefundAmount() const;

                    /**
                     * 设置退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundAmount 退款金额
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FeeAmount 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFeeAmount() const;

                    /**
                     * 设置退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _feeAmount 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFeeAmount(const int64_t& _feeAmount);

                    /**
                     * 判断参数 FeeAmount 是否已赋值
                     * @return FeeAmount 是否已赋值
                     * 
                     */
                    bool FeeAmountHasBeenSet() const;

                    /**
                     * 获取退款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundStatus 退款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundStatus() const;

                    /**
                     * 设置退款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundStatus 退款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundStatus(const std::string& _refundStatus);

                    /**
                     * 判断参数 RefundStatus 是否已赋值
                     * @return RefundStatus 是否已赋值
                     * 
                     */
                    bool RefundStatusHasBeenSet() const;

                private:

                    /**
                     * 云企付订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 云企付退款流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelRefundId;
                    bool m_channelRefundIdHasBeenSet;

                    /**
                     * 外部商户退款单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outRefundId;
                    bool m_outRefundIdHasBeenSet;

                    /**
                     * 外部商户订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outOrderId;
                    bool m_outOrderIdHasBeenSet;

                    /**
                     * 退款返回描述，比如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundMessage;
                    bool m_refundMessageHasBeenSet;

                    /**
                     * 退款金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * 退款手续费金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_feeAmount;
                    bool m_feeAmountHasBeenSet;

                    /**
                     * 退款状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundStatus;
                    bool m_refundStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKREFUNDORDERAPPLYRESULT_H_
