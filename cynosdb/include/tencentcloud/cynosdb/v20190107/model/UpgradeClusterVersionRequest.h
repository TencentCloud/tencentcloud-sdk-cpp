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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADECLUSTERVERSIONREQUEST_H_

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
                * UpgradeClusterVersion请求参数结构体
                */
                class UpgradeClusterVersionRequest : public AbstractModel
                {
                public:
                    UpgradeClusterVersionRequest();
                    ~UpgradeClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取内核版本
                     * @return CynosVersion 内核版本
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置内核版本
                     * @param _cynosVersion 内核版本
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                    /**
                     * 获取升级时间类型，可选：upgradeImmediate,upgradeInMaintain
                     * @return UpgradeType 升级时间类型，可选：upgradeImmediate,upgradeInMaintain
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级时间类型，可选：upgradeImmediate,upgradeInMaintain
                     * @param _upgradeType 升级时间类型，可选：upgradeImmediate,upgradeInMaintain
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * 升级时间类型，可选：upgradeImmediate,upgradeInMaintain
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADECLUSTERVERSIONREQUEST_H_
