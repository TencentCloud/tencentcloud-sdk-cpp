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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINSREQUEST_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * DescribeDomains请求参数结构体
                */
                class DescribeDomainsRequest : public AbstractModel
                {
                public:
                    DescribeDomainsRequest();
                    ~DescribeDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取获取数量
                     * @return Limit 获取数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置获取数量
                     * @param _limit 获取数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索的类型有：none，tags，grade，brand，code，hash，limit，domain。
选tags，入参请填Tag，
选grade，入参请填Grade，
选brand，入参请填Brand，
选code，入参请填Code，
选hash，入参请填Hash
选limit，标识只返回数量信息
选domain，入参请填Domain
                     * @return SearchType 搜索的类型有：none，tags，grade，brand，code，hash，limit，domain。
选tags，入参请填Tag，
选grade，入参请填Grade，
选brand，入参请填Brand，
选code，入参请填Code，
选hash，入参请填Hash
选limit，标识只返回数量信息
选domain，入参请填Domain
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 设置搜索的类型有：none，tags，grade，brand，code，hash，limit，domain。
选tags，入参请填Tag，
选grade，入参请填Grade，
选brand，入参请填Brand，
选code，入参请填Code，
选hash，入参请填Hash
选limit，标识只返回数量信息
选domain，入参请填Domain
                     * @param _searchType 搜索的类型有：none，tags，grade，brand，code，hash，limit，domain。
选tags，入参请填Tag，
选grade，入参请填Grade，
选brand，入参请填Brand，
选code，入参请填Code，
选hash，入参请填Hash
选limit，标识只返回数量信息
选domain，入参请填Domain
                     * 
                     */
                    void SetSearchType(const std::string& _searchType);

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取标签，多个标签用逗号分隔
                     * @return Tag 标签，多个标签用逗号分隔
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置标签，多个标签用逗号分隔
                     * @param _tag 标签，多个标签用逗号分隔
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取等级
                     * @return Grade 等级
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置等级
                     * @param _grade 等级
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取品牌
                     * @return Brand 品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置品牌
                     * @param _brand 品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取混合搜索
                     * @return Code 混合搜索
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置混合搜索
                     * @param _code 混合搜索
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取证书指纹
                     * @return Hash 证书指纹
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 设置证书指纹
                     * @param _hash 证书指纹
                     * 
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取搜索图标类型
                     * @return Item 搜索图标类型
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置搜索图标类型
                     * @param _item 搜索图标类型
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取搜索图标值
                     * @return Status 搜索图标值
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置搜索图标值
                     * @param _status 搜索图标值
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
                     * 获取搜索域名
                     * @return Domain 搜索域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置搜索域名
                     * @param _domain 搜索域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 获取数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索的类型有：none，tags，grade，brand，code，hash，limit，domain。
选tags，入参请填Tag，
选grade，入参请填Grade，
选brand，入参请填Brand，
选code，入参请填Code，
选hash，入参请填Hash
选limit，标识只返回数量信息
选domain，入参请填Domain
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * 标签，多个标签用逗号分隔
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 等级
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 混合搜索
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 证书指纹
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * 搜索图标类型
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 搜索图标值
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 搜索域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DESCRIBEDOMAINSREQUEST_H_
