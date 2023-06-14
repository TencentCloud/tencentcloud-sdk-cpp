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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * InstallAgent请求参数结构体
                */
                class InstallAgentRequest : public AbstractModel
                {
                public:
                    InstallAgentRequest();
                    ~InstallAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群名称
                     * @return Cluster 集群名称
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置集群名称
                     * @param _cluster 集群名称
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取Agent版本, 用于私有集群的agent安装，默认为“private-training”
                     * @return TiaVersion Agent版本, 用于私有集群的agent安装，默认为“private-training”
                     * 
                     */
                    std::string GetTiaVersion() const;

                    /**
                     * 设置Agent版本, 用于私有集群的agent安装，默认为“private-training”
                     * @param _tiaVersion Agent版本, 用于私有集群的agent安装，默认为“private-training”
                     * 
                     */
                    void SetTiaVersion(const std::string& _tiaVersion);

                    /**
                     * 判断参数 TiaVersion 是否已赋值
                     * @return TiaVersion 是否已赋值
                     * 
                     */
                    bool TiaVersionHasBeenSet() const;

                    /**
                     * 获取是否允许更新Agent
                     * @return Update 是否允许更新Agent
                     * 
                     */
                    bool GetUpdate() const;

                    /**
                     * 设置是否允许更新Agent
                     * @param _update 是否允许更新Agent
                     * 
                     */
                    void SetUpdate(const bool& _update);

                    /**
                     * 判断参数 Update 是否已赋值
                     * @return Update 是否已赋值
                     * 
                     */
                    bool UpdateHasBeenSet() const;

                private:

                    /**
                     * 集群名称
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * Agent版本, 用于私有集群的agent安装，默认为“private-training”
                     */
                    std::string m_tiaVersion;
                    bool m_tiaVersionHasBeenSet;

                    /**
                     * 是否允许更新Agent
                     */
                    bool m_update;
                    bool m_updateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTREQUEST_H_
