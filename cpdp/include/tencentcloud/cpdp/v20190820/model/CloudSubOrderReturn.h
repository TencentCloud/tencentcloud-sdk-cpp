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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERRETURN_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERRETURN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSettleInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudAttachmentInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 子订单详情
                */
                class CloudSubOrderReturn : public AbstractModel
                {
                public:
                    CloudSubOrderReturn();
                    ~CloudSubOrderReturn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单号
                     * @return SubOutTradeNo 子订单号
                     * 
                     */
                    std::string GetSubOutTradeNo() const;

                    /**
                     * 设置子订单号
                     * @param _subOutTradeNo 子订单号
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
                     * 获取米大师计费SubAppId，代表子商户
                     * @return SubAppId 米大师计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置米大师计费SubAppId，代表子商户
                     * @param _subAppId 米大师计费SubAppId，代表子商户
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
                     * 获取子订单商品名称
                     * @return ProductName 子订单商品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置子订单商品名称
                     * @param _productName 子订单商品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取子订单商品详情
                     * @return ProductDetail 子订单商品详情
                     * 
                     */
                    std::string GetProductDetail() const;

                    /**
                     * 设置子订单商品详情
                     * @param _productDetail 子订单商品详情
                     * 
                     */
                    void SetProductDetail(const std::string& _productDetail);

                    /**
                     * 判断参数 ProductDetail 是否已赋值
                     * @return ProductDetail 是否已赋值
                     * 
                     */
                    bool ProductDetailHasBeenSet() const;

                    /**
                     * 获取子订单平台应收金额，单位：分
                     * @return PlatformIncome 子订单平台应收金额，单位：分
                     * 
                     */
                    int64_t GetPlatformIncome() const;

                    /**
                     * 设置子订单平台应收金额，单位：分
                     * @param _platformIncome 子订单平台应收金额，单位：分
                     * 
                     */
                    void SetPlatformIncome(const int64_t& _platformIncome);

                    /**
                     * 判断参数 PlatformIncome 是否已赋值
                     * @return PlatformIncome 是否已赋值
                     * 
                     */
                    bool PlatformIncomeHasBeenSet() const;

                    /**
                     * 获取子订单结算应收金额，单位：分
                     * @return SubMchIncome 子订单结算应收金额，单位：分
                     * 
                     */
                    int64_t GetSubMchIncome() const;

                    /**
                     * 设置子订单结算应收金额，单位：分
                     * @param _subMchIncome 子订单结算应收金额，单位：分
                     * 
                     */
                    void SetSubMchIncome(const int64_t& _subMchIncome);

                    /**
                     * 判断参数 SubMchIncome 是否已赋值
                     * @return SubMchIncome 是否已赋值
                     * 
                     */
                    bool SubMchIncomeHasBeenSet() const;

                    /**
                     * 获取子订单支付金额
                     * @return Amt 子订单支付金额
                     * 
                     */
                    int64_t GetAmt() const;

                    /**
                     * 设置子订单支付金额
                     * @param _amt 子订单支付金额
                     * 
                     */
                    void SetAmt(const int64_t& _amt);

                    /**
                     * 判断参数 Amt 是否已赋值
                     * @return Amt 是否已赋值
                     * 
                     */
                    bool AmtHasBeenSet() const;

                    /**
                     * 获取子订单原始金额
                     * @return OriginalAmt 子订单原始金额
                     * 
                     */
                    int64_t GetOriginalAmt() const;

                    /**
                     * 设置子订单原始金额
                     * @param _originalAmt 子订单原始金额
                     * 
                     */
                    void SetOriginalAmt(const int64_t& _originalAmt);

                    /**
                     * 判断参数 OriginalAmt 是否已赋值
                     * @return OriginalAmt 是否已赋值
                     * 
                     */
                    bool OriginalAmtHasBeenSet() const;

                    /**
                     * 获取核销状态，1表示核销，0表示未核销
                     * @return SettleCheck 核销状态，1表示核销，0表示未核销
                     * 
                     */
                    int64_t GetSettleCheck() const;

                    /**
                     * 设置核销状态，1表示核销，0表示未核销
                     * @param _settleCheck 核销状态，1表示核销，0表示未核销
                     * 
                     */
                    void SetSettleCheck(const int64_t& _settleCheck);

                    /**
                     * 判断参数 SettleCheck 是否已赋值
                     * @return SettleCheck 是否已赋值
                     * 
                     */
                    bool SettleCheckHasBeenSet() const;

                    /**
                     * 获取结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SettleInfo 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CloudSettleInfo GetSettleInfo() const;

                    /**
                     * 设置结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _settleInfo 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSettleInfo(const CloudSettleInfo& _settleInfo);

                    /**
                     * 判断参数 SettleInfo 是否已赋值
                     * @return SettleInfo 是否已赋值
                     * 
                     */
                    bool SettleInfoHasBeenSet() const;

                    /**
                     * 获取透传字段，由开发者在调用米大师下单接口的时候下发
                     * @return Metadata 透传字段，由开发者在调用米大师下单接口的时候下发
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置透传字段，由开发者在调用米大师下单接口的时候下发
                     * @param _metadata 透传字段，由开发者在调用米大师下单接口的时候下发
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取附加项信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentInfoList 附加项信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CloudAttachmentInfo GetAttachmentInfoList() const;

                    /**
                     * 设置附加项信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentInfoList 附加项信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentInfoList(const CloudAttachmentInfo& _attachmentInfoList);

                    /**
                     * 判断参数 AttachmentInfoList 是否已赋值
                     * @return AttachmentInfoList 是否已赋值
                     * 
                     */
                    bool AttachmentInfoListHasBeenSet() const;

                    /**
                     * 获取渠道方应答的订单号，透传处理
                     * @return ChannelExternalSubOrderId 渠道方应答的订单号，透传处理
                     * 
                     */
                    std::string GetChannelExternalSubOrderId() const;

                    /**
                     * 设置渠道方应答的订单号，透传处理
                     * @param _channelExternalSubOrderId 渠道方应答的订单号，透传处理
                     * 
                     */
                    void SetChannelExternalSubOrderId(const std::string& _channelExternalSubOrderId);

                    /**
                     * 判断参数 ChannelExternalSubOrderId 是否已赋值
                     * @return ChannelExternalSubOrderId 是否已赋值
                     * 
                     */
                    bool ChannelExternalSubOrderIdHasBeenSet() const;

                    /**
                     * 获取微信子商户号
                     * @return WxSubMchId 微信子商户号
                     * 
                     */
                    std::string GetWxSubMchId() const;

                    /**
                     * 设置微信子商户号
                     * @param _wxSubMchId 微信子商户号
                     * 
                     */
                    void SetWxSubMchId(const std::string& _wxSubMchId);

                    /**
                     * 判断参数 WxSubMchId 是否已赋值
                     * @return WxSubMchId 是否已赋值
                     * 
                     */
                    bool WxSubMchIdHasBeenSet() const;

                    /**
                     * 获取米大师侧渠道子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubPayOrderId 米大师侧渠道子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubPayOrderId() const;

                    /**
                     * 设置米大师侧渠道子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubPayOrderId 米大师侧渠道子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSubPayOrderId(const std::string& _channelSubPayOrderId);

                    /**
                     * 判断参数 ChannelSubPayOrderId 是否已赋值
                     * @return ChannelSubPayOrderId 是否已赋值
                     * 
                     */
                    bool ChannelSubPayOrderIdHasBeenSet() const;

                    /**
                     * 获取物品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 物品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置物品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 物品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                private:

                    /**
                     * 子订单号
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

                    /**
                     * 米大师计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子订单商品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 子订单商品详情
                     */
                    std::string m_productDetail;
                    bool m_productDetailHasBeenSet;

                    /**
                     * 子订单平台应收金额，单位：分
                     */
                    int64_t m_platformIncome;
                    bool m_platformIncomeHasBeenSet;

                    /**
                     * 子订单结算应收金额，单位：分
                     */
                    int64_t m_subMchIncome;
                    bool m_subMchIncomeHasBeenSet;

                    /**
                     * 子订单支付金额
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * 子订单原始金额
                     */
                    int64_t m_originalAmt;
                    bool m_originalAmtHasBeenSet;

                    /**
                     * 核销状态，1表示核销，0表示未核销
                     */
                    int64_t m_settleCheck;
                    bool m_settleCheckHasBeenSet;

                    /**
                     * 结算信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudSettleInfo m_settleInfo;
                    bool m_settleInfoHasBeenSet;

                    /**
                     * 透传字段，由开发者在调用米大师下单接口的时候下发
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 附加项信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudAttachmentInfo m_attachmentInfoList;
                    bool m_attachmentInfoListHasBeenSet;

                    /**
                     * 渠道方应答的订单号，透传处理
                     */
                    std::string m_channelExternalSubOrderId;
                    bool m_channelExternalSubOrderIdHasBeenSet;

                    /**
                     * 微信子商户号
                     */
                    std::string m_wxSubMchId;
                    bool m_wxSubMchIdHasBeenSet;

                    /**
                     * 米大师侧渠道子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubPayOrderId;
                    bool m_channelSubPayOrderIdHasBeenSet;

                    /**
                     * 物品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERRETURN_H_
