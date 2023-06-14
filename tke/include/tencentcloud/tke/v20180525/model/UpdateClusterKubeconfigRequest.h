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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERKUBECONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERKUBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateClusterKubeconfig请求参数结构体
                */
                class UpdateClusterKubeconfigRequest : public AbstractModel
                {
                public:
                    UpdateClusterKubeconfigRequest();
                    ~UpdateClusterKubeconfigRequest() = default;
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
                     * 获取子账户Uin列表，传空默认为调用此接口的SubUin
                     * @return SubAccounts 子账户Uin列表，传空默认为调用此接口的SubUin
                     * 
                     */
                    std::vector<std::string> GetSubAccounts() const;

                    /**
                     * 设置子账户Uin列表，传空默认为调用此接口的SubUin
                     * @param _subAccounts 子账户Uin列表，传空默认为调用此接口的SubUin
                     * 
                     */
                    void SetSubAccounts(const std::vector<std::string>& _subAccounts);

                    /**
                     * 判断参数 SubAccounts 是否已赋值
                     * @return SubAccounts 是否已赋值
                     * 
                     */
                    bool SubAccountsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 子账户Uin列表，传空默认为调用此接口的SubUin
                     */
                    std::vector<std::string> m_subAccounts;
                    bool m_subAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERKUBECONFIGREQUEST_H_
