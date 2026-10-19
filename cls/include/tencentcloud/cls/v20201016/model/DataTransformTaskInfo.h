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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/DataTransformSqlDataSource.h>
#include <tencentcloud/cls/v20201016/model/EnvInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 数据加工任务基本详情
                */
                class DataTransformTaskInfo : public AbstractModel
                {
                public:
                    DataTransformTaskInfo();
                    ~DataTransformTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据加工任务名称</p>
                     * @return Name <p>数据加工任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据加工任务名称</p>
                     * @param _name <p>数据加工任务名称</p>
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
                     * 获取<p>数据加工任务id</p>
                     * @return TaskId <p>数据加工任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>数据加工任务id</p>
                     * @param _taskId <p>数据加工任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务启用状态，默认为1，正常开启,  2关闭</p>
                     * @return EnableFlag <p>任务启用状态，默认为1，正常开启,  2关闭</p>
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置<p>任务启用状态，默认为1，正常开启,  2关闭</p>
                     * @param _enableFlag <p>任务启用状态，默认为1，正常开启,  2关闭</p>
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取<p>加工任务类型，1： DSL(使用自定义加工语言的加工任务)， 2：SQL(使用sql的加工任务)</p>
                     * @return Type <p>加工任务类型，1： DSL(使用自定义加工语言的加工任务)， 2：SQL(使用sql的加工任务)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>加工任务类型，1： DSL(使用自定义加工语言的加工任务)， 2：SQL(使用sql的加工任务)</p>
                     * @param _type <p>加工任务类型，1： DSL(使用自定义加工语言的加工任务)， 2：SQL(使用sql的加工任务)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>源日志主题ID,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题的ID值相同.</p>
                     * @return SrcTopicId <p>源日志主题ID,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题的ID值相同.</p>
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置<p>源日志主题ID,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题的ID值相同.</p>
                     * @param _srcTopicId <p>源日志主题ID,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题的ID值相同.</p>
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>当前加工任务状态（1准备中/2运行中/3停止中/4已停止）</p>
                     * @return Status <p>当前加工任务状态（1准备中/2运行中/3停止中/4已停止）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>当前加工任务状态（1准备中/2运行中/3停止中/4已停止）</p>
                     * @param _status <p>当前加工任务状态（1准备中/2运行中/3停止中/4已停止）</p>
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
                     * 获取<p>创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>最近修改时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return UpdateTime <p>最近修改时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近修改时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _updateTime <p>最近修改时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>最后启用时间，如果需要重建集群，修改该时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return LastEnableTime <p>最后启用时间，如果需要重建集群，修改该时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetLastEnableTime() const;

                    /**
                     * 设置<p>最后启用时间，如果需要重建集群，修改该时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _lastEnableTime <p>最后启用时间，如果需要重建集群，修改该时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetLastEnableTime(const std::string& _lastEnableTime);

                    /**
                     * 判断参数 LastEnableTime 是否已赋值
                     * @return LastEnableTime 是否已赋值
                     * 
                     */
                    bool LastEnableTimeHasBeenSet() const;

                    /**
                     * 获取<p>源日志主题名称,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题名称的值相同.</p>
                     * @return SrcTopicName <p>源日志主题名称,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题名称的值相同.</p>
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置<p>源日志主题名称,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题名称的值相同.</p>
                     * @param _srcTopicName <p>源日志主题名称,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题名称的值相同.</p>
                     * 
                     */
                    void SetSrcTopicName(const std::string& _srcTopicName);

                    /**
                     * 判断参数 SrcTopicName 是否已赋值
                     * @return SrcTopicName 是否已赋值
                     * 
                     */
                    bool SrcTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>日志集id</p>
                     * @return LogsetId <p>日志集id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集id</p>
                     * @param _logsetId <p>日志集id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>加工任务目的topic_id以及别名</p>
                     * @return DstResources <p>加工任务目的topic_id以及别名</p>
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置<p>加工任务目的topic_id以及别名</p>
                     * @param _dstResources <p>加工任务目的topic_id以及别名</p>
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取<p>加工逻辑函数。</p>
                     * @return EtlContent <p>加工逻辑函数。</p>
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置<p>加工逻辑函数。</p>
                     * @param _etlContent <p>加工逻辑函数。</p>
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取<p>兜底topic_id</p>
                     * @return BackupTopicID <p>兜底topic_id</p>
                     * 
                     */
                    std::string GetBackupTopicID() const;

                    /**
                     * 设置<p>兜底topic_id</p>
                     * @param _backupTopicID <p>兜底topic_id</p>
                     * 
                     */
                    void SetBackupTopicID(const std::string& _backupTopicID);

                    /**
                     * 判断参数 BackupTopicID 是否已赋值
                     * @return BackupTopicID 是否已赋值
                     * 
                     */
                    bool BackupTopicIDHasBeenSet() const;

                    /**
                     * 获取<p>超限之后是否丢弃日志数据</p>
                     * @return BackupGiveUpData <p>超限之后是否丢弃日志数据</p>
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置<p>超限之后是否丢弃日志数据</p>
                     * @param _backupGiveUpData <p>超限之后是否丢弃日志数据</p>
                     * 
                     */
                    void SetBackupGiveUpData(const bool& _backupGiveUpData);

                    /**
                     * 判断参数 BackupGiveUpData 是否已赋值
                     * @return BackupGiveUpData 是否已赋值
                     * 
                     */
                    bool BackupGiveUpDataHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递服务日志。 1关闭,2开启</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。 1关闭,2开启</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。 1关闭,2开启</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。 1关闭,2开启</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>任务目标日志主题数量</p>
                     * @return TaskDstCount <p>任务目标日志主题数量</p>
                     * 
                     */
                    uint64_t GetTaskDstCount() const;

                    /**
                     * 设置<p>任务目标日志主题数量</p>
                     * @param _taskDstCount <p>任务目标日志主题数量</p>
                     * 
                     */
                    void SetTaskDstCount(const uint64_t& _taskDstCount);

                    /**
                     * 判断参数 TaskDstCount 是否已赋值
                     * @return TaskDstCount 是否已赋值
                     * 
                     */
                    bool TaskDstCountHasBeenSet() const;

                    /**
                     * 获取<p>数据加工类型。0：标准加工任务；1：前置加工任务。当该值=1时, 源日志主题和目标日志主题的名称和ID相同.</p><p>枚举值：</p><ul><li>1： 前置加工任务</li><li>0： 标准加工任务</li></ul>
                     * @return DataTransformType <p>数据加工类型。0：标准加工任务；1：前置加工任务。当该值=1时, 源日志主题和目标日志主题的名称和ID相同.</p><p>枚举值：</p><ul><li>1： 前置加工任务</li><li>0： 标准加工任务</li></ul>
                     * 
                     */
                    uint64_t GetDataTransformType() const;

                    /**
                     * 设置<p>数据加工类型。0：标准加工任务；1：前置加工任务。当该值=1时, 源日志主题和目标日志主题的名称和ID相同.</p><p>枚举值：</p><ul><li>1： 前置加工任务</li><li>0： 标准加工任务</li></ul>
                     * @param _dataTransformType <p>数据加工类型。0：标准加工任务；1：前置加工任务。当该值=1时, 源日志主题和目标日志主题的名称和ID相同.</p><p>枚举值：</p><ul><li>1： 前置加工任务</li><li>0： 标准加工任务</li></ul>
                     * 
                     */
                    void SetDataTransformType(const uint64_t& _dataTransformType);

                    /**
                     * 判断参数 DataTransformType 是否已赋值
                     * @return DataTransformType 是否已赋值
                     * 
                     */
                    bool DataTransformTypeHasBeenSet() const;

                    /**
                     * 获取<p>保留失败日志状态。 1:不保留，2:保留</p>
                     * @return KeepFailureLog <p>保留失败日志状态。 1:不保留，2:保留</p>
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置<p>保留失败日志状态。 1:不保留，2:保留</p>
                     * @param _keepFailureLog <p>保留失败日志状态。 1:不保留，2:保留</p>
                     * 
                     */
                    void SetKeepFailureLog(const uint64_t& _keepFailureLog);

                    /**
                     * 判断参数 KeepFailureLog 是否已赋值
                     * @return KeepFailureLog 是否已赋值
                     * 
                     */
                    bool KeepFailureLogHasBeenSet() const;

                    /**
                     * 获取<p>失败日志的字段名称</p>
                     * @return FailureLogKey <p>失败日志的字段名称</p>
                     * 
                     */
                    std::string GetFailureLogKey() const;

                    /**
                     * 设置<p>失败日志的字段名称</p>
                     * @param _failureLogKey <p>失败日志的字段名称</p>
                     * 
                     */
                    void SetFailureLogKey(const std::string& _failureLogKey);

                    /**
                     * 判断参数 FailureLogKey 是否已赋值
                     * @return FailureLogKey 是否已赋值
                     * 
                     */
                    bool FailureLogKeyHasBeenSet() const;

                    /**
                     * 获取<p>指定加工数据的开始时间，秒级时间戳。</p><ul><li>日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。</li></ul>
                     * @return ProcessFromTimestamp <p>指定加工数据的开始时间，秒级时间戳。</p><ul><li>日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。</li></ul>
                     * 
                     */
                    uint64_t GetProcessFromTimestamp() const;

                    /**
                     * 设置<p>指定加工数据的开始时间，秒级时间戳。</p><ul><li>日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。</li></ul>
                     * @param _processFromTimestamp <p>指定加工数据的开始时间，秒级时间戳。</p><ul><li>日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。</li></ul>
                     * 
                     */
                    void SetProcessFromTimestamp(const uint64_t& _processFromTimestamp);

                    /**
                     * 判断参数 ProcessFromTimestamp 是否已赋值
                     * @return ProcessFromTimestamp 是否已赋值
                     * 
                     */
                    bool ProcessFromTimestampHasBeenSet() const;

                    /**
                     * 获取<p>指定加工数据的结束时间，秒级时间戳。</p><ol><li>不可指定未来的时间</li><li>不填则表示持续执行</li></ol>
                     * @return ProcessToTimestamp <p>指定加工数据的结束时间，秒级时间戳。</p><ol><li>不可指定未来的时间</li><li>不填则表示持续执行</li></ol>
                     * 
                     */
                    uint64_t GetProcessToTimestamp() const;

                    /**
                     * 设置<p>指定加工数据的结束时间，秒级时间戳。</p><ol><li>不可指定未来的时间</li><li>不填则表示持续执行</li></ol>
                     * @param _processToTimestamp <p>指定加工数据的结束时间，秒级时间戳。</p><ol><li>不可指定未来的时间</li><li>不填则表示持续执行</li></ol>
                     * 
                     */
                    void SetProcessToTimestamp(const uint64_t& _processToTimestamp);

                    /**
                     * 判断参数 ProcessToTimestamp 是否已赋值
                     * @return ProcessToTimestamp 是否已赋值
                     * 
                     */
                    bool ProcessToTimestampHasBeenSet() const;

                    /**
                     * 获取<p>sql数据源信息</p>
                     * @return DataTransformSqlDataSources <p>sql数据源信息</p>
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置<p>sql数据源信息</p>
                     * @param _dataTransformSqlDataSources <p>sql数据源信息</p>
                     * 
                     */
                    void SetDataTransformSqlDataSources(const std::vector<DataTransformSqlDataSource>& _dataTransformSqlDataSources);

                    /**
                     * 判断参数 DataTransformSqlDataSources 是否已赋值
                     * @return DataTransformSqlDataSources 是否已赋值
                     * 
                     */
                    bool DataTransformSqlDataSourcesHasBeenSet() const;

                    /**
                     * 获取<p>环境变量</p>
                     * @return EnvInfos <p>环境变量</p>
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置<p>环境变量</p>
                     * @param _envInfos <p>环境变量</p>
                     * 
                     */
                    void SetEnvInfos(const std::vector<EnvInfo>& _envInfos);

                    /**
                     * 判断参数 EnvInfos 是否已赋值
                     * @return EnvInfos 是否已赋值
                     * 
                     */
                    bool EnvInfosHasBeenSet() const;

                private:

                    /**
                     * <p>数据加工任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据加工任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务启用状态，默认为1，正常开启,  2关闭</p>
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * <p>加工任务类型，1： DSL(使用自定义加工语言的加工任务)， 2：SQL(使用sql的加工任务)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>源日志主题ID,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题的ID值相同.</p>
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * <p>当前加工任务状态（1准备中/2运行中/3停止中/4已停止）</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近修改时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>最后启用时间，如果需要重建集群，修改该时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_lastEnableTime;
                    bool m_lastEnableTimeHasBeenSet;

                    /**
                     * <p>源日志主题名称,当DataTransformType=1,代表当前任务的类型是前置加工任务,该值和目标日志主题名称的值相同.</p>
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * <p>日志集id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>加工任务目的topic_id以及别名</p>
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * <p>加工逻辑函数。</p>
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * <p>兜底topic_id</p>
                     */
                    std::string m_backupTopicID;
                    bool m_backupTopicIDHasBeenSet;

                    /**
                     * <p>超限之后是否丢弃日志数据</p>
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。 1关闭,2开启</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>任务目标日志主题数量</p>
                     */
                    uint64_t m_taskDstCount;
                    bool m_taskDstCountHasBeenSet;

                    /**
                     * <p>数据加工类型。0：标准加工任务；1：前置加工任务。当该值=1时, 源日志主题和目标日志主题的名称和ID相同.</p><p>枚举值：</p><ul><li>1： 前置加工任务</li><li>0： 标准加工任务</li></ul>
                     */
                    uint64_t m_dataTransformType;
                    bool m_dataTransformTypeHasBeenSet;

                    /**
                     * <p>保留失败日志状态。 1:不保留，2:保留</p>
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * <p>失败日志的字段名称</p>
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * <p>指定加工数据的开始时间，秒级时间戳。</p><ul><li>日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。</li></ul>
                     */
                    uint64_t m_processFromTimestamp;
                    bool m_processFromTimestampHasBeenSet;

                    /**
                     * <p>指定加工数据的结束时间，秒级时间戳。</p><ol><li>不可指定未来的时间</li><li>不填则表示持续执行</li></ol>
                     */
                    uint64_t m_processToTimestamp;
                    bool m_processToTimestampHasBeenSet;

                    /**
                     * <p>sql数据源信息</p>
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * <p>环境变量</p>
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
