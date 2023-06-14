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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTPAYFEERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTPAYFEERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayDataResult.h>
#include <tencentcloud/cpdp/v20190820/model/PayFeeDataResult.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 支付方式费率及自定义表单项
                */
                class QueryContractPayFeeResult : public AbstractModel
                {
                public:
                    QueryContractPayFeeResult();
                    ~QueryContractPayFeeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pay支付方式json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pay pay支付方式json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PayDataResult GetPay() const;

                    /**
                     * 设置pay支付方式json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pay pay支付方式json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPay(const PayDataResult& _pay);

                    /**
                     * 判断参数 Pay 是否已赋值
                     * @return Pay 是否已赋值
                     * 
                     */
                    bool PayHasBeenSet() const;

                    /**
                     * 获取合同扩展自定义字段
                     * @return ExtraInput 合同扩展自定义字段
                     * 
                     */
                    std::vector<std::string> GetExtraInput() const;

                    /**
                     * 设置合同扩展自定义字段
                     * @param _extraInput 合同扩展自定义字段
                     * 
                     */
                    void SetExtraInput(const std::vector<std::string>& _extraInput);

                    /**
                     * 判断参数 ExtraInput 是否已赋值
                     * @return ExtraInput 是否已赋值
                     * 
                     */
                    bool ExtraInputHasBeenSet() const;

                    /**
                     * 获取pay_fee支付方式行业分类费率json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayFee pay_fee支付方式行业分类费率json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PayFeeDataResult> GetPayFee() const;

                    /**
                     * 设置pay_fee支付方式行业分类费率json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payFee pay_fee支付方式行业分类费率json数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayFee(const std::vector<PayFeeDataResult>& _payFee);

                    /**
                     * 判断参数 PayFee 是否已赋值
                     * @return PayFee 是否已赋值
                     * 
                     */
                    bool PayFeeHasBeenSet() const;

                private:

                    /**
                     * pay支付方式json数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PayDataResult m_pay;
                    bool m_payHasBeenSet;

                    /**
                     * 合同扩展自定义字段
                     */
                    std::vector<std::string> m_extraInput;
                    bool m_extraInputHasBeenSet;

                    /**
                     * pay_fee支付方式行业分类费率json数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PayFeeDataResult> m_payFee;
                    bool m_payFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTPAYFEERESULT_H_
