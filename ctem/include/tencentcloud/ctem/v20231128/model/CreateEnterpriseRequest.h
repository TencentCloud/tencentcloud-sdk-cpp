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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEENTERPRISEREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEENTERPRISEREQUEST_H_

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
                * CreateEnterprise请求参数结构体
                */
                class CreateEnterpriseRequest : public AbstractModel
                {
                public:
                    CreateEnterpriseRequest();
                    ~CreateEnterpriseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取上一级企业
                     * @return ParentEnterpriseUid 上一级企业
                     * 
                     */
                    std::string GetParentEnterpriseUid() const;

                    /**
                     * 设置上一级企业
                     * @param _parentEnterpriseUid 上一级企业
                     * 
                     */
                    void SetParentEnterpriseUid(const std::string& _parentEnterpriseUid);

                    /**
                     * 判断参数 ParentEnterpriseUid 是否已赋值
                     * @return ParentEnterpriseUid 是否已赋值
                     * 
                     */
                    bool ParentEnterpriseUidHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return CreditCode 统一社会信用代码
                     * 
                     */
                    std::string GetCreditCode() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _creditCode 统一社会信用代码
                     * 
                     */
                    void SetCreditCode(const std::string& _creditCode);

                    /**
                     * 判断参数 CreditCode 是否已赋值
                     * @return CreditCode 是否已赋值
                     * 
                     */
                    bool CreditCodeHasBeenSet() const;

                    /**
                     * 获取企业状态:存续、已注销
                     * @return Status 企业状态:存续、已注销
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置企业状态:存续、已注销
                     * @param _status 企业状态:存续、已注销
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取注册资本（单位:元）
                     * @return RegisteredCapital 注册资本（单位:元）
                     * 
                     */
                    std::string GetRegisteredCapital() const;

                    /**
                     * 设置注册资本（单位:元）
                     * @param _registeredCapital 注册资本（单位:元）
                     * 
                     */
                    void SetRegisteredCapital(const std::string& _registeredCapital);

                    /**
                     * 判断参数 RegisteredCapital 是否已赋值
                     * @return RegisteredCapital 是否已赋值
                     * 
                     */
                    bool RegisteredCapitalHasBeenSet() const;

                    /**
                     * 获取持股比例
                     * @return ShareholdingRatio 持股比例
                     * 
                     */
                    std::string GetShareholdingRatio() const;

                    /**
                     * 设置持股比例
                     * @param _shareholdingRatio 持股比例
                     * 
                     */
                    void SetShareholdingRatio(const std::string& _shareholdingRatio);

                    /**
                     * 判断参数 ShareholdingRatio 是否已赋值
                     * @return ShareholdingRatio 是否已赋值
                     * 
                     */
                    bool ShareholdingRatioHasBeenSet() const;

                    /**
                     * 获取法人代表
                     * @return LegalPerson 法人代表
                     * 
                     */
                    std::string GetLegalPerson() const;

                    /**
                     * 设置法人代表
                     * @param _legalPerson 法人代表
                     * 
                     */
                    void SetLegalPerson(const std::string& _legalPerson);

                    /**
                     * 判断参数 LegalPerson 是否已赋值
                     * @return LegalPerson 是否已赋值
                     * 
                     */
                    bool LegalPersonHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取行业类型
                     * @return Industry 行业类型
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置行业类型
                     * @param _industry 行业类型
                     * 
                     */
                    void SetIndustry(const std::string& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                    /**
                     * 获取子公司ID
                     * @return EnterpriseUid 子公司ID
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司ID
                     * @param _enterpriseUid 子公司ID
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
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 上一级企业
                     */
                    std::string m_parentEnterpriseUid;
                    bool m_parentEnterpriseUidHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * 企业状态:存续、已注销
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 注册资本（单位:元）
                     */
                    std::string m_registeredCapital;
                    bool m_registeredCapitalHasBeenSet;

                    /**
                     * 持股比例
                     */
                    std::string m_shareholdingRatio;
                    bool m_shareholdingRatioHasBeenSet;

                    /**
                     * 法人代表
                     */
                    std::string m_legalPerson;
                    bool m_legalPersonHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 行业类型
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * 子公司ID
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEENTERPRISEREQUEST_H_
