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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisFrameTagItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 按帧标签片段列表
                */
                class MediaAiAnalysisFrameTagSegmentItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisFrameTagSegmentItem();
                    ~MediaAiAnalysisFrameTagSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按帧标签起始的偏移时间。
                     * @return StartTimeOffset 按帧标签起始的偏移时间。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置按帧标签起始的偏移时间。
                     * @param _startTimeOffset 按帧标签起始的偏移时间。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取按帧标签结束的偏移时间。
                     * @return EndTimeOffset 按帧标签结束的偏移时间。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置按帧标签结束的偏移时间。
                     * @param _endTimeOffset 按帧标签结束的偏移时间。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取时间片段内的标签列表。
                     * @return TagSet 时间片段内的标签列表。
                     * 
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> GetTagSet() const;

                    /**
                     * 设置时间片段内的标签列表。
                     * @param _tagSet 时间片段内的标签列表。
                     * 
                     */
                    void SetTagSet(const std::vector<MediaAiAnalysisFrameTagItem>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 按帧标签起始的偏移时间。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 按帧标签结束的偏移时间。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 时间片段内的标签列表。
                     */
                    std::vector<MediaAiAnalysisFrameTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGSEGMENTITEM_H_
