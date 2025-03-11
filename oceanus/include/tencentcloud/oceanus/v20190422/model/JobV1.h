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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBV1_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBV1_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Tag.h>
#include <tencentcloud/oceanus/v20190422/model/JobEventInfo.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * Job详细信息
                */
                class JobV1 : public AbstractModel
                {
                public:
                    JobV1();
                    ~JobV1() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 作业名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置作业名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 作业名字
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
                     * 获取作业类型，1：sql作业，2：Jar作业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType 作业类型，1：sql作业，2：Jar作业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置作业类型，1：sql作业，2：Jar作业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType 作业类型，1：sql作业，2：Jar作业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 作业创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置作业创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 作业创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 作业启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置作业启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 作业启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取作业停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopTime 作业停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置作业停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopTime 作业停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取作业更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 作业更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置作业更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 作业更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业累计运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRunMillis 作业累计运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRunMillis() const;

                    /**
                     * 设置作业累计运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRunMillis 作业累计运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRunMillis(const int64_t& _totalRunMillis);

                    /**
                     * 判断参数 TotalRunMillis 是否已赋值
                     * @return TotalRunMillis 是否已赋值
                     * 
                     */
                    bool TotalRunMillisHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取操作错误提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOpResult 操作错误提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOpResult() const;

                    /**
                     * 设置操作错误提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOpResult 操作错误提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOpResult(const std::string& _lastOpResult);

                    /**
                     * 判断参数 LastOpResult 是否已赋值
                     * @return LastOpResult 是否已赋值
                     * 
                     */
                    bool LastOpResultHasBeenSet() const;

                    /**
                     * 获取集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名字
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

                    /**
                     * 获取最新配置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestJobConfigVersion 最新配置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLatestJobConfigVersion() const;

                    /**
                     * 设置最新配置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestJobConfigVersion 最新配置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestJobConfigVersion(const int64_t& _latestJobConfigVersion);

                    /**
                     * 判断参数 LatestJobConfigVersion 是否已赋值
                     * @return LatestJobConfigVersion 是否已赋值
                     * 
                     */
                    bool LatestJobConfigVersionHasBeenSet() const;

                    /**
                     * 获取已发布的配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishedJobConfigVersion 已发布的配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPublishedJobConfigVersion() const;

                    /**
                     * 设置已发布的配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishedJobConfigVersion 已发布的配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishedJobConfigVersion(const int64_t& _publishedJobConfigVersion);

                    /**
                     * 判断参数 PublishedJobConfigVersion 是否已赋值
                     * @return PublishedJobConfigVersion 是否已赋值
                     * 
                     */
                    bool PublishedJobConfigVersionHasBeenSet() const;

                    /**
                     * 获取运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCuNum 运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunningCuNum() const;

                    /**
                     * 设置运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCuNum 运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCuNum(const int64_t& _runningCuNum);

                    /**
                     * 判断参数 RunningCuNum 是否已赋值
                     * @return RunningCuNum 是否已赋值
                     * 
                     */
                    bool RunningCuNumHasBeenSet() const;

                    /**
                     * 获取作业内存规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuMem 作业内存规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCuMem() const;

                    /**
                     * 设置作业内存规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuMem 作业内存规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCuMem(const int64_t& _cuMem);

                    /**
                     * 判断参数 CuMem 是否已赋值
                     * @return CuMem 是否已赋值
                     * 
                     */
                    bool CuMemHasBeenSet() const;

                    /**
                     * 获取作业状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 作业状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置作业状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 作业状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取运行状态时表示单次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentRunMillis 运行状态时表示单次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentRunMillis() const;

                    /**
                     * 设置运行状态时表示单次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentRunMillis 运行状态时表示单次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentRunMillis(const int64_t& _currentRunMillis);

                    /**
                     * 判断参数 CurrentRunMillis 是否已赋值
                     * @return CurrentRunMillis 是否已赋值
                     * 
                     */
                    bool CurrentRunMillisHasBeenSet() const;

                    /**
                     * 获取作业所在的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 作业所在的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置作业所在的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 作业所在的集群ID
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
                     * 获取作业管理WEB UI 入口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebUIUrl 作业管理WEB UI 入口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebUIUrl() const;

                    /**
                     * 设置作业管理WEB UI 入口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webUIUrl 作业管理WEB UI 入口
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作业所在集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerType 作业所在集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSchedulerType() const;

                    /**
                     * 设置作业所在集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerType 作业所在集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerType(const int64_t& _schedulerType);

                    /**
                     * 判断参数 SchedulerType 是否已赋值
                     * @return SchedulerType 是否已赋值
                     * 
                     */
                    bool SchedulerTypeHasBeenSet() const;

                    /**
                     * 获取作业所在集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 作业所在集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置作业所在集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterStatus 作业所在集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取细粒度下的运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu 细粒度下的运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置细粒度下的运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu 细粒度下的运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取作业运行的 Flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion 作业运行的 Flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置作业运行的 Flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion 作业运行的 Flink 版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取工作空间 SerialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceId 工作空间 SerialId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceId 工作空间 SerialId
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
                     * 获取工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceName 工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceName 工作空间名称
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
                     * 获取作业标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 作业标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置作业标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 作业标签
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
                     * 获取作业异常事件信息	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventInfo 作业异常事件信息	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobEventInfo GetEventInfo() const;

                    /**
                     * 设置作业异常事件信息	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventInfo 作业异常事件信息	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventInfo(const JobEventInfo& _eventInfo);

                    /**
                     * 判断参数 EventInfo 是否已赋值
                     * @return EventInfo 是否已赋值
                     * 
                     */
                    bool EventInfoHasBeenSet() const;

                    /**
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述信息
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
                     * 获取0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingType 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScalingType() const;

                    /**
                     * 设置0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingType 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingType(const int64_t& _scalingType);

                    /**
                     * 判断参数 ScalingType 是否已赋值
                     * @return ScalingType 是否已赋值
                     * 
                     */
                    bool ScalingTypeHasBeenSet() const;

                    /**
                     * 获取使用CPU数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCpu 使用CPU数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置使用CPU数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCpu 使用CPU数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningCpu(const double& _runningCpu);

                    /**
                     * 判断参数 RunningCpu 是否已赋值
                     * @return RunningCpu 是否已赋值
                     * 
                     */
                    bool RunningCpuHasBeenSet() const;

                    /**
                     * 获取使用内存数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningMem 使用内存数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置使用内存数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningMem 使用内存数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningMem(const double& _runningMem);

                    /**
                     * 判断参数 RunningMem 是否已赋值
                     * @return RunningMem 是否已赋值
                     * 
                     */
                    bool RunningMemHasBeenSet() const;

                    /**
                     * 获取是否开了默认告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenJobDefaultAlarm 是否开了默认告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOpenJobDefaultAlarm() const;

                    /**
                     * 设置是否开了默认告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openJobDefaultAlarm 是否开了默认告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenJobDefaultAlarm(const int64_t& _openJobDefaultAlarm);

                    /**
                     * 判断参数 OpenJobDefaultAlarm 是否已赋值
                     * @return OpenJobDefaultAlarm 是否已赋值
                     * 
                     */
                    bool OpenJobDefaultAlarmHasBeenSet() const;

                    /**
                     * 获取操作中描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgressDesc 操作中描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgressDesc() const;

                    /**
                     * 设置操作中描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progressDesc 操作中描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgressDesc(const std::string& _progressDesc);

                    /**
                     * 判断参数 ProgressDesc 是否已赋值
                     * @return ProgressDesc 是否已赋值
                     * 
                     */
                    bool ProgressDescHasBeenSet() const;

                private:

                    /**
                     * 作业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 用户AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 作业名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 作业类型，1：sql作业，2：Jar作业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 作业创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 作业启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 作业停止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 作业更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 作业累计运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRunMillis;
                    bool m_totalRunMillisHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 操作错误提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOpResult;
                    bool m_lastOpResultHasBeenSet;

                    /**
                     * 集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 最新配置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_latestJobConfigVersion;
                    bool m_latestJobConfigVersionHasBeenSet;

                    /**
                     * 已发布的配置版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_publishedJobConfigVersion;
                    bool m_publishedJobConfigVersionHasBeenSet;

                    /**
                     * 运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runningCuNum;
                    bool m_runningCuNumHasBeenSet;

                    /**
                     * 作业内存规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * 作业状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 运行状态时表示单次运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentRunMillis;
                    bool m_currentRunMillisHasBeenSet;

                    /**
                     * 作业所在的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 作业管理WEB UI 入口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webUIUrl;
                    bool m_webUIUrlHasBeenSet;

                    /**
                     * 作业所在集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * 作业所在集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 细粒度下的运行的CU数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 作业运行的 Flink 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * 工作空间 SerialId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * 作业标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 作业异常事件信息	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobEventInfo m_eventInfo;
                    bool m_eventInfoHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 0:代表没开启调优任务，1:开启智能调优，2:代表定时调优

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scalingType;
                    bool m_scalingTypeHasBeenSet;

                    /**
                     * 使用CPU数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * 使用内存数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                    /**
                     * 是否开了默认告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_openJobDefaultAlarm;
                    bool m_openJobDefaultAlarmHasBeenSet;

                    /**
                     * 操作中描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_progressDesc;
                    bool m_progressDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBV1_H_
