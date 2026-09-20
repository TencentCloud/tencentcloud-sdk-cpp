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
                     * 获取<p>内核版本</p>
                     * @return CynosVersion <p>内核版本</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>内核版本</p>
                     * @param _cynosVersion <p>内核版本</p>
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
                     * 获取<p>升级时间类型，可选：upgradeImmediate,upgradeInMaintain</p>
                     * @return UpgradeType <p>升级时间类型，可选：upgradeImmediate,upgradeInMaintain</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级时间类型，可选：upgradeImmediate,upgradeInMaintain</p>
                     * @param _upgradeType <p>升级时间类型，可选：upgradeImmediate,upgradeInMaintain</p>
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
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>内核版本</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                    /**
                     * <p>升级时间类型，可选：upgradeImmediate,upgradeInMaintain</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADECLUSTERVERSIONREQUEST_H_
