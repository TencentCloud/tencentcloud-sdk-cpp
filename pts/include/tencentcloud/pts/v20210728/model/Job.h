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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/LoadSource.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/NotificationHook.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 任务
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的JobID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 任务的JobID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务的JobID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 任务的JobID
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
                     * 获取任务的场景ID
                     * @return ScenarioId 任务的场景ID
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置任务的场景ID
                     * @param _scenarioId 任务的场景ID
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取任务的施压配置
                     * @return Load 任务的施压配置
                     * 
                     */
                    Load GetLoad() const;

                    /**
                     * 设置任务的施压配置
                     * @param _load 任务的施压配置
                     * 
                     */
                    void SetLoad(const Load& _load);

                    /**
                     * 判断参数 Load 是否已赋值
                     * @return Load 是否已赋值
                     * 
                     */
                    bool LoadHasBeenSet() const;

                    /**
                     * 获取此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configs 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configs 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigs(const std::vector<std::string>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取任务的数据集文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Datasets 任务的数据集文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置任务的数据集文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasets 任务的数据集文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasets(const std::vector<TestData>& _datasets);

                    /**
                     * 判断参数 Datasets 是否已赋值
                     * @return Datasets 是否已赋值
                     * 
                     */
                    bool DatasetsHasBeenSet() const;

                    /**
                     * 获取此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extensions 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensions 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtensions(const std::vector<std::string>& _extensions);

                    /**
                     * 判断参数 Extensions 是否已赋值
                     * @return Extensions 是否已赋值
                     * 
                     */
                    bool ExtensionsHasBeenSet() const;

                    /**
                     * 获取任务的运行状态, JobUnknown: 0,JobCreated:1,JobPending:2, JobPreparing:3,JobSelectClustering:4,JobCreateTasking:5,JobSyncTasking:6
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21
                     * @return Status 任务的运行状态, JobUnknown: 0,JobCreated:1,JobPending:2, JobPreparing:3,JobSelectClustering:4,JobCreateTasking:5,JobSyncTasking:6
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务的运行状态, JobUnknown: 0,JobCreated:1,JobPending:2, JobPreparing:3,JobSelectClustering:4,JobCreateTasking:5,JobSyncTasking:6
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21
                     * @param _status 任务的运行状态, JobUnknown: 0,JobCreated:1,JobPending:2, JobPreparing:3,JobSelectClustering:4,JobCreateTasking:5,JobSyncTasking:6
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21
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
                     * 获取任务的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 任务的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 任务的开始时间
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
                     * 获取任务的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 任务的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 任务的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务的最大VU数
                     * @return MaxVirtualUserCount 任务的最大VU数
                     * 
                     */
                    int64_t GetMaxVirtualUserCount() const;

                    /**
                     * 设置任务的最大VU数
                     * @param _maxVirtualUserCount 任务的最大VU数
                     * 
                     */
                    void SetMaxVirtualUserCount(const int64_t& _maxVirtualUserCount);

                    /**
                     * 判断参数 MaxVirtualUserCount 是否已赋值
                     * @return MaxVirtualUserCount 是否已赋值
                     * 
                     */
                    bool MaxVirtualUserCountHasBeenSet() const;

                    /**
                     * 获取任务的备注信息
                     * @return Note 任务的备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置任务的备注信息
                     * @param _note 任务的备注信息
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取错误率百分比
                     * @return ErrorRate 错误率百分比
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置错误率百分比
                     * @param _errorRate 错误率百分比
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                    /**
                     * 获取任务发起人
                     * @return JobOwner 任务发起人
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置任务发起人
                     * @param _jobOwner 任务发起人
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

                    /**
                     * 获取此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadSources 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LoadSource GetLoadSources() const;

                    /**
                     * 设置此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadSources 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadSources(const LoadSource& _loadSources);

                    /**
                     * 判断参数 LoadSources 是否已赋值
                     * @return LoadSources 是否已赋值
                     * 
                     */
                    bool LoadSourcesHasBeenSet() const;

                    /**
                     * 获取任务时长
                     * @return Duration 任务时长
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置任务时长
                     * @param _duration 任务时长
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取最大每秒请求数
                     * @return MaxRequestsPerSecond 最大每秒请求数
                     * 
                     */
                    int64_t GetMaxRequestsPerSecond() const;

                    /**
                     * 设置最大每秒请求数
                     * @param _maxRequestsPerSecond 最大每秒请求数
                     * 
                     */
                    void SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond);

                    /**
                     * 判断参数 MaxRequestsPerSecond 是否已赋值
                     * @return MaxRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool MaxRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取总请求数
                     * @return RequestTotal 总请求数
                     * 
                     */
                    double GetRequestTotal() const;

                    /**
                     * 设置总请求数
                     * @param _requestTotal 总请求数
                     * 
                     */
                    void SetRequestTotal(const double& _requestTotal);

                    /**
                     * 判断参数 RequestTotal 是否已赋值
                     * @return RequestTotal 是否已赋值
                     * 
                     */
                    bool RequestTotalHasBeenSet() const;

                    /**
                     * 获取平均每秒请求数
                     * @return RequestsPerSecond 平均每秒请求数
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 设置平均每秒请求数
                     * @param _requestsPerSecond 平均每秒请求数
                     * 
                     */
                    void SetRequestsPerSecond(const double& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取平均响应时间
                     * @return ResponseTimeAverage 平均响应时间
                     * 
                     */
                    double GetResponseTimeAverage() const;

                    /**
                     * 设置平均响应时间
                     * @param _responseTimeAverage 平均响应时间
                     * 
                     */
                    void SetResponseTimeAverage(const double& _responseTimeAverage);

                    /**
                     * 判断参数 ResponseTimeAverage 是否已赋值
                     * @return ResponseTimeAverage 是否已赋值
                     * 
                     */
                    bool ResponseTimeAverageHasBeenSet() const;

                    /**
                     * 获取响应时间第99百分位
                     * @return ResponseTimeP99 响应时间第99百分位
                     * 
                     */
                    double GetResponseTimeP99() const;

                    /**
                     * 设置响应时间第99百分位
                     * @param _responseTimeP99 响应时间第99百分位
                     * 
                     */
                    void SetResponseTimeP99(const double& _responseTimeP99);

                    /**
                     * 判断参数 ResponseTimeP99 是否已赋值
                     * @return ResponseTimeP99 是否已赋值
                     * 
                     */
                    bool ResponseTimeP99HasBeenSet() const;

                    /**
                     * 获取响应时间第95百分位
                     * @return ResponseTimeP95 响应时间第95百分位
                     * 
                     */
                    double GetResponseTimeP95() const;

                    /**
                     * 设置响应时间第95百分位
                     * @param _responseTimeP95 响应时间第95百分位
                     * 
                     */
                    void SetResponseTimeP95(const double& _responseTimeP95);

                    /**
                     * 判断参数 ResponseTimeP95 是否已赋值
                     * @return ResponseTimeP95 是否已赋值
                     * 
                     */
                    bool ResponseTimeP95HasBeenSet() const;

                    /**
                     * 获取响应时间第90百分位
                     * @return ResponseTimeP90 响应时间第90百分位
                     * 
                     */
                    double GetResponseTimeP90() const;

                    /**
                     * 设置响应时间第90百分位
                     * @param _responseTimeP90 响应时间第90百分位
                     * 
                     */
                    void SetResponseTimeP90(const double& _responseTimeP90);

                    /**
                     * 判断参数 ResponseTimeP90 是否已赋值
                     * @return ResponseTimeP90 是否已赋值
                     * 
                     */
                    bool ResponseTimeP90HasBeenSet() const;

                    /**
                     * 获取此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scripts 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetScripts() const;

                    /**
                     * 设置此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scripts 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScripts(const std::vector<std::string>& _scripts);

                    /**
                     * 判断参数 Scripts 是否已赋值
                     * @return Scripts 是否已赋值
                     * 
                     */
                    bool ScriptsHasBeenSet() const;

                    /**
                     * 获取最大响应时间
                     * @return ResponseTimeMax 最大响应时间
                     * 
                     */
                    double GetResponseTimeMax() const;

                    /**
                     * 设置最大响应时间
                     * @param _responseTimeMax 最大响应时间
                     * 
                     */
                    void SetResponseTimeMax(const double& _responseTimeMax);

                    /**
                     * 判断参数 ResponseTimeMax 是否已赋值
                     * @return ResponseTimeMax 是否已赋值
                     * 
                     */
                    bool ResponseTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小响应时间
                     * @return ResponseTimeMin 最小响应时间
                     * 
                     */
                    double GetResponseTimeMin() const;

                    /**
                     * 设置最小响应时间
                     * @param _responseTimeMin 最小响应时间
                     * 
                     */
                    void SetResponseTimeMin(const double& _responseTimeMin);

                    /**
                     * 判断参数 ResponseTimeMin 是否已赋值
                     * @return ResponseTimeMin 是否已赋值
                     * 
                     */
                    bool ResponseTimeMinHasBeenSet() const;

                    /**
                     * 获取发压host信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadSourceInfos 发压host信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LoadSource> GetLoadSourceInfos() const;

                    /**
                     * 设置发压host信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadSourceInfos 发压host信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadSourceInfos(const std::vector<LoadSource>& _loadSourceInfos);

                    /**
                     * 判断参数 LoadSourceInfos 是否已赋值
                     * @return LoadSourceInfos 是否已赋值
                     * 
                     */
                    bool LoadSourceInfosHasBeenSet() const;

                    /**
                     * 获取测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TestScripts 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _testScripts 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTestScripts(const std::vector<ScriptInfo>& _testScripts);

                    /**
                     * 判断参数 TestScripts 是否已赋值
                     * @return TestScripts 是否已赋值
                     * 
                     */
                    bool TestScriptsHasBeenSet() const;

                    /**
                     * 获取协议脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocols 协议脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置协议脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocols 协议脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocols(const std::vector<ProtocolInfo>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestFiles 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestFiles 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestFiles(const std::vector<FileInfo>& _requestFiles);

                    /**
                     * 判断参数 RequestFiles 是否已赋值
                     * @return RequestFiles 是否已赋值
                     * 
                     */
                    bool RequestFilesHasBeenSet() const;

                    /**
                     * 获取拓展包文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Plugins 拓展包文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置拓展包文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _plugins 拓展包文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlugins(const std::vector<FileInfo>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取定时任务ID
                     * @return CronId 定时任务ID
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置定时任务ID
                     * @param _cronId 定时任务ID
                     * 
                     */
                    void SetCronId(const std::string& _cronId);

                    /**
                     * 判断参数 CronId 是否已赋值
                     * @return CronId 是否已赋值
                     * 
                     */
                    bool CronIdHasBeenSet() const;

                    /**
                     * 获取场景类型
                     * @return Type 场景类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置场景类型
                     * @param _type 场景类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取域名绑定配置
                     * @return DomainNameConfig 域名绑定配置
                     * 
                     */
                    DomainNameConfig GetDomainNameConfig() const;

                    /**
                     * 设置域名绑定配置
                     * @param _domainNameConfig 域名绑定配置
                     * 
                     */
                    void SetDomainNameConfig(const DomainNameConfig& _domainNameConfig);

                    /**
                     * 判断参数 DomainNameConfig 是否已赋值
                     * @return DomainNameConfig 是否已赋值
                     * 
                     */
                    bool DomainNameConfigHasBeenSet() const;

                    /**
                     * 获取false
                     * @return Debug false
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置false
                     * @param _debug false
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取中断原因
                     * @return AbortReason 中断原因
                     * 
                     */
                    int64_t GetAbortReason() const;

                    /**
                     * 设置中断原因
                     * @param _abortReason 中断原因
                     * 
                     */
                    void SetAbortReason(const int64_t& _abortReason);

                    /**
                     * 判断参数 AbortReason 是否已赋值
                     * @return AbortReason 是否已赋值
                     * 
                     */
                    bool AbortReasonHasBeenSet() const;

                    /**
                     * 获取任务的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 任务的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置任务的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 任务的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotificationHooks 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NotificationHook> GetNotificationHooks() const;

                    /**
                     * 设置通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notificationHooks 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotificationHooks(const std::vector<NotificationHook>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取每秒接收字节数
                     * @return NetworkReceiveRate 每秒接收字节数
                     * 
                     */
                    double GetNetworkReceiveRate() const;

                    /**
                     * 设置每秒接收字节数
                     * @param _networkReceiveRate 每秒接收字节数
                     * 
                     */
                    void SetNetworkReceiveRate(const double& _networkReceiveRate);

                    /**
                     * 判断参数 NetworkReceiveRate 是否已赋值
                     * @return NetworkReceiveRate 是否已赋值
                     * 
                     */
                    bool NetworkReceiveRateHasBeenSet() const;

                    /**
                     * 获取每秒发送字节数
                     * @return NetworkSendRate 每秒发送字节数
                     * 
                     */
                    double GetNetworkSendRate() const;

                    /**
                     * 设置每秒发送字节数
                     * @param _networkSendRate 每秒发送字节数
                     * 
                     */
                    void SetNetworkSendRate(const double& _networkSendRate);

                    /**
                     * 判断参数 NetworkSendRate 是否已赋值
                     * @return NetworkSendRate 是否已赋值
                     * 
                     */
                    bool NetworkSendRateHasBeenSet() const;

                    /**
                     * 获取任务状态描述
                     * @return Message 任务状态描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置任务状态描述
                     * @param _message 任务状态描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取test-project
                     * @return ProjectName test-project
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置test-project
                     * @param _projectName test-project
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取test-scenario
                     * @return ScenarioName test-scenario
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置test-scenario
                     * @param _scenarioName test-scenario
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取付费类型
                     * @return PayMode 付费类型
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费类型
                     * @param _payMode 付费类型
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取job VUM用量
                     * @return Usage job VUM用量
                     * 
                     */
                    int64_t GetUsage() const;

                    /**
                     * 设置job VUM用量
                     * @param _usage job VUM用量
                     * 
                     */
                    void SetUsage(const int64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 任务的JobID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务的场景ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * 任务的施压配置
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

                    /**
                     * 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * 任务的数据集文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * 任务的运行状态, JobUnknown: 0,JobCreated:1,JobPending:2, JobPreparing:3,JobSelectClustering:4,JobCreateTasking:5,JobSyncTasking:6
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务的开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务的结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务的最大VU数
                     */
                    int64_t m_maxVirtualUserCount;
                    bool m_maxVirtualUserCountHasBeenSet;

                    /**
                     * 任务的备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 错误率百分比
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                    /**
                     * 任务发起人
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadSource m_loadSources;
                    bool m_loadSourcesHasBeenSet;

                    /**
                     * 任务时长
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 最大每秒请求数
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * 总请求数
                     */
                    double m_requestTotal;
                    bool m_requestTotalHasBeenSet;

                    /**
                     * 平均每秒请求数
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * 平均响应时间
                     */
                    double m_responseTimeAverage;
                    bool m_responseTimeAverageHasBeenSet;

                    /**
                     * 响应时间第99百分位
                     */
                    double m_responseTimeP99;
                    bool m_responseTimeP99HasBeenSet;

                    /**
                     * 响应时间第95百分位
                     */
                    double m_responseTimeP95;
                    bool m_responseTimeP95HasBeenSet;

                    /**
                     * 响应时间第90百分位
                     */
                    double m_responseTimeP90;
                    bool m_responseTimeP90HasBeenSet;

                    /**
                     * 此字段不再使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_scripts;
                    bool m_scriptsHasBeenSet;

                    /**
                     * 最大响应时间
                     */
                    double m_responseTimeMax;
                    bool m_responseTimeMaxHasBeenSet;

                    /**
                     * 最小响应时间
                     */
                    double m_responseTimeMin;
                    bool m_responseTimeMinHasBeenSet;

                    /**
                     * 发压host信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LoadSource> m_loadSourceInfos;
                    bool m_loadSourceInfosHasBeenSet;

                    /**
                     * 测试脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * 协议脚本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 请求文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * 拓展包文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * 定时任务ID
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * 场景类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 域名绑定配置
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * false
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * 中断原因
                     */
                    int64_t m_abortReason;
                    bool m_abortReasonHasBeenSet;

                    /**
                     * 任务的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通知事件回调
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NotificationHook> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * 每秒接收字节数
                     */
                    double m_networkReceiveRate;
                    bool m_networkReceiveRateHasBeenSet;

                    /**
                     * 每秒发送字节数
                     */
                    double m_networkSendRate;
                    bool m_networkSendRateHasBeenSet;

                    /**
                     * 任务状态描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * test-project
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * test-scenario
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * 付费类型
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * job VUM用量
                     */
                    int64_t m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_
