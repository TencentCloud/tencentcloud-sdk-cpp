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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentRecognitionItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能拆条结果信息
                */
                class AiAnalysisTaskSegmentOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskSegmentOutput();
                    ~AiAnalysisTaskSegmentOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能拆条子片段列表。
                     * @return SegmentSet 智能拆条子片段列表。
                     * 
                     */
                    std::vector<SegmentRecognitionItem> GetSegmentSet() const;

                    /**
                     * 设置智能拆条子片段列表。
                     * @param _segmentSet 智能拆条子片段列表。
                     * 
                     */
                    void SetSegmentSet(const std::vector<SegmentRecognitionItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取视频摘要，离线场景用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abstract 视频摘要，离线场景用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置视频摘要，离线场景用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abstract 视频摘要，离线场景用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                private:

                    /**
                     * 智能拆条子片段列表。
                     */
                    std::vector<SegmentRecognitionItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 视频摘要，离线场景用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKSEGMENTOUTPUT_H_
