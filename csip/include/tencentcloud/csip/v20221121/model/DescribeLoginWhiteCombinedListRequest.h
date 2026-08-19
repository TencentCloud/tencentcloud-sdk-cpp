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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteCombinedList请求参数结构体
                */
                class DescribeLoginWhiteCombinedListRequest : public AbstractModel
                {
                public:
                    DescribeLoginWhiteCombinedListRequest();
                    ~DescribeLoginWhiteCombinedListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>需要返回的数量，默认为10，最大值为100</p>
                     * @return Limit <p>需要返回的数量，默认为10，最大值为100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>需要返回的数量，默认为10，最大值为100</p>
                     * @param _limit <p>需要返回的数量，默认为10，最大值为100</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>过滤条件。IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选UserName - String - 是否必填：否 - 用户名筛选SrcIP - String - 是否必填：否 - 来源IP筛选Location - String - 是否必填：否 - 登录地筛选ModifyBeginTime - String - 是否必填：否 - 按照修改时间段筛选，开始时间ModifyEndTime - String - 是否必填：否 - 按照修改时间段筛选，结束时间</p>
                     * @return Filters <p>过滤条件。IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选UserName - String - 是否必填：否 - 用户名筛选SrcIP - String - 是否必填：否 - 来源IP筛选Location - String - 是否必填：否 - 登录地筛选ModifyBeginTime - String - 是否必填：否 - 按照修改时间段筛选，开始时间ModifyEndTime - String - 是否必填：否 - 按照修改时间段筛选，结束时间</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选UserName - String - 是否必填：否 - 用户名筛选SrcIP - String - 是否必填：否 - 来源IP筛选Location - String - 是否必填：否 - 登录地筛选ModifyBeginTime - String - 是否必填：否 - 按照修改时间段筛选，开始时间ModifyEndTime - String - 是否必填：否 - 按照修改时间段筛选，结束时间</p>
                     * @param _filters <p>过滤条件。IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选UserName - String - 是否必填：否 - 用户名筛选SrcIP - String - 是否必填：否 - 来源IP筛选Location - String - 是否必填：否 - 登录地筛选ModifyBeginTime - String - 是否必填：否 - 按照修改时间段筛选，开始时间ModifyEndTime - String - 是否必填：否 - 按照修改时间段筛选，结束时间</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>需要返回的数量，默认为10，最大值为100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件。IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选UserName - String - 是否必填：否 - 用户名筛选SrcIP - String - 是否必填：否 - 来源IP筛选Location - String - 是否必填：否 - 登录地筛选ModifyBeginTime - String - 是否必填：否 - 按照修改时间段筛选，开始时间ModifyEndTime - String - 是否必填：否 - 按照修改时间段筛选，结束时间</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBELOGINWHITECOMBINEDLISTREQUEST_H_
