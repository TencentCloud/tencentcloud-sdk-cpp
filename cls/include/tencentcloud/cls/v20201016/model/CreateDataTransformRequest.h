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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>
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
                * CreateDataTransform请求参数结构体
                */
                class CreateDataTransformRequest : public AbstractModel
                {
                public:
                    CreateDataTransformRequest();
                    ~CreateDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型. 1: 指定主题；2:动态创建。详情请参考[创建加工任务文档](https://cloud.tencent.com/document/product/614/63940)。
                     * @return FuncType 任务类型. 1: 指定主题；2:动态创建。详情请参考[创建加工任务文档](https://cloud.tencent.com/document/product/614/63940)。
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置任务类型. 1: 指定主题；2:动态创建。详情请参考[创建加工任务文档](https://cloud.tencent.com/document/product/614/63940)。
                     * @param _funcType 任务类型. 1: 指定主题；2:动态创建。详情请参考[创建加工任务文档](https://cloud.tencent.com/document/product/614/63940)。
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                    /**
                     * 获取日志主题ID
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return SrcTopicId 日志主题ID
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置日志主题ID
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _srcTopicId 日志主题ID
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
                     * 获取加工任务名称
名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * @return Name 加工任务名称
名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置加工任务名称
名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     * @param _name 加工任务名称
名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
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
                     * 获取加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @return EtlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     * @param _etlContent 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
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
                     * 获取加工类型。
1：使用源日志主题中的随机数据，进行加工预览；2：使用用户自定义测试数据，进行加工预览；3：创建真实加工任务。
                     * @return TaskType 加工类型。
1：使用源日志主题中的随机数据，进行加工预览；2：使用用户自定义测试数据，进行加工预览；3：创建真实加工任务。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置加工类型。
1：使用源日志主题中的随机数据，进行加工预览；2：使用用户自定义测试数据，进行加工预览；3：创建真实加工任务。
                     * @param _taskType 加工类型。
1：使用源日志主题中的随机数据，进行加工预览；2：使用用户自定义测试数据，进行加工预览；3：创建真实加工任务。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取加工任务目标topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写。
目标topic_id，通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
别名限制 1.不能为空字符串，2. 不能包含字符'|'。

                     * @return DstResources 加工任务目标topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写。
目标topic_id，通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
别名限制 1.不能为空字符串，2. 不能包含字符'|'。

                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目标topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写。
目标topic_id，通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
别名限制 1.不能为空字符串，2. 不能包含字符'|'。

                     * @param _dstResources 加工任务目标topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写。
目标topic_id，通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
别名限制 1.不能为空字符串，2. 不能包含字符'|'。

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
                     * 获取任务启动状态.   默认为1:开启,  2:关闭
                     * @return EnableFlag 任务启动状态.   默认为1:开启,  2:关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态.   默认为1:开启,  2:关闭
                     * @param _enableFlag 任务启动状态.   默认为1:开启,  2:关闭
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
                     * 获取用于预览加工结果的测试数据
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return PreviewLogStatistics 用于预览加工结果的测试数据
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::vector<PreviewLogStatistic> GetPreviewLogStatistics() const;

                    /**
                     * 设置用于预览加工结果的测试数据
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _previewLogStatistics 用于预览加工结果的测试数据
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    void SetPreviewLogStatistics(const std::vector<PreviewLogStatistic>& _previewLogStatistics);

                    /**
                     * 判断参数 PreviewLogStatistics 是否已赋值
                     * @return PreviewLogStatistics 是否已赋值
                     * 
                     */
                    bool PreviewLogStatisticsHasBeenSet() const;

                    /**
                     * 获取当FuncType为2时，动态创建的日志集、日志主题的个数超出产品规格限制是否丢弃数据， 默认为false。

false：创建兜底日志集、日志主题并将日志写入兜底主题；
true：丢弃日志数据。
                     * @return BackupGiveUpData 当FuncType为2时，动态创建的日志集、日志主题的个数超出产品规格限制是否丢弃数据， 默认为false。

false：创建兜底日志集、日志主题并将日志写入兜底主题；
true：丢弃日志数据。
                     * 
                     */
                    bool GetBackupGiveUpData() const;

                    /**
                     * 设置当FuncType为2时，动态创建的日志集、日志主题的个数超出产品规格限制是否丢弃数据， 默认为false。

false：创建兜底日志集、日志主题并将日志写入兜底主题；
true：丢弃日志数据。
                     * @param _backupGiveUpData 当FuncType为2时，动态创建的日志集、日志主题的个数超出产品规格限制是否丢弃数据， 默认为false。

false：创建兜底日志集、日志主题并将日志写入兜底主题；
true：丢弃日志数据。
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
                     * 获取是否开启投递服务日志。1：关闭，2：开启。
                     * @return HasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1：关闭，2：开启。
                     * @param _hasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
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
                     * 获取数据加工类型。0：标准加工任务； 1：前置加工任务。前置加工任务将采集的日志处理完成后，再写入日志主题。
                     * @return DataTransformType 数据加工类型。0：标准加工任务； 1：前置加工任务。前置加工任务将采集的日志处理完成后，再写入日志主题。
                     * 
                     */
                    uint64_t GetDataTransformType() const;

                    /**
                     * 设置数据加工类型。0：标准加工任务； 1：前置加工任务。前置加工任务将采集的日志处理完成后，再写入日志主题。
                     * @param _dataTransformType 数据加工类型。0：标准加工任务； 1：前置加工任务。前置加工任务将采集的日志处理完成后，再写入日志主题。
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
                     * 获取保留失败日志状态，1:不保留(默认)，2:保留。
                     * @return KeepFailureLog 保留失败日志状态，1:不保留(默认)，2:保留。
                     * 
                     */
                    uint64_t GetKeepFailureLog() const;

                    /**
                     * 设置保留失败日志状态，1:不保留(默认)，2:保留。
                     * @param _keepFailureLog 保留失败日志状态，1:不保留(默认)，2:保留。
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

                    /**
                     * 获取指定加工数据的开始时间, 秒级时间戳。
 - 日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。
                     * @return ProcessFromTimestamp 指定加工数据的开始时间, 秒级时间戳。
 - 日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。
                     * 
                     */
                    uint64_t GetProcessFromTimestamp() const;

                    /**
                     * 设置指定加工数据的开始时间, 秒级时间戳。
 - 日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。
                     * @param _processFromTimestamp 指定加工数据的开始时间, 秒级时间戳。
 - 日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。
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
                     * 获取指定加工数据的结束时间，秒级时间戳。

-  不可指定未来的时间
-  不填则表示持续执行
                     * @return ProcessToTimestamp 指定加工数据的结束时间，秒级时间戳。

-  不可指定未来的时间
-  不填则表示持续执行
                     * 
                     */
                    uint64_t GetProcessToTimestamp() const;

                    /**
                     * 设置指定加工数据的结束时间，秒级时间戳。

-  不可指定未来的时间
-  不填则表示持续执行
                     * @param _processToTimestamp 指定加工数据的结束时间，秒级时间戳。

-  不可指定未来的时间
-  不填则表示持续执行
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
                     * 获取对已经创建的并且使用了关联外部数据库能力的任务预览（TaskType 为 1 或 2）时，该值必传
数据加工任务ID- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * @return TaskId 对已经创建的并且使用了关联外部数据库能力的任务预览（TaskType 为 1 或 2）时，该值必传
数据加工任务ID- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置对已经创建的并且使用了关联外部数据库能力的任务预览（TaskType 为 1 或 2）时，该值必传
数据加工任务ID- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     * @param _taskId 对已经创建的并且使用了关联外部数据库能力的任务预览（TaskType 为 1 或 2）时，该值必传
数据加工任务ID- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
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
                     * 获取关联的数据源信息
                     * @return DataTransformSqlDataSources 关联的数据源信息
                     * 
                     */
                    std::vector<DataTransformSqlDataSource> GetDataTransformSqlDataSources() const;

                    /**
                     * 设置关联的数据源信息
                     * @param _dataTransformSqlDataSources 关联的数据源信息
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
                     * 获取设置的环境变量
                     * @return EnvInfos 设置的环境变量
                     * 
                     */
                    std::vector<EnvInfo> GetEnvInfos() const;

                    /**
                     * 设置设置的环境变量
                     * @param _envInfos 设置的环境变量
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
                     * 任务类型. 1: 指定主题；2:动态创建。详情请参考[创建加工任务文档](https://cloud.tencent.com/document/product/614/63940)。
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                    /**
                     * 日志主题ID
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 加工任务名称
名称限制
- 不能为空字符串
- 不能包含字符'|'
- 最长 255 个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 加工语句。 当FuncType为2时，EtlContent必须使用[log_auto_output](https://cloud.tencent.com/document/product/614/70733#b3c58797-4825-4807-bef4-68106e25024f) 

其他参考文档：

- [创建加工任务](https://cloud.tencent.com/document/product/614/63940) 
-  [函数总览](https://cloud.tencent.com/document/product/614/70395)
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 加工类型。
1：使用源日志主题中的随机数据，进行加工预览；2：使用用户自定义测试数据，进行加工预览；3：创建真实加工任务。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 加工任务目标topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写。
目标topic_id，通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
别名限制 1.不能为空字符串，2. 不能包含字符'|'。

                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 任务启动状态.   默认为1:开启,  2:关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 用于预览加工结果的测试数据
目标日志主题ID通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::vector<PreviewLogStatistic> m_previewLogStatistics;
                    bool m_previewLogStatisticsHasBeenSet;

                    /**
                     * 当FuncType为2时，动态创建的日志集、日志主题的个数超出产品规格限制是否丢弃数据， 默认为false。

false：创建兜底日志集、日志主题并将日志写入兜底主题；
true：丢弃日志数据。
                     */
                    bool m_backupGiveUpData;
                    bool m_backupGiveUpDataHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1：关闭，2：开启。
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * 数据加工类型。0：标准加工任务； 1：前置加工任务。前置加工任务将采集的日志处理完成后，再写入日志主题。
                     */
                    uint64_t m_dataTransformType;
                    bool m_dataTransformTypeHasBeenSet;

                    /**
                     * 保留失败日志状态，1:不保留(默认)，2:保留。
                     */
                    uint64_t m_keepFailureLog;
                    bool m_keepFailureLogHasBeenSet;

                    /**
                     * 失败日志的字段名称
                     */
                    std::string m_failureLogKey;
                    bool m_failureLogKeyHasBeenSet;

                    /**
                     * 指定加工数据的开始时间, 秒级时间戳。
 - 日志主题生命周期内的任意时间范围，如果超出了生命周期,只处理生命周期内有数据的部分。
                     */
                    uint64_t m_processFromTimestamp;
                    bool m_processFromTimestampHasBeenSet;

                    /**
                     * 指定加工数据的结束时间，秒级时间戳。

-  不可指定未来的时间
-  不填则表示持续执行
                     */
                    uint64_t m_processToTimestamp;
                    bool m_processToTimestampHasBeenSet;

                    /**
                     * 对已经创建的并且使用了关联外部数据库能力的任务预览（TaskType 为 1 或 2）时，该值必传
数据加工任务ID- 通过[获取数据加工任务列表基本信息](https://cloud.tencent.com/document/product/614/72182)获取数据加工任务Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 关联的数据源信息
                     */
                    std::vector<DataTransformSqlDataSource> m_dataTransformSqlDataSources;
                    bool m_dataTransformSqlDataSourcesHasBeenSet;

                    /**
                     * 设置的环境变量
                     */
                    std::vector<EnvInfo> m_envInfos;
                    bool m_envInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
