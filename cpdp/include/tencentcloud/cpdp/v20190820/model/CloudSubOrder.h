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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDER_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudSettleInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudAttachmentInfo.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalAttachmentData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 子订单对象
                */
                class CloudSubOrder : public AbstractModel
                {
                public:
                    CloudSubOrder();
                    ~CloudSubOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单号。
长度32个字符供参考，部分渠道存在长度更短的情况接入时请联系开发咨询。
                     * @return SubOutTradeNo 子订单号。
长度32个字符供参考，部分渠道存在长度更短的情况接入时请联系开发咨询。
                     * 
                     */
                    std::string GetSubOutTradeNo() const;

                    /**
                     * 设置子订单号。
长度32个字符供参考，部分渠道存在长度更短的情况接入时请联系开发咨询。
                     * @param _subOutTradeNo 子订单号。
长度32个字符供参考，部分渠道存在长度更短的情况接入时请联系开发咨询。
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
                     * 获取支付子商户ID。
米大师计费SubAppId，代表子商户。
                     * @return SubAppId 支付子商户ID。
米大师计费SubAppId，代表子商户。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置支付子商户ID。
米大师计费SubAppId，代表子商户。
                     * @param _subAppId 支付子商户ID。
米大师计费SubAppId，代表子商户。
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
                     * 获取商品名称。
业务自定义的子订单商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * @return ProductName 商品名称。
业务自定义的子订单商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名称。
业务自定义的子订单商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     * @param _productName 商品名称。
业务自定义的子订单商品名称，无需URL编码，长度限制以具体所接入渠道为准。
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
                     * 获取商品详情。
业务自定义的子订单商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * @return ProductDetail 商品详情。
业务自定义的子订单商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * 
                     */
                    std::string GetProductDetail() const;

                    /**
                     * 设置商品详情。
业务自定义的子订单商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     * @param _productDetail 商品详情。
业务自定义的子订单商品详情，无需URL编码，长度限制以具体所接入渠道为准。
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
                     * 获取平台应收。
子订单平台应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @return PlatformIncome 平台应收。
子订单平台应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * 
                     */
                    int64_t GetPlatformIncome() const;

                    /**
                     * 设置平台应收。
子订单平台应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @param _platformIncome 平台应收。
子订单平台应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
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
                     * 获取商户应收。
子订单结算应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @return SubMchIncome 商户应收。
子订单结算应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * 
                     */
                    int64_t GetSubMchIncome() const;

                    /**
                     * 设置商户应收。
子订单结算应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @param _subMchIncome 商户应收。
子订单结算应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
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
                     * 获取透传字段。
发货标识，由开发者在调用米大师下单接口的 时候下发。
                     * @return Metadata 透传字段。
发货标识，由开发者在调用米大师下单接口的 时候下发。
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置透传字段。
发货标识，由开发者在调用米大师下单接口的 时候下发。
                     * @param _metadata 透传字段。
发货标识，由开发者在调用米大师下单接口的 时候下发。
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
                     * 获取支付金额。
子订单支付金额，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @return Amt 支付金额。
子订单支付金额，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * 
                     */
                    int64_t GetAmt() const;

                    /**
                     * 设置支付金额。
子订单支付金额，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     * @param _amt 支付金额。
子订单支付金额，需要注意的是Amt = PlatformIncome+SubMchIncome。
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
                     * 获取原始金额。
子订单原始金额，OriginalAmt>=Amt。
                     * @return OriginalAmt 原始金额。
子订单原始金额，OriginalAmt>=Amt。
                     * 
                     */
                    int64_t GetOriginalAmt() const;

                    /**
                     * 设置原始金额。
子订单原始金额，OriginalAmt>=Amt。
                     * @param _originalAmt 原始金额。
子订单原始金额，OriginalAmt>=Amt。
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
                     * 获取微信子商户号。
                     * @return WxSubMchId 微信子商户号。
                     * 
                     */
                    std::string GetWxSubMchId() const;

                    /**
                     * 设置微信子商户号。
                     * @param _wxSubMchId 微信子商户号。
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
                     * 获取结算信息。
例如是否需要分账、是否需要支付确认等。
                     * @return SettleInfo 结算信息。
例如是否需要分账、是否需要支付确认等。
                     * 
                     */
                    CloudSettleInfo GetSettleInfo() const;

                    /**
                     * 设置结算信息。
例如是否需要分账、是否需要支付确认等。
                     * @param _settleInfo 结算信息。
例如是否需要分账、是否需要支付确认等。
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
                     * 获取附加项信息列表。
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能。
                     * @return AttachmentInfoList 附加项信息列表。
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能。
                     * 
                     */
                    std::vector<CloudAttachmentInfo> GetAttachmentInfoList() const;

                    /**
                     * 设置附加项信息列表。
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能。
                     * @param _attachmentInfoList 附加项信息列表。
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能。
                     * 
                     */
                    void SetAttachmentInfoList(const std::vector<CloudAttachmentInfo>& _attachmentInfoList);

                    /**
                     * 判断参数 AttachmentInfoList 是否已赋值
                     * @return AttachmentInfoList 是否已赋值
                     * 
                     */
                    bool AttachmentInfoListHasBeenSet() const;

                    /**
                     * 获取渠道透传数据列表。
                     * @return ExternalAttachmentDataList 渠道透传数据列表。
                     * 
                     */
                    std::vector<CloudExternalAttachmentData> GetExternalAttachmentDataList() const;

                    /**
                     * 设置渠道透传数据列表。
                     * @param _externalAttachmentDataList 渠道透传数据列表。
                     * 
                     */
                    void SetExternalAttachmentDataList(const std::vector<CloudExternalAttachmentData>& _externalAttachmentDataList);

                    /**
                     * 判断参数 ExternalAttachmentDataList 是否已赋值
                     * @return ExternalAttachmentDataList 是否已赋值
                     * 
                     */
                    bool ExternalAttachmentDataListHasBeenSet() const;

                private:

                    /**
                     * 子订单号。
长度32个字符供参考，部分渠道存在长度更短的情况接入时请联系开发咨询。
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

                    /**
                     * 支付子商户ID。
米大师计费SubAppId，代表子商户。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 商品名称。
业务自定义的子订单商品名称，无需URL编码，长度限制以具体所接入渠道为准。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 商品详情。
业务自定义的子订单商品详情，无需URL编码，长度限制以具体所接入渠道为准。
                     */
                    std::string m_productDetail;
                    bool m_productDetailHasBeenSet;

                    /**
                     * 平台应收。
子订单平台应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     */
                    int64_t m_platformIncome;
                    bool m_platformIncomeHasBeenSet;

                    /**
                     * 商户应收。
子订单结算应收金额，单位：分，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     */
                    int64_t m_subMchIncome;
                    bool m_subMchIncomeHasBeenSet;

                    /**
                     * 透传字段。
发货标识，由开发者在调用米大师下单接口的 时候下发。
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 支付金额。
子订单支付金额，需要注意的是Amt = PlatformIncome+SubMchIncome。
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * 原始金额。
子订单原始金额，OriginalAmt>=Amt。
                     */
                    int64_t m_originalAmt;
                    bool m_originalAmtHasBeenSet;

                    /**
                     * 微信子商户号。
                     */
                    std::string m_wxSubMchId;
                    bool m_wxSubMchIdHasBeenSet;

                    /**
                     * 结算信息。
例如是否需要分账、是否需要支付确认等。
                     */
                    CloudSettleInfo m_settleInfo;
                    bool m_settleInfoHasBeenSet;

                    /**
                     * 附加项信息列表。
例如溢价信息、抵扣信息、积分信息、补贴信息
通过该字段可以实现渠道方的优惠抵扣补贴等营销功能。
                     */
                    std::vector<CloudAttachmentInfo> m_attachmentInfoList;
                    bool m_attachmentInfoListHasBeenSet;

                    /**
                     * 渠道透传数据列表。
                     */
                    std::vector<CloudExternalAttachmentData> m_externalAttachmentDataList;
                    bool m_externalAttachmentDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDER_H_
