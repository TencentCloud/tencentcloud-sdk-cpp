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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/TaskOutputMediaInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频拆条任务信息。
                */
                class SplitMediaTaskSegmentInfo : public AbstractModel
                {
                public:
                    SplitMediaTaskSegmentInfo();
                    ~SplitMediaTaskSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频拆条任务输入信息。
                     * @return Input 视频拆条任务输入信息。
                     */
                    SplitMediaTaskInput GetInput() const;

                    /**
                     * 设置视频拆条任务输入信息。
                     * @param Input 视频拆条任务输入信息。
                     */
                    void SetInput(const SplitMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取视频拆条任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 视频拆条任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputMediaInfo GetOutput() const;

                    /**
                     * 设置视频拆条任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Output 视频拆条任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutput(const TaskOutputMediaInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取若发起视频拆条任务时指定了视频处理流程，则该字段为流程任务 ID。
                     * @return ProcedureTaskId 若发起视频拆条任务时指定了视频处理流程，则该字段为流程任务 ID。
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置若发起视频拆条任务时指定了视频处理流程，则该字段为流程任务 ID。
                     * @param ProcedureTaskId 若发起视频拆条任务时指定了视频处理流程，则该字段为流程任务 ID。
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                private:

                    /**
                     * 视频拆条任务输入信息。
                     */
                    SplitMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 视频拆条任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputMediaInfo m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 若发起视频拆条任务时指定了视频处理流程，则该字段为流程任务 ID。
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIATASKSEGMENTINFO_H_
