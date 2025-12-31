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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXINSTANCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/MountOption.h>
#include <tencentcloud/ags/v20250920/model/CustomConfigurationDetail.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱实例结构体
                */
                class SandboxInstance : public AbstractModel
                {
                public:
                    SandboxInstance();
                    ~SandboxInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取沙箱实例唯一标识符
                     * @return InstanceId 沙箱实例唯一标识符
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置沙箱实例唯一标识符
                     * @param _instanceId 沙箱实例唯一标识符
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
                     * 获取所属沙箱工具 ID
                     * @return ToolId 所属沙箱工具 ID
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置所属沙箱工具 ID
                     * @param _toolId 所属沙箱工具 ID
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取所属沙箱工具名称
                     * @return ToolName 所属沙箱工具名称
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置所属沙箱工具名称
                     * @param _toolName 所属沙箱工具名称
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取实例状态：STARTING（启动中）、RUNNING（运行中）、STOPPING（停止中）、STOPPED（已停止）、STOP_FAILED（停止失败）、FAILED（失败状态）
                     * @return Status 实例状态：STARTING（启动中）、RUNNING（运行中）、STOPPING（停止中）、STOPPED（已停止）、STOP_FAILED（停止失败）、FAILED（失败状态）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态：STARTING（启动中）、RUNNING（运行中）、STOPPING（停止中）、STOPPED（已停止）、STOP_FAILED（停止失败）、FAILED（失败状态）
                     * @param _status 实例状态：STARTING（启动中）、RUNNING（运行中）、STOPPING（停止中）、STOPPED（已停止）、STOP_FAILED（停止失败）、FAILED（失败状态）
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
                     * 获取超时时间（秒），null 表示无超时设置
                     * @return TimeoutSeconds 超时时间（秒），null 表示无超时设置
                     * 
                     */
                    uint64_t GetTimeoutSeconds() const;

                    /**
                     * 设置超时时间（秒），null 表示无超时设置
                     * @param _timeoutSeconds 超时时间（秒），null 表示无超时设置
                     * 
                     */
                    void SetTimeoutSeconds(const uint64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取过期时间（ISO 8601 格式），null 表示无过期时间
                     * @return ExpiresAt 过期时间（ISO 8601 格式），null 表示无过期时间
                     * 
                     */
                    std::string GetExpiresAt() const;

                    /**
                     * 设置过期时间（ISO 8601 格式），null 表示无过期时间
                     * @param _expiresAt 过期时间（ISO 8601 格式），null 表示无过期时间
                     * 
                     */
                    void SetExpiresAt(const std::string& _expiresAt);

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取停止原因：manual（手动）、timeout（超时）、error（错误）、system（系统），仅在状态为 STOPPED、STOP_FAILED 或 FAILED 时有值。当 provider 停止失败时，状态为 STOP_FAILED，原因为 error
                     * @return StopReason 停止原因：manual（手动）、timeout（超时）、error（错误）、system（系统），仅在状态为 STOPPED、STOP_FAILED 或 FAILED 时有值。当 provider 停止失败时，状态为 STOP_FAILED，原因为 error
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置停止原因：manual（手动）、timeout（超时）、error（错误）、system（系统），仅在状态为 STOPPED、STOP_FAILED 或 FAILED 时有值。当 provider 停止失败时，状态为 STOP_FAILED，原因为 error
                     * @param _stopReason 停止原因：manual（手动）、timeout（超时）、error（错误）、system（系统），仅在状态为 STOPPED、STOP_FAILED 或 FAILED 时有值。当 provider 停止失败时，状态为 STOP_FAILED，原因为 error
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取创建时间（ISO 8601 格式）
                     * @return CreateTime 创建时间（ISO 8601 格式）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间（ISO 8601 格式）
                     * @param _createTime 创建时间（ISO 8601 格式）
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
                     * 获取更新时间（ISO 8601 格式）
                     * @return UpdateTime 更新时间（ISO 8601 格式）
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间（ISO 8601 格式）
                     * @param _updateTime 更新时间（ISO 8601 格式）
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
                     * 获取存储挂载选项
                     * @return MountOptions 存储挂载选项
                     * 
                     */
                    std::vector<MountOption> GetMountOptions() const;

                    /**
                     * 设置存储挂载选项
                     * @param _mountOptions 存储挂载选项
                     * 
                     */
                    void SetMountOptions(const std::vector<MountOption>& _mountOptions);

                    /**
                     * 判断参数 MountOptions 是否已赋值
                     * @return MountOptions 是否已赋值
                     * 
                     */
                    bool MountOptionsHasBeenSet() const;

                    /**
                     * 获取沙箱实例自定义配置
                     * @return CustomConfiguration 沙箱实例自定义配置
                     * 
                     */
                    CustomConfigurationDetail GetCustomConfiguration() const;

                    /**
                     * 设置沙箱实例自定义配置
                     * @param _customConfiguration 沙箱实例自定义配置
                     * 
                     */
                    void SetCustomConfiguration(const CustomConfigurationDetail& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * 沙箱实例唯一标识符
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 所属沙箱工具 ID
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * 所属沙箱工具名称
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 实例状态：STARTING（启动中）、RUNNING（运行中）、STOPPING（停止中）、STOPPED（已停止）、STOP_FAILED（停止失败）、FAILED（失败状态）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 超时时间（秒），null 表示无超时设置
                     */
                    uint64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * 过期时间（ISO 8601 格式），null 表示无过期时间
                     */
                    std::string m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * 停止原因：manual（手动）、timeout（超时）、error（错误）、system（系统），仅在状态为 STOPPED、STOP_FAILED 或 FAILED 时有值。当 provider 停止失败时，状态为 STOP_FAILED，原因为 error
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 创建时间（ISO 8601 格式）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间（ISO 8601 格式）
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 存储挂载选项
                     */
                    std::vector<MountOption> m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                    /**
                     * 沙箱实例自定义配置
                     */
                    CustomConfigurationDetail m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SANDBOXINSTANCE_H_
