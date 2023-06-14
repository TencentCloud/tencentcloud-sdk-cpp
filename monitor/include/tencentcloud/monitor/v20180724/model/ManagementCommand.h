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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus Agent 管理命令行
                */
                class ManagementCommand : public AbstractModel
                {
                public:
                    ManagementCommand();
                    ~ManagementCommand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent 安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Install Agent 安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstall() const;

                    /**
                     * 设置Agent 安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _install Agent 安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstall(const std::string& _install);

                    /**
                     * 判断参数 Install 是否已赋值
                     * @return Install 是否已赋值
                     * 
                     */
                    bool InstallHasBeenSet() const;

                    /**
                     * 获取Agent 重启命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Restart Agent 重启命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestart() const;

                    /**
                     * 设置Agent 重启命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restart Agent 重启命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestart(const std::string& _restart);

                    /**
                     * 判断参数 Restart 是否已赋值
                     * @return Restart 是否已赋值
                     * 
                     */
                    bool RestartHasBeenSet() const;

                    /**
                     * 获取Agent 停止命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stop Agent 停止命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStop() const;

                    /**
                     * 设置Agent 停止命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stop Agent 停止命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStop(const std::string& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                    /**
                     * 获取Agent 状态检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCheck Agent 状态检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusCheck() const;

                    /**
                     * 设置Agent 状态检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCheck Agent 状态检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusCheck(const std::string& _statusCheck);

                    /**
                     * 判断参数 StatusCheck 是否已赋值
                     * @return StatusCheck 是否已赋值
                     * 
                     */
                    bool StatusCheckHasBeenSet() const;

                    /**
                     * 获取Agent 日志检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogCheck Agent 日志检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogCheck() const;

                    /**
                     * 设置Agent 日志检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logCheck Agent 日志检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogCheck(const std::string& _logCheck);

                    /**
                     * 判断参数 LogCheck 是否已赋值
                     * @return LogCheck 是否已赋值
                     * 
                     */
                    bool LogCheckHasBeenSet() const;

                private:

                    /**
                     * Agent 安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_install;
                    bool m_installHasBeenSet;

                    /**
                     * Agent 重启命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restart;
                    bool m_restartHasBeenSet;

                    /**
                     * Agent 停止命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stop;
                    bool m_stopHasBeenSet;

                    /**
                     * Agent 状态检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusCheck;
                    bool m_statusCheckHasBeenSet;

                    /**
                     * Agent 日志检测命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logCheck;
                    bool m_logCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MANAGEMENTCOMMAND_H_
