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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATION_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/InvocationOutput.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 脚本执行情况。
                */
                class Invocation : public AbstractModel
                {
                public:
                    Invocation();
                    ~Invocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>脚本执行ID。</p>
                     * @return InvokeId <p>脚本执行ID。</p>
                     * 
                     */
                    std::string GetInvokeId() const;

                    /**
                     * 设置<p>脚本执行ID。</p>
                     * @param _invokeId <p>脚本执行ID。</p>
                     * 
                     */
                    void SetInvokeId(const std::string& _invokeId);

                    /**
                     * 判断参数 InvokeId 是否已赋值
                     * @return InvokeId 是否已赋值
                     * 
                     */
                    bool InvokeIdHasBeenSet() const;

                    /**
                     * 获取<p>运行状态。<li> Running：正在执行</li> <li>Finished：已经完成</li> <li>Failed：失败</li>  <li> Stopped：已停止</li></p>
                     * @return Status <p>运行状态。<li> Running：正在执行</li> <li>Finished：已经完成</li> <li>Failed：失败</li>  <li> Stopped：已停止</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>运行状态。<li> Running：正在执行</li> <li>Finished：已经完成</li> <li>Failed：失败</li>  <li> Stopped：已停止</li></p>
                     * @param _status <p>运行状态。<li> Running：正在执行</li> <li>Finished：已经完成</li> <li>Failed：失败</li>  <li> Stopped：已停止</li></p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output <p>任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InvocationOutput GetOutput() const;

                    /**
                     * 设置<p>任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output <p>任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const InvocationOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>任务失败时的错误码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>任务失败时的错误码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>任务失败时的错误码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode <p>任务失败时的错误码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>任务失败时的错误信息描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorInfo <p>任务失败时的错误信息描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置<p>任务失败时的错误信息描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorInfo <p>任务失败时的错误信息描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取<p>任务退出状态码</p>
                     * @return ExitCode <p>任务退出状态码</p>
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置<p>任务退出状态码</p>
                     * @param _exitCode <p>任务退出状态码</p>
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                private:

                    /**
                     * <p>脚本执行ID。</p>
                     */
                    std::string m_invokeId;
                    bool m_invokeIdHasBeenSet;

                    /**
                     * <p>运行状态。<li> Running：正在执行</li> <li>Finished：已经完成</li> <li>Failed：失败</li>  <li> Stopped：已停止</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务输出。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InvocationOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>任务失败时的错误码。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>任务失败时的错误信息描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * <p>任务退出状态码</p>
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATION_H_
