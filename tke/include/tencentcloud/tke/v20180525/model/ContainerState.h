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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINERSTATE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINERSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 容器状态
                */
                class ContainerState : public AbstractModel
                {
                public:
                    ContainerState();
                    ~ContainerState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器运行退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExitCode 容器运行退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置容器运行退出码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exitCode 容器运行退出码
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
                     * 获取容器运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 容器运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置容器运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishTime 容器运行结束时间
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
                     * 获取容器状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 容器状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置容器状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 容器状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取容器状态 Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 容器状态 Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置容器状态 Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 容器状态 Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取容器重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 容器重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置容器重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount 容器重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取容器运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 容器运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置容器运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 容器运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取容器状态：created, running, exited, unknown
                     * @return State 容器状态：created, running, exited, unknown
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置容器状态：created, running, exited, unknown
                     * @param _state 容器状态：created, running, exited, unknown
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 容器运行退出码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * 容器运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 容器状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 容器状态 Reason
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 容器重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 容器运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 容器状态：created, running, exited, unknown
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINERSTATE_H_
