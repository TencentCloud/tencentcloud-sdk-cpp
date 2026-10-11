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
#include <tencentcloud/oceanus/v20190422/model/Tag.h>


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
                     * 获取<p>集群SerialId</p>
                     * @return ClusterGroupSerialId <p>集群SerialId</p>
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置<p>集群SerialId</p>
                     * @param _clusterGroupSerialId <p>集群SerialId</p>
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
                     * 获取<p>创建者appId</p>
                     * @return AppId <p>创建者appId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>创建者appId</p>
                     * @param _appId <p>创建者appId</p>
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
                     * 获取<p>创建者主账号</p>
                     * @return OwnerUin <p>创建者主账号</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>创建者主账号</p>
                     * @param _ownerUin <p>创建者主账号</p>
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
                     * 获取<p>创建者账号</p>
                     * @return CreatorUin <p>创建者账号</p>
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者账号</p>
                     * @param _creatorUin <p>创建者账号</p>
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
                     * 获取<p>区域</p>
                     * @return Region <p>区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>区域</p>
                     * @param _region <p>区域</p>
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
                     * 获取<p>zone</p>
                     * @return Zone <p>zone</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>zone</p>
                     * @param _zone <p>zone</p>
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
                     * 获取<p>Session集群状态</p>
                     * @return Status <p>Session集群状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Session集群状态</p>
                     * @param _status <p>Session集群状态</p>
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
                     * 获取<p>Session集群消耗的cu数量</p>
                     * @return CuNum <p>Session集群消耗的cu数量</p>
                     * 
                     */
                    double GetCuNum() const;

                    /**
                     * 设置<p>Session集群消耗的cu数量</p>
                     * @param _cuNum <p>Session集群消耗的cu数量</p>
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
                     * 获取<p>Session集群的Flink版本</p>
                     * @return FlinkVersion <p>Session集群的Flink版本</p>
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>Session集群的Flink版本</p>
                     * @param _flinkVersion <p>Session集群的Flink版本</p>
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
                     * 获取<p>session集群FlinkUi地址</p>
                     * @return WebUIUrl <p>session集群FlinkUi地址</p>
                     * 
                     */
                    std::string GetWebUIUrl() const;

                    /**
                     * 设置<p>session集群FlinkUi地址</p>
                     * @param _webUIUrl <p>session集群FlinkUi地址</p>
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
                     * 获取<p>session集群高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>session集群高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置<p>session集群高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>session集群高级参数</p>
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
                     * 获取<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SessionClusterRefItem> GetResourceRefs() const;

                    /**
                     * 设置<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs <p>引用资源</p>
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
                     * 获取<p>JobManager的规格</p>
                     * @return JobManagerCuSpec <p>JobManager的规格</p>
                     * 
                     */
                    double GetJobManagerCuSpec() const;

                    /**
                     * 设置<p>JobManager的规格</p>
                     * @param _jobManagerCuSpec <p>JobManager的规格</p>
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
                     * 获取<p>TaskManager的规格</p>
                     * @return TaskManagerCuSpec <p>TaskManager的规格</p>
                     * 
                     */
                    double GetTaskManagerCuSpec() const;

                    /**
                     * 设置<p>TaskManager的规格</p>
                     * @param _taskManagerCuSpec <p>TaskManager的规格</p>
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
                     * 获取<p>TaskManager启动的数量</p>
                     * @return TaskManagerNum <p>TaskManager启动的数量</p>
                     * 
                     */
                    int64_t GetTaskManagerNum() const;

                    /**
                     * 设置<p>TaskManager启动的数量</p>
                     * @param _taskManagerNum <p>TaskManager启动的数量</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>JobManagerCpu</p>
                     * @return JobManagerCpu <p>JobManagerCpu</p>
                     * 
                     */
                    double GetJobManagerCpu() const;

                    /**
                     * 设置<p>JobManagerCpu</p>
                     * @param _jobManagerCpu <p>JobManagerCpu</p>
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
                     * 获取<p>JobManagerMem</p>
                     * @return JobManagerMem <p>JobManagerMem</p>
                     * 
                     */
                    double GetJobManagerMem() const;

                    /**
                     * 设置<p>JobManagerMem</p>
                     * @param _jobManagerMem <p>JobManagerMem</p>
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
                     * 获取<p>TaskManagerCpu</p>
                     * @return TaskManagerCpu <p>TaskManagerCpu</p>
                     * 
                     */
                    double GetTaskManagerCpu() const;

                    /**
                     * 设置<p>TaskManagerCpu</p>
                     * @param _taskManagerCpu <p>TaskManagerCpu</p>
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
                     * 获取<p>TaskManagerMem</p>
                     * @return TaskManagerMem <p>TaskManagerMem</p>
                     * 
                     */
                    double GetTaskManagerMem() const;

                    /**
                     * 设置<p>TaskManagerMem</p>
                     * @param _taskManagerMem <p>TaskManagerMem</p>
                     * 
                     */
                    void SetTaskManagerMem(const double& _taskManagerMem);

                    /**
                     * 判断参数 TaskManagerMem 是否已赋值
                     * @return TaskManagerMem 是否已赋值
                     * 
                     */
                    bool TaskManagerMemHasBeenSet() const;

                    /**
                     * 获取<p>jdk版本</p>
                     * @return JdkVersion <p>jdk版本</p>
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置<p>jdk版本</p>
                     * @param _jdkVersion <p>jdk版本</p>
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>session集群SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId <p>session集群SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置<p>session集群SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId <p>session集群SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterGroupName <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterGroupName() const;

                    /**
                     * 设置<p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterGroupName <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterGroupName(const std::string& _clusterGroupName);

                    /**
                     * 判断参数 ClusterGroupName 是否已赋值
                     * @return ClusterGroupName 是否已赋值
                     * 
                     */
                    bool ClusterGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>cu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCpu <p>cu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalCpu() const;

                    /**
                     * 设置<p>cu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCpu <p>cu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCpu(const double& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取<p>使用Mem</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalMem <p>使用Mem</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalMem() const;

                    /**
                     * 设置<p>使用Mem</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalMem <p>使用Mem</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalMem(const double& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取<p>空间Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceId <p>空间Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>空间Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceId <p>空间Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceName <p>空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置<p>空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceName <p>空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>采集日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogConfig <p>采集日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogConfig() const;

                    /**
                     * 设置<p>采集日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logConfig <p>采集日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogConfig(const std::string& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取<p>更新用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUin <p>更新用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUin() const;

                    /**
                     * 设置<p>更新用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUin <p>更新用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUin(const std::string& _updateUin);

                    /**
                     * 判断参数 UpdateUin 是否已赋值
                     * @return UpdateUin 是否已赋值
                     * 
                     */
                    bool UpdateUinHasBeenSet() const;

                private:

                    /**
                     * <p>集群SerialId</p>
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * <p>创建者appId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建者主账号</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>创建者账号</p>
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>zone</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Session集群状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Session集群消耗的cu数量</p>
                     */
                    double m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * <p>Session集群的Flink版本</p>
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>session集群FlinkUi地址</p>
                     */
                    std::string m_webUIUrl;
                    bool m_webUIUrlHasBeenSet;

                    /**
                     * <p>session集群高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SessionClusterRefItem> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * <p>JobManager的规格</p>
                     */
                    double m_jobManagerCuSpec;
                    bool m_jobManagerCuSpecHasBeenSet;

                    /**
                     * <p>TaskManager的规格</p>
                     */
                    double m_taskManagerCuSpec;
                    bool m_taskManagerCuSpecHasBeenSet;

                    /**
                     * <p>TaskManager启动的数量</p>
                     */
                    int64_t m_taskManagerNum;
                    bool m_taskManagerNumHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>JobManagerCpu</p>
                     */
                    double m_jobManagerCpu;
                    bool m_jobManagerCpuHasBeenSet;

                    /**
                     * <p>JobManagerMem</p>
                     */
                    double m_jobManagerMem;
                    bool m_jobManagerMemHasBeenSet;

                    /**
                     * <p>TaskManagerCpu</p>
                     */
                    double m_taskManagerCpu;
                    bool m_taskManagerCpuHasBeenSet;

                    /**
                     * <p>TaskManagerMem</p>
                     */
                    double m_taskManagerMem;
                    bool m_taskManagerMemHasBeenSet;

                    /**
                     * <p>jdk版本</p>
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>session集群SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterGroupName;
                    bool m_clusterGroupNameHasBeenSet;

                    /**
                     * <p>cu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * <p>使用Mem</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * <p>空间Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * <p>标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>采集日志配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * <p>更新用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUin;
                    bool m_updateUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERSESSION_H_
