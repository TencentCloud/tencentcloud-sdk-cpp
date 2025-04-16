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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ANALYSISTASKRESULTS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ANALYSISTASKRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 洞察分析结果返回体
                */
                class AnalysisTaskResults : public AbstractModel
                {
                public:
                    AnalysisTaskResults();
                    ~AnalysisTaskResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务创建时间，毫秒时间戳
                     * @return InstanceStartTime 任务创建时间，毫秒时间戳
                     * 
                     */
                    int64_t GetInstanceStartTime() const;

                    /**
                     * 设置任务创建时间，毫秒时间戳
                     * @param _instanceStartTime 任务创建时间，毫秒时间戳
                     * 
                     */
                    void SetInstanceStartTime(const int64_t& _instanceStartTime);

                    /**
                     * 判断参数 InstanceStartTime 是否已赋值
                     * @return InstanceStartTime 是否已赋值
                     * 
                     */
                    bool InstanceStartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间，毫秒时间戳
                     * @return InstanceCompleteTime 任务结束时间，毫秒时间戳
                     * 
                     */
                    int64_t GetInstanceCompleteTime() const;

                    /**
                     * 设置任务结束时间，毫秒时间戳
                     * @param _instanceCompleteTime 任务结束时间，毫秒时间戳
                     * 
                     */
                    void SetInstanceCompleteTime(const int64_t& _instanceCompleteTime);

                    /**
                     * 判断参数 InstanceCompleteTime 是否已赋值
                     * @return InstanceCompleteTime 是否已赋值
                     * 
                     */
                    bool InstanceCompleteTimeHasBeenSet() const;

                    /**
                     * 获取任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * @return State 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * @param _state 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务SQL语句
                     * @return SQL 任务SQL语句
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置任务SQL语句
                     * @param _sQL 任务SQL语句
                     * 
                     */
                    void SetSQL(const std::string& _sQL);

                    /**
                     * 判断参数 SQL 是否已赋值
                     * @return SQL 是否已赋值
                     * 
                     */
                    bool SQLHasBeenSet() const;

                    /**
                     * 获取计算资源名字
                     * @return DataEngineName 计算资源名字
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置计算资源名字
                     * @param _dataEngineName 计算资源名字
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取单位毫秒，引擎内执行耗时
                     * @return JobTimeSum 单位毫秒，引擎内执行耗时
                     * 
                     */
                    int64_t GetJobTimeSum() const;

                    /**
                     * 设置单位毫秒，引擎内执行耗时
                     * @param _jobTimeSum 单位毫秒，引擎内执行耗时
                     * 
                     */
                    void SetJobTimeSum(const int64_t& _jobTimeSum);

                    /**
                     * 判断参数 JobTimeSum 是否已赋值
                     * @return JobTimeSum 是否已赋值
                     * 
                     */
                    bool JobTimeSumHasBeenSet() const;

                    /**
                     * 获取单位秒，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和
                     * @return TaskTimeSum 单位秒，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和
                     * 
                     */
                    int64_t GetTaskTimeSum() const;

                    /**
                     * 设置单位秒，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和
                     * @param _taskTimeSum 单位秒，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和
                     * 
                     */
                    void SetTaskTimeSum(const int64_t& _taskTimeSum);

                    /**
                     * 判断参数 TaskTimeSum 是否已赋值
                     * @return TaskTimeSum 是否已赋值
                     * 
                     */
                    bool TaskTimeSumHasBeenSet() const;

                    /**
                     * 获取数据扫描总行数
                     * @return InputRecordsSum 数据扫描总行数
                     * 
                     */
                    int64_t GetInputRecordsSum() const;

                    /**
                     * 设置数据扫描总行数
                     * @param _inputRecordsSum 数据扫描总行数
                     * 
                     */
                    void SetInputRecordsSum(const int64_t& _inputRecordsSum);

                    /**
                     * 判断参数 InputRecordsSum 是否已赋值
                     * @return InputRecordsSum 是否已赋值
                     * 
                     */
                    bool InputRecordsSumHasBeenSet() const;

                    /**
                     * 获取数据扫描总 bytes
                     * @return InputBytesSum 数据扫描总 bytes
                     * 
                     */
                    int64_t GetInputBytesSum() const;

                    /**
                     * 设置数据扫描总 bytes
                     * @param _inputBytesSum 数据扫描总 bytes
                     * 
                     */
                    void SetInputBytesSum(const int64_t& _inputBytesSum);

                    /**
                     * 判断参数 InputBytesSum 是否已赋值
                     * @return InputBytesSum 是否已赋值
                     * 
                     */
                    bool InputBytesSumHasBeenSet() const;

                    /**
                     * 获取输出总行数
                     * @return OutputRecordsSum 输出总行数
                     * 
                     */
                    int64_t GetOutputRecordsSum() const;

                    /**
                     * 设置输出总行数
                     * @param _outputRecordsSum 输出总行数
                     * 
                     */
                    void SetOutputRecordsSum(const int64_t& _outputRecordsSum);

                    /**
                     * 判断参数 OutputRecordsSum 是否已赋值
                     * @return OutputRecordsSum 是否已赋值
                     * 
                     */
                    bool OutputRecordsSumHasBeenSet() const;

                    /**
                     * 获取输出总 bytes
                     * @return OutputBytesSum 输出总 bytes
                     * 
                     */
                    int64_t GetOutputBytesSum() const;

                    /**
                     * 设置输出总 bytes
                     * @param _outputBytesSum 输出总 bytes
                     * 
                     */
                    void SetOutputBytesSum(const int64_t& _outputBytesSum);

                    /**
                     * 判断参数 OutputBytesSum 是否已赋值
                     * @return OutputBytesSum 是否已赋值
                     * 
                     */
                    bool OutputBytesSumHasBeenSet() const;

                    /**
                     * 获取shuffle read 总 bytes
                     * @return ShuffleReadBytesSum shuffle read 总 bytes
                     * 
                     */
                    int64_t GetShuffleReadBytesSum() const;

                    /**
                     * 设置shuffle read 总 bytes
                     * @param _shuffleReadBytesSum shuffle read 总 bytes
                     * 
                     */
                    void SetShuffleReadBytesSum(const int64_t& _shuffleReadBytesSum);

                    /**
                     * 判断参数 ShuffleReadBytesSum 是否已赋值
                     * @return ShuffleReadBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadBytesSumHasBeenSet() const;

                    /**
                     * 获取shuffle read 总行数
                     * @return ShuffleReadRecordsSum shuffle read 总行数
                     * 
                     */
                    int64_t GetShuffleReadRecordsSum() const;

                    /**
                     * 设置shuffle read 总行数
                     * @param _shuffleReadRecordsSum shuffle read 总行数
                     * 
                     */
                    void SetShuffleReadRecordsSum(const int64_t& _shuffleReadRecordsSum);

                    /**
                     * 判断参数 ShuffleReadRecordsSum 是否已赋值
                     * @return ShuffleReadRecordsSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadRecordsSumHasBeenSet() const;

                    /**
                     * 获取洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * @return AnalysisStatus 洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * 
                     */
                    std::string GetAnalysisStatus() const;

                    /**
                     * 设置洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * @param _analysisStatus 洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     * 
                     */
                    void SetAnalysisStatus(const std::string& _analysisStatus);

                    /**
                     * 判断参数 AnalysisStatus 是否已赋值
                     * @return AnalysisStatus 是否已赋值
                     * 
                     */
                    bool AnalysisStatusHasBeenSet() const;

                    /**
                     * 获取任务输出文件总数
                     * @return OutputFilesNum 任务输出文件总数
                     * 
                     */
                    int64_t GetOutputFilesNum() const;

                    /**
                     * 设置任务输出文件总数
                     * @param _outputFilesNum 任务输出文件总数
                     * 
                     */
                    void SetOutputFilesNum(const int64_t& _outputFilesNum);

                    /**
                     * 判断参数 OutputFilesNum 是否已赋值
                     * @return OutputFilesNum 是否已赋值
                     * 
                     */
                    bool OutputFilesNumHasBeenSet() const;

                    /**
                     * 获取任务输出小文件总数
                     * @return OutputSmallFilesNum 任务输出小文件总数
                     * 
                     */
                    int64_t GetOutputSmallFilesNum() const;

                    /**
                     * 设置任务输出小文件总数
                     * @param _outputSmallFilesNum 任务输出小文件总数
                     * 
                     */
                    void SetOutputSmallFilesNum(const int64_t& _outputSmallFilesNum);

                    /**
                     * 判断参数 OutputSmallFilesNum 是否已赋值
                     * @return OutputSmallFilesNum 是否已赋值
                     * 
                     */
                    bool OutputSmallFilesNumHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务创建时间，毫秒时间戳
                     */
                    int64_t m_instanceStartTime;
                    bool m_instanceStartTimeHasBeenSet;

                    /**
                     * 任务结束时间，毫秒时间戳
                     */
                    int64_t m_instanceCompleteTime;
                    bool m_instanceCompleteTimeHasBeenSet;

                    /**
                     * 任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务SQL语句
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * 计算资源名字
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 单位毫秒，引擎内执行耗时
                     */
                    int64_t m_jobTimeSum;
                    bool m_jobTimeSumHasBeenSet;

                    /**
                     * 单位秒，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和
                     */
                    int64_t m_taskTimeSum;
                    bool m_taskTimeSumHasBeenSet;

                    /**
                     * 数据扫描总行数
                     */
                    int64_t m_inputRecordsSum;
                    bool m_inputRecordsSumHasBeenSet;

                    /**
                     * 数据扫描总 bytes
                     */
                    int64_t m_inputBytesSum;
                    bool m_inputBytesSumHasBeenSet;

                    /**
                     * 输出总行数
                     */
                    int64_t m_outputRecordsSum;
                    bool m_outputRecordsSumHasBeenSet;

                    /**
                     * 输出总 bytes
                     */
                    int64_t m_outputBytesSum;
                    bool m_outputBytesSumHasBeenSet;

                    /**
                     * shuffle read 总 bytes
                     */
                    int64_t m_shuffleReadBytesSum;
                    bool m_shuffleReadBytesSumHasBeenSet;

                    /**
                     * shuffle read 总行数
                     */
                    int64_t m_shuffleReadRecordsSum;
                    bool m_shuffleReadRecordsSumHasBeenSet;

                    /**
                     * 洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）
                     */
                    std::string m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * 任务输出文件总数
                     */
                    int64_t m_outputFilesNum;
                    bool m_outputFilesNumHasBeenSet;

                    /**
                     * 任务输出小文件总数
                     */
                    int64_t m_outputSmallFilesNum;
                    bool m_outputSmallFilesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ANALYSISTASKRESULTS_H_
