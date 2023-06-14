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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomainCertBindings请求参数结构体
                */
                class DescribeLiveDomainCertBindingsRequest : public AbstractModel
                {
                public:
                    DescribeLiveDomainCertBindingsRequest();
                    ~DescribeLiveDomainCertBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要搜索的域名字符串。
                     * @return DomainSearch 要搜索的域名字符串。
                     * 
                     */
                    std::string GetDomainSearch() const;

                    /**
                     * 设置要搜索的域名字符串。
                     * @param _domainSearch 要搜索的域名字符串。
                     * 
                     */
                    void SetDomainSearch(const std::string& _domainSearch);

                    /**
                     * 判断参数 DomainSearch 是否已赋值
                     * @return DomainSearch 是否已赋值
                     * 
                     */
                    bool DomainSearchHasBeenSet() const;

                    /**
                     * 获取记录行的位置，从0开始。默认0。
                     * @return Offset 记录行的位置，从0开始。默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录行的位置，从0开始。默认0。
                     * @param _offset 记录行的位置，从0开始。默认0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取记录行的最大数目。默认50。
若不传，则最多返回50条数据。
                     * @return Length 记录行的最大数目。默认50。
若不传，则最多返回50条数据。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置记录行的最大数目。默认50。
若不传，则最多返回50条数据。
                     * @param _length 记录行的最大数目。默认50。
若不传，则最多返回50条数据。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取要查询的单个域名。
                     * @return DomainName 要查询的单个域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置要查询的单个域名。
                     * @param _domainName 要查询的单个域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取可取值：
ExpireTimeAsc：证书过期时间升序。
ExpireTimeDesc：证书过期时间降序。
                     * @return OrderBy 可取值：
ExpireTimeAsc：证书过期时间升序。
ExpireTimeDesc：证书过期时间降序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置可取值：
ExpireTimeAsc：证书过期时间升序。
ExpireTimeDesc：证书过期时间降序。
                     * @param _orderBy 可取值：
ExpireTimeAsc：证书过期时间升序。
ExpireTimeDesc：证书过期时间降序。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * 要搜索的域名字符串。
                     */
                    std::string m_domainSearch;
                    bool m_domainSearchHasBeenSet;

                    /**
                     * 记录行的位置，从0开始。默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 记录行的最大数目。默认50。
若不传，则最多返回50条数据。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 要查询的单个域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 可取值：
ExpireTimeAsc：证书过期时间升序。
ExpireTimeDesc：证书过期时间降序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSREQUEST_H_
