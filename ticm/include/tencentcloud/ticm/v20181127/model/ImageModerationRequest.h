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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONREQUEST_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * ImageModeration请求参数结构体
                */
                class ImageModerationRequest : public AbstractModel
                {
                public:
                    ImageModerationRequest();
                    ~ImageModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本次调用支持的识别场景，可选值如下：
1. PORN，即色情识别
2. TERRORISM，即暴恐识别
3. POLITICS，即政治敏感识别

支持多场景（Scenes）一起检测。例如，使用 Scenes=["PORN", "TERRORISM"]，即对一张图片同时进行色情识别和暴恐识别。
                     * @return Scenes 本次调用支持的识别场景，可选值如下：
1. PORN，即色情识别
2. TERRORISM，即暴恐识别
3. POLITICS，即政治敏感识别

支持多场景（Scenes）一起检测。例如，使用 Scenes=["PORN", "TERRORISM"]，即对一张图片同时进行色情识别和暴恐识别。
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置本次调用支持的识别场景，可选值如下：
1. PORN，即色情识别
2. TERRORISM，即暴恐识别
3. POLITICS，即政治敏感识别

支持多场景（Scenes）一起检测。例如，使用 Scenes=["PORN", "TERRORISM"]，即对一张图片同时进行色情识别和暴恐识别。
                     * @param _scenes 本次调用支持的识别场景，可选值如下：
1. PORN，即色情识别
2. TERRORISM，即暴恐识别
3. POLITICS，即政治敏感识别

支持多场景（Scenes）一起检测。例如，使用 Scenes=["PORN", "TERRORISM"]，即对一张图片同时进行色情识别和暴恐识别。
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取图片URL地址。 
图片限制： 
 • 图片格式：PNG、JPG、JPEG。 
 • 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
 • 图片像素：大于50*50像素，否则影响识别效果； 
 • 长宽比：长边：短边<5； 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @return ImageUrl 图片URL地址。 
图片限制： 
 • 图片格式：PNG、JPG、JPEG。 
 • 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
 • 图片像素：大于50*50像素，否则影响识别效果； 
 • 长宽比：长边：短边<5； 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片URL地址。 
图片限制： 
 • 图片格式：PNG、JPG、JPEG。 
 • 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
 • 图片像素：大于50*50像素，否则影响识别效果； 
 • 长宽比：长边：短边<5； 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @param _imageUrl 图片URL地址。 
图片限制： 
 • 图片格式：PNG、JPG、JPEG。 
 • 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
 • 图片像素：大于50*50像素，否则影响识别效果； 
 • 长宽比：长边：短边<5； 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

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

                    /**
                     * 获取透传字段，透传简单信息。
                     * @return Extra 透传字段，透传简单信息。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，透传简单信息。
                     * @param _extra 透传字段，透传简单信息。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取图片经过base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
                     * @return ImageBase64 图片经过base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片经过base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
                     * @param _imageBase64 图片经过base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * 本次调用支持的识别场景，可选值如下：
1. PORN，即色情识别
2. TERRORISM，即暴恐识别
3. POLITICS，即政治敏感识别

支持多场景（Scenes）一起检测。例如，使用 Scenes=["PORN", "TERRORISM"]，即对一张图片同时进行色情识别和暴恐识别。
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * 图片URL地址。 
图片限制： 
 • 图片格式：PNG、JPG、JPEG。 
 • 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
 • 图片像素：大于50*50像素，否则影响识别效果； 
 • 长宽比：长边：短边<5； 
接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 预留字段，后期用于展示更多识别信息。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 透传字段，透传简单信息。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 图片经过base64编码的内容。最大不超过4M。与ImageUrl同时存在时优先使用ImageUrl字段。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_IMAGEMODERATIONREQUEST_H_
