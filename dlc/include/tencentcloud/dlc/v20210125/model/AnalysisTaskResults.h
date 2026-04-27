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
                     * 获取<p>任务Id</p>
                     * @return Id <p>任务Id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>任务Id</p>
                     * @param _id <p>任务Id</p>
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
                     * 获取<p>任务创建时间，毫秒时间戳</p>
                     * @return InstanceStartTime <p>任务创建时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetInstanceStartTime() const;

                    /**
                     * 设置<p>任务创建时间，毫秒时间戳</p>
                     * @param _instanceStartTime <p>任务创建时间，毫秒时间戳</p>
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
                     * 获取<p>任务结束时间，毫秒时间戳</p>
                     * @return InstanceCompleteTime <p>任务结束时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetInstanceCompleteTime() const;

                    /**
                     * 设置<p>任务结束时间，毫秒时间戳</p>
                     * @param _instanceCompleteTime <p>任务结束时间，毫秒时间戳</p>
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
                     * 获取<p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * @return State <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     * @param _state <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
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
                     * 获取<p>任务SQL语句</p>
                     * @return SQL <p>任务SQL语句</p>
                     * 
                     */
                    std::string GetSQL() const;

                    /**
                     * 设置<p>任务SQL语句</p>
                     * @param _sQL <p>任务SQL语句</p>
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
                     * 获取<p>计算资源名字</p>
                     * @return DataEngineName <p>计算资源名字</p>
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置<p>计算资源名字</p>
                     * @param _dataEngineName <p>计算资源名字</p>
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
                     * 获取<p>单位毫秒，引擎内执行耗时, 反映真正用于计算所需的耗时，即从  Spark 任务第一个 Task  开始执行到任务结束之间的耗时。<br>具体的：会统计任务的每个 Spark Stage 第一个 Task 到最后一个 Task 完成时长之和，不包含任务开始的排队耗时（即剔除从任务提交到 Spark Task 开始执行之间的调度等其他耗时），也不包含任务执行过程中多个 Spark Stage 之间因 executor 资源不足而等待执行 Task 所消耗的时间。</p>
                     * @return JobTimeSum <p>单位毫秒，引擎内执行耗时, 反映真正用于计算所需的耗时，即从  Spark 任务第一个 Task  开始执行到任务结束之间的耗时。<br>具体的：会统计任务的每个 Spark Stage 第一个 Task 到最后一个 Task 完成时长之和，不包含任务开始的排队耗时（即剔除从任务提交到 Spark Task 开始执行之间的调度等其他耗时），也不包含任务执行过程中多个 Spark Stage 之间因 executor 资源不足而等待执行 Task 所消耗的时间。</p>
                     * 
                     */
                    int64_t GetJobTimeSum() const;

                    /**
                     * 设置<p>单位毫秒，引擎内执行耗时, 反映真正用于计算所需的耗时，即从  Spark 任务第一个 Task  开始执行到任务结束之间的耗时。<br>具体的：会统计任务的每个 Spark Stage 第一个 Task 到最后一个 Task 完成时长之和，不包含任务开始的排队耗时（即剔除从任务提交到 Spark Task 开始执行之间的调度等其他耗时），也不包含任务执行过程中多个 Spark Stage 之间因 executor 资源不足而等待执行 Task 所消耗的时间。</p>
                     * @param _jobTimeSum <p>单位毫秒，引擎内执行耗时, 反映真正用于计算所需的耗时，即从  Spark 任务第一个 Task  开始执行到任务结束之间的耗时。<br>具体的：会统计任务的每个 Spark Stage 第一个 Task 到最后一个 Task 完成时长之和，不包含任务开始的排队耗时（即剔除从任务提交到 Spark Task 开始执行之间的调度等其他耗时），也不包含任务执行过程中多个 Spark Stage 之间因 executor 资源不足而等待执行 Task 所消耗的时间。</p>
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
                     * 获取<p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和</p>
                     * @return TaskTimeSum <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和</p>
                     * 
                     */
                    int64_t GetTaskTimeSum() const;

                    /**
                     * 设置<p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和</p>
                     * @param _taskTimeSum <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和</p>
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
                     * 获取<p>数据扫描总行数</p>
                     * @return InputRecordsSum <p>数据扫描总行数</p>
                     * 
                     */
                    int64_t GetInputRecordsSum() const;

                    /**
                     * 设置<p>数据扫描总行数</p>
                     * @param _inputRecordsSum <p>数据扫描总行数</p>
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
                     * 获取<p>数据扫描总 bytes</p>
                     * @return InputBytesSum <p>数据扫描总 bytes</p>
                     * 
                     */
                    int64_t GetInputBytesSum() const;

                    /**
                     * 设置<p>数据扫描总 bytes</p>
                     * @param _inputBytesSum <p>数据扫描总 bytes</p>
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
                     * 获取<p>输出总行数</p>
                     * @return OutputRecordsSum <p>输出总行数</p>
                     * 
                     */
                    int64_t GetOutputRecordsSum() const;

                    /**
                     * 设置<p>输出总行数</p>
                     * @param _outputRecordsSum <p>输出总行数</p>
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
                     * 获取<p>输出总 bytes</p>
                     * @return OutputBytesSum <p>输出总 bytes</p>
                     * 
                     */
                    int64_t GetOutputBytesSum() const;

                    /**
                     * 设置<p>输出总 bytes</p>
                     * @param _outputBytesSum <p>输出总 bytes</p>
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
                     * 获取<p>shuffle read 总 bytes</p>
                     * @return ShuffleReadBytesSum <p>shuffle read 总 bytes</p>
                     * 
                     */
                    int64_t GetShuffleReadBytesSum() const;

                    /**
                     * 设置<p>shuffle read 总 bytes</p>
                     * @param _shuffleReadBytesSum <p>shuffle read 总 bytes</p>
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
                     * 获取<p>shuffle read 总行数</p>
                     * @return ShuffleReadRecordsSum <p>shuffle read 总行数</p>
                     * 
                     */
                    int64_t GetShuffleReadRecordsSum() const;

                    /**
                     * 设置<p>shuffle read 总行数</p>
                     * @param _shuffleReadRecordsSum <p>shuffle read 总行数</p>
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
                     * 获取<p>洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）</p>
                     * @return AnalysisStatus <p>洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）</p>
                     * 
                     */
                    std::string GetAnalysisStatus() const;

                    /**
                     * 设置<p>洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）</p>
                     * @param _analysisStatus <p>洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）</p>
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
                     * 获取<p>任务输出文件总数</p>
                     * @return OutputFilesNum <p>任务输出文件总数</p>
                     * 
                     */
                    int64_t GetOutputFilesNum() const;

                    /**
                     * 设置<p>任务输出文件总数</p>
                     * @param _outputFilesNum <p>任务输出文件总数</p>
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
                     * 获取<p>任务输出小文件总数</p>
                     * @return OutputSmallFilesNum <p>任务输出小文件总数</p>
                     * 
                     */
                    int64_t GetOutputSmallFilesNum() const;

                    /**
                     * 设置<p>任务输出小文件总数</p>
                     * @param _outputSmallFilesNum <p>任务输出小文件总数</p>
                     * 
                     */
                    void SetOutputSmallFilesNum(const int64_t& _outputSmallFilesNum);

                    /**
                     * 判断参数 OutputSmallFilesNum 是否已赋值
                     * @return OutputSmallFilesNum 是否已赋值
                     * 
                     */
                    bool OutputSmallFilesNumHasBeenSet() const;

                    /**
                     * 获取<p>shuffle write 总 Bytes 大小</p><p>单位：Bytes</p><p>默认值：无</p>
                     * @return ShuffleWriteBytesSum <p>shuffle write 总 Bytes 大小</p><p>单位：Bytes</p><p>默认值：无</p>
                     * 
                     */
                    int64_t GetShuffleWriteBytesSum() const;

                    /**
                     * 设置<p>shuffle write 总 Bytes 大小</p><p>单位：Bytes</p><p>默认值：无</p>
                     * @param _shuffleWriteBytesSum <p>shuffle write 总 Bytes 大小</p><p>单位：Bytes</p><p>默认值：无</p>
                     * 
                     */
                    void SetShuffleWriteBytesSum(const int64_t& _shuffleWriteBytesSum);

                    /**
                     * 判断参数 ShuffleWriteBytesSum 是否已赋值
                     * @return ShuffleWriteBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleWriteBytesSumHasBeenSet() const;

                private:

                    /**
                     * <p>任务Id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>任务创建时间，毫秒时间戳</p>
                     */
                    int64_t m_instanceStartTime;
                    bool m_instanceStartTimeHasBeenSet;

                    /**
                     * <p>任务结束时间，毫秒时间戳</p>
                     */
                    int64_t m_instanceCompleteTime;
                    bool m_instanceCompleteTimeHasBeenSet;

                    /**
                     * <p>任务状态：0 初始化， 1 执行中， 2 执行成功，3 数据写入中，4 排队中。-1 执行失败，-3 已取消。</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>任务SQL语句</p>
                     */
                    std::string m_sQL;
                    bool m_sQLHasBeenSet;

                    /**
                     * <p>计算资源名字</p>
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * <p>单位毫秒，引擎内执行耗时, 反映真正用于计算所需的耗时，即从  Spark 任务第一个 Task  开始执行到任务结束之间的耗时。<br>具体的：会统计任务的每个 Spark Stage 第一个 Task 到最后一个 Task 完成时长之和，不包含任务开始的排队耗时（即剔除从任务提交到 Spark Task 开始执行之间的调度等其他耗时），也不包含任务执行过程中多个 Spark Stage 之间因 executor 资源不足而等待执行 Task 所消耗的时间。</p>
                     */
                    int64_t m_jobTimeSum;
                    bool m_jobTimeSumHasBeenSet;

                    /**
                     * <p>单位秒，累计 CPU* 秒 ( 累计 CPU * 时 = 累计 CPU* 秒/ 3600)，统计参与计算所用 Spark Executor 每个 core 的 CPU 执行时长总和</p>
                     */
                    int64_t m_taskTimeSum;
                    bool m_taskTimeSumHasBeenSet;

                    /**
                     * <p>数据扫描总行数</p>
                     */
                    int64_t m_inputRecordsSum;
                    bool m_inputRecordsSumHasBeenSet;

                    /**
                     * <p>数据扫描总 bytes</p>
                     */
                    int64_t m_inputBytesSum;
                    bool m_inputBytesSumHasBeenSet;

                    /**
                     * <p>输出总行数</p>
                     */
                    int64_t m_outputRecordsSum;
                    bool m_outputRecordsSumHasBeenSet;

                    /**
                     * <p>输出总 bytes</p>
                     */
                    int64_t m_outputBytesSum;
                    bool m_outputBytesSumHasBeenSet;

                    /**
                     * <p>shuffle read 总 bytes</p>
                     */
                    int64_t m_shuffleReadBytesSum;
                    bool m_shuffleReadBytesSumHasBeenSet;

                    /**
                     * <p>shuffle read 总行数</p>
                     */
                    int64_t m_shuffleReadRecordsSum;
                    bool m_shuffleReadRecordsSumHasBeenSet;

                    /**
                     * <p>洞察结果类型分类，一个 json 数组，有如下几种类型：SPARK-StageScheduleDelay（资源抢占）, SPARK-ShuffleFailure（Shuffle异常）, SPARK-SlowTask（慢task）, SPARK-DataSkew（数据倾斜）, SPARK-InsufficientResource（磁盘或内存不足）</p>
                     */
                    std::string m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * <p>任务输出文件总数</p>
                     */
                    int64_t m_outputFilesNum;
                    bool m_outputFilesNumHasBeenSet;

                    /**
                     * <p>任务输出小文件总数</p>
                     */
                    int64_t m_outputSmallFilesNum;
                    bool m_outputSmallFilesNumHasBeenSet;

                    /**
                     * <p>shuffle write 总 Bytes 大小</p><p>单位：Bytes</p><p>默认值：无</p>
                     */
                    int64_t m_shuffleWriteBytesSum;
                    bool m_shuffleWriteBytesSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ANALYSISTASKRESULTS_H_
