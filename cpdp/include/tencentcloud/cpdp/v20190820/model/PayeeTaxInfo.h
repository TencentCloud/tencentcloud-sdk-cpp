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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayeeTaxTemplateInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 计税信息
                */
                class PayeeTaxInfo : public AbstractModel
                {
                public:
                    PayeeTaxInfo();
                    ~PayeeTaxInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计税模板列表
                     * @return TaxTemplateInfoList 计税模板列表
                     * 
                     */
                    std::vector<PayeeTaxTemplateInfo> GetTaxTemplateInfoList() const;

                    /**
                     * 设置计税模板列表
                     * @param _taxTemplateInfoList 计税模板列表
                     * 
                     */
                    void SetTaxTemplateInfoList(const std::vector<PayeeTaxTemplateInfo>& _taxTemplateInfoList);

                    /**
                     * 判断参数 TaxTemplateInfoList 是否已赋值
                     * @return TaxTemplateInfoList 是否已赋值
                     * 
                     */
                    bool TaxTemplateInfoListHasBeenSet() const;

                    /**
                     * 获取纳税人识别号
                     * @return TaxpayerIdNo 纳税人识别号
                     * 
                     */
                    std::string GetTaxpayerIdNo() const;

                    /**
                     * 设置纳税人识别号
                     * @param _taxpayerIdNo 纳税人识别号
                     * 
                     */
                    void SetTaxpayerIdNo(const std::string& _taxpayerIdNo);

                    /**
                     * 判断参数 TaxpayerIdNo 是否已赋值
                     * @return TaxpayerIdNo 是否已赋值
                     * 
                     */
                    bool TaxpayerIdNoHasBeenSet() const;

                    /**
                     * 获取纳税主体类型
NATURAL:自然人
NON_NATURAL:非自然人
                     * @return TaxEntityType 纳税主体类型
NATURAL:自然人
NON_NATURAL:非自然人
                     * 
                     */
                    std::string GetTaxEntityType() const;

                    /**
                     * 设置纳税主体类型
NATURAL:自然人
NON_NATURAL:非自然人
                     * @param _taxEntityType 纳税主体类型
NATURAL:自然人
NON_NATURAL:非自然人
                     * 
                     */
                    void SetTaxEntityType(const std::string& _taxEntityType);

                    /**
                     * 判断参数 TaxEntityType 是否已赋值
                     * @return TaxEntityType 是否已赋值
                     * 
                     */
                    bool TaxEntityTypeHasBeenSet() const;

                    /**
                     * 获取财税服务商ID
                     * @return TaxServiceProviderId 财税服务商ID
                     * 
                     */
                    std::string GetTaxServiceProviderId() const;

                    /**
                     * 设置财税服务商ID
                     * @param _taxServiceProviderId 财税服务商ID
                     * 
                     */
                    void SetTaxServiceProviderId(const std::string& _taxServiceProviderId);

                    /**
                     * 判断参数 TaxServiceProviderId 是否已赋值
                     * @return TaxServiceProviderId 是否已赋值
                     * 
                     */
                    bool TaxServiceProviderIdHasBeenSet() const;

                private:

                    /**
                     * 计税模板列表
                     */
                    std::vector<PayeeTaxTemplateInfo> m_taxTemplateInfoList;
                    bool m_taxTemplateInfoListHasBeenSet;

                    /**
                     * 纳税人识别号
                     */
                    std::string m_taxpayerIdNo;
                    bool m_taxpayerIdNoHasBeenSet;

                    /**
                     * 纳税主体类型
NATURAL:自然人
NON_NATURAL:非自然人
                     */
                    std::string m_taxEntityType;
                    bool m_taxEntityTypeHasBeenSet;

                    /**
                     * 财税服务商ID
                     */
                    std::string m_taxServiceProviderId;
                    bool m_taxServiceProviderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEETAXINFO_H_
