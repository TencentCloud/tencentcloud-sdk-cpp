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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 云原生Prometheus模板同步目标
                */
                class PrometheusTemplateSyncTarget : public AbstractModel
                {
                public:
                    PrometheusTemplateSyncTarget();
                    ~PrometheusTemplateSyncTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标所在地域</p>
                     * @return Region <p>目标所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>目标所在地域</p>
                     * @param _region <p>目标所在地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>目标实例</p>
                     * @return InstanceId <p>目标实例</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>目标实例</p>
                     * @param _instanceId <p>目标实例</p>
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
                     * 获取<p>集群id，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群id，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群id，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>最后一次同步时间， 用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncTime <p>最后一次同步时间， 用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSyncTime() const;

                    /**
                     * 设置<p>最后一次同步时间， 用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncTime <p>最后一次同步时间， 用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncTime(const std::string& _syncTime);

                    /**
                     * 判断参数 SyncTime 是否已赋值
                     * @return SyncTime 是否已赋值
                     * 
                     */
                    bool SyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>当前使用的模板版本，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>当前使用的模板版本，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>当前使用的模板版本，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>当前使用的模板版本，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>集群类型，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType <p>集群类型，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType <p>集群类型，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>用于出参，实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>用于出参，实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>用于出参，实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>用于出参，实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>用于出参，集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName <p>用于出参，集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>用于出参，集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName <p>用于出参，集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>目标所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>目标实例</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群id，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>最后一次同步时间， 用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_syncTime;
                    bool m_syncTimeHasBeenSet;

                    /**
                     * <p>当前使用的模板版本，用于出参</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>集群类型，只有当采集模板的Level为cluster的时候需要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>用于出参，实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>用于出参，集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTEMPLATESYNCTARGET_H_
