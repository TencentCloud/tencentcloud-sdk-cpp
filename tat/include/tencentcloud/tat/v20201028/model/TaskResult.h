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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 任务结果。
                */
                class TaskResult : public AbstractModel
                {
                public:
                    TaskResult();
                    ~TaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令执行ExitCode。
                     * @return ExitCode 命令执行ExitCode。
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置命令执行ExitCode。
                     * @param _exitCode 命令执行ExitCode。
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                    /**
                     * 获取Base64编码后的命令输出。最大长度24KB。
                     * @return Output Base64编码后的命令输出。最大长度24KB。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Base64编码后的命令输出。最大长度24KB。
                     * @param _output Base64编码后的命令输出。最大长度24KB。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取命令执行开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecStartTime 命令执行开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecStartTime() const;

                    /**
                     * 设置命令执行开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execStartTime 命令执行开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecStartTime(const std::string& _execStartTime);

                    /**
                     * 判断参数 ExecStartTime 是否已赋值
                     * @return ExecStartTime 是否已赋值
                     * 
                     */
                    bool ExecStartTimeHasBeenSet() const;

                    /**
                     * 获取命令执行结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecEndTime 命令执行结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecEndTime() const;

                    /**
                     * 设置命令执行结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execEndTime 命令执行结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecEndTime(const std::string& _execEndTime);

                    /**
                     * 判断参数 ExecEndTime 是否已赋值
                     * @return ExecEndTime 是否已赋值
                     * 
                     */
                    bool ExecEndTimeHasBeenSet() const;

                    /**
                     * 获取命令最终输出被截断的字节数。
                     * @return Dropped 命令最终输出被截断的字节数。
                     * 
                     */
                    uint64_t GetDropped() const;

                    /**
                     * 设置命令最终输出被截断的字节数。
                     * @param _dropped 命令最终输出被截断的字节数。
                     * 
                     */
                    void SetDropped(const uint64_t& _dropped);

                    /**
                     * 判断参数 Dropped 是否已赋值
                     * @return Dropped 是否已赋值
                     * 
                     */
                    bool DroppedHasBeenSet() const;

                    /**
                     * 获取日志在cos中的地址
                     * @return OutputUrl 日志在cos中的地址
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 设置日志在cos中的地址
                     * @param _outputUrl 日志在cos中的地址
                     * 
                     */
                    void SetOutputUrl(const std::string& _outputUrl);

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取日志上传cos的错误信息。
                     * @return OutputUploadCOSErrorInfo 日志上传cos的错误信息。
                     * 
                     */
                    std::string GetOutputUploadCOSErrorInfo() const;

                    /**
                     * 设置日志上传cos的错误信息。
                     * @param _outputUploadCOSErrorInfo 日志上传cos的错误信息。
                     * 
                     */
                    void SetOutputUploadCOSErrorInfo(const std::string& _outputUploadCOSErrorInfo);

                    /**
                     * 判断参数 OutputUploadCOSErrorInfo 是否已赋值
                     * @return OutputUploadCOSErrorInfo 是否已赋值
                     * 
                     */
                    bool OutputUploadCOSErrorInfoHasBeenSet() const;

                private:

                    /**
                     * 命令执行ExitCode。
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * Base64编码后的命令输出。最大长度24KB。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 命令执行开始时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execStartTime;
                    bool m_execStartTimeHasBeenSet;

                    /**
                     * 命令执行结束时间。格式为：YYYY-MM-DDThh:mm:ssZ
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execEndTime;
                    bool m_execEndTimeHasBeenSet;

                    /**
                     * 命令最终输出被截断的字节数。
                     */
                    uint64_t m_dropped;
                    bool m_droppedHasBeenSet;

                    /**
                     * 日志在cos中的地址
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * 日志上传cos的错误信息。
                     */
                    std::string m_outputUploadCOSErrorInfo;
                    bool m_outputUploadCOSErrorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_
