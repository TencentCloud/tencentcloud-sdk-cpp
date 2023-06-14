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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateSegmentationTask请求参数结构体
                */
                class CreateSegmentationTaskRequest : public AbstractModel
                {
                public:
                    CreateSegmentationTaskRequest();
                    ~CreateSegmentationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要分割的视频URL，可外网访问。
                     * @return VideoUrl 需要分割的视频URL，可外网访问。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置需要分割的视频URL，可外网访问。
                     * @param _videoUrl 需要分割的视频URL，可外网访问。
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取背景图片URL。 
可以将视频背景替换为输入的图片。 
如果不输入背景图片，则输出人像区域mask。
                     * @return BackgroundImageUrl 背景图片URL。 
可以将视频背景替换为输入的图片。 
如果不输入背景图片，则输出人像区域mask。
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置背景图片URL。 
可以将视频背景替换为输入的图片。 
如果不输入背景图片，则输出人像区域mask。
                     * @param _backgroundImageUrl 背景图片URL。 
可以将视频背景替换为输入的图片。 
如果不输入背景图片，则输出人像区域mask。
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取预留字段，后期用于展示更多识别信息。
                     * @return Config 预留字段，后期用于展示更多识别信息。
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置预留字段，后期用于展示更多识别信息。
                     * @param _config 预留字段，后期用于展示更多识别信息。
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 需要分割的视频URL，可外网访问。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 背景图片URL。 
可以将视频背景替换为输入的图片。 
如果不输入背景图片，则输出人像区域mask。
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * 预留字段，后期用于展示更多识别信息。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CREATESEGMENTATIONTASKREQUEST_H_
