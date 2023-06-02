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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_

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
                * CreateCertificateByPackage请求参数结构体
                */
                class CreateCertificateByPackageRequest : public AbstractModel
                {
                public:
                    CreateCertificateByPackageRequest();
                    ~CreateCertificateByPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书产品PID。
                     * @return ProductPid 证书产品PID。
                     */
                    uint64_t GetProductPid() const;

                    /**
                     * 设置证书产品PID。
                     * @param ProductPid 证书产品PID。
                     */
                    void SetProductPid(const uint64_t& _productPid);

                    /**
                     * 判断参数 ProductPid 是否已赋值
                     * @return ProductPid 是否已赋值
                     */
                    bool ProductPidHasBeenSet() const;

                    /**
                     * 获取要消耗的权益包ID。
                     * @return PackageIds 要消耗的权益包ID。
                     */
                    std::vector<std::string> GetPackageIds() const;

                    /**
                     * 设置要消耗的权益包ID。
                     * @param PackageIds 要消耗的权益包ID。
                     */
                    void SetPackageIds(const std::vector<std::string>& _packageIds);

                    /**
                     * 判断参数 PackageIds 是否已赋值
                     * @return PackageIds 是否已赋值
                     */
                    bool PackageIdsHasBeenSet() const;

                    /**
                     * 获取证书域名数量。
                     * @return DomainCount 证书域名数量。
                     */
                    std::string GetDomainCount() const;

                    /**
                     * 设置证书域名数量。
                     * @param DomainCount 证书域名数量。
                     */
                    void SetDomainCount(const std::string& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取多年期证书年限。
                     * @return Period 多年期证书年限。
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置多年期证书年限。
                     * @param Period 多年期证书年限。
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取要续费的原证书ID（续费时填写）。
                     * @return OldCertificateId 要续费的原证书ID（续费时填写）。
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置要续费的原证书ID（续费时填写）。
                     * @param OldCertificateId 要续费的原证书ID（续费时填写）。
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取续费时CSR生成方式（original、upload、online）。
                     * @return RenewGenCsrMethod 续费时CSR生成方式（original、upload、online）。
                     */
                    std::string GetRenewGenCsrMethod() const;

                    /**
                     * 设置续费时CSR生成方式（original、upload、online）。
                     * @param RenewGenCsrMethod 续费时CSR生成方式（original、upload、online）。
                     */
                    void SetRenewGenCsrMethod(const std::string& _renewGenCsrMethod);

                    /**
                     * 判断参数 RenewGenCsrMethod 是否已赋值
                     * @return RenewGenCsrMethod 是否已赋值
                     */
                    bool RenewGenCsrMethodHasBeenSet() const;

                    /**
                     * 获取续费时选择上传CSR时填写CSR。
                     * @return RenewCsr 续费时选择上传CSR时填写CSR。
                     */
                    std::string GetRenewCsr() const;

                    /**
                     * 设置续费时选择上传CSR时填写CSR。
                     * @param RenewCsr 续费时选择上传CSR时填写CSR。
                     */
                    void SetRenewCsr(const std::string& _renewCsr);

                    /**
                     * 判断参数 RenewCsr 是否已赋值
                     * @return RenewCsr 是否已赋值
                     */
                    bool RenewCsrHasBeenSet() const;

                    /**
                     * 获取续费证书CSR的算法类型。
                     * @return RenewAlgorithmType 续费证书CSR的算法类型。
                     */
                    std::string GetRenewAlgorithmType() const;

                    /**
                     * 设置续费证书CSR的算法类型。
                     * @param RenewAlgorithmType 续费证书CSR的算法类型。
                     */
                    void SetRenewAlgorithmType(const std::string& _renewAlgorithmType);

                    /**
                     * 判断参数 RenewAlgorithmType 是否已赋值
                     * @return RenewAlgorithmType 是否已赋值
                     */
                    bool RenewAlgorithmTypeHasBeenSet() const;

                    /**
                     * 获取续费证书CSR的算法参数。
                     * @return RenewAlgorithmParam 续费证书CSR的算法参数。
                     */
                    std::string GetRenewAlgorithmParam() const;

                    /**
                     * 设置续费证书CSR的算法参数。
                     * @param RenewAlgorithmParam 续费证书CSR的算法参数。
                     */
                    void SetRenewAlgorithmParam(const std::string& _renewAlgorithmParam);

                    /**
                     * 判断参数 RenewAlgorithmParam 是否已赋值
                     * @return RenewAlgorithmParam 是否已赋值
                     */
                    bool RenewAlgorithmParamHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param ProjectId 项目ID。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签。
                     * @param Tags 标签。
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取续费证书的私钥密码。
                     * @return RenewKeyPass 续费证书的私钥密码。
                     */
                    std::string GetRenewKeyPass() const;

                    /**
                     * 设置续费证书的私钥密码。
                     * @param RenewKeyPass 续费证书的私钥密码。
                     */
                    void SetRenewKeyPass(const std::string& _renewKeyPass);

                    /**
                     * 判断参数 RenewKeyPass 是否已赋值
                     * @return RenewKeyPass 是否已赋值
                     */
                    bool RenewKeyPassHasBeenSet() const;

                    /**
                     * 获取批量购买证书时预填写的域名。
                     * @return DomainNames 批量购买证书时预填写的域名。
                     */
                    std::string GetDomainNames() const;

                    /**
                     * 设置批量购买证书时预填写的域名。
                     * @param DomainNames 批量购买证书时预填写的域名。
                     */
                    void SetDomainNames(const std::string& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取批量购买证书数量。
                     * @return CertificateCount 批量购买证书数量。
                     */
                    uint64_t GetCertificateCount() const;

                    /**
                     * 设置批量购买证书数量。
                     * @param CertificateCount 批量购买证书数量。
                     */
                    void SetCertificateCount(const uint64_t& _certificateCount);

                    /**
                     * 判断参数 CertificateCount 是否已赋值
                     * @return CertificateCount 是否已赋值
                     */
                    bool CertificateCountHasBeenSet() const;

                    /**
                     * 获取预填写的管理人ID。
                     * @return ManagerId 预填写的管理人ID。
                     */
                    uint64_t GetManagerId() const;

                    /**
                     * 设置预填写的管理人ID。
                     * @param ManagerId 预填写的管理人ID。
                     */
                    void SetManagerId(const uint64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取预填写的公司ID。
                     * @return CompanyId 预填写的公司ID。
                     */
                    uint64_t GetCompanyId() const;

                    /**
                     * 设置预填写的公司ID。
                     * @param CompanyId 预填写的公司ID。
                     */
                    void SetCompanyId(const uint64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取验证方式
                     * @return VerifyType 验证方式
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证方式
                     * @param VerifyType 验证方式
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * 证书产品PID。
                     */
                    uint64_t m_productPid;
                    bool m_productPidHasBeenSet;

                    /**
                     * 要消耗的权益包ID。
                     */
                    std::vector<std::string> m_packageIds;
                    bool m_packageIdsHasBeenSet;

                    /**
                     * 证书域名数量。
                     */
                    std::string m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 多年期证书年限。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 要续费的原证书ID（续费时填写）。
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 续费时CSR生成方式（original、upload、online）。
                     */
                    std::string m_renewGenCsrMethod;
                    bool m_renewGenCsrMethodHasBeenSet;

                    /**
                     * 续费时选择上传CSR时填写CSR。
                     */
                    std::string m_renewCsr;
                    bool m_renewCsrHasBeenSet;

                    /**
                     * 续费证书CSR的算法类型。
                     */
                    std::string m_renewAlgorithmType;
                    bool m_renewAlgorithmTypeHasBeenSet;

                    /**
                     * 续费证书CSR的算法参数。
                     */
                    std::string m_renewAlgorithmParam;
                    bool m_renewAlgorithmParamHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 续费证书的私钥密码。
                     */
                    std::string m_renewKeyPass;
                    bool m_renewKeyPassHasBeenSet;

                    /**
                     * 批量购买证书时预填写的域名。
                     */
                    std::string m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 批量购买证书数量。
                     */
                    uint64_t m_certificateCount;
                    bool m_certificateCountHasBeenSet;

                    /**
                     * 预填写的管理人ID。
                     */
                    uint64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 预填写的公司ID。
                     */
                    uint64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 验证方式
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_
