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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskResultInput.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskBatchOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕结果。
                */
                class BatchSmartSubtitlesResult : public AbstractModel
                {
                public:
                    BatchSmartSubtitlesResult();
                    ~BatchSmartSubtitlesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能字幕任务输入信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 智能字幕任务输入信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartSubtitleTaskResultInput GetInput() const;

                    /**
                     * 设置智能字幕任务输入信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input 智能字幕任务输入信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInput(const SmartSubtitleTaskResultInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取智能字幕输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outputs 智能字幕输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SmartSubtitleTaskBatchOutput> GetOutputs() const;

                    /**
                     * 设置智能字幕输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputs 智能字幕输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputs(const std::vector<SmartSubtitleTaskBatchOutput>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * 智能字幕任务输入信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartSubtitleTaskResultInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 智能字幕输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SmartSubtitleTaskBatchOutput> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSMARTSUBTITLESRESULT_H_
