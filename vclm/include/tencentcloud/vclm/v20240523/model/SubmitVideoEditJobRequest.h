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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITJOBREQUEST_H_

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
                * SubmitVideoEditJob请求参数结构体
                */
                class SubmitVideoEditJobRequest : public AbstractModel
                {
                public:
                    SubmitVideoEditJobRequest();
                    ~SubmitVideoEditJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参考视频URL。默认为待编辑视频。
- 视频格式：支持MP4
- 视频时长：输入视频时长≤5秒
- 视频大小：不超过200M
- 视频文件：输入的视频帧率及分辨率不做限制（建议输入16：9或9：16的视频；分辨率建议在2160px内，帧率建议在60fps内）；输出视频是帧率会≥16fps，分辨率为720p
                     * @return VideoUrl 参考视频URL。默认为待编辑视频。
- 视频格式：支持MP4
- 视频时长：输入视频时长≤5秒
- 视频大小：不超过200M
- 视频文件：输入的视频帧率及分辨率不做限制（建议输入16：9或9：16的视频；分辨率建议在2160px内，帧率建议在60fps内）；输出视频是帧率会≥16fps，分辨率为720p
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置参考视频URL。默认为待编辑视频。
- 视频格式：支持MP4
- 视频时长：输入视频时长≤5秒
- 视频大小：不超过200M
- 视频文件：输入的视频帧率及分辨率不做限制（建议输入16：9或9：16的视频；分辨率建议在2160px内，帧率建议在60fps内）；输出视频是帧率会≥16fps，分辨率为720p
                     * @param _videoUrl 参考视频URL。默认为待编辑视频。
- 视频格式：支持MP4
- 视频时长：输入视频时长≤5秒
- 视频大小：不超过200M
- 视频文件：输入的视频帧率及分辨率不做限制（建议输入16：9或9：16的视频；分辨率建议在2160px内，帧率建议在60fps内）；输出视频是帧率会≥16fps，分辨率为720p
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
                     * 获取视频内容的描述，中文正向提示词。支持视频内容增加、删除、修改等能力
- 最多支持200个 utf-8 字符（首尾空格不计入字符数）
- 不传prompt的时候，Images.N参考图列表必须要传图，且传的图片是经过图片编辑之后的结果图
                     * @return Prompt 视频内容的描述，中文正向提示词。支持视频内容增加、删除、修改等能力
- 最多支持200个 utf-8 字符（首尾空格不计入字符数）
- 不传prompt的时候，Images.N参考图列表必须要传图，且传的图片是经过图片编辑之后的结果图
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置视频内容的描述，中文正向提示词。支持视频内容增加、删除、修改等能力
- 最多支持200个 utf-8 字符（首尾空格不计入字符数）
- 不传prompt的时候，Images.N参考图列表必须要传图，且传的图片是经过图片编辑之后的结果图
                     * @param _prompt 视频内容的描述，中文正向提示词。支持视频内容增加、删除、修改等能力
- 最多支持200个 utf-8 字符（首尾空格不计入字符数）
- 不传prompt的时候，Images.N参考图列表必须要传图，且传的图片是经过图片编辑之后的结果图
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
                     * 获取参考图列表。用于对视频内容做风格迁移、内容替换、内容删减、内容增加做参考。
- 支持传入图片Base64编码或图片URL
- 图片格式：支持jpg，png，jpeg，webp，bmp，tiff 格式
- 图片文件：大小不能超过10MB（base64后）。单边分辨率不超过5000px，不小于50px，图片长宽限制1:4 ~ 4:1。
示例值：[{ "Url": "https://console.cloud.tencent.com/cos/image.png"}]
                     * @return Images 参考图列表。用于对视频内容做风格迁移、内容替换、内容删减、内容增加做参考。
- 支持传入图片Base64编码或图片URL
- 图片格式：支持jpg，png，jpeg，webp，bmp，tiff 格式
- 图片文件：大小不能超过10MB（base64后）。单边分辨率不超过5000px，不小于50px，图片长宽限制1:4 ~ 4:1。
示例值：[{ "Url": "https://console.cloud.tencent.com/cos/image.png"}]
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置参考图列表。用于对视频内容做风格迁移、内容替换、内容删减、内容增加做参考。
- 支持传入图片Base64编码或图片URL
- 图片格式：支持jpg，png，jpeg，webp，bmp，tiff 格式
- 图片文件：大小不能超过10MB（base64后）。单边分辨率不超过5000px，不小于50px，图片长宽限制1:4 ~ 4:1。
示例值：[{ "Url": "https://console.cloud.tencent.com/cos/image.png"}]
                     * @param _images 参考图列表。用于对视频内容做风格迁移、内容替换、内容删减、内容增加做参考。
- 支持传入图片Base64编码或图片URL
- 图片格式：支持jpg，png，jpeg，webp，bmp，tiff 格式
- 图片文件：大小不能超过10MB（base64后）。单边分辨率不超过5000px，不小于50px，图片长宽限制1:4 ~ 4:1。
示例值：[{ "Url": "https://console.cloud.tencent.com/cos/image.png"}]
                     * 
                     */
                    void SetImages(const std::vector<Image>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取图片base64或者图片url

- Base64 和 Url 必须提供一个，如果都提供以Url为准。
- 上传图url大小不超过 8M
- 支持jpg，png，jpeg，webp，bmp，tiff 格式
- 单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @return Image 图片base64或者图片url

- Base64 和 Url 必须提供一个，如果都提供以Url为准。
- 上传图url大小不超过 8M
- 支持jpg，png，jpeg，webp，bmp，tiff 格式
- 单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @deprecated
                     */
                    Image GetImage() const;

                    /**
                     * 设置图片base64或者图片url

- Base64 和 Url 必须提供一个，如果都提供以Url为准。
- 上传图url大小不超过 8M
- 支持jpg，png，jpeg，webp，bmp，tiff 格式
- 单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @param _image 图片base64或者图片url

- Base64 和 Url 必须提供一个，如果都提供以Url为准。
- 上传图url大小不超过 8M
- 支持jpg，png，jpeg，webp，bmp，tiff 格式
- 单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     * @deprecated
                     */
                    void SetImage(const Image& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * @deprecated
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取为生成视频添加标识的开关，默认为1。传0 需前往  [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成后方可生效。
1：添加标识；
0：不添加标识；
其他数值：默认按1处理。
建议您使用显著标识来提示，该视频是 AI 生成的视频。

                     * @return LogoAdd 为生成视频添加标识的开关，默认为1。传0 需前往  [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成后方可生效。
1：添加标识；
0：不添加标识；
其他数值：默认按1处理。
建议您使用显著标识来提示，该视频是 AI 生成的视频。

                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成视频添加标识的开关，默认为1。传0 需前往  [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成后方可生效。
1：添加标识；
0：不添加标识；
其他数值：默认按1处理。
建议您使用显著标识来提示，该视频是 AI 生成的视频。

                     * @param _logoAdd 为生成视频添加标识的开关，默认为1。传0 需前往  [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成后方可生效。
1：添加标识；
0：不添加标识；
其他数值：默认按1处理。
建议您使用显著标识来提示，该视频是 AI 生成的视频。

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
                     * 获取标识内容设置。
默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成。

                     * @return LogoParam 标识内容设置。
默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成。

                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成。

                     * @param _logoParam 标识内容设置。
默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成。

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
                     * 参考视频URL。默认为待编辑视频。
- 视频格式：支持MP4
- 视频时长：输入视频时长≤5秒
- 视频大小：不超过200M
- 视频文件：输入的视频帧率及分辨率不做限制（建议输入16：9或9：16的视频；分辨率建议在2160px内，帧率建议在60fps内）；输出视频是帧率会≥16fps，分辨率为720p
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频内容的描述，中文正向提示词。支持视频内容增加、删除、修改等能力
- 最多支持200个 utf-8 字符（首尾空格不计入字符数）
- 不传prompt的时候，Images.N参考图列表必须要传图，且传的图片是经过图片编辑之后的结果图
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 参考图列表。用于对视频内容做风格迁移、内容替换、内容删减、内容增加做参考。
- 支持传入图片Base64编码或图片URL
- 图片格式：支持jpg，png，jpeg，webp，bmp，tiff 格式
- 图片文件：大小不能超过10MB（base64后）。单边分辨率不超过5000px，不小于50px，图片长宽限制1:4 ~ 4:1。
示例值：[{ "Url": "https://console.cloud.tencent.com/cos/image.png"}]
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 图片base64或者图片url

- Base64 和 Url 必须提供一个，如果都提供以Url为准。
- 上传图url大小不超过 8M
- 支持jpg，png，jpeg，webp，bmp，tiff 格式
- 单边分辨率不超过5000，不小于50，长宽限制1:4 ~ 4:1
                     */
                    Image m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 为生成视频添加标识的开关，默认为1。传0 需前往  [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成后方可生效。
1：添加标识；
0：不添加标识；
其他数值：默认按1处理。
建议您使用显著标识来提示，该视频是 AI 生成的视频。

                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往   [控制台](https://console.cloud.tencent.com/vtc/setting)  申请开启显式标识自主完成。

                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITVIDEOEDITJOBREQUEST_H_
