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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONMEDIAINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONMEDIAINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频评测任务的视频来源信息
                */
                class EvaluationMediaInputInfo : public AbstractModel
                {
                public:
                    EvaluationMediaInputInfo();
                    ~EvaluationMediaInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对比视频的来源 ID，当评测任务的类型为 BD_RATE 且对比视频来自用户输入时有效；当对比视频来自转码模板时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceId 对比视频的来源 ID，当评测任务的类型为 BD_RATE 且对比视频来自用户输入时有效；当对比视频来自转码模板时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置对比视频的来源 ID，当评测任务的类型为 BD_RATE 且对比视频来自用户输入时有效；当对比视频来自转码模板时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceId 对比视频的来源 ID，当评测任务的类型为 BD_RATE 且对比视频来自用户输入时有效；当对比视频来自转码模板时为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取对比视频的输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfo 对比视频的输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置对比视频的输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputInfo 对比视频的输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                private:

                    /**
                     * 对比视频的来源 ID，当评测任务的类型为 BD_RATE 且对比视频来自用户输入时有效；当对比视频来自转码模板时为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 对比视频的输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EVALUATIONMEDIAINPUTINFO_H_
