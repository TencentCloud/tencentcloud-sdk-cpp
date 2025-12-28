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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_

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
                * DisableControlPlaneLogs请求参数结构体
                */
                class DisableControlPlaneLogsRequest : public AbstractModel
                {
                public:
                    DisableControlPlaneLogsRequest();
                    ~DisableControlPlaneLogsRequest() = default;
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
                     * 获取集群类型。当前只支持tke
                     * @return ClusterType 集群类型。当前只支持tke
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型。当前只支持tke
                     * @param _clusterType 集群类型。当前只支持tke
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取组件名称列表，目前支持的组件有：cluster-autoscaler、kapenter
                     * @return ComponentNames 组件名称列表，目前支持的组件有：cluster-autoscaler、kapenter
                     * 
                     */
                    std::vector<std::string> GetComponentNames() const;

                    /**
                     * 设置组件名称列表，目前支持的组件有：cluster-autoscaler、kapenter
                     * @param _componentNames 组件名称列表，目前支持的组件有：cluster-autoscaler、kapenter
                     * 
                     */
                    void SetComponentNames(const std::vector<std::string>& _componentNames);

                    /**
                     * 判断参数 ComponentNames 是否已赋值
                     * @return ComponentNames 是否已赋值
                     * 
                     */
                    bool ComponentNamesHasBeenSet() const;

                    /**
                     * 获取是否删除日志集和topic。 如果日志集和topic被其他采集规则使用，则不会被删除
                     * @return DeleteLogSetAndTopic 是否删除日志集和topic。 如果日志集和topic被其他采集规则使用，则不会被删除
                     * 
                     */
                    bool GetDeleteLogSetAndTopic() const;

                    /**
                     * 设置是否删除日志集和topic。 如果日志集和topic被其他采集规则使用，则不会被删除
                     * @param _deleteLogSetAndTopic 是否删除日志集和topic。 如果日志集和topic被其他采集规则使用，则不会被删除
                     * 
                     */
                    void SetDeleteLogSetAndTopic(const bool& _deleteLogSetAndTopic);

                    /**
                     * 判断参数 DeleteLogSetAndTopic 是否已赋值
                     * @return DeleteLogSetAndTopic 是否已赋值
                     * 
                     */
                    bool DeleteLogSetAndTopicHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群类型。当前只支持tke
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 组件名称列表，目前支持的组件有：cluster-autoscaler、kapenter
                     */
                    std::vector<std::string> m_componentNames;
                    bool m_componentNamesHasBeenSet;

                    /**
                     * 是否删除日志集和topic。 如果日志集和topic被其他采集规则使用，则不会被删除
                     */
                    bool m_deleteLogSetAndTopic;
                    bool m_deleteLogSetAndTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_
