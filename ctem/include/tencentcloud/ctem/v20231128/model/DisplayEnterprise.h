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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYENTERPRISE_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYENTERPRISE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 企业架构详情
                */
                class DisplayEnterprise : public AbstractModel
                {
                public:
                    DisplayEnterprise();
                    ~DisplayEnterprise() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键Id
                     * @return Id 主键Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键Id
                     * @param _id 主键Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取子公司上级
                     * @return ParentEnterpriseUid 子公司上级
                     * 
                     */
                    std::string GetParentEnterpriseUid() const;

                    /**
                     * 设置子公司上级
                     * @param _parentEnterpriseUid 子公司上级
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
                     * 获取企业名称
                     * @return Name 企业名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业名称
                     * @param _name 企业名称
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
                     * 获取公司简称
                     * @return Abbreviation 公司简称
                     * 
                     */
                    std::string GetAbbreviation() const;

                    /**
                     * 设置公司简称
                     * @param _abbreviation 公司简称
                     * 
                     */
                    void SetAbbreviation(const std::string& _abbreviation);

                    /**
                     * 判断参数 Abbreviation 是否已赋值
                     * @return Abbreviation 是否已赋值
                     * 
                     */
                    bool AbbreviationHasBeenSet() const;

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
                     * 获取企业状态
                     * @return Status 企业状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置企业状态
                     * @param _status 企业状态
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
                     * 获取注册资本
                     * @return RegisteredCapital 注册资本
                     * 
                     */
                    std::string GetRegisteredCapital() const;

                    /**
                     * 设置注册资本
                     * @param _registeredCapital 注册资本
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
                     * 获取子公司唯一uid
                     * @return EnterpriseUid 子公司唯一uid
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司唯一uid
                     * @param _enterpriseUid 子公司唯一uid
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取主域名数量
                     * @return DomainCount 主域名数量
                     * 
                     */
                    int64_t GetDomainCount() const;

                    /**
                     * 设置主域名数量
                     * @param _domainCount 主域名数量
                     * 
                     */
                    void SetDomainCount(const int64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取子域名数量
                     * @return SubDomainCount 子域名数量
                     * 
                     */
                    int64_t GetSubDomainCount() const;

                    /**
                     * 设置子域名数量
                     * @param _subDomainCount 子域名数量
                     * 
                     */
                    void SetSubDomainCount(const int64_t& _subDomainCount);

                    /**
                     * 判断参数 SubDomainCount 是否已赋值
                     * @return SubDomainCount 是否已赋值
                     * 
                     */
                    bool SubDomainCountHasBeenSet() const;

                    /**
                     * 获取网站数量
                     * @return HttpCount 网站数量
                     * 
                     */
                    int64_t GetHttpCount() const;

                    /**
                     * 设置网站数量
                     * @param _httpCount 网站数量
                     * 
                     */
                    void SetHttpCount(const int64_t& _httpCount);

                    /**
                     * 判断参数 HttpCount 是否已赋值
                     * @return HttpCount 是否已赋值
                     * 
                     */
                    bool HttpCountHasBeenSet() const;

                    /**
                     * 获取漏洞数量
                     * @return VulCount 漏洞数量
                     * 
                     */
                    int64_t GetVulCount() const;

                    /**
                     * 设置漏洞数量
                     * @param _vulCount 漏洞数量
                     * 
                     */
                    void SetVulCount(const int64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * 主键Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 子公司上级
                     */
                    std::string m_parentEnterpriseUid;
                    bool m_parentEnterpriseUidHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 公司简称
                     */
                    std::string m_abbreviation;
                    bool m_abbreviationHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_creditCode;
                    bool m_creditCodeHasBeenSet;

                    /**
                     * 企业状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 注册资本
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
                     * 子公司唯一uid
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * 主域名数量
                     */
                    int64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 子域名数量
                     */
                    int64_t m_subDomainCount;
                    bool m_subDomainCountHasBeenSet;

                    /**
                     * 网站数量
                     */
                    int64_t m_httpCount;
                    bool m_httpCountHasBeenSet;

                    /**
                     * 漏洞数量
                     */
                    int64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYENTERPRISE_H_
