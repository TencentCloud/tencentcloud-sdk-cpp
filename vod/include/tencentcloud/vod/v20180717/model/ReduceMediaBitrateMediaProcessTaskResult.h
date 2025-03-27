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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTranscodeResult.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateAdaptiveDynamicStreamingResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 降码率任务结果
                */
                class ReduceMediaBitrateMediaProcessTaskResult : public AbstractModel
                {
                public:
                    ReduceMediaBitrateMediaProcessTaskResult();
                    ~ReduceMediaBitrateMediaProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * @return Type 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * @param _type 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取降码率任务中视频转码任务的查询结果，当任务类型为 Transcode 时有效。
                     * @return TranscodeTask 降码率任务中视频转码任务的查询结果，当任务类型为 Transcode 时有效。
                     * 
                     */
                    ReduceMediaBitrateTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置降码率任务中视频转码任务的查询结果，当任务类型为 Transcode 时有效。
                     * @param _transcodeTask 降码率任务中视频转码任务的查询结果，当任务类型为 Transcode 时有效。
                     * 
                     */
                    void SetTranscodeTask(const ReduceMediaBitrateTranscodeResult& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取降码率任务中对视频转自适应码流任务的查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
                     * @return AdaptiveDynamicStreamingTask 降码率任务中对视频转自适应码流任务的查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
                     * 
                     */
                    ReduceMediaBitrateAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置降码率任务中对视频转自适应码流任务的查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
                     * @param _adaptiveDynamicStreamingTask 降码率任务中对视频转自适应码流任务的查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const ReduceMediaBitrateAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                private:

                    /**
                     * 任务的类型，可以取的值有：
<li>Transcode：转码</li>
<li>AdaptiveDynamicStreaming：自适应码流</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 降码率任务中视频转码任务的查询结果，当任务类型为 Transcode 时有效。
                     */
                    ReduceMediaBitrateTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 降码率任务中对视频转自适应码流任务的查询结果，当任务类型为 AdaptiveDynamicStreaming 时有效。
                     */
                    ReduceMediaBitrateAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATEMEDIAPROCESSTASKRESULT_H_
