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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 引擎任务信息
                */
                class EngineTaskInfo : public AbstractModel
                {
                public:
                    EngineTaskInfo();
                    ~EngineTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineSubmitTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineSubmitTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineSubmitTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineSubmitTime(const std::string& _engineSubmitTime);

                    /**
                     * 判断参数 EngineSubmitTime 是否已赋值
                     * @return EngineSubmitTime 是否已赋值
                     * 
                     */
                    bool EngineSubmitTimeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeTime(const std::string& _engineExeTime);

                    /**
                     * 判断参数 EngineExeTime 是否已赋值
                     * @return EngineExeTime 是否已赋值
                     * 
                     */
                    bool EngineExeTimeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeTimes 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEngineExeTimes() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeTimes 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeTimes(const uint64_t& _engineExeTimes);

                    /**
                     * 判断参数 EngineExeTimes 是否已赋值
                     * @return EngineExeTimes 是否已赋值
                     * 
                     */
                    bool EngineExeTimesHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuConsume 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCuConsume() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuConsume 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCuConsume(const uint64_t& _cuConsume);

                    /**
                     * 判断参数 CuConsume 是否已赋值
                     * @return CuConsume 是否已赋值
                     * 
                     */
                    bool CuConsumeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUsage 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourceUsage() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceUsage 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceUsage(const int64_t& _resourceUsage);

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineName 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExeStatus 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineExeStatus() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineExeStatus 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineExeStatus(const std::string& _engineExeStatus);

                    /**
                     * 判断参数 EngineExeStatus 是否已赋值
                     * @return EngineExeStatus 是否已赋值
                     * 
                     */
                    bool EngineExeStatusHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskKind 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskKind() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskKind 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskKind(const std::string& _taskKind);

                    /**
                     * 判断参数 TaskKind 是否已赋值
                     * @return TaskKind 是否已赋值
                     * 
                     */
                    bool TaskKindHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskContent 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskContent() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskContent 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskContent(const std::string& _taskContent);

                    /**
                     * 判断参数 TaskContent 是否已赋值
                     * @return TaskContent 是否已赋值
                     * 
                     */
                    bool TaskContentHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInputBytesSum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputBytesSum(const uint64_t& _inputBytesSum);

                    /**
                     * 判断参数 InputBytesSum 是否已赋值
                     * @return InputBytesSum 是否已赋值
                     * 
                     */
                    bool InputBytesSumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShuffleReadBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShuffleReadBytesSum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shuffleReadBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShuffleReadBytesSum(const uint64_t& _shuffleReadBytesSum);

                    /**
                     * 判断参数 ShuffleReadBytesSum 是否已赋值
                     * @return ShuffleReadBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadBytesSumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShuffleReadRecordsSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShuffleReadRecordsSum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shuffleReadRecordsSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShuffleReadRecordsSum(const uint64_t& _shuffleReadRecordsSum);

                    /**
                     * 判断参数 ShuffleReadRecordsSum 是否已赋值
                     * @return ShuffleReadRecordsSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadRecordsSumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputRecordsSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputRecordsSum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputRecordsSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputRecordsSum(const uint64_t& _outputRecordsSum);

                    /**
                     * 判断参数 OutputRecordsSum 是否已赋值
                     * @return OutputRecordsSum 是否已赋值
                     * 
                     */
                    bool OutputRecordsSumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputBytesSum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputBytesSum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputBytesSum(const uint64_t& _outputBytesSum);

                    /**
                     * 判断参数 OutputBytesSum 是否已赋值
                     * @return OutputBytesSum 是否已赋值
                     * 
                     */
                    bool OutputBytesSumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputFilesNum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputFilesNum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputFilesNum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputFilesNum(const uint64_t& _outputFilesNum);

                    /**
                     * 判断参数 OutputFilesNum 是否已赋值
                     * @return OutputFilesNum 是否已赋值
                     * 
                     */
                    bool OutputFilesNumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputSmallFilesNum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOutputSmallFilesNum() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputSmallFilesNum 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputSmallFilesNum(const uint64_t& _outputSmallFilesNum);

                    /**
                     * 判断参数 OutputSmallFilesNum 是否已赋值
                     * @return OutputSmallFilesNum 是否已赋值
                     * 
                     */
                    bool OutputSmallFilesNumHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWaitTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitTime(const uint64_t& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryResultTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQueryResultTime() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryResultTime 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryResultTime(const uint64_t& _queryResultTime);

                    /**
                     * 判断参数 QueryResultTime 是否已赋值
                     * @return QueryResultTime 是否已赋值
                     * 
                     */
                    bool QueryResultTimeHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CmdArgs 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cmdArgs 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                private:

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineSubmitTime;
                    bool m_engineSubmitTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeTime;
                    bool m_engineExeTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_engineExeTimes;
                    bool m_engineExeTimesHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cuConsume;
                    bool m_cuConsumeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExeStatus;
                    bool m_engineExeStatusHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskKind;
                    bool m_taskKindHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskContent;
                    bool m_taskContentHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inputBytesSum;
                    bool m_inputBytesSumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shuffleReadBytesSum;
                    bool m_shuffleReadBytesSumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shuffleReadRecordsSum;
                    bool m_shuffleReadRecordsSumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputRecordsSum;
                    bool m_outputRecordsSumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputBytesSum;
                    bool m_outputBytesSumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputFilesNum;
                    bool m_outputFilesNumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_outputSmallFilesNum;
                    bool m_outputSmallFilesNumHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_queryResultTime;
                    bool m_queryResultTimeHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_
