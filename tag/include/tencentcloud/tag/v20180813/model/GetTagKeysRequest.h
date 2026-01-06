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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGKEYSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetTagKeys请求参数结构体
                */
                class GetTagKeysRequest : public AbstractModel
                {
                public:
                    GetTagKeysRequest();
                    ~GetTagKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>从上一页的响应中获取的下一页的Token值。如果是第一次请求，设置为空。</p>
                     * @return PaginationToken <p>从上一页的响应中获取的下一页的Token值。如果是第一次请求，设置为空。</p>
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置<p>从上一页的响应中获取的下一页的Token值。如果是第一次请求，设置为空。</p>
                     * @param _paginationToken <p>从上一页的响应中获取的下一页的Token值。如果是第一次请求，设置为空。</p>
                     * 
                     */
                    void SetPaginationToken(const std::string& _paginationToken);

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取<p>每一页返回的数据最大条数，最大1000。缺省值：50。</p>
                     * @return MaxResults <p>每一页返回的数据最大条数，最大1000。缺省值：50。</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>每一页返回的数据最大条数，最大1000。缺省值：50。</p>
                     * @param _maxResults <p>每一页返回的数据最大条数，最大1000。缺省值：50。</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。</p>
                     * @return Category <p>标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。</p>
                     * @param _category <p>标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * <p>从上一页的响应中获取的下一页的Token值。如果是第一次请求，设置为空。</p>
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * <p>每一页返回的数据最大条数，最大1000。缺省值：50。</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETTAGKEYSREQUEST_H_
