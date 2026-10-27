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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONDETAIL_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 实例执行脚本任务结果详情
                */
                class InvocationDetail : public AbstractModel
                {
                public:
                    InvocationDetail();
                    ~InvocationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 id
                     * @return InstanceId 实例 id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 id
                     * @param _instanceId 实例 id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例所在区域，目前支持的区域有：ap-beijing、ap-shanghai、ap-guangzhou、ap-shanghai-adc
                     * @return Region 实例所在区域，目前支持的区域有：ap-beijing、ap-shanghai、ap-guangzhou、ap-shanghai-adc
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在区域，目前支持的区域有：ap-beijing、ap-shanghai、ap-guangzhou、ap-shanghai-adc
                     * @param _region 实例所在区域，目前支持的区域有：ap-beijing、ap-shanghai、ap-guangzhou、ap-shanghai-adc
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
                     * 获取脚本任务执行状态，取值有：
Running-执行中
Finished-完成
Failed-失败
Stopped-终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 脚本任务执行状态，取值有：
Running-执行中
Finished-完成
Failed-失败
Stopped-终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置脚本任务执行状态，取值有：
Running-执行中
Finished-完成
Failed-失败
Stopped-终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 脚本任务执行状态，取值有：
Running-执行中
Finished-完成
Failed-失败
Stopped-终止
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例上任务唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvokeId 实例上任务唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvokeId() const;

                    /**
                     * 设置实例上任务唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invokeId 实例上任务唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取脚本任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 脚本任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置脚本任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output 脚本任务输出
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExitCode 任务退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置任务退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exitCode 任务退出码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode 任务错误码
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
                     * 获取执行任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorInfo 执行任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置执行任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorInfo 执行任务错误信息
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

                private:

                    /**
                     * 实例 id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例所在区域，目前支持的区域有：ap-beijing、ap-shanghai、ap-guangzhou、ap-shanghai-adc
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 脚本任务执行状态，取值有：
Running-执行中
Finished-完成
Failed-失败
Stopped-终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例上任务唯一 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invokeId;
                    bool m_invokeIdHasBeenSet;

                    /**
                     * 脚本任务输出
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 任务退出码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * 任务错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 执行任务错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_INVOCATIONDETAIL_H_
