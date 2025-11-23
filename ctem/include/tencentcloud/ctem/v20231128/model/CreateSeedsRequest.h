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
                     * 获取ip种子数组
                     * @return Ips ip种子数组
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置ip种子数组
                     * @param _ips ip种子数组
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
                     * 获取icon种子数组
                     * @return Icons icon种子数组
                     * 
                     */
                    std::vector<std::string> GetIcons() const;

                    /**
                     * 设置icon种子数组
                     * @param _icons icon种子数组
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
                     * 获取主域名种子数组
                     * @return Domains 主域名种子数组
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置主域名种子数组
                     * @param _domains 主域名种子数组
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
                     * 获取title种子数组
                     * @return Titles title种子数组
                     * 
                     */
                    std::vector<std::string> GetTitles() const;

                    /**
                     * 设置title种子数组
                     * @param _titles title种子数组
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
                     * 获取子域名种子数组
                     * @return SubDomains 子域名种子数组
                     * 
                     */
                    std::vector<std::string> GetSubDomains() const;

                    /**
                     * 设置子域名种子数组
                     * @param _subDomains 子域名种子数组
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
                     * 获取关键词种子数组
                     * @return Keywords 关键词种子数组
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置关键词种子数组
                     * @param _keywords 关键词种子数组
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
                     * 获取母公司种子数组
                     * @return ParentCompanies 母公司种子数组
                     * 
                     */
                    std::vector<std::string> GetParentCompanies() const;

                    /**
                     * 设置母公司种子数组
                     * @param _parentCompanies 母公司种子数组
                     * 
                     */
                    void SetParentCompanies(const std::vector<std::string>& _parentCompanies);

                    /**
                     * 判断参数 ParentCompanies 是否已赋值
                     * @return ParentCompanies 是否已赋值
                     * 
                     */
                    bool ParentCompaniesHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * ip种子数组
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * icon种子数组
                     */
                    std::vector<std::string> m_icons;
                    bool m_iconsHasBeenSet;

                    /**
                     * 主域名种子数组
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * title种子数组
                     */
                    std::vector<std::string> m_titles;
                    bool m_titlesHasBeenSet;

                    /**
                     * 子域名种子数组
                     */
                    std::vector<std::string> m_subDomains;
                    bool m_subDomainsHasBeenSet;

                    /**
                     * 关键词种子数组
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 母公司种子数组
                     */
                    std::vector<std::string> m_parentCompanies;
                    bool m_parentCompaniesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATESEEDSREQUEST_H_
