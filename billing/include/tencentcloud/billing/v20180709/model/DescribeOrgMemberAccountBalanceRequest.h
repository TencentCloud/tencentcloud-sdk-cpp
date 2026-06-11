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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeOrgMemberAccountBalance请求参数结构体
                */
                class DescribeOrgMemberAccountBalanceRequest : public AbstractModel
                {
                public:
                    DescribeOrgMemberAccountBalanceRequest();
                    ~DescribeOrgMemberAccountBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页码</p><p>默认值：1</p><p>取值范围≥1</p>
                     * @return PageNumber <p>页码</p><p>默认值：1</p><p>取值范围≥1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p><p>默认值：1</p><p>取值范围≥1</p>
                     * @param _pageNumber <p>页码</p><p>默认值：1</p><p>取值范围≥1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>单页大小</p><p>取值范围：[1, 10]</p><p>默认值：10</p>
                     * @return PageSize <p>单页大小</p><p>取值范围：[1, 10]</p><p>默认值：10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>单页大小</p><p>取值范围：[1, 10]</p><p>默认值：10</p>
                     * @param _pageSize <p>单页大小</p><p>取值范围：[1, 10]</p><p>默认值：10</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>成员uin列表</p><p>入参限制：元素必须为纯数字字符串，并且元素个数不能大于10</p><p>为空时返回当前组织内所有成员的账户余额信息，不为空时返回指定成员的账户余额信息</p>
                     * @return MemberUins <p>成员uin列表</p><p>入参限制：元素必须为纯数字字符串，并且元素个数不能大于10</p><p>为空时返回当前组织内所有成员的账户余额信息，不为空时返回指定成员的账户余额信息</p>
                     * 
                     */
                    std::vector<std::string> GetMemberUins() const;

                    /**
                     * 设置<p>成员uin列表</p><p>入参限制：元素必须为纯数字字符串，并且元素个数不能大于10</p><p>为空时返回当前组织内所有成员的账户余额信息，不为空时返回指定成员的账户余额信息</p>
                     * @param _memberUins <p>成员uin列表</p><p>入参限制：元素必须为纯数字字符串，并且元素个数不能大于10</p><p>为空时返回当前组织内所有成员的账户余额信息，不为空时返回指定成员的账户余额信息</p>
                     * 
                     */
                    void SetMemberUins(const std::vector<std::string>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                private:

                    /**
                     * <p>页码</p><p>默认值：1</p><p>取值范围≥1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>单页大小</p><p>取值范围：[1, 10]</p><p>默认值：10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>成员uin列表</p><p>入参限制：元素必须为纯数字字符串，并且元素个数不能大于10</p><p>为空时返回当前组织内所有成员的账户余额信息，不为空时返回指定成员的账户余额信息</p>
                     */
                    std::vector<std::string> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_
