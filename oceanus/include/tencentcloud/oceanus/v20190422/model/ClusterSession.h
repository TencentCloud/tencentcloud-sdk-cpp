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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERSESSION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>
#include <tencentcloud/oceanus/v20190422/model/SessionClusterRefItem.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * session集群信息
                */
                class ClusterSession : public AbstractModel
                {
                public:
                    ClusterSession();
                    ~ClusterSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群SerialId
                     * @return ClusterGroupSerialId 集群SerialId
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置集群SerialId
                     * @param _clusterGroupSerialId 集群SerialId
                     * 
                     */
                    void SetClusterGroupSerialId(const std::string& _clusterGroupSerialId);

                    /**
                     * 判断参数 ClusterGroupSerialId 是否已赋值
                     * @return ClusterGroupSerialId 是否已赋值
                     * 
                     */
                    bool ClusterGroupSerialIdHasBeenSet() const;

                    /**
                     * 获取创建者appId
                     * @return AppId 创建者appId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置创建者appId
                     * @param _appId 创建者appId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取创建者主账号
                     * @return OwnerUin 创建者主账号
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置创建者主账号
                     * @param _ownerUin 创建者主账号
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者账号
                     * @return CreatorUin 创建者账号
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者账号
                     * @param _creatorUin 创建者账号
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
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
                     * 获取zone
                     * @return Zone zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置zone
                     * @param _zone zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Session集群状态
                     * @return Status Session集群状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Session集群状态
                     * @param _status Session集群状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Session集群消耗的cu数量
                     * @return CuNum Session集群消耗的cu数量
                     * 
                     */
                    double GetCuNum() const;

                    /**
                     * 设置Session集群消耗的cu数量
                     * @param _cuNum Session集群消耗的cu数量
                     * 
                     */
                    void SetCuNum(const double& _cuNum);

                    /**
                     * 判断参数 CuNum 是否已赋值
                     * @return CuNum 是否已赋值
                     * 
                     */
                    bool CuNumHasBeenSet() const;

                    /**
                     * 获取Session集群的Flink版本
                     * @return FlinkVersion Session集群的Flink版本
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置Session集群的Flink版本
                     * @param _flinkVersion Session集群的Flink版本
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取session集群FlinkUi地址
                     * @return WebUIUrl session集群FlinkUi地址
                     * 
                     */
                    std::string GetWebUIUrl() const;

                    /**
                     * 设置session集群FlinkUi地址
                     * @param _webUIUrl session集群FlinkUi地址
                     * 
                     */
                    void SetWebUIUrl(const std::string& _webUIUrl);

                    /**
                     * 判断参数 WebUIUrl 是否已赋值
                     * @return WebUIUrl 是否已赋值
                     * 
                     */
                    bool WebUIUrlHasBeenSet() const;

                    /**
                     * 获取session集群高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties session集群高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置session集群高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties session集群高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SessionClusterRefItem> GetResourceRefs() const;

                    /**
                     * 设置引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRefs(const std::vector<SessionClusterRefItem>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取JobManager的规格
                     * @return JobManagerCuSpec JobManager的规格
                     * 
                     */
                    double GetJobManagerCuSpec() const;

                    /**
                     * 设置JobManager的规格
                     * @param _jobManagerCuSpec JobManager的规格
                     * 
                     */
                    void SetJobManagerCuSpec(const double& _jobManagerCuSpec);

                    /**
                     * 判断参数 JobManagerCuSpec 是否已赋值
                     * @return JobManagerCuSpec 是否已赋值
                     * 
                     */
                    bool JobManagerCuSpecHasBeenSet() const;

                    /**
                     * 获取TaskManager的规格
                     * @return TaskManagerCuSpec TaskManager的规格
                     * 
                     */
                    double GetTaskManagerCuSpec() const;

                    /**
                     * 设置TaskManager的规格
                     * @param _taskManagerCuSpec TaskManager的规格
                     * 
                     */
                    void SetTaskManagerCuSpec(const double& _taskManagerCuSpec);

                    /**
                     * 判断参数 TaskManagerCuSpec 是否已赋值
                     * @return TaskManagerCuSpec 是否已赋值
                     * 
                     */
                    bool TaskManagerCuSpecHasBeenSet() const;

                    /**
                     * 获取TaskManager启动的数量
                     * @return TaskManagerNum TaskManager启动的数量
                     * 
                     */
                    int64_t GetTaskManagerNum() const;

                    /**
                     * 设置TaskManager启动的数量
                     * @param _taskManagerNum TaskManager启动的数量
                     * 
                     */
                    void SetTaskManagerNum(const int64_t& _taskManagerNum);

                    /**
                     * 判断参数 TaskManagerNum 是否已赋值
                     * @return TaskManagerNum 是否已赋值
                     * 
                     */
                    bool TaskManagerNumHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取JobManagerCpu
                     * @return JobManagerCpu JobManagerCpu
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置JobManagerCpu
                     * @param _jobManagerCpu JobManagerCpu
                     * 
                     */
                    void SetJobManagerCpu(const double& _jobManagerCpu);

                    /**
                     * 判断参数 JobManagerCpu 是否已赋值
                     * @return JobManagerCpu 是否已赋值
                     * 
                     */
                    bool JobManagerCpuHasBeenSet() const;

                    /**
                     * 获取JobManagerMem
                     * @return JobManagerMem JobManagerMem
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置JobManagerMem
                     * @param _jobManagerMem JobManagerMem
                     * 
                     */
                    void SetJobManagerMem(const double& _jobManagerMem);

                    /**
                     * 判断参数 JobManagerMem 是否已赋值
                     * @return JobManagerMem 是否已赋值
                     * 
                     */
                    bool JobManagerMemHasBeenSet() const;

                    /**
                     * 获取TaskManagerCpu
                     * @return TaskManagerCpu TaskManagerCpu
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置TaskManagerCpu
                     * @param _taskManagerCpu TaskManagerCpu
                     * 
                     */
                    void SetTaskManagerCpu(const double& _taskManagerCpu);

                    /**
                     * 判断参数 TaskManagerCpu 是否已赋值
                     * @return TaskManagerCpu 是否已赋值
                     * 
                     */
                    bool TaskManagerCpuHasBeenSet() const;

                    /**
                     * 获取TaskManagerMem
                     * @return TaskManagerMem TaskManagerMem
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置TaskManagerMem
                     * @param _taskManagerMem TaskManagerMem
                     * 
                     */
                    void SetTaskManagerMem(const double& _taskManagerMem);

                    /**
                     * 判断参数 TaskManagerMem 是否已赋值
                     * @return TaskManagerMem 是否已赋值
                     * 
                     */
                    bool TaskManagerMemHasBeenSet() const;

                private:

                    /**
                     * 集群SerialId
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * 创建者appId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建者主账号
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者账号
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Session集群状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Session集群消耗的cu数量
                     */
                    double m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * Session集群的Flink版本
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * session集群FlinkUi地址
                     */
                    std::string m_webUIUrl;
                    bool m_webUIUrlHasBeenSet;

                    /**
                     * session集群高级参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 引用资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SessionClusterRefItem> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * JobManager的规格
                     */
                    double m_jobManagerCuSpec;
                    bool m_jobManagerCuSpecHasBeenSet;

                    /**
                     * TaskManager的规格
                     */
                    double m_taskManagerCuSpec;
                    bool m_taskManagerCuSpecHasBeenSet;

                    /**
                     * TaskManager启动的数量
                     */
                    int64_t m_taskManagerNum;
                    bool m_taskManagerNumHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * JobManagerCpu
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * JobManagerMem
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * TaskManagerCpu
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * TaskManagerMem
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERSESSION_H_
