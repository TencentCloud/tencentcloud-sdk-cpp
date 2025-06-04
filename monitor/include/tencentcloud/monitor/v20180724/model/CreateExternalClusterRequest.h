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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXTERNALCLUSTERREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXTERNALCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateExternalCluster请求参数结构体
                */
                class CreateExternalClusterRequest : public AbstractModel
                {
                public:
                    CreateExternalClusterRequest();
                    ~CreateExternalClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群所在地域
                     * @return ClusterRegion 集群所在地域
                     * 
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置集群所在地域
                     * @param _clusterRegion 集群所在地域
                     * 
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     * 
                     */
                    bool ClusterRegionHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取外部标签
                     * @return ExternalLabels 外部标签
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置外部标签
                     * @param _externalLabels 外部标签
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                    /**
                     * 获取是否打开预聚合规则
                     * @return OpenDefaultRecord 是否打开预聚合规则
                     * 
                     */
                    bool GetOpenDefaultRecord() const;

                    /**
                     * 设置是否打开预聚合规则
                     * @param _openDefaultRecord 是否打开预聚合规则
                     * 
                     */
                    void SetOpenDefaultRecord(const bool& _openDefaultRecord);

                    /**
                     * 判断参数 OpenDefaultRecord 是否已赋值
                     * @return OpenDefaultRecord 是否已赋值
                     * 
                     */
                    bool OpenDefaultRecordHasBeenSet() const;

                    /**
                     * 获取是否开启公网
                     * @return EnableExternal 是否开启公网
                     * 
                     */
                    bool GetEnableExternal() const;

                    /**
                     * 设置是否开启公网
                     * @param _enableExternal 是否开启公网
                     * 
                     */
                    void SetEnableExternal(const bool& _enableExternal);

                    /**
                     * 判断参数 EnableExternal 是否已赋值
                     * @return EnableExternal 是否已赋值
                     * 
                     */
                    bool EnableExternalHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群所在地域
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 外部标签
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * 是否打开预聚合规则
                     */
                    bool m_openDefaultRecord;
                    bool m_openDefaultRecordHasBeenSet;

                    /**
                     * 是否开启公网
                     */
                    bool m_enableExternal;
                    bool m_enableExternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXTERNALCLUSTERREQUEST_H_
