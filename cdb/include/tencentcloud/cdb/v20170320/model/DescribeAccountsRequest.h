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
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取记录偏移量，默认值为0。
                     * @return Offset 记录偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，默认值为0。
                     * @param _offset 记录偏移量，默认值为0。
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
                     * 获取单次请求返回的数量，默认值为20，最小值为1，最大值为100。
                     * @return Limit 单次请求返回的数量，默认值为20，最小值为1，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为20，最小值为1，最大值为100。
                     * @param _limit 单次请求返回的数量，默认值为20，最小值为1，最大值为100。
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
                     * 获取匹配账号名的正则表达式，规则同 MySQL 官网。
                     * @return AccountRegexp 匹配账号名的正则表达式，规则同 MySQL 官网。
                     * 
                     */
                    std::string GetAccountRegexp() const;

                    /**
                     * 设置匹配账号名的正则表达式，规则同 MySQL 官网。
                     * @param _accountRegexp 匹配账号名的正则表达式，规则同 MySQL 官网。
                     * 
                     */
                    void SetAccountRegexp(const std::string& _accountRegexp);

                    /**
                     * 判断参数 AccountRegexp 是否已赋值
                     * @return AccountRegexp 是否已赋值
                     * 
                     */
                    bool AccountRegexpHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 记录偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为20，最小值为1，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 匹配账号名的正则表达式，规则同 MySQL 官网。
                     */
                    std::string m_accountRegexp;
                    bool m_accountRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_
