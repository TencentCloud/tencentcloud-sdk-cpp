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
                     * 获取数据加工任务名称
                     * @return Name 数据加工任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据加工任务名称
                     * @param _name 数据加工任务名称
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
                     * 获取数据加工任务id
                     * @return TaskId 数据加工任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置数据加工任务id
                     * @param _taskId 数据加工任务id
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
                     * 获取任务启用状态，默认为1，正常开启,  2关闭
                     * @return EnableFlag 任务启用状态，默认为1，正常开启,  2关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启用状态，默认为1，正常开启,  2关闭
                     * @param _enableFlag 任务启用状态，默认为1，正常开启,  2关闭
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
                     * 获取加工任务类型，1： DSL， 2：SQL
                     * @return Type 加工任务类型，1： DSL， 2：SQL
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置加工任务类型，1： DSL， 2：SQL
                     * @param _type 加工任务类型，1： DSL， 2：SQL
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
                     * 获取源日志主题
                     * @return SrcTopicId 源日志主题
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题
                     * @param _srcTopicId 源日志主题
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
                     * 获取当前加工任务状态（1准备中/2运行中/3停止中/4已停止）
                     * @return Status 当前加工任务状态（1准备中/2运行中/3停止中/4已停止）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前加工任务状态（1准备中/2运行中/3停止中/4已停止）
                     * @param _status 当前加工任务状态（1准备中/2运行中/3停止中/4已停止）
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
                     * 获取加工任务创建时间
                     * @return CreateTime 加工任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置加工任务创建时间
                     * @param _createTime 加工任务创建时间
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
                     * 获取最近修改时间
                     * @return UpdateTime 最近修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近修改时间
                     * @param _updateTime 最近修改时间
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
                     * 获取最后启用时间，如果需要重建集群，修改该时间
                     * @return LastEnableTime 最后启用时间，如果需要重建集群，修改该时间
                     * 
                     */
                    std::string GetLastEnableTime() const;

                    /**
                     * 设置最后启用时间，如果需要重建集群，修改该时间
                     * @param _lastEnableTime 最后启用时间，如果需要重建集群，修改该时间
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
                     * 获取日志主题名称
                     * @return SrcTopicName 日志主题名称
                     * 
                     */
                    std::string GetSrcTopicName() const;

                    /**
                     * 设置日志主题名称
                     * @param _srcTopicName 日志主题名称
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
                     * 获取日志集id
                     * @return LogsetId 日志集id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id
                     * @param _logsetId 日志集id
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
                     * 获取加工任务目的topic_id以及别名
                     * @return DstResources 加工任务目的topic_id以及别名
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目的topic_id以及别名
                     * @param _dstResources 加工任务目的topic_id以及别名
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
                     * 获取加工逻辑函数。
                     * @return EtlContent 加工逻辑函数。
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工逻辑函数。
                     * @param _etlContent 加工逻辑函数。
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
                     * 获取数据加工类型。0：标准加工任务；1：前置加工任务。
                     * @return DataTransformType 数据加工类型。0：标准加工任务；1：前置加工任务。
                     * 
                     */
                    uint64_t GetDataTransformType() const;

                    /**
                     * 设置数据加工类型。0：标准加工任务；1：前置加工任务。
                     * @param _dataTransformType 数据加工类型。0：标准加工任务；1：前置加工任务。
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
                     * 获取保留失败日志状态。 1:不保留，2:保留
                     * @return KeepFailureLog 保留失败日志状态。 1:不保留，2:保留
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置保留失败日志状态。 1:不保留，2:保留
                     * @param _keepFailureLog 保留失败日志状态。 1:不保留，2:保留
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
                     * 获取失败日志的字段名称
                     * @return FailureLogKey 失败日志的字段名称
                     * 
                     */
                    std::string GetFailureLogKey() const;

                    /**
                     * 设置失败日志的字段名称
                     * @param _failureLogKey 失败日志的字段名称
                     * 
                     */
                    void SetFailureLogKey(const std::string& _failureLogKey);

                    /**
                     * 判断参数 FailureLogKey 是否已赋值
                     * @return FailureLogKey 是否已赋值
                     * 
                     */
                    bool FailureLogKeyHasBeenSet() const;

                private:

                    /**
                     * 数据加工任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据加工任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务启用状态，默认为1，正常开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 加工任务类型，1： DSL， 2：SQL
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源日志主题
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 当前加工任务状态（1准备中/2运行中/3停止中/4已停止）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 加工任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后启用时间，如果需要重建集群，修改该时间
                     */
                    std::string m_lastEnableTime;
                    bool m_lastEnableTimeHasBeenSet;

                    /**
                     * 日志主题名称
                     */
                    std::string m_srcTopicName;
                    bool m_srcTopicNameHasBeenSet;

                    /**
                     * 日志集id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 加工逻辑函数。
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 数据加工类型。0：标准加工任务；1：前置加工任务。
                     */
                    uint64_t m_dataTransformType;
                    bool m_dataTransformTypeHasBeenSet;

                    /**
                     * 保留失败日志状态。 1:不保留，2:保留
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * 失败日志的字段名称
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMTASKINFO_H_
