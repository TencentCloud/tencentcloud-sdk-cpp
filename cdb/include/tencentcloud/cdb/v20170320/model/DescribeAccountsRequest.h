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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAccounts请求参数结构体
                */
                class DescribeAccountsRequest : public AbstractModel
                {
                public:
                    DescribeAccountsRequest();
                    ~DescribeAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>记录偏移量，默认值为0。</p>
                     * @return Offset <p>记录偏移量，默认值为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>记录偏移量，默认值为0。</p>
                     * @param _offset <p>记录偏移量，默认值为0。</p>
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
                     * 获取<p>单次请求返回的数量，默认值为20，最小值为1，最大值为100。</p>
                     * @return Limit <p>单次请求返回的数量，默认值为20，最小值为1，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次请求返回的数量，默认值为20，最小值为1，最大值为100。</p>
                     * @param _limit <p>单次请求返回的数量，默认值为20，最小值为1，最大值为100。</p>
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
                     * 获取<p>匹配账号名的正则表达式，规则同 MySQL 官网。</p>
                     * @return AccountRegexp <p>匹配账号名的正则表达式，规则同 MySQL 官网。</p>
                     * 
                     */
                    std::string GetAccountRegexp() const;

                    /**
                     * 设置<p>匹配账号名的正则表达式，规则同 MySQL 官网。</p>
                     * @param _accountRegexp <p>匹配账号名的正则表达式，规则同 MySQL 官网。</p>
                     * 
                     */
                    void SetAccountRegexp(const std::string& _accountRegexp);

                    /**
                     * 判断参数 AccountRegexp 是否已赋值
                     * @return AccountRegexp 是否已赋值
                     * 
                     */
                    bool AccountRegexpHasBeenSet() const;

                    /**
                     * 获取<p>默认无排序，支持：ASC、DESC、asc、desc</p>
                     * @return SortBy <p>默认无排序，支持：ASC、DESC、asc、desc</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>默认无排序，支持：ASC、DESC、asc、desc</p>
                     * @param _sortBy <p>默认无排序，支持：ASC、DESC、asc、desc</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>待排序的时间字段，可选：CreateTime(账号创建时间)、ModifyTime(账号更新时间)、ModifyPasswordTime(密码修改时间)</p>
                     * @return OrderBy <p>待排序的时间字段，可选：CreateTime(账号创建时间)、ModifyTime(账号更新时间)、ModifyPasswordTime(密码修改时间)</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>待排序的时间字段，可选：CreateTime(账号创建时间)、ModifyTime(账号更新时间)、ModifyPasswordTime(密码修改时间)</p>
                     * @param _orderBy <p>待排序的时间字段，可选：CreateTime(账号创建时间)、ModifyTime(账号更新时间)、ModifyPasswordTime(密码修改时间)</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>匹配账号主机地址（Host）的正则表达式，规则同 MySQL 官网</p>
                     * @return HostRegexp <p>匹配账号主机地址（Host）的正则表达式，规则同 MySQL 官网</p>
                     * 
                     */
                    std::string GetHostRegexp() const;

                    /**
                     * 设置<p>匹配账号主机地址（Host）的正则表达式，规则同 MySQL 官网</p>
                     * @param _hostRegexp <p>匹配账号主机地址（Host）的正则表达式，规则同 MySQL 官网</p>
                     * 
                     */
                    void SetHostRegexp(const std::string& _hostRegexp);

                    /**
                     * 判断参数 HostRegexp 是否已赋值
                     * @return HostRegexp 是否已赋值
                     * 
                     */
                    bool HostRegexpHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>记录偏移量，默认值为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次请求返回的数量，默认值为20，最小值为1，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>匹配账号名的正则表达式，规则同 MySQL 官网。</p>
                     */
                    std::string m_accountRegexp;
                    bool m_accountRegexpHasBeenSet;

                    /**
                     * <p>默认无排序，支持：ASC、DESC、asc、desc</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>待排序的时间字段，可选：CreateTime(账号创建时间)、ModifyTime(账号更新时间)、ModifyPasswordTime(密码修改时间)</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>匹配账号主机地址（Host）的正则表达式，规则同 MySQL 官网</p>
                     */
                    std::string m_hostRegexp;
                    bool m_hostRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_
