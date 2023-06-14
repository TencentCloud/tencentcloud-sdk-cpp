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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERSAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERSAUTORENEWFLAGREQUEST_H_

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
                * ModifyClustersAutoRenewFlag请求参数结构体
                */
                class ModifyClustersAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyClustersAutoRenewFlagRequest();
                    ~ModifyClustersAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID列表
                     * @return ClusterIdSet 集群ID列表
                     * 
                     */
                    std::vector<std::string> GetClusterIdSet() const;

                    /**
                     * 设置集群ID列表
                     * @param _clusterIdSet 集群ID列表
                     * 
                     */
                    void SetClusterIdSet(const std::vector<std::string>& _clusterIdSet);

                    /**
                     * 判断参数 ClusterIdSet 是否已赋值
                     * @return ClusterIdSet 是否已赋值
                     * 
                     */
                    bool ClusterIdSetHasBeenSet() const;

                    /**
                     * 获取是否自动续费，0-不 1-是。默认为0，只有当集群的PayMode为PREPAID时生效。
                     * @return AutoRenewFlag 是否自动续费，0-不 1-是。默认为0，只有当集群的PayMode为PREPAID时生效。
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费，0-不 1-是。默认为0，只有当集群的PayMode为PREPAID时生效。
                     * @param _autoRenewFlag 是否自动续费，0-不 1-是。默认为0，只有当集群的PayMode为PREPAID时生效。
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 集群ID列表
                     */
                    std::vector<std::string> m_clusterIdSet;
                    bool m_clusterIdSetHasBeenSet;

                    /**
                     * 是否自动续费，0-不 1-是。默认为0，只有当集群的PayMode为PREPAID时生效。
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERSAUTORENEWFLAGREQUEST_H_
