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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERMAINTENANCEWINDOWANDEXCLUSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERMAINTENANCEWINDOWANDEXCLUSIONREQUEST_H_

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
                * DeleteClusterMaintenanceWindowAndExclusion请求参数结构体
                */
                class DeleteClusterMaintenanceWindowAndExclusionRequest : public AbstractModel
                {
                public:
                    DeleteClusterMaintenanceWindowAndExclusionRequest();
                    ~DeleteClusterMaintenanceWindowAndExclusionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，可以从容器服务控制台计划升级功能集群维护窗口页面获取（https://console.cloud.tencent.com/tke2/upgrade-plan）。
                     * @return ClusterID 集群ID，可以从容器服务控制台计划升级功能集群维护窗口页面获取（https://console.cloud.tencent.com/tke2/upgrade-plan）。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID，可以从容器服务控制台计划升级功能集群维护窗口页面获取（https://console.cloud.tencent.com/tke2/upgrade-plan）。
                     * @param _clusterID 集群ID，可以从容器服务控制台计划升级功能集群维护窗口页面获取（https://console.cloud.tencent.com/tke2/upgrade-plan）。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                private:

                    /**
                     * 集群ID，可以从容器服务控制台计划升级功能集群维护窗口页面获取（https://console.cloud.tencent.com/tke2/upgrade-plan）。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERMAINTENANCEWINDOWANDEXCLUSIONREQUEST_H_
