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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取需要过滤的账户列表
                     * @return AccountNames 需要过滤的账户列表
                     * 
                     */
                    std::vector<std::string> GetAccountNames() const;

                    /**
                     * 设置需要过滤的账户列表
                     * @param _accountNames 需要过滤的账户列表
                     * 
                     */
                    void SetAccountNames(const std::vector<std::string>& _accountNames);

                    /**
                     * 判断参数 AccountNames 是否已赋值
                     * @return AccountNames 是否已赋值
                     * 
                     */
                    bool AccountNamesHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
该参数已废用
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
该参数已废用
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
该参数已废用
                     * @param _dbType 数据库类型，取值范围: 
<li> MYSQL </li>
该参数已废用
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取需要过滤的账户列表
                     * @return Hosts 需要过滤的账户列表
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置需要过滤的账户列表
                     * @param _hosts 需要过滤的账户列表
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取限制量
                     * @return Limit 限制量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制量
                     * @param _limit 限制量
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取模糊匹配关键字(同时匹配AccountName和AccountHost，返回并集结果，支持正则)
                     * @return AccountRegular 模糊匹配关键字(同时匹配AccountName和AccountHost，返回并集结果，支持正则)
                     * 
                     */
                    std::string GetAccountRegular() const;

                    /**
                     * 设置模糊匹配关键字(同时匹配AccountName和AccountHost，返回并集结果，支持正则)
                     * @param _accountRegular 模糊匹配关键字(同时匹配AccountName和AccountHost，返回并集结果，支持正则)
                     * 
                     */
                    void SetAccountRegular(const std::string& _accountRegular);

                    /**
                     * 判断参数 AccountRegular 是否已赋值
                     * @return AccountRegular 是否已赋值
                     * 
                     */
                    bool AccountRegularHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要过滤的账户列表
                     */
                    std::vector<std::string> m_accountNames;
                    bool m_accountNamesHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
该参数已废用
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 需要过滤的账户列表
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 限制量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 模糊匹配关键字(同时匹配AccountName和AccountHost，返回并集结果，支持正则)
                     */
                    std::string m_accountRegular;
                    bool m_accountRegularHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_
