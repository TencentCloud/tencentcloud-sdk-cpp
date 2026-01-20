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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOGENERALJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOGENERALJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/Image.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitImageToVideoGeneralJob请求参数结构体
                */
                class SubmitImageToVideoGeneralJobRequest : public AbstractModel
                {
                public:
                    SubmitImageToVideoGeneralJobRequest();
                    ~SubmitImageToVideoGeneralJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入图片
Base64 和 Url 必须提供一个，如果都提供以ImageUrl为准。
上传图url大小不超过 8M
支持jpg，png，jpeg，webp，bmp，tiff 格式
单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @return Image 输入图片
Base64 和 Url 必须提供一个，如果都提供以ImageUrl为准。
上传图url大小不超过 8M
支持jpg，png，jpeg，webp，bmp，tiff 格式
单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * 
                     */
                    Image GetImage() const;

                    /**
                     * 设置输入图片
Base64 和 Url 必须提供一个，如果都提供以ImageUrl为准。
上传图url大小不超过 8M
支持jpg，png，jpeg，webp，bmp，tiff 格式
单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @param _image 输入图片
Base64 和 Url 必须提供一个，如果都提供以ImageUrl为准。
上传图url大小不超过 8M
支持jpg，png，jpeg，webp，bmp，tiff 格式
单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * 
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取视频内容的描述，中文正向提示词。最多支持200个 utf-8 字符（首尾空格不计入字符数）。
                     * @return Prompt 视频内容的描述，中文正向提示词。最多支持200个 utf-8 字符（首尾空格不计入字符数）。
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置视频内容的描述，中文正向提示词。最多支持200个 utf-8 字符（首尾空格不计入字符数）。
                     * @param _prompt 视频内容的描述，中文正向提示词。最多支持200个 utf-8 字符（首尾空格不计入字符数）。
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取输出视频分辨率。可选择：480p、720p、1080p。
                     * @return Resolution 输出视频分辨率。可选择：480p、720p、1080p。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置输出视频分辨率。可选择：480p、720p、1080p。
                     * @param _resolution 输出视频分辨率。可选择：480p、720p、1080p。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取生成视频的帧率，从16, 24, 30中选择。默认值：30
                     * @return Fps 生成视频的帧率，从16, 24, 30中选择。默认值：30
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置生成视频的帧率，从16, 24, 30中选择。默认值：30
                     * @param _fps 生成视频的帧率，从16, 24, 30中选择。默认值：30
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
                     * 获取为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。  1：添加标识；  0：不添加标识；  其他数值：默认按1处理。
                     * @return LogoAdd 为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。  1：添加标识；  0：不添加标识；  其他数值：默认按1处理。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。  1：添加标识；  0：不添加标识；  其他数值：默认按1处理。
                     * @param _logoAdd 为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。  1：添加标识；  0：不添加标识；  其他数值：默认按1处理。
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。
                     * @return LogoParam 默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。
                     * @param _logoParam 默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * 输入图片
Base64 和 Url 必须提供一个，如果都提供以ImageUrl为准。
上传图url大小不超过 8M
支持jpg，png，jpeg，webp，bmp，tiff 格式
单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 视频内容的描述，中文正向提示词。最多支持200个 utf-8 字符（首尾空格不计入字符数）。
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 输出视频分辨率。可选择：480p、720p、1080p。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 生成视频的帧率，从16, 24, 30中选择。默认值：30
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 为生成视频添加标识的开关，默认为1，0 需前往 控制台 申请开启显示标识自主完成方可生效。  1：添加标识；  0：不添加标识；  其他数值：默认按1处理。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 默认在生成视频的右下角添加“ AI 生成”字样，如需替换为其他的标识图片，需前往 控制台 申请开启显示标识自主完成。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITIMAGETOVIDEOGENERALJOBREQUEST_H_
