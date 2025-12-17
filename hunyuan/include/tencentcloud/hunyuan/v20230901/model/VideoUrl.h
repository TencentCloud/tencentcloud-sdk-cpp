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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOURL_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOURL_H_

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
                * 当type为video_url时使用，标识具体的视频链接内容
                */
                class VideoUrl : public AbstractModel
                {
                public:
                    VideoUrl();
                    ~VideoUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频的url，如"https://your-video-path.mp4"，视频文件大小不超过100M。
                     * @return Url 视频的url，如"https://your-video-path.mp4"，视频文件大小不超过100M。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置视频的url，如"https://your-video-path.mp4"，视频文件大小不超过100M。
                     * @param _url 视频的url，如"https://your-video-path.mp4"，视频文件大小不超过100M。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取控制视频抽帧频率，取值范围为 0.1 ~5，表示每隔 1/fps 秒抽取一帧，默认为 1s抽取一帧
                     * @return Fps 控制视频抽帧频率，取值范围为 0.1 ~5，表示每隔 1/fps 秒抽取一帧，默认为 1s抽取一帧
                     * 
                     */
                    double GetFps() const;

                    /**
                     * 设置控制视频抽帧频率，取值范围为 0.1 ~5，表示每隔 1/fps 秒抽取一帧，默认为 1s抽取一帧
                     * @param _fps 控制视频抽帧频率，取值范围为 0.1 ~5，表示每隔 1/fps 秒抽取一帧，默认为 1s抽取一帧
                     * 
                     */
                    void SetFps(const double& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 视频的url，如"https://your-video-path.mp4"，视频文件大小不超过100M。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 控制视频抽帧频率，取值范围为 0.1 ~5，表示每隔 1/fps 秒抽取一帧，默认为 1s抽取一帧
                     */
                    double m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIDEOURL_H_
