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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETINSTANCESERVERLESSQUOTAREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETINSTANCESERVERLESSQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ServerlessQuotaConfig.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SetInstanceServerlessQuota请求参数结构体
                */
                class SetInstanceServerlessQuotaRequest : public AbstractModel
                {
                public:
                    SetInstanceServerlessQuotaRequest();
                    ~SetInstanceServerlessQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>实例SLS规格配置</p>
                     * @return ServerlessQuotaConfigs <p>实例SLS规格配置</p>
                     * 
                     */
                    std::vector<ServerlessQuotaConfig> GetServerlessQuotaConfigs() const;

                    /**
                     * 设置<p>实例SLS规格配置</p>
                     * @param _serverlessQuotaConfigs <p>实例SLS规格配置</p>
                     * 
                     */
                    void SetServerlessQuotaConfigs(const std::vector<ServerlessQuotaConfig>& _serverlessQuotaConfigs);

                    /**
                     * 判断参数 ServerlessQuotaConfigs 是否已赋值
                     * @return ServerlessQuotaConfigs 是否已赋值
                     * 
                     */
                    bool ServerlessQuotaConfigsHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例SLS规格配置</p>
                     */
                    std::vector<ServerlessQuotaConfig> m_serverlessQuotaConfigs;
                    bool m_serverlessQuotaConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETINSTANCESERVERLESSQUOTAREQUEST_H_
