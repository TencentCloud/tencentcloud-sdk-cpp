/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECSRREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECSRREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCSR请求参数结构体
                */
                class CreateCSRRequest : public AbstractModel
                {
                public:
                    CreateCSRRequest();
                    ~CreateCSRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>企业/单位名称</p>
                     * @return Organization <p>企业/单位名称</p>
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 设置<p>企业/单位名称</p>
                     * @param _organization <p>企业/单位名称</p>
                     * 
                     */
                    void SetOrganization(const std::string& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * 
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取<p>部门</p>
                     * @return Department <p>部门</p>
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置<p>部门</p>
                     * @param _department <p>部门</p>
                     * 
                     */
                    void SetDepartment(const std::string& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取<p>邮箱</p>
                     * @return Email <p>邮箱</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>邮箱</p>
                     * @param _email <p>邮箱</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>省份</p>
                     * @return Province <p>省份</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>省份</p>
                     * @param _province <p>省份</p>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>符合ISO 3166 标准的国家或地域代码。如:CN、US</p>
                     * @return Country <p>符合ISO 3166 标准的国家或地域代码。如:CN、US</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>符合ISO 3166 标准的国家或地域代码。如:CN、US</p>
                     * @param _country <p>符合ISO 3166 标准的国家或地域代码。如:CN、US</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>加密算法，支持 RSA及ECC。</p>
                     * @return EncryptAlgo <p>加密算法，支持 RSA及ECC。</p>
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置<p>加密算法，支持 RSA及ECC。</p>
                     * @param _encryptAlgo <p>加密算法，支持 RSA及ECC。</p>
                     * 
                     */
                    void SetEncryptAlgo(const std::string& _encryptAlgo);

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                    /**
                     * 获取<p>密钥参数，RSA仅支持2048，4096。ECC仅支持prime256v1</p>
                     * @return KeyParameter <p>密钥参数，RSA仅支持2048，4096。ECC仅支持prime256v1</p>
                     * 
                     */
                    std::string GetKeyParameter() const;

                    /**
                     * 设置<p>密钥参数，RSA仅支持2048，4096。ECC仅支持prime256v1</p>
                     * @param _keyParameter <p>密钥参数，RSA仅支持2048，4096。ECC仅支持prime256v1</p>
                     * 
                     */
                    void SetKeyParameter(const std::string& _keyParameter);

                    /**
                     * 判断参数 KeyParameter 是否已赋值
                     * @return KeyParameter 是否已赋值
                     * 
                     */
                    bool KeyParameterHasBeenSet() const;

                    /**
                     * 获取<p>是否生成CSR内容。生成CSR内容后，此CSR记录不再支持修改</p>
                     * @return Generate <p>是否生成CSR内容。生成CSR内容后，此CSR记录不再支持修改</p>
                     * 
                     */
                    bool GetGenerate() const;

                    /**
                     * 设置<p>是否生成CSR内容。生成CSR内容后，此CSR记录不再支持修改</p>
                     * @param _generate <p>是否生成CSR内容。生成CSR内容后，此CSR记录不再支持修改</p>
                     * 
                     */
                    void SetGenerate(const bool& _generate);

                    /**
                     * 判断参数 Generate 是否已赋值
                     * @return Generate 是否已赋值
                     * 
                     */
                    bool GenerateHasBeenSet() const;

                    /**
                     * 获取<p>私钥密码</p>
                     * @return KeyPassword <p>私钥密码</p>
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 设置<p>私钥密码</p>
                     * @param _keyPassword <p>私钥密码</p>
                     * 
                     */
                    void SetKeyPassword(const std::string& _keyPassword);

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>SAN域名</p>
                     * @return SubjectAltName <p>SAN域名</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置<p>SAN域名</p>
                     * @param _subjectAltName <p>SAN域名</p>
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>企业/单位名称</p>
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * <p>部门</p>
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * <p>邮箱</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>省份</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>符合ISO 3166 标准的国家或地域代码。如:CN、US</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>加密算法，支持 RSA及ECC。</p>
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                    /**
                     * <p>密钥参数，RSA仅支持2048，4096。ECC仅支持prime256v1</p>
                     */
                    std::string m_keyParameter;
                    bool m_keyParameterHasBeenSet;

                    /**
                     * <p>是否生成CSR内容。生成CSR内容后，此CSR记录不再支持修改</p>
                     */
                    bool m_generate;
                    bool m_generateHasBeenSet;

                    /**
                     * <p>私钥密码</p>
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>SAN域名</p>
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECSRREQUEST_H_
