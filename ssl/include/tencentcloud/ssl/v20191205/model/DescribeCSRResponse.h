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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_

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
                * DescribeCSR返回参数结构体
                */
                class DescribeCSRResponse : public AbstractModel
                {
                public:
                    DescribeCSRResponse();
                    ~DescribeCSRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CSR Id标识</p>
                     * @return Id <p>CSR Id标识</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return OwnerUin <p>账号</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

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
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>国家</p>
                     * @return Country <p>国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>密钥算法</p>
                     * @return EncryptAlgo <p>密钥算法</p>
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                    /**
                     * 获取<p>算法参数</p>
                     * @return KeyParameter <p>算法参数</p>
                     * 
                     */
                    std::string GetKeyParameter() const;

                    /**
                     * 判断参数 KeyParameter 是否已赋值
                     * @return KeyParameter 是否已赋值
                     * 
                     */
                    bool KeyParameterHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remarks <p>备注</p>
                     * 
                     */
                    std::string GetRemarks() const;

                    /**
                     * 判断参数 Remarks 是否已赋值
                     * @return Remarks 是否已赋值
                     * 
                     */
                    bool RemarksHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>私钥密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyPassword <p>私钥密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyPassword() const;

                    /**
                     * 判断参数 KeyPassword 是否已赋值
                     * @return KeyPassword 是否已赋值
                     * 
                     */
                    bool KeyPasswordHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>CSR内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CSR <p>CSR内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCSR() const;

                    /**
                     * 判断参数 CSR 是否已赋值
                     * @return CSR 是否已赋值
                     * 
                     */
                    bool CSRHasBeenSet() const;

                    /**
                     * 获取<p>私钥内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateKey <p>私钥内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取<p>SAN域名</p>
                     * @return SubjectAltName <p>SAN域名</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                private:

                    /**
                     * <p>CSR Id标识</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

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
                     * <p>国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>密钥算法</p>
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                    /**
                     * <p>算法参数</p>
                     */
                    std::string m_keyParameter;
                    bool m_keyParameterHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remarks;
                    bool m_remarksHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>私钥密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyPassword;
                    bool m_keyPasswordHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>CSR内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cSR;
                    bool m_cSRHasBeenSet;

                    /**
                     * <p>私钥内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

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

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECSRRESPONSE_H_
