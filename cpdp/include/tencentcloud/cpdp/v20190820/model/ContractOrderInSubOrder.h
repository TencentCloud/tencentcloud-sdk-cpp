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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERINSUBORDER_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERINSUBORDER_H_

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
                * 支付中签约子订单列表
                */
                class ContractOrderInSubOrder : public AbstractModel
                {
                public:
                    ContractOrderInSubOrder();
                    ~ContractOrderInSubOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单结算应收金额，单位： 分
                     * @return SubMchIncome 子订单结算应收金额，单位： 分
                     * 
                     */
                    int64_t GetSubMchIncome() const;

                    /**
                     * 设置子订单结算应收金额，单位： 分
                     * @param _subMchIncome 子订单结算应收金额，单位： 分
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
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
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
                     * 获取发货标识，由业务在调用聚鑫下单接口的 时候下发
                     * @return Metadata 发货标识，由业务在调用聚鑫下单接口的 时候下发
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置发货标识，由业务在调用聚鑫下单接口的 时候下发
                     * @param _metadata 发货标识，由业务在调用聚鑫下单接口的 时候下发
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * 子订单结算应收金额，单位： 分
                     */
                    int64_t m_subMchIncome;
                    bool m_subMchIncomeHasBeenSet;

                    /**
                     * 子订单平台应收金额，单位：分
                     */
                    int64_t m_platformIncome;
                    bool m_platformIncomeHasBeenSet;

                    /**
                     * 子订单商品详情
                     */
                    std::string m_productDetail;
                    bool m_productDetailHasBeenSet;

                    /**
                     * 子订单商品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子订单号
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

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
                     * 发货标识，由业务在调用聚鑫下单接口的 时候下发
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTORDERINSUBORDER_H_
