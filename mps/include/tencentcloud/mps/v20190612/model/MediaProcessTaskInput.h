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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TranscodeTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AnimatedGraphicTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SampleSnapshotTaskInput.h>
#include <tencentcloud/mps/v20190612/model/ImageSpriteTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体处理任务类型
                */
                class MediaProcessTaskInput : public AbstractModel
                {
                public:
                    MediaProcessTaskInput();
                    ~MediaProcessTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频转码任务列表。
                     * @return TranscodeTaskSet 视频转码任务列表。
                     * 
                     */
                    std::vector<TranscodeTaskInput> GetTranscodeTaskSet() const;

                    /**
                     * 设置视频转码任务列表。
                     * @param _transcodeTaskSet 视频转码任务列表。
                     * 
                     */
                    void SetTranscodeTaskSet(const std::vector<TranscodeTaskInput>& _transcodeTaskSet);

                    /**
                     * 判断参数 TranscodeTaskSet 是否已赋值
                     * @return TranscodeTaskSet 是否已赋值
                     * 
                     */
                    bool TranscodeTaskSetHasBeenSet() const;

                    /**
                     * 获取视频转动图任务列表。
                     * @return AnimatedGraphicTaskSet 视频转动图任务列表。
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> GetAnimatedGraphicTaskSet() const;

                    /**
                     * 设置视频转动图任务列表。
                     * @param _animatedGraphicTaskSet 视频转动图任务列表。
                     * 
                     */
                    void SetAnimatedGraphicTaskSet(const std::vector<AnimatedGraphicTaskInput>& _animatedGraphicTaskSet);

                    /**
                     * 判断参数 AnimatedGraphicTaskSet 是否已赋值
                     * @return AnimatedGraphicTaskSet 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskSetHasBeenSet() const;

                    /**
                     * 获取对视频按时间点截图任务列表。
                     * @return SnapshotByTimeOffsetTaskSet 对视频按时间点截图任务列表。
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> GetSnapshotByTimeOffsetTaskSet() const;

                    /**
                     * 设置对视频按时间点截图任务列表。
                     * @param _snapshotByTimeOffsetTaskSet 对视频按时间点截图任务列表。
                     * 
                     */
                    void SetSnapshotByTimeOffsetTaskSet(const std::vector<SnapshotByTimeOffsetTaskInput>& _snapshotByTimeOffsetTaskSet);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTaskSet 是否已赋值
                     * @return SnapshotByTimeOffsetTaskSet 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskSetHasBeenSet() const;

                    /**
                     * 获取对视频采样截图任务列表。
                     * @return SampleSnapshotTaskSet 对视频采样截图任务列表。
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> GetSampleSnapshotTaskSet() const;

                    /**
                     * 设置对视频采样截图任务列表。
                     * @param _sampleSnapshotTaskSet 对视频采样截图任务列表。
                     * 
                     */
                    void SetSampleSnapshotTaskSet(const std::vector<SampleSnapshotTaskInput>& _sampleSnapshotTaskSet);

                    /**
                     * 判断参数 SampleSnapshotTaskSet 是否已赋值
                     * @return SampleSnapshotTaskSet 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskSetHasBeenSet() const;

                    /**
                     * 获取对视频截雪碧图任务列表。
                     * @return ImageSpriteTaskSet 对视频截雪碧图任务列表。
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> GetImageSpriteTaskSet() const;

                    /**
                     * 设置对视频截雪碧图任务列表。
                     * @param _imageSpriteTaskSet 对视频截雪碧图任务列表。
                     * 
                     */
                    void SetImageSpriteTaskSet(const std::vector<ImageSpriteTaskInput>& _imageSpriteTaskSet);

                    /**
                     * 判断参数 ImageSpriteTaskSet 是否已赋值
                     * @return ImageSpriteTaskSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskSetHasBeenSet() const;

                    /**
                     * 获取转自适应码流任务列表。
                     * @return AdaptiveDynamicStreamingTaskSet 转自适应码流任务列表。
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> GetAdaptiveDynamicStreamingTaskSet() const;

                    /**
                     * 设置转自适应码流任务列表。
                     * @param _adaptiveDynamicStreamingTaskSet 转自适应码流任务列表。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTaskSet(const std::vector<AdaptiveDynamicStreamingTaskInput>& _adaptiveDynamicStreamingTaskSet);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTaskSet 是否已赋值
                     * @return AdaptiveDynamicStreamingTaskSet 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskSetHasBeenSet() const;

                private:

                    /**
                     * 视频转码任务列表。
                     */
                    std::vector<TranscodeTaskInput> m_transcodeTaskSet;
                    bool m_transcodeTaskSetHasBeenSet;

                    /**
                     * 视频转动图任务列表。
                     */
                    std::vector<AnimatedGraphicTaskInput> m_animatedGraphicTaskSet;
                    bool m_animatedGraphicTaskSetHasBeenSet;

                    /**
                     * 对视频按时间点截图任务列表。
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> m_snapshotByTimeOffsetTaskSet;
                    bool m_snapshotByTimeOffsetTaskSetHasBeenSet;

                    /**
                     * 对视频采样截图任务列表。
                     */
                    std::vector<SampleSnapshotTaskInput> m_sampleSnapshotTaskSet;
                    bool m_sampleSnapshotTaskSetHasBeenSet;

                    /**
                     * 对视频截雪碧图任务列表。
                     */
                    std::vector<ImageSpriteTaskInput> m_imageSpriteTaskSet;
                    bool m_imageSpriteTaskSetHasBeenSet;

                    /**
                     * 转自适应码流任务列表。
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> m_adaptiveDynamicStreamingTaskSet;
                    bool m_adaptiveDynamicStreamingTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_
