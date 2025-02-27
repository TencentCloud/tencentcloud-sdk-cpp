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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/UpgradeAbleInstancesItem.h>
#include <tencentcloud/tke/v20180525/model/UnavailableReason.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckInstancesUpgradeAble返回参数结构体
                */
                class CheckInstancesUpgradeAbleResponse : public AbstractModel
                {
                public:
                    CheckInstancesUpgradeAbleResponse();
                    ~CheckInstancesUpgradeAbleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群master当前小版本
                     * @return ClusterVersion 集群master当前小版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群master对应的大版本目前最新小版本
                     * @return LatestVersion 集群master对应的大版本目前最新小版本
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取可升级节点列表
                     * @return UpgradeAbleInstances 可升级节点列表
                     * 
                     */
                    std::vector<UpgradeAbleInstancesItem> GetUpgradeAbleInstances() const;

                    /**
                     * 判断参数 UpgradeAbleInstances 是否已赋值
                     * @return UpgradeAbleInstances 是否已赋值
                     * 
                     */
                    bool UpgradeAbleInstancesHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取不可升级原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnavailableVersionReason 不可升级原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UnavailableReason> GetUnavailableVersionReason() const;

                    /**
                     * 判断参数 UnavailableVersionReason 是否已赋值
                     * @return UnavailableVersionReason 是否已赋值
                     * 
                     */
                    bool UnavailableVersionReasonHasBeenSet() const;

                private:

                    /**
                     * 集群master当前小版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群master对应的大版本目前最新小版本
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * 可升级节点列表
                     */
                    std::vector<UpgradeAbleInstancesItem> m_upgradeAbleInstances;
                    bool m_upgradeAbleInstancesHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 不可升级原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UnavailableReason> m_unavailableVersionReason;
                    bool m_unavailableVersionReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLERESPONSE_H_
