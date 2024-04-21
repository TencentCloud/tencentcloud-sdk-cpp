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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_

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
                * ListNonCompliantResource请求参数结构体
                */
                class ListNonCompliantResourceRequest : public AbstractModel
                {
                public:
                    ListNonCompliantResourceRequest();
                    ~ListNonCompliantResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取限制数目。取值范围：1~50。
                     * @return MaxResults 限制数目。取值范围：1~50。
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置限制数目。取值范围：1~50。
                     * @param _maxResults 限制数目。取值范围：1~50。
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
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * @return PaginationToken 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 设置从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     * @param _paginationToken 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
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
                     * 获取标签键。
                     * @return TagKey 标签键。
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键。
                     * @param _tagKey 标签键。
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * 限制数目。取值范围：1~50。
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 成员Uin。
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 从上一页的响应中获取的下一页的Token值。
如果是第一次请求，设置为空。
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * 标签键。
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCEREQUEST_H_
