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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESEEDSREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESEEDSREQUEST_H_

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
                * CreateSeeds请求参数结构体
                */
                class CreateSeedsRequest : public AbstractModel
                {
                public:
                    CreateSeedsRequest();
                    ~CreateSeedsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业ID</p>
                     * @return CustomerId <p>企业ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _customerId <p>企业ID</p>
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
                     * 获取<p>ip种子数组</p>
                     * @return Ips <p>ip种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置<p>ip种子数组</p>
                     * @param _ips <p>ip种子数组</p>
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取<p>icon种子数组</p>
                     * @return Icons <p>icon种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetIcons() const;

                    /**
                     * 设置<p>icon种子数组</p>
                     * @param _icons <p>icon种子数组</p>
                     * 
                     */
                    void SetIcons(const std::vector<std::string>& _icons);

                    /**
                     * 判断参数 Icons 是否已赋值
                     * @return Icons 是否已赋值
                     * 
                     */
                    bool IconsHasBeenSet() const;

                    /**
                     * 获取<p>主域名种子数组</p>
                     * @return Domains <p>主域名种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>主域名种子数组</p>
                     * @param _domains <p>主域名种子数组</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>title种子数组</p>
                     * @return Titles <p>title种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetTitles() const;

                    /**
                     * 设置<p>title种子数组</p>
                     * @param _titles <p>title种子数组</p>
                     * 
                     */
                    void SetTitles(const std::vector<std::string>& _titles);

                    /**
                     * 判断参数 Titles 是否已赋值
                     * @return Titles 是否已赋值
                     * 
                     */
                    bool TitlesHasBeenSet() const;

                    /**
                     * 获取<p>子域名种子数组</p>
                     * @return SubDomains <p>子域名种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetSubDomains() const;

                    /**
                     * 设置<p>子域名种子数组</p>
                     * @param _subDomains <p>子域名种子数组</p>
                     * 
                     */
                    void SetSubDomains(const std::vector<std::string>& _subDomains);

                    /**
                     * 判断参数 SubDomains 是否已赋值
                     * @return SubDomains 是否已赋值
                     * 
                     */
                    bool SubDomainsHasBeenSet() const;

                    /**
                     * 获取<p>关键词种子数组</p>
                     * @return Keywords <p>关键词种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置<p>关键词种子数组</p>
                     * @param _keywords <p>关键词种子数组</p>
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>母公司种子数组</p>
                     * @return ParentCompanies <p>母公司种子数组</p>
                     * 
                     */
                    std::vector<std::string> GetParentCompanies() const;

                    /**
                     * 设置<p>母公司种子数组</p>
                     * @param _parentCompanies <p>母公司种子数组</p>
                     * 
                     */
                    void SetParentCompanies(const std::vector<std::string>& _parentCompanies);

                    /**
                     * 判断参数 ParentCompanies 是否已赋值
                     * @return ParentCompanies 是否已赋值
                     * 
                     */
                    bool ParentCompaniesHasBeenSet() const;

                    /**
                     * 获取<p>关键词用途：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号，不填=全部用途</p>
                     * @return KeywordPurposes <p>关键词用途：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号，不填=全部用途</p>
                     * 
                     */
                    std::vector<std::string> GetKeywordPurposes() const;

                    /**
                     * 设置<p>关键词用途：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号，不填=全部用途</p>
                     * @param _keywordPurposes <p>关键词用途：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号，不填=全部用途</p>
                     * 
                     */
                    void SetKeywordPurposes(const std::vector<std::string>& _keywordPurposes);

                    /**
                     * 判断参数 KeywordPurposes 是否已赋值
                     * @return KeywordPurposes 是否已赋值
                     * 
                     */
                    bool KeywordPurposesHasBeenSet() const;

                private:

                    /**
                     * <p>企业ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>ip种子数组</p>
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * <p>icon种子数组</p>
                     */
                    std::vector<std::string> m_icons;
                    bool m_iconsHasBeenSet;

                    /**
                     * <p>主域名种子数组</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>title种子数组</p>
                     */
                    std::vector<std::string> m_titles;
                    bool m_titlesHasBeenSet;

                    /**
                     * <p>子域名种子数组</p>
                     */
                    std::vector<std::string> m_subDomains;
                    bool m_subDomainsHasBeenSet;

                    /**
                     * <p>关键词种子数组</p>
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>母公司种子数组</p>
                     */
                    std::vector<std::string> m_parentCompanies;
                    bool m_parentCompaniesHasBeenSet;

                    /**
                     * <p>关键词用途：leakage_code代码泄露/leakage_data其他泄露/wechat_applet微信小程序/wechat_official_account微信公众号，不填=全部用途</p>
                     */
                    std::vector<std::string> m_keywordPurposes;
                    bool m_keywordPurposesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESEEDSREQUEST_H_
