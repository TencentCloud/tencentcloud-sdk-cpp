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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/NewAccount.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateAccounts请求参数结构体
                */
                class CreateAccountsRequest : public AbstractModel
                {
                public:
                    CreateAccountsRequest();
                    ~CreateAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>新账户列表</p>
                     * @return Accounts <p>新账户列表</p>
                     * 
                     */
                    std::vector<NewAccount> GetAccounts() const;

                    /**
                     * 设置<p>新账户列表</p>
                     * @param _accounts <p>新账户列表</p>
                     * 
                     */
                    void SetAccounts(const std::vector<NewAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>新账户列表</p>
                     */
                    std::vector<NewAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEACCOUNTSREQUEST_H_
