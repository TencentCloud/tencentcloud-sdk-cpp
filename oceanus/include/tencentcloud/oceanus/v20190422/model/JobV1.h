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
                     * 获取<p>作业ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId <p>作业ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId <p>作业ID</p>
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
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
                     * 获取<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>用户AppId</p>
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
                     * 获取<p>用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin <p>用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin <p>用户UIN</p>
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
                     * 获取<p>创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>创建者UIN</p>
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
                     * 获取<p>作业名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>作业名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>作业名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>作业名字</p>
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
                     * 获取<p>作业类型，1：sql作业，2：Jar作业</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType <p>作业类型，1：sql作业，2：Jar作业</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置<p>作业类型，1：sql作业，2：Jar作业</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType <p>作业类型，1：sql作业，2：Jar作业</p>
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
                     * 获取<p>作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障</p>
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
                     * 获取<p>作业创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>作业创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>作业创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>作业创建时间</p>
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
                     * 获取<p>作业启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>作业启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>作业启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>作业启动时间</p>
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
                     * 获取<p>作业停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopTime <p>作业停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置<p>作业停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopTime <p>作业停止时间</p>
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
                     * 获取<p>作业更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>作业更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>作业更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>作业更新时间</p>
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
                     * 获取<p>作业累计运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRunMillis <p>作业累计运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalRunMillis() const;

                    /**
                     * 设置<p>作业累计运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRunMillis <p>作业累计运行时间</p>
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
                     * 获取<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>操作错误提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOpResult <p>操作错误提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOpResult() const;

                    /**
                     * 设置<p>操作错误提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOpResult <p>操作错误提示信息</p>
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
                     * 获取<p>集群名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName <p>集群名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName <p>集群名字</p>
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
                     * 获取<p>最新配置版本号，包括已经删除的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestJobConfigVersion <p>最新配置版本号，包括已经删除的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLatestJobConfigVersion() const;

                    /**
                     * 设置<p>最新配置版本号，包括已经删除的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestJobConfigVersion <p>最新配置版本号，包括已经删除的版本</p>
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
                     * 获取<p>最新的版本号，不包括已经删除的版本号</p>
                     * @return LatestValidJobConfigVersion <p>最新的版本号，不包括已经删除的版本号</p>
                     * 
                     */
                    int64_t GetLatestValidJobConfigVersion() const;

                    /**
                     * 设置<p>最新的版本号，不包括已经删除的版本号</p>
                     * @param _latestValidJobConfigVersion <p>最新的版本号，不包括已经删除的版本号</p>
                     * 
                     */
                    void SetLatestValidJobConfigVersion(const int64_t& _latestValidJobConfigVersion);

                    /**
                     * 判断参数 LatestValidJobConfigVersion 是否已赋值
                     * @return LatestValidJobConfigVersion 是否已赋值
                     * 
                     */
                    bool LatestValidJobConfigVersionHasBeenSet() const;

                    /**
                     * 获取<p>已发布的配置版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishedJobConfigVersion <p>已发布的配置版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPublishedJobConfigVersion() const;

                    /**
                     * 设置<p>已发布的配置版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishedJobConfigVersion <p>已发布的配置版本</p>
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
                     * 获取<p>运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCuNum <p>运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunningCuNum() const;

                    /**
                     * 设置<p>运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCuNum <p>运行的CU数量</p>
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
                     * 获取<p>作业内存规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuMem <p>作业内存规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCuMem() const;

                    /**
                     * 设置<p>作业内存规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuMem <p>作业内存规格</p>
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
                     * 获取<p>作业状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc <p>作业状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>作业状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc <p>作业状态描述</p>
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
                     * 获取<p>运行状态时表示单次运行时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentRunMillis <p>运行状态时表示单次运行时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCurrentRunMillis() const;

                    /**
                     * 设置<p>运行状态时表示单次运行时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentRunMillis <p>运行状态时表示单次运行时间</p><p>单位：毫秒</p>
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
                     * 获取<p>作业所在的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>作业所在的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>作业所在的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>作业所在的集群ID</p>
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
                     * 获取<p>作业管理WEB UI 入口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebUIUrl <p>作业管理WEB UI 入口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebUIUrl() const;

                    /**
                     * 设置<p>作业管理WEB UI 入口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webUIUrl <p>作业管理WEB UI 入口</p>
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
                     * 获取<p>作业所在集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerType <p>作业所在集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSchedulerType() const;

                    /**
                     * 设置<p>作业所在集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerType <p>作业所在集群类型</p>
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
                     * 获取<p>作业所在集群状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus <p>作业所在集群状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置<p>作业所在集群状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterStatus <p>作业所在集群状态</p>
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
                     * 获取<p>细粒度下的运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCu <p>细粒度下的运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置<p>细粒度下的运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCu <p>细粒度下的运行的CU数量</p>
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
                     * 获取<p>作业运行的 Flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion <p>作业运行的 Flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>作业运行的 Flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion <p>作业运行的 Flink 版本</p>
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
                     * 获取<p>工作空间 SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceId <p>工作空间 SerialId</p>
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
                     * 获取<p>工作空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkSpaceName <p>工作空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置<p>工作空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workSpaceName <p>工作空间名称</p>
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
                     * 获取<p>作业标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>作业标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>作业标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>作业标签</p>
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
                     * 获取<p>作业异常事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventInfo <p>作业异常事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JobEventInfo GetEventInfo() const;

                    /**
                     * 设置<p>作业异常事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventInfo <p>作业异常事件信息</p>
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
                     * 获取<p>描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述信息</p>
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
                     * 获取<p>0:代表没开启调优任务，1:开启智能调优，2:代表定时调优</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingType <p>0:代表没开启调优任务，1:开启智能调优，2:代表定时调优</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScalingType() const;

                    /**
                     * 设置<p>0:代表没开启调优任务，1:开启智能调优，2:代表定时调优</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingType <p>0:代表没开启调优任务，1:开启智能调优，2:代表定时调优</p>
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
                     * 获取<p>使用CPU数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningCpu <p>使用CPU数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置<p>使用CPU数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningCpu <p>使用CPU数目</p>
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
                     * 获取<p>使用内存数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningMem <p>使用内存数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置<p>使用内存数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningMem <p>使用内存数量</p>
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
                     * 获取<p>是否开了默认告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenJobDefaultAlarm <p>是否开了默认告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOpenJobDefaultAlarm() const;

                    /**
                     * 设置<p>是否开了默认告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openJobDefaultAlarm <p>是否开了默认告警</p>
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
                     * 获取<p>操作中描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgressDesc <p>操作中描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgressDesc() const;

                    /**
                     * 设置<p>操作中描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progressDesc <p>操作中描述</p>
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

                    /**
                     * 获取<p>停止持续告警</p>
                     * @return ContinueAlarm <p>停止持续告警</p>
                     * 
                     */
                    int64_t GetContinueAlarm() const;

                    /**
                     * 设置<p>停止持续告警</p>
                     * @param _continueAlarm <p>停止持续告警</p>
                     * 
                     */
                    void SetContinueAlarm(const int64_t& _continueAlarm);

                    /**
                     * 判断参数 ContinueAlarm 是否已赋值
                     * @return ContinueAlarm 是否已赋值
                     * 
                     */
                    bool ContinueAlarmHasBeenSet() const;

                    /**
                     * 获取<p>作业重启次数</p>
                     * @return RestartCount <p>作业重启次数</p>
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置<p>作业重启次数</p>
                     * @param _restartCount <p>作业重启次数</p>
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取<p>期望是开启默认告警</p>
                     * @return ExpectJobDefaultAlarmStatus <p>期望是开启默认告警</p>
                     * 
                     */
                    int64_t GetExpectJobDefaultAlarmStatus() const;

                    /**
                     * 设置<p>期望是开启默认告警</p>
                     * @param _expectJobDefaultAlarmStatus <p>期望是开启默认告警</p>
                     * 
                     */
                    void SetExpectJobDefaultAlarmStatus(const int64_t& _expectJobDefaultAlarmStatus);

                    /**
                     * 判断参数 ExpectJobDefaultAlarmStatus 是否已赋值
                     * @return ExpectJobDefaultAlarmStatus 是否已赋值
                     * 
                     */
                    bool ExpectJobDefaultAlarmStatusHasBeenSet() const;

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
                     * 获取<p>状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateCOSBucket <p>状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateCOSBucket() const;

                    /**
                     * 设置<p>状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateCOSBucket <p>状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateCOSBucket(const std::string& _stateCOSBucket);

                    /**
                     * 判断参数 StateCOSBucket 是否已赋值
                     * @return StateCOSBucket 是否已赋值
                     * 
                     */
                    bool StateCOSBucketHasBeenSet() const;

                    /**
                     * 获取<p>新的状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewStateCOSBucket <p>新的状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewStateCOSBucket() const;

                    /**
                     * 设置<p>新的状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newStateCOSBucket <p>新的状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewStateCOSBucket(const std::string& _newStateCOSBucket);

                    /**
                     * 判断参数 NewStateCOSBucket 是否已赋值
                     * @return NewStateCOSBucket 是否已赋值
                     * 
                     */
                    bool NewStateCOSBucketHasBeenSet() const;

                    /**
                     * 获取<p>同类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateCOSBucketType <p>同类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStateCOSBucketType() const;

                    /**
                     * 设置<p>同类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateCOSBucketType <p>同类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateCOSBucketType(const int64_t& _stateCOSBucketType);

                    /**
                     * 判断参数 StateCOSBucketType 是否已赋值
                     * @return StateCOSBucketType 是否已赋值
                     * 
                     */
                    bool StateCOSBucketTypeHasBeenSet() const;

                    /**
                     * 获取<p>新的桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewStateCOSBucketType <p>新的桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNewStateCOSBucketType() const;

                    /**
                     * 设置<p>新的桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newStateCOSBucketType <p>新的桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewStateCOSBucketType(const int64_t& _newStateCOSBucketType);

                    /**
                     * 判断参数 NewStateCOSBucketType 是否已赋值
                     * @return NewStateCOSBucketType 是否已赋值
                     * 
                     */
                    bool NewStateCOSBucketTypeHasBeenSet() const;

                private:

                    /**
                     * <p>作业ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>用户AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>用户UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>创建者UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>作业名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>作业类型，1：sql作业，2：Jar作业</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * <p>作业状态，1：未初始化，2：未发布，3：操作中，4：运行中，5：停止，6：暂停，-1：故障</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>作业创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>作业启动时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>作业停止时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * <p>作业更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>作业累计运行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalRunMillis;
                    bool m_totalRunMillisHasBeenSet;

                    /**
                     * <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>操作错误提示信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOpResult;
                    bool m_lastOpResultHasBeenSet;

                    /**
                     * <p>集群名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>最新配置版本号，包括已经删除的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_latestJobConfigVersion;
                    bool m_latestJobConfigVersionHasBeenSet;

                    /**
                     * <p>最新的版本号，不包括已经删除的版本号</p>
                     */
                    int64_t m_latestValidJobConfigVersion;
                    bool m_latestValidJobConfigVersionHasBeenSet;

                    /**
                     * <p>已发布的配置版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_publishedJobConfigVersion;
                    bool m_publishedJobConfigVersionHasBeenSet;

                    /**
                     * <p>运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runningCuNum;
                    bool m_runningCuNumHasBeenSet;

                    /**
                     * <p>作业内存规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * <p>作业状态描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>运行状态时表示单次运行时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_currentRunMillis;
                    bool m_currentRunMillisHasBeenSet;

                    /**
                     * <p>作业所在的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>作业管理WEB UI 入口</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webUIUrl;
                    bool m_webUIUrlHasBeenSet;

                    /**
                     * <p>作业所在集群类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_schedulerType;
                    bool m_schedulerTypeHasBeenSet;

                    /**
                     * <p>作业所在集群状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>细粒度下的运行的CU数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * <p>作业运行的 Flink 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>工作空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                    /**
                     * <p>作业标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>作业异常事件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JobEventInfo m_eventInfo;
                    bool m_eventInfoHasBeenSet;

                    /**
                     * <p>描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>0:代表没开启调优任务，1:开启智能调优，2:代表定时调优</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scalingType;
                    bool m_scalingTypeHasBeenSet;

                    /**
                     * <p>使用CPU数目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * <p>使用内存数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                    /**
                     * <p>是否开了默认告警</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_openJobDefaultAlarm;
                    bool m_openJobDefaultAlarmHasBeenSet;

                    /**
                     * <p>操作中描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_progressDesc;
                    bool m_progressDescHasBeenSet;

                    /**
                     * <p>停止持续告警</p>
                     */
                    int64_t m_continueAlarm;
                    bool m_continueAlarmHasBeenSet;

                    /**
                     * <p>作业重启次数</p>
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * <p>期望是开启默认告警</p>
                     */
                    int64_t m_expectJobDefaultAlarmStatus;
                    bool m_expectJobDefaultAlarmStatusHasBeenSet;

                    /**
                     * <p>jdk版本</p>
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * <p>状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateCOSBucket;
                    bool m_stateCOSBucketHasBeenSet;

                    /**
                     * <p>新的状态桶名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newStateCOSBucket;
                    bool m_newStateCOSBucketHasBeenSet;

                    /**
                     * <p>同类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_stateCOSBucketType;
                    bool m_stateCOSBucketTypeHasBeenSet;

                    /**
                     * <p>新的桶类型</p><p>枚举值：</p><ul><li>0： 普通桶</li><li>1： 加速桶</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_newStateCOSBucketType;
                    bool m_newStateCOSBucketTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBV1_H_
