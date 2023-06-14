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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPARAMSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>
#include <tencentcloud/cynosdb/v20190107/model/AccountParam.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyAccountParams请求参数结构体
                */
                class ModifyAccountParamsRequest : public AbstractModel
                {
                public:
                    ModifyAccountParamsRequest();
                    ~ModifyAccountParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id，不超过32个字符
                     * @return ClusterId 集群id，不超过32个字符
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id，不超过32个字符
                     * @param _clusterId 集群id，不超过32个字符
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
                     * 获取账号信息
                     * @return Account 账号信息
                     * 
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置账号信息
                     * @param _account 账号信息
                     * 
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取数据库表权限数组,当前仅支持参数：max_user_connections，max_user_connections不能大于10240
                     * @return AccountParams 数据库表权限数组,当前仅支持参数：max_user_connections，max_user_connections不能大于10240
                     * 
                     */
                    std::vector<AccountParam> GetAccountParams() const;

                    /**
                     * 设置数据库表权限数组,当前仅支持参数：max_user_connections，max_user_connections不能大于10240
                     * @param _accountParams 数据库表权限数组,当前仅支持参数：max_user_connections，max_user_connections不能大于10240
                     * 
                     */
                    void SetAccountParams(const std::vector<AccountParam>& _accountParams);

                    /**
                     * 判断参数 AccountParams 是否已赋值
                     * @return AccountParams 是否已赋值
                     * 
                     */
                    bool AccountParamsHasBeenSet() const;

                private:

                    /**
                     * 集群id，不超过32个字符
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账号信息
                     */
                    InputAccount m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 数据库表权限数组,当前仅支持参数：max_user_connections，max_user_connections不能大于10240
                     */
                    std::vector<AccountParam> m_accountParams;
                    bool m_accountParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTPARAMSREQUEST_H_
