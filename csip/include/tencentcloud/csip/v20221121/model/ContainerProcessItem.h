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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器进程信息
                */
                class ContainerProcessItem : public AbstractModel
                {
                public:
                    ContainerProcessItem();
                    ~ContainerProcessItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processName 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取宿主机进程ID
                     * @return PID 宿主机进程ID
                     * 
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置宿主机进程ID
                     * @param _pID 宿主机进程ID
                     * 
                     */
                    void SetPID(const int64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取容器内进程ID
                     * @return ContainerPID 容器内进程ID
                     * 
                     */
                    int64_t GetContainerPID() const;

                    /**
                     * 设置容器内进程ID
                     * @param _containerPID 容器内进程ID
                     * 
                     */
                    void SetContainerPID(const int64_t& _containerPID);

                    /**
                     * 判断参数 ContainerPID 是否已赋值
                     * @return ContainerPID 是否已赋值
                     * 
                     */
                    bool ContainerPIDHasBeenSet() const;

                    /**
                     * 获取进程可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPath 进程可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processPath 进程可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunAs 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runAs 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 进程启动时间
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

                private:

                    /**
                     * 进程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 宿主机进程ID
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * 容器内进程ID
                     */
                    int64_t m_containerPID;
                    bool m_containerPIDHasBeenSet;

                    /**
                     * 进程可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程运行用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERPROCESSITEM_H_
