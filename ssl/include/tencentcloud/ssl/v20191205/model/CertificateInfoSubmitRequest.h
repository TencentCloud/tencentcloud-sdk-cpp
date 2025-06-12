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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CertificateInfoSubmit请求参数结构体
                */
                class CertificateInfoSubmitRequest : public AbstractModel
                {
                public:
                    CertificateInfoSubmitRequest();
                    ~CertificateInfoSubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待提交资料的付费证书 ID。	
                     * @return CertId 待提交资料的付费证书 ID。	
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置待提交资料的付费证书 ID。	
                     * @param _certId 待提交资料的付费证书 ID。	
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取此字段必传。 CSR 生成方式， 取值为：
- online：腾讯云提交的填写的参数信息生成CSR和私钥，并由腾讯云加密存储
- parse：自行生成CSR和私钥，并通过上传CSR申请证书
                     * @return GenCsrType 此字段必传。 CSR 生成方式， 取值为：
- online：腾讯云提交的填写的参数信息生成CSR和私钥，并由腾讯云加密存储
- parse：自行生成CSR和私钥，并通过上传CSR申请证书
                     * 
                     */
                    std::string GetGenCsrType() const;

                    /**
                     * 设置此字段必传。 CSR 生成方式， 取值为：
- online：腾讯云提交的填写的参数信息生成CSR和私钥，并由腾讯云加密存储
- parse：自行生成CSR和私钥，并通过上传CSR申请证书
                     * @param _genCsrType 此字段必传。 CSR 生成方式， 取值为：
- online：腾讯云提交的填写的参数信息生成CSR和私钥，并由腾讯云加密存储
- parse：自行生成CSR和私钥，并通过上传CSR申请证书
                     * 
                     */
                    void SetGenCsrType(const std::string& _genCsrType);

                    /**
                     * 判断参数 GenCsrType 是否已赋值
                     * @return GenCsrType 是否已赋值
                     * 
                     */
                    bool GenCsrTypeHasBeenSet() const;

                    /**
                     * 获取证书绑定的通用名称， 若是上传的CSR，则该域名需与CSR解析的通用名称一致
                     * @return CertCommonName 证书绑定的通用名称， 若是上传的CSR，则该域名需与CSR解析的通用名称一致
                     * 
                     */
                    std::string GetCertCommonName() const;

                    /**
                     * 设置证书绑定的通用名称， 若是上传的CSR，则该域名需与CSR解析的通用名称一致
                     * @param _certCommonName 证书绑定的通用名称， 若是上传的CSR，则该域名需与CSR解析的通用名称一致
                     * 
                     */
                    void SetCertCommonName(const std::string& _certCommonName);

                    /**
                     * 判断参数 CertCommonName 是否已赋值
                     * @return CertCommonName 是否已赋值
                     * 
                     */
                    bool CertCommonNameHasBeenSet() const;

                    /**
                     * 获取组织信息类型， 取值范围：
1（个人）：仅DV类型证书可设置为1， 个人类型证书组织信息字段可不传：Org开头，Admin开头，Tech开头
2（公司）：所有类型证书都可设置为2， 按需传组织信息字段
                     * @return CompanyType 组织信息类型， 取值范围：
1（个人）：仅DV类型证书可设置为1， 个人类型证书组织信息字段可不传：Org开头，Admin开头，Tech开头
2（公司）：所有类型证书都可设置为2， 按需传组织信息字段
                     * 
                     */
                    uint64_t GetCompanyType() const;

                    /**
                     * 设置组织信息类型， 取值范围：
1（个人）：仅DV类型证书可设置为1， 个人类型证书组织信息字段可不传：Org开头，Admin开头，Tech开头
2（公司）：所有类型证书都可设置为2， 按需传组织信息字段
                     * @param _companyType 组织信息类型， 取值范围：
1（个人）：仅DV类型证书可设置为1， 个人类型证书组织信息字段可不传：Org开头，Admin开头，Tech开头
2（公司）：所有类型证书都可设置为2， 按需传组织信息字段
                     * 
                     */
                    void SetCompanyType(const uint64_t& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取公司ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的公司信息， 则本参数传0 ； 若存在满足当前订单的公司信息， 可以根据 [DescribeCompanies](https://cloud.tencent.com/document/product/400/90375) 查看公司ID； 若传了公司ID，则Org开头的参数可不传


                     * @return CompanyId 公司ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的公司信息， 则本参数传0 ； 若存在满足当前订单的公司信息， 可以根据 [DescribeCompanies](https://cloud.tencent.com/document/product/400/90375) 查看公司ID； 若传了公司ID，则Org开头的参数可不传


                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置公司ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的公司信息， 则本参数传0 ； 若存在满足当前订单的公司信息， 可以根据 [DescribeCompanies](https://cloud.tencent.com/document/product/400/90375) 查看公司ID； 若传了公司ID，则Org开头的参数可不传


                     * @param _companyId 公司ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的公司信息， 则本参数传0 ； 若存在满足当前订单的公司信息， 可以根据 [DescribeCompanies](https://cloud.tencent.com/document/product/400/90375) 查看公司ID； 若传了公司ID，则Org开头的参数可不传


                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * @return OrgIdType 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * 
                     */
                    std::string GetOrgIdType() const;

                    /**
                     * 设置公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * @param _orgIdType 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     * 
                     */
                    void SetOrgIdType(const std::string& _orgIdType);

                    /**
                     * 判断参数 OrgIdType 是否已赋值
                     * @return OrgIdType 是否已赋值
                     * 
                     */
                    bool OrgIdTypeHasBeenSet() const;

                    /**
                     * 获取公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820

                     * @return OrgIdNumber 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820

                     * 
                     */
                    std::string GetOrgIdNumber() const;

                    /**
                     * 设置公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820

                     * @param _orgIdNumber 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820

                     * 
                     */
                    void SetOrgIdNumber(const std::string& _orgIdNumber);

                    /**
                     * 判断参数 OrgIdNumber 是否已赋值
                     * @return OrgIdNumber 是否已赋值
                     * 
                     */
                    bool OrgIdNumberHasBeenSet() const;

                    /**
                     * 获取管理人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * @return AdminIdType 管理人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * 
                     */
                    std::string GetAdminIdType() const;

                    /**
                     * 设置管理人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * @param _adminIdType 管理人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * 
                     */
                    void SetAdminIdType(const std::string& _adminIdType);

                    /**
                     * 判断参数 AdminIdType 是否已赋值
                     * @return AdminIdType 是否已赋值
                     * 
                     */
                    bool AdminIdTypeHasBeenSet() const;

                    /**
                     * 获取管理人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段， 取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * @return AdminIdNumber 管理人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段， 取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * 
                     */
                    std::string GetAdminIdNumber() const;

                    /**
                     * 设置管理人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段， 取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * @param _adminIdNumber 管理人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段， 取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * 
                     */
                    void SetAdminIdNumber(const std::string& _adminIdNumber);

                    /**
                     * 判断参数 AdminIdNumber 是否已赋值
                     * @return AdminIdNumber 是否已赋值
                     * 
                     */
                    bool AdminIdNumberHasBeenSet() const;

                    /**
                     * 获取联系人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * @return TechIdType 联系人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * 
                     */
                    std::string GetTechIdType() const;

                    /**
                     * 设置联系人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * @param _techIdType 联系人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     * 
                     */
                    void SetTechIdType(const std::string& _techIdType);

                    /**
                     * 判断参数 TechIdType 是否已赋值
                     * @return TechIdType 是否已赋值
                     * 
                     */
                    bool TechIdTypeHasBeenSet() const;

                    /**
                     * 获取联系人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段，取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * @return TechIdNumber 联系人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段，取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * 
                     */
                    std::string GetTechIdNumber() const;

                    /**
                     * 设置联系人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段，取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * @param _techIdNumber 联系人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段，取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     * 
                     */
                    void SetTechIdNumber(const std::string& _techIdNumber);

                    /**
                     * 判断参数 TechIdNumber 是否已赋值
                     * @return TechIdNumber 是否已赋值
                     * 
                     */
                    bool TechIdNumberHasBeenSet() const;

                    /**
                     * 获取上传的 CSR 内容。
若GenCsrType为parse， 则此字段必传。
                     * @return Csr 上传的 CSR 内容。
若GenCsrType为parse， 则此字段必传。
                     * 
                     */
                    std::string GetCsr() const;

                    /**
                     * 设置上传的 CSR 内容。
若GenCsrType为parse， 则此字段必传。
                     * @param _csr 上传的 CSR 内容。
若GenCsrType为parse， 则此字段必传。
                     * 
                     */
                    void SetCsr(const std::string& _csr);

                    /**
                     * 判断参数 Csr 是否已赋值
                     * @return Csr 是否已赋值
                     * 
                     */
                    bool CsrHasBeenSet() const;

                    /**
                     * 获取证书绑定的其他域名， 单域名、泛域名证书无需提供。 多域名、多泛域名必填
                     * @return DnsNames 证书绑定的其他域名， 单域名、泛域名证书无需提供。 多域名、多泛域名必填
                     * 
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置证书绑定的其他域名， 单域名、泛域名证书无需提供。 多域名、多泛域名必填
                     * @param _dnsNames 证书绑定的其他域名， 单域名、泛域名证书无需提供。 多域名、多泛域名必填
                     * 
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     * 
                     */
                    bool DnsNamesHasBeenSet() const;

                    /**
                     * 获取私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密	
                     * @return KeyPass 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密	
                     * 
                     */
                    std::string GetKeyPass() const;

                    /**
                     * 设置私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密	
                     * @param _keyPass 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密	
                     * 
                     */
                    void SetKeyPass(const std::string& _keyPass);

                    /**
                     * 判断参数 KeyPass 是否已赋值
                     * @return KeyPass 是否已赋值
                     * 
                     */
                    bool KeyPassHasBeenSet() const;

                    /**
                     * 获取公司名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgOrganization 公司名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgOrganization() const;

                    /**
                     * 设置公司名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgOrganization 公司名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgOrganization(const std::string& _orgOrganization);

                    /**
                     * 判断参数 OrgOrganization 是否已赋值
                     * @return OrgOrganization 是否已赋值
                     * 
                     */
                    bool OrgOrganizationHasBeenSet() const;

                    /**
                     * 获取部门名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgDivision 部门名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgDivision() const;

                    /**
                     * 设置部门名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgDivision 部门名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgDivision(const std::string& _orgDivision);

                    /**
                     * 判断参数 OrgDivision 是否已赋值
                     * @return OrgDivision 是否已赋值
                     * 
                     */
                    bool OrgDivisionHasBeenSet() const;

                    /**
                     * 获取公司详细地址。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgAddress 公司详细地址。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgAddress() const;

                    /**
                     * 设置公司详细地址。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgAddress 公司详细地址。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgAddress(const std::string& _orgAddress);

                    /**
                     * 判断参数 OrgAddress 是否已赋值
                     * @return OrgAddress 是否已赋值
                     * 
                     */
                    bool OrgAddressHasBeenSet() const;

                    /**
                     * 获取国家名称，如中国：CN 。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgCountry 国家名称，如中国：CN 。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgCountry() const;

                    /**
                     * 设置国家名称，如中国：CN 。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgCountry 国家名称，如中国：CN 。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgCountry(const std::string& _orgCountry);

                    /**
                     * 判断参数 OrgCountry 是否已赋值
                     * @return OrgCountry 是否已赋值
                     * 
                     */
                    bool OrgCountryHasBeenSet() const;

                    /**
                     * 获取公司所在城市。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgCity 公司所在城市。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgCity() const;

                    /**
                     * 设置公司所在城市。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgCity 公司所在城市。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgCity(const std::string& _orgCity);

                    /**
                     * 判断参数 OrgCity 是否已赋值
                     * @return OrgCity 是否已赋值
                     * 
                     */
                    bool OrgCityHasBeenSet() const;

                    /**
                     * 获取公司所在省份。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgRegion 公司所在省份。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgRegion() const;

                    /**
                     * 设置公司所在省份。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgRegion 公司所在省份。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgRegion(const std::string& _orgRegion);

                    /**
                     * 判断参数 OrgRegion 是否已赋值
                     * @return OrgRegion 是否已赋值
                     * 
                     */
                    bool OrgRegionHasBeenSet() const;

                    /**
                     * 获取公司所属区号。若没有传CompanyId或者ManagerId， 则此字段必传
如：021。  手机号码传 86
                     * @return OrgPhoneArea 公司所属区号。若没有传CompanyId或者ManagerId， 则此字段必传
如：021。  手机号码传 86
                     * 
                     */
                    std::string GetOrgPhoneArea() const;

                    /**
                     * 设置公司所属区号。若没有传CompanyId或者ManagerId， 则此字段必传
如：021。  手机号码传 86
                     * @param _orgPhoneArea 公司所属区号。若没有传CompanyId或者ManagerId， 则此字段必传
如：021。  手机号码传 86
                     * 
                     */
                    void SetOrgPhoneArea(const std::string& _orgPhoneArea);

                    /**
                     * 判断参数 OrgPhoneArea 是否已赋值
                     * @return OrgPhoneArea 是否已赋值
                     * 
                     */
                    bool OrgPhoneAreaHasBeenSet() const;

                    /**
                     * 获取公司所属号码。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @return OrgPhoneNumber 公司所属号码。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetOrgPhoneNumber() const;

                    /**
                     * 设置公司所属号码。若没有传CompanyId或者ManagerId， 则此字段必传
                     * @param _orgPhoneNumber 公司所属号码。若没有传CompanyId或者ManagerId， 则此字段必传
                     * 
                     */
                    void SetOrgPhoneNumber(const std::string& _orgPhoneNumber);

                    /**
                     * 判断参数 OrgPhoneNumber 是否已赋值
                     * @return OrgPhoneNumber 是否已赋值
                     * 
                     */
                    bool OrgPhoneNumberHasBeenSet() const;

                    /**
                     * 获取证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * @return VerifyType 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * @param _verifyType 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取管理人名。若没有传ManagerId， 则此字段必传
                     * @return AdminFirstName 管理人名。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetAdminFirstName() const;

                    /**
                     * 设置管理人名。若没有传ManagerId， 则此字段必传
                     * @param _adminFirstName 管理人名。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetAdminFirstName(const std::string& _adminFirstName);

                    /**
                     * 判断参数 AdminFirstName 是否已赋值
                     * @return AdminFirstName 是否已赋值
                     * 
                     */
                    bool AdminFirstNameHasBeenSet() const;

                    /**
                     * 获取管理人姓。若没有传ManagerId， 则此字段必传
                     * @return AdminLastName 管理人姓。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetAdminLastName() const;

                    /**
                     * 设置管理人姓。若没有传ManagerId， 则此字段必传
                     * @param _adminLastName 管理人姓。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetAdminLastName(const std::string& _adminLastName);

                    /**
                     * 判断参数 AdminLastName 是否已赋值
                     * @return AdminLastName 是否已赋值
                     * 
                     */
                    bool AdminLastNameHasBeenSet() const;

                    /**
                     * 获取管理人手机号码。若没有传ManagerId， 则此字段必传
                     * @return AdminPhone 管理人手机号码。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetAdminPhone() const;

                    /**
                     * 设置管理人手机号码。若没有传ManagerId， 则此字段必传
                     * @param _adminPhone 管理人手机号码。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetAdminPhone(const std::string& _adminPhone);

                    /**
                     * 判断参数 AdminPhone 是否已赋值
                     * @return AdminPhone 是否已赋值
                     * 
                     */
                    bool AdminPhoneHasBeenSet() const;

                    /**
                     * 获取管理人邮箱地址。若没有传ManagerId， 则此字段必传
                     * @return AdminEmail 管理人邮箱地址。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetAdminEmail() const;

                    /**
                     * 设置管理人邮箱地址。若没有传ManagerId， 则此字段必传
                     * @param _adminEmail 管理人邮箱地址。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetAdminEmail(const std::string& _adminEmail);

                    /**
                     * 判断参数 AdminEmail 是否已赋值
                     * @return AdminEmail 是否已赋值
                     * 
                     */
                    bool AdminEmailHasBeenSet() const;

                    /**
                     * 获取管理人职位。若没有传ManagerId， 则此字段必传
                     * @return AdminTitle 管理人职位。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetAdminTitle() const;

                    /**
                     * 设置管理人职位。若没有传ManagerId， 则此字段必传
                     * @param _adminTitle 管理人职位。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetAdminTitle(const std::string& _adminTitle);

                    /**
                     * 判断参数 AdminTitle 是否已赋值
                     * @return AdminTitle 是否已赋值
                     * 
                     */
                    bool AdminTitleHasBeenSet() const;

                    /**
                     * 获取联系人名。若没有传ManagerId， 则此字段必传
                     * @return TechFirstName 联系人名。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetTechFirstName() const;

                    /**
                     * 设置联系人名。若没有传ManagerId， 则此字段必传
                     * @param _techFirstName 联系人名。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetTechFirstName(const std::string& _techFirstName);

                    /**
                     * 判断参数 TechFirstName 是否已赋值
                     * @return TechFirstName 是否已赋值
                     * 
                     */
                    bool TechFirstNameHasBeenSet() const;

                    /**
                     * 获取联系人姓。若没有传ManagerId， 则此字段必传
                     * @return TechLastName 联系人姓。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetTechLastName() const;

                    /**
                     * 设置联系人姓。若没有传ManagerId， 则此字段必传
                     * @param _techLastName 联系人姓。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetTechLastName(const std::string& _techLastName);

                    /**
                     * 判断参数 TechLastName 是否已赋值
                     * @return TechLastName 是否已赋值
                     * 
                     */
                    bool TechLastNameHasBeenSet() const;

                    /**
                     * 获取联系人邮箱地址。CompanyType为1时， 此字段必传
                     * @return ContactEmail 联系人邮箱地址。CompanyType为1时， 此字段必传
                     * 
                     */
                    std::string GetContactEmail() const;

                    /**
                     * 设置联系人邮箱地址。CompanyType为1时， 此字段必传
                     * @param _contactEmail 联系人邮箱地址。CompanyType为1时， 此字段必传
                     * 
                     */
                    void SetContactEmail(const std::string& _contactEmail);

                    /**
                     * 判断参数 ContactEmail 是否已赋值
                     * @return ContactEmail 是否已赋值
                     * 
                     */
                    bool ContactEmailHasBeenSet() const;

                    /**
                     * 获取是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * @return AutoRenewFlag 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * @param _autoRenewFlag 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取密钥对参数，RSA支持2048，4096。ECC仅支持prime256v1。当 CSR 生成方式为online的时候，此参数必填。

                     * @return CsrKeyParameter 密钥对参数，RSA支持2048，4096。ECC仅支持prime256v1。当 CSR 生成方式为online的时候，此参数必填。

                     * 
                     */
                    std::string GetCsrKeyParameter() const;

                    /**
                     * 设置密钥对参数，RSA支持2048，4096。ECC仅支持prime256v1。当 CSR 生成方式为online的时候，此参数必填。

                     * @param _csrKeyParameter 密钥对参数，RSA支持2048，4096。ECC仅支持prime256v1。当 CSR 生成方式为online的时候，此参数必填。

                     * 
                     */
                    void SetCsrKeyParameter(const std::string& _csrKeyParameter);

                    /**
                     * 判断参数 CsrKeyParameter 是否已赋值
                     * @return CsrKeyParameter 是否已赋值
                     * 
                     */
                    bool CsrKeyParameterHasBeenSet() const;

                    /**
                     * 获取加密算法，取值为ECC、RSA， 默认为RSA。当 CSR 生成方式为online的时候，此参数必填。
                     * @return CsrEncryptAlgo 加密算法，取值为ECC、RSA， 默认为RSA。当 CSR 生成方式为online的时候，此参数必填。
                     * 
                     */
                    std::string GetCsrEncryptAlgo() const;

                    /**
                     * 设置加密算法，取值为ECC、RSA， 默认为RSA。当 CSR 生成方式为online的时候，此参数必填。
                     * @param _csrEncryptAlgo 加密算法，取值为ECC、RSA， 默认为RSA。当 CSR 生成方式为online的时候，此参数必填。
                     * 
                     */
                    void SetCsrEncryptAlgo(const std::string& _csrEncryptAlgo);

                    /**
                     * 判断参数 CsrEncryptAlgo 是否已赋值
                     * @return CsrEncryptAlgo 是否已赋值
                     * 
                     */
                    bool CsrEncryptAlgoHasBeenSet() const;

                    /**
                     * 获取管理人ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的管理人信息， 则本参数传0 ； 若存在满足当前订单的管理人信息， 可以根据 [DescribeManagers](https://cloud.tencent.com/document/product/400/52672) 查看管理人ID； 若传了管理人ID，则Org开头、Admin开头、Tech开头的参数可不传； 管理人ID会包含公司信息

                     * @return ManagerId 管理人ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的管理人信息， 则本参数传0 ； 若存在满足当前订单的管理人信息， 可以根据 [DescribeManagers](https://cloud.tencent.com/document/product/400/52672) 查看管理人ID； 若传了管理人ID，则Org开头、Admin开头、Tech开头的参数可不传； 管理人ID会包含公司信息

                     * 
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置管理人ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的管理人信息， 则本参数传0 ； 若存在满足当前订单的管理人信息， 可以根据 [DescribeManagers](https://cloud.tencent.com/document/product/400/52672) 查看管理人ID； 若传了管理人ID，则Org开头、Admin开头、Tech开头的参数可不传； 管理人ID会包含公司信息

                     * @param _managerId 管理人ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的管理人信息， 则本参数传0 ； 若存在满足当前订单的管理人信息， 可以根据 [DescribeManagers](https://cloud.tencent.com/document/product/400/52672) 查看管理人ID； 若传了管理人ID，则Org开头、Admin开头、Tech开头的参数可不传； 管理人ID会包含公司信息

                     * 
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取联系人电话。若没有传ManagerId， 则此字段必传
                     * @return TechPhone 联系人电话。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetTechPhone() const;

                    /**
                     * 设置联系人电话。若没有传ManagerId， 则此字段必传
                     * @param _techPhone 联系人电话。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetTechPhone(const std::string& _techPhone);

                    /**
                     * 判断参数 TechPhone 是否已赋值
                     * @return TechPhone 是否已赋值
                     * 
                     */
                    bool TechPhoneHasBeenSet() const;

                    /**
                     * 获取联系人邮箱
                     * @return TechEmail 联系人邮箱
                     * 
                     */
                    std::string GetTechEmail() const;

                    /**
                     * 设置联系人邮箱
                     * @param _techEmail 联系人邮箱
                     * 
                     */
                    void SetTechEmail(const std::string& _techEmail);

                    /**
                     * 判断参数 TechEmail 是否已赋值
                     * @return TechEmail 是否已赋值
                     * 
                     */
                    bool TechEmailHasBeenSet() const;

                    /**
                     * 获取联系人职位。若没有传ManagerId， 则此字段必传
                     * @return TechTitle 联系人职位。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    std::string GetTechTitle() const;

                    /**
                     * 设置联系人职位。若没有传ManagerId， 则此字段必传
                     * @param _techTitle 联系人职位。若没有传ManagerId， 则此字段必传
                     * 
                     */
                    void SetTechTitle(const std::string& _techTitle);

                    /**
                     * 判断参数 TechTitle 是否已赋值
                     * @return TechTitle 是否已赋值
                     * 
                     */
                    bool TechTitleHasBeenSet() const;

                    /**
                     * 获取证书类型
                     * @return Type 证书类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置证书类型
                     * @param _type 证书类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取只针对Dnspod系列证书有效，ca机构类型可为sectigo和digicert
                     * @return CaType 只针对Dnspod系列证书有效，ca机构类型可为sectigo和digicert
                     * 
                     */
                    std::string GetCaType() const;

                    /**
                     * 设置只针对Dnspod系列证书有效，ca机构类型可为sectigo和digicert
                     * @param _caType 只针对Dnspod系列证书有效，ca机构类型可为sectigo和digicert
                     * 
                     */
                    void SetCaType(const std::string& _caType);

                    /**
                     * 判断参数 CaType 是否已赋值
                     * @return CaType 是否已赋值
                     * 
                     */
                    bool CaTypeHasBeenSet() const;

                private:

                    /**
                     * 待提交资料的付费证书 ID。	
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 此字段必传。 CSR 生成方式， 取值为：
- online：腾讯云提交的填写的参数信息生成CSR和私钥，并由腾讯云加密存储
- parse：自行生成CSR和私钥，并通过上传CSR申请证书
                     */
                    std::string m_genCsrType;
                    bool m_genCsrTypeHasBeenSet;

                    /**
                     * 证书绑定的通用名称， 若是上传的CSR，则该域名需与CSR解析的通用名称一致
                     */
                    std::string m_certCommonName;
                    bool m_certCommonNameHasBeenSet;

                    /**
                     * 组织信息类型， 取值范围：
1（个人）：仅DV类型证书可设置为1， 个人类型证书组织信息字段可不传：Org开头，Admin开头，Tech开头
2（公司）：所有类型证书都可设置为2， 按需传组织信息字段
                     */
                    uint64_t m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * 公司ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的公司信息， 则本参数传0 ； 若存在满足当前订单的公司信息， 可以根据 [DescribeCompanies](https://cloud.tencent.com/document/product/400/90375) 查看公司ID； 若传了公司ID，则Org开头的参数可不传


                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 公司证件类型，取值范围：
TYDMZ（统一社会信用代码 ）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
OTHERS（其他）
                     */
                    std::string m_orgIdType;
                    bool m_orgIdTypeHasBeenSet;

                    /**
                     * 公司证件号码，取值范围：
TYDMZ（统一社会信用代码 ）：11532xxxxxxxx24820

                     */
                    std::string m_orgIdNumber;
                    bool m_orgIdNumberHasBeenSet;

                    /**
                     * 管理人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     */
                    std::string m_adminIdType;
                    bool m_adminIdTypeHasBeenSet;

                    /**
                     * 管理人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段， 取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     */
                    std::string m_adminIdNumber;
                    bool m_adminIdNumberHasBeenSet;

                    /**
                     * 联系人证件类型，取值范围：
SFZ（身份证）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
HZ（护照）：仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段
                     */
                    std::string m_techIdType;
                    bool m_techIdTypeHasBeenSet;

                    /**
                     * 联系人证件号码，仅CFCA类型证书需要使用本字段， 其他类型证书不需要使用本字段，取值范围：
SFZ（身份证）：110000xxxxxxxx1242
HZ（护照）:EFxxxxxxx
                     */
                    std::string m_techIdNumber;
                    bool m_techIdNumberHasBeenSet;

                    /**
                     * 上传的 CSR 内容。
若GenCsrType为parse， 则此字段必传。
                     */
                    std::string m_csr;
                    bool m_csrHasBeenSet;

                    /**
                     * 证书绑定的其他域名， 单域名、泛域名证书无需提供。 多域名、多泛域名必填
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                    /**
                     * 私钥密码， 目前仅使用在生成jks、pfx格式证书时密码； 其他格式私钥证书未加密	
                     */
                    std::string m_keyPass;
                    bool m_keyPassHasBeenSet;

                    /**
                     * 公司名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgOrganization;
                    bool m_orgOrganizationHasBeenSet;

                    /**
                     * 部门名称。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgDivision;
                    bool m_orgDivisionHasBeenSet;

                    /**
                     * 公司详细地址。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgAddress;
                    bool m_orgAddressHasBeenSet;

                    /**
                     * 国家名称，如中国：CN 。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgCountry;
                    bool m_orgCountryHasBeenSet;

                    /**
                     * 公司所在城市。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgCity;
                    bool m_orgCityHasBeenSet;

                    /**
                     * 公司所在省份。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgRegion;
                    bool m_orgRegionHasBeenSet;

                    /**
                     * 公司所属区号。若没有传CompanyId或者ManagerId， 则此字段必传
如：021。  手机号码传 86
                     */
                    std::string m_orgPhoneArea;
                    bool m_orgPhoneAreaHasBeenSet;

                    /**
                     * 公司所属号码。若没有传CompanyId或者ManagerId， 则此字段必传
                     */
                    std::string m_orgPhoneNumber;
                    bool m_orgPhoneNumberHasBeenSet;

                    /**
                     * 证书域名验证方式：
DNS_AUTO： 自动添加域名DNS验证， 需用户域名解析托管在『[云解析DNS](https://console.cloud.tencent.com/cns)』，且与申请证书归属同一个腾讯云账号
DNS：手动添加域名DNS验证，需用户手动去域名解析服务商添加验证值
FILE：手动添加域名文件验证。 需要用户手动在域名站点根目录添加指定路径文件进行文件验证， http&https任一通过即可；且域名站点需海外CA机构能访问， 具体访问白名单为：64.78.193.238，216.168.247.9，216.168.249.9，54.189.196.217
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 管理人名。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_adminFirstName;
                    bool m_adminFirstNameHasBeenSet;

                    /**
                     * 管理人姓。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_adminLastName;
                    bool m_adminLastNameHasBeenSet;

                    /**
                     * 管理人手机号码。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_adminPhone;
                    bool m_adminPhoneHasBeenSet;

                    /**
                     * 管理人邮箱地址。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_adminEmail;
                    bool m_adminEmailHasBeenSet;

                    /**
                     * 管理人职位。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_adminTitle;
                    bool m_adminTitleHasBeenSet;

                    /**
                     * 联系人名。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_techFirstName;
                    bool m_techFirstNameHasBeenSet;

                    /**
                     * 联系人姓。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_techLastName;
                    bool m_techLastNameHasBeenSet;

                    /**
                     * 联系人邮箱地址。CompanyType为1时， 此字段必传
                     */
                    std::string m_contactEmail;
                    bool m_contactEmailHasBeenSet;

                    /**
                     * 是否开启自动续费： 0， 不开启；  1， 开启； 默认为0
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 密钥对参数，RSA支持2048，4096。ECC仅支持prime256v1。当 CSR 生成方式为online的时候，此参数必填。

                     */
                    std::string m_csrKeyParameter;
                    bool m_csrKeyParameterHasBeenSet;

                    /**
                     * 加密算法，取值为ECC、RSA， 默认为RSA。当 CSR 生成方式为online的时候，此参数必填。
                     */
                    std::string m_csrEncryptAlgo;
                    bool m_csrEncryptAlgoHasBeenSet;

                    /**
                     * 管理人ID，在 [腾讯云控制台](https://console.cloud.tencent.com/ssl/info) 可进行查看，若无满足的管理人信息， 则本参数传0 ； 若存在满足当前订单的管理人信息， 可以根据 [DescribeManagers](https://cloud.tencent.com/document/product/400/52672) 查看管理人ID； 若传了管理人ID，则Org开头、Admin开头、Tech开头的参数可不传； 管理人ID会包含公司信息

                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 联系人电话。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_techPhone;
                    bool m_techPhoneHasBeenSet;

                    /**
                     * 联系人邮箱
                     */
                    std::string m_techEmail;
                    bool m_techEmailHasBeenSet;

                    /**
                     * 联系人职位。若没有传ManagerId， 则此字段必传
                     */
                    std::string m_techTitle;
                    bool m_techTitleHasBeenSet;

                    /**
                     * 证书类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 只针对Dnspod系列证书有效，ca机构类型可为sectigo和digicert
                     */
                    std::string m_caType;
                    bool m_caTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEINFOSUBMITREQUEST_H_
