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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectInputInterruptInfo.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectOutputInterruptInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推项目状态变更事件。
                */
                class ProjectStreamConnectStatusChangedEvent : public AbstractModel
                {
                public:
                    ProjectStreamConnectStatusChangedEvent();
                    ~ProjectStreamConnectStatusChangedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param _projectId 项目 Id。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束；</li>
<li>InputInterrupted：云转推输入断流；</li>
<li>OutputInterrupted：云转推输出断流。</li>
                     * @return Status 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束；</li>
<li>InputInterrupted：云转推输入断流；</li>
<li>OutputInterrupted：云转推输出断流。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束；</li>
<li>InputInterrupted：云转推输入断流；</li>
<li>OutputInterrupted：云转推输出断流。</li>
                     * @param _status 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束；</li>
<li>InputInterrupted：云转推输入断流；</li>
<li>OutputInterrupted：云转推输出断流。</li>
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
                     * 获取云转推输入断流信息，仅当 Status 取值 InputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInterruptInfo 云转推输入断流信息，仅当 Status 取值 InputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamConnectInputInterruptInfo GetInputInterruptInfo() const;

                    /**
                     * 设置云转推输入断流信息，仅当 Status 取值 InputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputInterruptInfo 云转推输入断流信息，仅当 Status 取值 InputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputInterruptInfo(const StreamConnectInputInterruptInfo& _inputInterruptInfo);

                    /**
                     * 判断参数 InputInterruptInfo 是否已赋值
                     * @return InputInterruptInfo 是否已赋值
                     * 
                     */
                    bool InputInterruptInfoHasBeenSet() const;

                    /**
                     * 获取云转推输出断流信息，仅当 Status 取值 OutputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputInterruptInfo 云转推输出断流信息，仅当 Status 取值 OutputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StreamConnectOutputInterruptInfo GetOutputInterruptInfo() const;

                    /**
                     * 设置云转推输出断流信息，仅当 Status 取值 OutputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputInterruptInfo 云转推输出断流信息，仅当 Status 取值 OutputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputInterruptInfo(const StreamConnectOutputInterruptInfo& _outputInterruptInfo);

                    /**
                     * 判断参数 OutputInterruptInfo 是否已赋值
                     * @return OutputInterruptInfo 是否已赋值
                     * 
                     */
                    bool OutputInterruptInfoHasBeenSet() const;

                private:

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束；</li>
<li>InputInterrupted：云转推输入断流；</li>
<li>OutputInterrupted：云转推输出断流。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 云转推输入断流信息，仅当 Status 取值 InputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamConnectInputInterruptInfo m_inputInterruptInfo;
                    bool m_inputInterruptInfoHasBeenSet;

                    /**
                     * 云转推输出断流信息，仅当 Status 取值 OutputInterrupted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamConnectOutputInterruptInfo m_outputInterruptInfo;
                    bool m_outputInterruptInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_
