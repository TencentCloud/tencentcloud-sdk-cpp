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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_

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
                * ListOrganizationIdentity请求参数结构体
                */
                class ListOrganizationIdentityRequest : public AbstractModel
                {
                public:
                    ListOrganizationIdentityRequest();
                    ~ListOrganizationIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量。取值是limit的整数倍。默认值 : 0。
                     * @return Offset 偏移量。取值是limit的整数倍。默认值 : 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍。默认值 : 0。
                     * @param _offset 偏移量。取值是limit的整数倍。默认值 : 0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目。取值范围：1~50。默认值：10。
                     * @return Limit 限制数目。取值范围：1~50。默认值：10。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50。默认值：10。
                     * @param _limit 限制数目。取值范围：1~50。默认值：10。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取名称搜索关键字。
                     * @return SearchKey 名称搜索关键字。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置名称搜索关键字。
                     * @param _searchKey 名称搜索关键字。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取身份ID。可以通过身份ID搜索
                     * @return IdentityId 身份ID。可以通过身份ID搜索
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置身份ID。可以通过身份ID搜索
                     * @param _identityId 身份ID。可以通过身份ID搜索
                     * 
                     */
                    void SetIdentityId(const uint64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取身份类型。取值范围 1-预设, 2-自定义
                     * @return IdentityType 身份类型。取值范围 1-预设, 2-自定义
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置身份类型。取值范围 1-预设, 2-自定义
                     * @param _identityType 身份类型。取值范围 1-预设, 2-自定义
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量。取值是limit的整数倍。默认值 : 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50。默认值：10。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 名称搜索关键字。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 身份ID。可以通过身份ID搜索
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * 身份类型。取值范围 1-预设, 2-自定义
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_
