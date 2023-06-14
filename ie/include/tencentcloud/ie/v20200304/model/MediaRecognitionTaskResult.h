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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/FrameTagResult.h>
#include <tencentcloud/ie/v20200304/model/SubtitleResult.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体识别任务处理结果
                */
                class MediaRecognitionTaskResult : public AbstractModel
                {
                public:
                    MediaRecognitionTaskResult();
                    ~MediaRecognitionTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameTagResults 帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FrameTagResult GetFrameTagResults() const;

                    /**
                     * 设置帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameTagResults 帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameTagResults(const FrameTagResult& _frameTagResults);

                    /**
                     * 判断参数 FrameTagResults 是否已赋值
                     * @return FrameTagResults 是否已赋值
                     * 
                     */
                    bool FrameTagResultsHasBeenSet() const;

                    /**
                     * 获取语音字幕识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleResults 语音字幕识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubtitleResult GetSubtitleResults() const;

                    /**
                     * 设置语音字幕识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleResults 语音字幕识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleResults(const SubtitleResult& _subtitleResults);

                    /**
                     * 判断参数 SubtitleResults 是否已赋值
                     * @return SubtitleResults 是否已赋值
                     * 
                     */
                    bool SubtitleResultsHasBeenSet() const;

                private:

                    /**
                     * 帧标签识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FrameTagResult m_frameTagResults;
                    bool m_frameTagResultsHasBeenSet;

                    /**
                     * 语音字幕识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubtitleResult m_subtitleResults;
                    bool m_subtitleResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONTASKRESULT_H_
