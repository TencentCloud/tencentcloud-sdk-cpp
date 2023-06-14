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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYFEEDATARESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYFEEDATARESULT_H_

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
                * pay_fee支付方式行业分类费率json数据
                */
                class PayFeeDataResult : public AbstractModel
                {
                public:
                    PayFeeDataResult();
                    ~PayFeeDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机构的分佣扣率扣率
                     * @return OrganizationFee 机构的分佣扣率扣率
                     * 
                     */
                    std::string GetOrganizationFee() const;

                    /**
                     * 设置机构的分佣扣率扣率
                     * @param _organizationFee 机构的分佣扣率扣率
                     * 
                     */
                    void SetOrganizationFee(const std::string& _organizationFee);

                    /**
                     * 判断参数 OrganizationFee 是否已赋值
                     * @return OrganizationFee 是否已赋值
                     * 
                     */
                    bool OrganizationFeeHasBeenSet() const;

                    /**
                     * 获取商户手续费封顶值，0为不限封顶
                     * @return PaymentClassificationLimit 商户手续费封顶值，0为不限封顶
                     * 
                     */
                    std::string GetPaymentClassificationLimit() const;

                    /**
                     * 设置商户手续费封顶值，0为不限封顶
                     * @param _paymentClassificationLimit 商户手续费封顶值，0为不限封顶
                     * 
                     */
                    void SetPaymentClassificationLimit(const std::string& _paymentClassificationLimit);

                    /**
                     * 判断参数 PaymentClassificationLimit 是否已赋值
                     * @return PaymentClassificationLimit 是否已赋值
                     * 
                     */
                    bool PaymentClassificationLimitHasBeenSet() const;

                    /**
                     * 获取机构的分佣扣率类型(1按签约扣率，2按收单收益)
                     * @return OrganizationFeeType 机构的分佣扣率类型(1按签约扣率，2按收单收益)
                     * 
                     */
                    std::string GetOrganizationFeeType() const;

                    /**
                     * 设置机构的分佣扣率类型(1按签约扣率，2按收单收益)
                     * @param _organizationFeeType 机构的分佣扣率类型(1按签约扣率，2按收单收益)
                     * 
                     */
                    void SetOrganizationFeeType(const std::string& _organizationFeeType);

                    /**
                     * 判断参数 OrganizationFeeType 是否已赋值
                     * @return OrganizationFeeType 是否已赋值
                     * 
                     */
                    bool OrganizationFeeTypeHasBeenSet() const;

                    /**
                     * 获取商户扣率最大值
                     * @return PaymentClassificationMaxFee 商户扣率最大值
                     * 
                     */
                    std::string GetPaymentClassificationMaxFee() const;

                    /**
                     * 设置商户扣率最大值
                     * @param _paymentClassificationMaxFee 商户扣率最大值
                     * 
                     */
                    void SetPaymentClassificationMaxFee(const std::string& _paymentClassificationMaxFee);

                    /**
                     * 判断参数 PaymentClassificationMaxFee 是否已赋值
                     * @return PaymentClassificationMaxFee 是否已赋值
                     * 
                     */
                    bool PaymentClassificationMaxFeeHasBeenSet() const;

                    /**
                     * 获取商户扣率最小值
                     * @return PaymentClassificationMinFee 商户扣率最小值
                     * 
                     */
                    std::string GetPaymentClassificationMinFee() const;

                    /**
                     * 设置商户扣率最小值
                     * @param _paymentClassificationMinFee 商户扣率最小值
                     * 
                     */
                    void SetPaymentClassificationMinFee(const std::string& _paymentClassificationMinFee);

                    /**
                     * 判断参数 PaymentClassificationMinFee 是否已赋值
                     * @return PaymentClassificationMinFee 是否已赋值
                     * 
                     */
                    bool PaymentClassificationMinFeeHasBeenSet() const;

                    /**
                     * 获取行业会类编号
                     * @return PaymentClassificationId 行业会类编号
                     * 
                     */
                    std::string GetPaymentClassificationId() const;

                    /**
                     * 设置行业会类编号
                     * @param _paymentClassificationId 行业会类编号
                     * 
                     */
                    void SetPaymentClassificationId(const std::string& _paymentClassificationId);

                    /**
                     * 判断参数 PaymentClassificationId 是否已赋值
                     * @return PaymentClassificationId 是否已赋值
                     * 
                     */
                    bool PaymentClassificationIdHasBeenSet() const;

                    /**
                     * 获取行业分类名称
                     * @return PaymentClassificationName 行业分类名称
                     * 
                     */
                    std::string GetPaymentClassificationName() const;

                    /**
                     * 设置行业分类名称
                     * @param _paymentClassificationName 行业分类名称
                     * 
                     */
                    void SetPaymentClassificationName(const std::string& _paymentClassificationName);

                    /**
                     * 判断参数 PaymentClassificationName 是否已赋值
                     * @return PaymentClassificationName 是否已赋值
                     * 
                     */
                    bool PaymentClassificationNameHasBeenSet() const;

                private:

                    /**
                     * 机构的分佣扣率扣率
                     */
                    std::string m_organizationFee;
                    bool m_organizationFeeHasBeenSet;

                    /**
                     * 商户手续费封顶值，0为不限封顶
                     */
                    std::string m_paymentClassificationLimit;
                    bool m_paymentClassificationLimitHasBeenSet;

                    /**
                     * 机构的分佣扣率类型(1按签约扣率，2按收单收益)
                     */
                    std::string m_organizationFeeType;
                    bool m_organizationFeeTypeHasBeenSet;

                    /**
                     * 商户扣率最大值
                     */
                    std::string m_paymentClassificationMaxFee;
                    bool m_paymentClassificationMaxFeeHasBeenSet;

                    /**
                     * 商户扣率最小值
                     */
                    std::string m_paymentClassificationMinFee;
                    bool m_paymentClassificationMinFeeHasBeenSet;

                    /**
                     * 行业会类编号
                     */
                    std::string m_paymentClassificationId;
                    bool m_paymentClassificationIdHasBeenSet;

                    /**
                     * 行业分类名称
                     */
                    std::string m_paymentClassificationName;
                    bool m_paymentClassificationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYFEEDATARESULT_H_
