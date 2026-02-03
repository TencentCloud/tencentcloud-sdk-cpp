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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_

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
                * DescribeLibraDBClusterAccounts请求参数结构体
                */
                class DescribeLibraDBClusterAccountsRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterAccountsRequest();
                    ~DescribeLibraDBClusterAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群id
                     * @return ClusterId 分析集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群id
                     * @param _clusterId 分析集群id
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
                     * 获取账号名
                     * @return AccountNames 账号名
                     * 
                     */
                    std::vector<std::string> GetAccountNames() const;

                    /**
                     * 设置账号名
                     * @param _accountNames 账号名
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
                     * 获取模糊匹配关键字
                     * @return AccountRegular 模糊匹配关键字
                     * 
                     */
                    std::string GetAccountRegular() const;

                    /**
                     * 设置模糊匹配关键字
                     * @param _accountRegular 模糊匹配关键字
                     * 
                     */
                    void SetAccountRegular(const std::string& _accountRegular);

                    /**
                     * 判断参数 AccountRegular 是否已赋值
                     * @return AccountRegular 是否已赋值
                     * 
                     */
                    bool AccountRegularHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return Hosts 主机名
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置主机名
                     * @param _hosts 主机名
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
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
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
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 分析集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账号名
                     */
                    std::vector<std::string> m_accountNames;
                    bool m_accountNamesHasBeenSet;

                    /**
                     * 模糊匹配关键字
                     */
                    std::string m_accountRegular;
                    bool m_accountRegularHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_
