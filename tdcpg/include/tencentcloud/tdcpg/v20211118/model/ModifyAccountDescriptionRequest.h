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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * ModifyAccountDescription请求参数结构体
                */
                class ModifyAccountDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyAccountDescriptionRequest();
                    ~ModifyAccountDescriptionRequest() = default;
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
                     * 获取账号名字
                     * @return AccountName 账号名字
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名字
                     * @param _accountName 账号名字
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
                     * 获取账号描述，0-256个字符
                     * @return AccountDescription 账号描述，0-256个字符
                     * 
                     */
                    std::string GetAccountDescription() const;

                    /**
                     * 设置账号描述，0-256个字符
                     * @param _accountDescription 账号描述，0-256个字符
                     * 
                     */
                    void SetAccountDescription(const std::string& _accountDescription);

                    /**
                     * 判断参数 AccountDescription 是否已赋值
                     * @return AccountDescription 是否已赋值
                     * 
                     */
                    bool AccountDescriptionHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 账号名字
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 账号描述，0-256个字符
                     */
                    std::string m_accountDescription;
                    bool m_accountDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYACCOUNTDESCRIPTIONREQUEST_H_
