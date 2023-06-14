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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/FrameTagRec.h>
#include <tencentcloud/ie/v20200304/model/SubtitleRec.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 媒体识别任务参数
                */
                class MediaRecognitionInfo : public AbstractModel
                {
                public:
                    MediaRecognitionInfo();
                    ~MediaRecognitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取帧标签识别
                     * @return FrameTagRec 帧标签识别
                     * 
                     */
                    FrameTagRec GetFrameTagRec() const;

                    /**
                     * 设置帧标签识别
                     * @param _frameTagRec 帧标签识别
                     * 
                     */
                    void SetFrameTagRec(const FrameTagRec& _frameTagRec);

                    /**
                     * 判断参数 FrameTagRec 是否已赋值
                     * @return FrameTagRec 是否已赋值
                     * 
                     */
                    bool FrameTagRecHasBeenSet() const;

                    /**
                     * 获取语音字幕识别
                     * @return SubtitleRec 语音字幕识别
                     * 
                     */
                    SubtitleRec GetSubtitleRec() const;

                    /**
                     * 设置语音字幕识别
                     * @param _subtitleRec 语音字幕识别
                     * 
                     */
                    void SetSubtitleRec(const SubtitleRec& _subtitleRec);

                    /**
                     * 判断参数 SubtitleRec 是否已赋值
                     * @return SubtitleRec 是否已赋值
                     * 
                     */
                    bool SubtitleRecHasBeenSet() const;

                private:

                    /**
                     * 帧标签识别
                     */
                    FrameTagRec m_frameTagRec;
                    bool m_frameTagRecHasBeenSet;

                    /**
                     * 语音字幕识别
                     */
                    SubtitleRec m_subtitleRec;
                    bool m_subtitleRecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIARECOGNITIONINFO_H_
