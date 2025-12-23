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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROGRESSSTEP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROGRESSSTEP_H_

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
                * 绑定进度参数
                */
                class BindProgressStep : public AbstractModel
                {
                public:
                    BindProgressStep();
                    ~BindProgressStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndAt 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endAt 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedMsg(const std::string& _failedMsg);

                    /**
                     * 判断参数 FailedMsg 是否已赋值
                     * @return FailedMsg 是否已赋值
                     * 
                     */
                    bool FailedMsgHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return LifeState 状态
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置状态
                     * @param _lifeState 状态
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartAt 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startAt 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取任务进程
"prepare_env"   // 准备环境,安装instance EKS
"check_target"  // 检查target是否为running
"install_crd"   // 安装需要测crd
"install_rbac"  // 安装rbac
"install_agent" // 安装agent
"install_cr"    // 安装prometheus CR
"install_basic" // 安装基础采集信息，标记target状态为normal
                     * @return Step 任务进程
"prepare_env"   // 准备环境,安装instance EKS
"check_target"  // 检查target是否为running
"install_crd"   // 安装需要测crd
"install_rbac"  // 安装rbac
"install_agent" // 安装agent
"install_cr"    // 安装prometheus CR
"install_basic" // 安装基础采集信息，标记target状态为normal
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置任务进程
"prepare_env"   // 准备环境,安装instance EKS
"check_target"  // 检查target是否为running
"install_crd"   // 安装需要测crd
"install_rbac"  // 安装rbac
"install_agent" // 安装agent
"install_cr"    // 安装prometheus CR
"install_basic" // 安装基础采集信息，标记target状态为normal
                     * @param _step 任务进程
"prepare_env"   // 准备环境,安装instance EKS
"check_target"  // 检查target是否为running
"install_crd"   // 安装需要测crd
"install_rbac"  // 安装rbac
"install_agent" // 安装agent
"install_cr"    // 安装prometheus CR
"install_basic" // 安装基础采集信息，标记target状态为normal
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedMsg;
                    bool m_failedMsgHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 任务进程
"prepare_env"   // 准备环境,安装instance EKS
"check_target"  // 检查target是否为running
"install_crd"   // 安装需要测crd
"install_rbac"  // 安装rbac
"install_agent" // 安装agent
"install_cr"    // 安装prometheus CR
"install_basic" // 安装基础采集信息，标记target状态为normal
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_BINDPROGRESSSTEP_H_
