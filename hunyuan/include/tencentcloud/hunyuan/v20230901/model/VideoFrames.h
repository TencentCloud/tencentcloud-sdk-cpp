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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOFRAMES_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOFRAMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 当type为video_frames时使用，标识具体的视频内图像帧内容
                */
                class VideoFrames : public AbstractModel
                {
                public:
                    VideoFrames();
                    ~VideoFrames() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频图像帧列表，图像帧传url，最大支持传入数量为512帧
                     * @return Frames 视频图像帧列表，图像帧传url，最大支持传入数量为512帧
                     * 
                     */
                    std::vector<std::string> GetFrames() const;

                    /**
                     * 设置视频图像帧列表，图像帧传url，最大支持传入数量为512帧
                     * @param _frames 视频图像帧列表，图像帧传url，最大支持传入数量为512帧
                     * 
                     */
                    void SetFrames(const std::vector<std::string>& _frames);

                    /**
                     * 判断参数 Frames 是否已赋值
                     * @return Frames 是否已赋值
                     * 
                     */
                    bool FramesHasBeenSet() const;

                private:

                    /**
                     * 视频图像帧列表，图像帧传url，最大支持传入数量为512帧
                     */
                    std::vector<std::string> m_frames;
                    bool m_framesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOFRAMES_H_
