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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMembers请求参数结构体
                */
                class DescribeOrganizationMembersRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMembersRequest();
                    ~DescribeOrganizationMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param Limit 限制数目
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取国际站：en，国内站：zh
                     * @return Lang 国际站：en，国内站：zh
                     */
                    std::string GetLang() const;

                    /**
                     * 设置国际站：en，国内站：zh
                     * @param Lang 国际站：en，国内站：zh
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取成员名或者成员ID搜索
                     * @return SearchKey 成员名或者成员ID搜索
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置成员名或者成员ID搜索
                     * @param SearchKey 成员名或者成员ID搜索
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取主体名称
                     * @return AuthName 主体名称
                     */
                    std::string GetAuthName() const;

                    /**
                     * 设置主体名称
                     * @param AuthName 主体名称
                     */
                    void SetAuthName(const std::string& _authName);

                    /**
                     * 判断参数 AuthName 是否已赋值
                     * @return AuthName 是否已赋值
                     */
                    bool AuthNameHasBeenSet() const;

                    /**
                     * 获取集团服务（服务管理员查询时，必须指定）
                     * @return Product 集团服务（服务管理员查询时，必须指定）
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置集团服务（服务管理员查询时，必须指定）
                     * @param Product 集团服务（服务管理员查询时，必须指定）
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 国际站：en，国内站：zh
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 成员名或者成员ID搜索
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 主体名称
                     */
                    std::string m_authName;
                    bool m_authNameHasBeenSet;

                    /**
                     * 集团服务（服务管理员查询时，必须指定）
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
