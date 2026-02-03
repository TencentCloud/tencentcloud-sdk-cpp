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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_

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
                * CreateLibraDBClusterAccounts请求参数结构体
                */
                class CreateLibraDBClusterAccountsRequest : public AbstractModel
                {
                public:
                    CreateLibraDBClusterAccountsRequest();
                    ~CreateLibraDBClusterAccountsRequest() = default;
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
                     * 获取账户信息
                     * @return Accounts 账户信息
                     * 
                     */
                    std::vector<NewAccount> GetAccounts() const;

                    /**
                     * 设置账户信息
                     * @param _accounts 账户信息
                     * 
                     */
                    void SetAccounts(const std::vector<NewAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取加密方式
                     * @return EncryptMethod 加密方式
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置加密方式
                     * @param _encryptMethod 加密方式
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                private:

                    /**
                     * 分析集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账户信息
                     */
                    std::vector<NewAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 加密方式
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_
