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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 公司信息
                */
                class CompanyInfo : public AbstractModel
                {
                public:
                    CompanyInfo();
                    ~CompanyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param _companyId 公司ID
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取公司所在国家
                     * @return CompanyCountry 公司所在国家
                     * 
                     */
                    std::string GetCompanyCountry() const;

                    /**
                     * 设置公司所在国家
                     * @param _companyCountry 公司所在国家
                     * 
                     */
                    void SetCompanyCountry(const std::string& _companyCountry);

                    /**
                     * 判断参数 CompanyCountry 是否已赋值
                     * @return CompanyCountry 是否已赋值
                     * 
                     */
                    bool CompanyCountryHasBeenSet() const;

                    /**
                     * 获取公司所在省份
                     * @return CompanyProvince 公司所在省份
                     * 
                     */
                    std::string GetCompanyProvince() const;

                    /**
                     * 设置公司所在省份
                     * @param _companyProvince 公司所在省份
                     * 
                     */
                    void SetCompanyProvince(const std::string& _companyProvince);

                    /**
                     * 判断参数 CompanyProvince 是否已赋值
                     * @return CompanyProvince 是否已赋值
                     * 
                     */
                    bool CompanyProvinceHasBeenSet() const;

                    /**
                     * 获取公司所在城市
                     * @return CompanyCity 公司所在城市
                     * 
                     */
                    std::string GetCompanyCity() const;

                    /**
                     * 设置公司所在城市
                     * @param _companyCity 公司所在城市
                     * 
                     */
                    void SetCompanyCity(const std::string& _companyCity);

                    /**
                     * 判断参数 CompanyCity 是否已赋值
                     * @return CompanyCity 是否已赋值
                     * 
                     */
                    bool CompanyCityHasBeenSet() const;

                    /**
                     * 获取公司所在详细地址
                     * @return CompanyAddress 公司所在详细地址
                     * 
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置公司所在详细地址
                     * @param _companyAddress 公司所在详细地址
                     * 
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     * 
                     */
                    bool CompanyAddressHasBeenSet() const;

                    /**
                     * 获取公司电话
                     * @return CompanyPhone 公司电话
                     * 
                     */
                    std::string GetCompanyPhone() const;

                    /**
                     * 设置公司电话
                     * @param _companyPhone 公司电话
                     * 
                     */
                    void SetCompanyPhone(const std::string& _companyPhone);

                    /**
                     * 判断参数 CompanyPhone 是否已赋值
                     * @return CompanyPhone 是否已赋值
                     * 
                     */
                    bool CompanyPhoneHasBeenSet() const;

                    /**
                     * 获取公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * @return IdType 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * @param _idType 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * 
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820
                     * @return IdNumber 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820
                     * 
                     */
                    std::string GetIdNumber() const;

                    /**
                     * 设置公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820
                     * @param _idNumber 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820
                     * 
                     */
                    void SetIdNumber(const std::string& _idNumber);

                    /**
                     * 判断参数 IdNumber 是否已赋值
                     * @return IdNumber 是否已赋值
                     * 
                     */
                    bool IdNumberHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 公司名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 公司ID
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 公司所在国家
                     */
                    std::string m_companyCountry;
                    bool m_companyCountryHasBeenSet;

                    /**
                     * 公司所在省份
                     */
                    std::string m_companyProvince;
                    bool m_companyProvinceHasBeenSet;

                    /**
                     * 公司所在城市
                     */
                    std::string m_companyCity;
                    bool m_companyCityHasBeenSet;

                    /**
                     * 公司所在详细地址
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                    /**
                     * 公司电话
                     */
                    std::string m_companyPhone;
                    bool m_companyPhoneHasBeenSet;

                    /**
                     * 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820
                     */
                    std::string m_idNumber;
                    bool m_idNumberHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_
