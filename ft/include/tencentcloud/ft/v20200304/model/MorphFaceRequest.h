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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACEREQUEST_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ft/v20200304/model/GradientInfo.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * MorphFace请求参数结构体
                */
                class MorphFaceRequest : public AbstractModel
                {
                public:
                    MorphFaceRequest();
                    ~MorphFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。 
jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
人员人脸总数量至少2张，不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Images 图片 base64 数据，base64 编码后大小不可超过5M。 
jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
人员人脸总数量至少2张，不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。 
jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
人员人脸总数量至少2张，不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _images 图片 base64 数据，base64 编码后大小不可超过5M。 
jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
人员人脸总数量至少2张，不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
Url、Image必须提供一个，如果都提供，只使用 Url。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。 
人员人脸总数量不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
                     * @return Urls 图片的 Url 。对应图片 base64 编码后大小不可超过5M。jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
Url、Image必须提供一个，如果都提供，只使用 Url。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。 
人员人脸总数量不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
Url、Image必须提供一个，如果都提供，只使用 Url。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。 
人员人脸总数量不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
                     * @param _urls 图片的 Url 。对应图片 base64 编码后大小不可超过5M。jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
Url、Image必须提供一个，如果都提供，只使用 Url。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。 
人员人脸总数量不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取人脸渐变参数。可调整每张图片的展示时长、人像渐变的最长时间
                     * @return GradientInfos 人脸渐变参数。可调整每张图片的展示时长、人像渐变的最长时间
                     * 
                     */
                    std::vector<GradientInfo> GetGradientInfos() const;

                    /**
                     * 设置人脸渐变参数。可调整每张图片的展示时长、人像渐变的最长时间
                     * @param _gradientInfos 人脸渐变参数。可调整每张图片的展示时长、人像渐变的最长时间
                     * 
                     */
                    void SetGradientInfos(const std::vector<GradientInfo>& _gradientInfos);

                    /**
                     * 判断参数 GradientInfos 是否已赋值
                     * @return GradientInfos 是否已赋值
                     * 
                     */
                    bool GradientInfosHasBeenSet() const;

                    /**
                     * 获取视频帧率，取值[1,25]。默认10
                     * @return Fps 视频帧率，取值[1,25]。默认10
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置视频帧率，取值[1,25]。默认10
                     * @param _fps 视频帧率，取值[1,25]。默认10
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取视频类型，取值0。目前仅支持MP4格式，默认为MP4格式
                     * @return OutputType 视频类型，取值0。目前仅支持MP4格式，默认为MP4格式
                     * 
                     */
                    int64_t GetOutputType() const;

                    /**
                     * 设置视频类型，取值0。目前仅支持MP4格式，默认为MP4格式
                     * @param _outputType 视频类型，取值0。目前仅支持MP4格式，默认为MP4格式
                     * 
                     */
                    void SetOutputType(const int64_t& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取视频宽度，取值[128,1280]。默认值720
                     * @return OutputWidth 视频宽度，取值[128,1280]。默认值720
                     * 
                     */
                    int64_t GetOutputWidth() const;

                    /**
                     * 设置视频宽度，取值[128,1280]。默认值720
                     * @param _outputWidth 视频宽度，取值[128,1280]。默认值720
                     * 
                     */
                    void SetOutputWidth(const int64_t& _outputWidth);

                    /**
                     * 判断参数 OutputWidth 是否已赋值
                     * @return OutputWidth 是否已赋值
                     * 
                     */
                    bool OutputWidthHasBeenSet() const;

                    /**
                     * 获取视频高度，取值[128,1280]。默认值1280
                     * @return OutputHeight 视频高度，取值[128,1280]。默认值1280
                     * 
                     */
                    int64_t GetOutputHeight() const;

                    /**
                     * 设置视频高度，取值[128,1280]。默认值1280
                     * @param _outputHeight 视频高度，取值[128,1280]。默认值1280
                     * 
                     */
                    void SetOutputHeight(const int64_t& _outputHeight);

                    /**
                     * 判断参数 OutputHeight 是否已赋值
                     * @return OutputHeight 是否已赋值
                     * 
                     */
                    bool OutputHeightHasBeenSet() const;

                private:

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。 
jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
人员人脸总数量至少2张，不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
Url、Image必须提供一个，如果都提供，只使用 Url。图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。 
人员人脸总数量不可超过5张。 
若图片中包含多张人脸，只选取其中人脸面积最大的人脸。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 人脸渐变参数。可调整每张图片的展示时长、人像渐变的最长时间
                     */
                    std::vector<GradientInfo> m_gradientInfos;
                    bool m_gradientInfosHasBeenSet;

                    /**
                     * 视频帧率，取值[1,25]。默认10
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 视频类型，取值0。目前仅支持MP4格式，默认为MP4格式
                     */
                    int64_t m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 视频宽度，取值[128,1280]。默认值720
                     */
                    int64_t m_outputWidth;
                    bool m_outputWidthHasBeenSet;

                    /**
                     * 视频高度，取值[128,1280]。默认值1280
                     */
                    int64_t m_outputHeight;
                    bool m_outputHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACEREQUEST_H_
