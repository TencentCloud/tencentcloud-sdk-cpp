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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITPORTRAITSINGJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITPORTRAITSINGJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitPortraitSingJob请求参数结构体
                */
                class SubmitPortraitSingJobRequest : public AbstractModel
                {
                public:
                    SubmitPortraitSingJobRequest();
                    ~SubmitPortraitSingJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取传入音频URL地址。音频要求：
—音频时长：不超过60秒
—音频格式：mp3、wav、m4a
                     * @return AudioUrl 传入音频URL地址。音频要求：
—音频时长：不超过60秒
—音频格式：mp3、wav、m4a
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置传入音频URL地址。音频要求：
—音频时长：不超过60秒
—音频格式：mp3、wav、m4a
                     * @param _audioUrl 传入音频URL地址。音频要求：
—音频时长：不超过60秒
—音频格式：mp3、wav、m4a
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取传入图片URL地址，图片要求：
—图片格式：jpg、jpeg、png
—图片分辨率：长边不超过2560
—图片大小：不超过6M
—图片宽高比：图片【宽：高】在1:2到2:1范围内
                     * @return ImageUrl 传入图片URL地址，图片要求：
—图片格式：jpg、jpeg、png
—图片分辨率：长边不超过2560
—图片大小：不超过6M
—图片宽高比：图片【宽：高】在1:2到2:1范围内
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置传入图片URL地址，图片要求：
—图片格式：jpg、jpeg、png
—图片分辨率：长边不超过2560
—图片大小：不超过6M
—图片宽高比：图片【宽：高】在1:2到2:1范围内
                     * @param _imageUrl 传入图片URL地址，图片要求：
—图片格式：jpg、jpeg、png
—图片分辨率：长边不超过2560
—图片大小：不超过6M
—图片宽高比：图片【宽：高】在1:2到2:1范围内
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
                     * 获取传入图片Base64编码。
—图片Base64编码与URL地址必传其一
                     * @return ImageBase64 传入图片Base64编码。
—图片Base64编码与URL地址必传其一
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置传入图片Base64编码。
—图片Base64编码与URL地址必传其一
                     * @param _imageBase64 传入图片Base64编码。
—图片Base64编码与URL地址必传其一
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
                     * 传入音频URL地址。音频要求：
—音频时长：不超过60秒
—音频格式：mp3、wav、m4a
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 传入图片URL地址，图片要求：
—图片格式：jpg、jpeg、png
—图片分辨率：长边不超过2560
—图片大小：不超过6M
—图片宽高比：图片【宽：高】在1:2到2:1范围内
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 传入图片Base64编码。
—图片Base64编码与URL地址必传其一
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITPORTRAITSINGJOBREQUEST_H_
