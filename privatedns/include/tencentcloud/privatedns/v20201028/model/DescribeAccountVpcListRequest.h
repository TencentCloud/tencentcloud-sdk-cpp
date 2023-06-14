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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEACCOUNTVPCLISTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEACCOUNTVPCLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeAccountVpcList请求参数结构体
                */
                class DescribeAccountVpcListRequest : public AbstractModel
                {
                public:
                    DescribeAccountVpcListRequest();
                    ~DescribeAccountVpcListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关联账号的uin
                     * @return AccountUin 关联账号的uin
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置关联账号的uin
                     * @param _accountUin 关联账号的uin
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始
                     * @return Offset 分页偏移量，从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始
                     * @param _offset 分页偏移量，从0开始
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
                     * 获取分页限制数目， 最大100，默认20
                     * @return Limit 分页限制数目， 最大100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页限制数目， 最大100，默认20
                     * @param _limit 分页限制数目， 最大100，默认20
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
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param _filters 过滤参数
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 关联账号的uin
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 分页偏移量，从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页限制数目， 最大100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEACCOUNTVPCLISTREQUEST_H_
