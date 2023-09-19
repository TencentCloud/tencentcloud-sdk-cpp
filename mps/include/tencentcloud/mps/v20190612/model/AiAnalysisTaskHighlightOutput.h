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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisHighlightItem.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能精彩片段结果信息
                */
                class AiAnalysisTaskHighlightOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHighlightOutput();
                    ~AiAnalysisTaskHighlightOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频智能精彩片段列表。
                     * @return HighlightSet 视频智能精彩片段列表。
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> GetHighlightSet() const;

                    /**
                     * 设置视频智能精彩片段列表。
                     * @param _highlightSet 视频智能精彩片段列表。
                     * 
                     */
                    void SetHighlightSet(const std::vector<MediaAiAnalysisHighlightItem>& _highlightSet);

                    /**
                     * 判断参数 HighlightSet 是否已赋值
                     * @return HighlightSet 是否已赋值
                     * 
                     */
                    bool HighlightSetHasBeenSet() const;

                    /**
                     * 获取精彩片段的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 精彩片段的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置精彩片段的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 精彩片段的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * 视频智能精彩片段列表。
                     */
                    std::vector<MediaAiAnalysisHighlightItem> m_highlightSet;
                    bool m_highlightSetHasBeenSet;

                    /**
                     * 精彩片段的存储位置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
