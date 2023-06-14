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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ORGANIZATIONINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ORGANIZATIONINFO_H_

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
                * 公司信息
                */
                class OrganizationInfo : public AbstractModel
                {
                public:
                    OrganizationInfo();
                    ~OrganizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公司名称，个体工商户必输
                     * @return OrganizationName 公司名称，个体工商户必输
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置公司名称，个体工商户必输
                     * @param _organizationName 公司名称，个体工商户必输
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取公司证件类型，个体工商户必输，证件类型仅支持73
                     * @return OrganizationType 公司证件类型，个体工商户必输，证件类型仅支持73
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置公司证件类型，个体工商户必输，证件类型仅支持73
                     * @param _organizationType 公司证件类型，个体工商户必输，证件类型仅支持73
                     * 
                     */
                    void SetOrganizationType(const std::string& _organizationType);

                    /**
                     * 判断参数 OrganizationType 是否已赋值
                     * @return OrganizationType 是否已赋值
                     * 
                     */
                    bool OrganizationTypeHasBeenSet() const;

                    /**
                     * 获取公司证件号码，个体工商户必输
                     * @return OrganizationCode 公司证件号码，个体工商户必输
                     * 
                     */
                    std::string GetOrganizationCode() const;

                    /**
                     * 设置公司证件号码，个体工商户必输
                     * @param _organizationCode 公司证件号码，个体工商户必输
                     * 
                     */
                    void SetOrganizationCode(const std::string& _organizationCode);

                    /**
                     * 判断参数 OrganizationCode 是否已赋值
                     * @return OrganizationCode 是否已赋值
                     * 
                     */
                    bool OrganizationCodeHasBeenSet() const;

                    /**
                     * 获取法人名称，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return LegalPersonName 法人名称，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetLegalPersonName() const;

                    /**
                     * 设置法人名称，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _legalPersonName 法人名称，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetLegalPersonName(const std::string& _legalPersonName);

                    /**
                     * 判断参数 LegalPersonName 是否已赋值
                     * @return LegalPersonName 是否已赋值
                     * 
                     */
                    bool LegalPersonNameHasBeenSet() const;

                    /**
                     * 获取法人证件类型，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
                     * @return LegalPersonIdType 法人证件类型，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
                     * 
                     */
                    std::string GetLegalPersonIdType() const;

                    /**
                     * 设置法人证件类型，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
                     * @param _legalPersonIdType 法人证件类型，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
                     * 
                     */
                    void SetLegalPersonIdType(const std::string& _legalPersonIdType);

                    /**
                     * 判断参数 LegalPersonIdType 是否已赋值
                     * @return LegalPersonIdType 是否已赋值
                     * 
                     */
                    bool LegalPersonIdTypeHasBeenSet() const;

                    /**
                     * 获取法人证件号码，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return LegalPersonIdCode 法人证件号码，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetLegalPersonIdCode() const;

                    /**
                     * 设置法人证件号码，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _legalPersonIdCode 法人证件号码，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetLegalPersonIdCode(const std::string& _legalPersonIdCode);

                    /**
                     * 判断参数 LegalPersonIdCode 是否已赋值
                     * @return LegalPersonIdCode 是否已赋值
                     * 
                     */
                    bool LegalPersonIdCodeHasBeenSet() const;

                private:

                    /**
                     * 公司名称，个体工商户必输
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 公司证件类型，个体工商户必输，证件类型仅支持73
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                    /**
                     * 公司证件号码，个体工商户必输
                     */
                    std::string m_organizationCode;
                    bool m_organizationCodeHasBeenSet;

                    /**
                     * 法人名称，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_legalPersonName;
                    bool m_legalPersonNameHasBeenSet;

                    /**
                     * 法人证件类型，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
                     */
                    std::string m_legalPersonIdType;
                    bool m_legalPersonIdTypeHasBeenSet;

                    /**
                     * 法人证件号码，如果SubMchName不是法人，需要另外送入法人信息（企业必输）
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_legalPersonIdCode;
                    bool m_legalPersonIdCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ORGANIZATIONINFO_H_
