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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_COMMANDDETAIL_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_COMMANDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/InvocationDetail.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 任务详情
                */
                class CommandDetail : public AbstractModel
                {
                public:
                    CommandDetail();
                    ~CommandDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户 Uin
                     * @return Uin 租户 Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户 Uin
                     * @param _uin 租户 Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取租户 APPID
                     * @return AppId 租户 APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置租户 APPID
                     * @param _appId 租户 APPID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取任务类型，取值有：
PowerShellScript
Bat
                     * @return Type 任务类型，取值有：
PowerShellScript
Bat
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型，取值有：
PowerShellScript
Bat
                     * @param _type 任务类型，取值有：
PowerShellScript
Bat
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取RUNNING - 执行中；FINISHED - 执行完成
                     * @return Status RUNNING - 执行中；FINISHED - 执行完成
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置RUNNING - 执行中；FINISHED - 执行完成
                     * @param _status RUNNING - 执行中；FINISHED - 执行完成
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
                     * 获取任务脚本，Base64 编码
                     * @return Command 任务脚本，Base64 编码
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置任务脚本，Base64 编码
                     * @param _command 任务脚本，Base64 编码
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取任务唯一 ID
                     * @return CommandId 任务唯一 ID
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置任务唯一 ID
                     * @param _commandId 任务唯一 ID
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取任务完成时间
                     * @return CreateTime 任务完成时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务完成时间
                     * @param _createTime 任务完成时间
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
                     * 获取任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取各实例运行结果集
                     * @return Invocations 各实例运行结果集
                     * 
                     */
                    std::vector<InvocationDetail> GetInvocations() const;

                    /**
                     * 设置各实例运行结果集
                     * @param _invocations 各实例运行结果集
                     * 
                     */
                    void SetInvocations(const std::vector<InvocationDetail>& _invocations);

                    /**
                     * 判断参数 Invocations 是否已赋值
                     * @return Invocations 是否已赋值
                     * 
                     */
                    bool InvocationsHasBeenSet() const;

                    /**
                     * 获取是否以绑定用户运行任务，默认 false：system 用户执行
                     * @return RunAsBoundUser 是否以绑定用户运行任务，默认 false：system 用户执行
                     * 
                     */
                    bool GetRunAsBoundUser() const;

                    /**
                     * 设置是否以绑定用户运行任务，默认 false：system 用户执行
                     * @param _runAsBoundUser 是否以绑定用户运行任务，默认 false：system 用户执行
                     * 
                     */
                    void SetRunAsBoundUser(const bool& _runAsBoundUser);

                    /**
                     * 判断参数 RunAsBoundUser 是否已赋值
                     * @return RunAsBoundUser 是否已赋值
                     * 
                     */
                    bool RunAsBoundUserHasBeenSet() const;

                    /**
                     * 获取是否前台运行任务，默认 false：后台运行任务
                     * @return RunForeground 是否前台运行任务，默认 false：后台运行任务
                     * 
                     */
                    bool GetRunForeground() const;

                    /**
                     * 设置是否前台运行任务，默认 false：后台运行任务
                     * @param _runForeground 是否前台运行任务，默认 false：后台运行任务
                     * 
                     */
                    void SetRunForeground(const bool& _runForeground);

                    /**
                     * 判断参数 RunForeground 是否已赋值
                     * @return RunForeground 是否已赋值
                     * 
                     */
                    bool RunForegroundHasBeenSet() const;

                private:

                    /**
                     * 租户 Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 租户 APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 任务类型，取值有：
PowerShellScript
Bat
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * RUNNING - 执行中；FINISHED - 执行完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务脚本，Base64 编码
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 任务唯一 ID
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 任务完成时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 各实例运行结果集
                     */
                    std::vector<InvocationDetail> m_invocations;
                    bool m_invocationsHasBeenSet;

                    /**
                     * 是否以绑定用户运行任务，默认 false：system 用户执行
                     */
                    bool m_runAsBoundUser;
                    bool m_runAsBoundUserHasBeenSet;

                    /**
                     * 是否前台运行任务，默认 false：后台运行任务
                     */
                    bool m_runForeground;
                    bool m_runForegroundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_COMMANDDETAIL_H_
