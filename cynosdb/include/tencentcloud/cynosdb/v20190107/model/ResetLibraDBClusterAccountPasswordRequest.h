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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESETLIBRADBCLUSTERACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESETLIBRADBCLUSTERACCOUNTPASSWORDREQUEST_H_

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
                * ResetLibraDBClusterAccountPassword请求参数结构体
                */
                class ResetLibraDBClusterAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetLibraDBClusterAccountPasswordRequest();
                    ~ResetLibraDBClusterAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群 ID
                     * @return ClusterId 分析集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群 ID
                     * @param _clusterId 分析集群 ID
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
                     * 获取密码
                     * @return AccountPassword 密码
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置密码
                     * @param _accountPassword 密码
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return AccountName 账号
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号
                     * @param _accountName 账号
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

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

                    /**
                     * 获取主机
                     * @return Host 主机
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机
                     * @param _host 主机
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * 分析集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 加密方式
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * 主机
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESETLIBRADBCLUSTERACCOUNTPASSWORDREQUEST_H_
