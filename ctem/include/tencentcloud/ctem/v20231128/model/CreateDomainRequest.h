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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateDomain请求参数结构体
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业Id
                     * @return CustomerId 企业Id
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业Id
                     * @param _customerId 企业Id
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取主域名
                     * @return Domain 主域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置主域名
                     * @param _domain 主域名
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
                     * 获取ICP
                     * @return ICP ICP
                     * 
                     */
                    std::string GetICP() const;

                    /**
                     * 设置ICP
                     * @param _iCP ICP
                     * 
                     */
                    void SetICP(const std::string& _iCP);

                    /**
                     * 判断参数 ICP 是否已赋值
                     * @return ICP 是否已赋值
                     * 
                     */
                    bool ICPHasBeenSet() const;

                    /**
                     * 获取注册时间
                     * @return RegisteredTime 注册时间
                     * 
                     */
                    std::string GetRegisteredTime() const;

                    /**
                     * 设置注册时间
                     * @param _registeredTime 注册时间
                     * 
                     */
                    void SetRegisteredTime(const std::string& _registeredTime);

                    /**
                     * 判断参数 RegisteredTime 是否已赋值
                     * @return RegisteredTime 是否已赋值
                     * 
                     */
                    bool RegisteredTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpiredTime 过期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置过期时间
                     * @param _expiredTime 过期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取公司
                     * @return Company 公司
                     * 
                     */
                    std::string GetCompany() const;

                    /**
                     * 设置公司
                     * @param _company 公司
                     * 
                     */
                    void SetCompany(const std::string& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取子公司
                     * @return EnterpriseUid 子公司
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司
                     * @param _enterpriseUid 子公司
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                private:

                    /**
                     * 企业Id
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 主域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * ICP
                     */
                    std::string m_iCP;
                    bool m_iCPHasBeenSet;

                    /**
                     * 注册时间
                     */
                    std::string m_registeredTime;
                    bool m_registeredTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 公司
                     */
                    std::string m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * 子公司
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEDOMAINREQUEST_H_
