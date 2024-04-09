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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_

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
                * DescribeOrganizationMemberPolicies请求参数结构体
                */
                class DescribeOrganizationMemberPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberPoliciesRequest();
                    ~DescribeOrganizationMemberPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量。取值是limit的整数倍。默认值 : 0。
                     * @return Offset 偏移量。取值是limit的整数倍。默认值 : 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。取值是limit的整数倍。默认值 : 0。
                     * @param _offset 偏移量。取值是limit的整数倍。默认值 : 0。
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
                     * 获取限制数目。取值范围：1~50。默认值：10。
                     * @return Limit 限制数目。取值范围：1~50。默认值：10。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数目。取值范围：1~50。默认值：10。
                     * @param _limit 限制数目。取值范围：1~50。默认值：10。
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
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取搜索关键字。可用于策略名或描述搜索
                     * @return SearchKey 搜索关键字。可用于策略名或描述搜索
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键字。可用于策略名或描述搜索
                     * @param _searchKey 搜索关键字。可用于策略名或描述搜索
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 偏移量。取值是limit的整数倍。默认值 : 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目。取值范围：1~50。默认值：10。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 成员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 搜索关键字。可用于策略名或描述搜索
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_
