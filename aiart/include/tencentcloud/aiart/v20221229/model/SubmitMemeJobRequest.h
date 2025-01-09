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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITMEMEJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITMEMEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/LogoParam.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * SubmitMemeJob请求参数结构体
                */
                class SubmitMemeJobRequest : public AbstractModel
                {
                public:
                    SubmitMemeJobRequest();
                    ~SubmitMemeJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表情模板。
请在 [表情动图模板列表](https://cloud.tencent.com/document/product/1668/115327)  中选择期望的模板，传入 Pose 名称。
                     * @return Pose 表情模板。
请在 [表情动图模板列表](https://cloud.tencent.com/document/product/1668/115327)  中选择期望的模板，传入 Pose 名称。
                     * 
                     */
                    std::string GetPose() const;

                    /**
                     * 设置表情模板。
请在 [表情动图模板列表](https://cloud.tencent.com/document/product/1668/115327)  中选择期望的模板，传入 Pose 名称。
                     * @param _pose 表情模板。
请在 [表情动图模板列表](https://cloud.tencent.com/document/product/1668/115327)  中选择期望的模板，传入 Pose 名称。
                     * 
                     */
                    void SetPose(const std::string& _pose);

                    /**
                     * 判断参数 Pose 是否已赋值
                     * @return Pose 是否已赋值
                     * 
                     */
                    bool PoseHasBeenSet() const;

                    /**
                     * 获取人像参考图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputImage 人像参考图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputImage() const;

                    /**
                     * 设置人像参考图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputImage 人像参考图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    void SetInputImage(const std::string& _inputImage);

                    /**
                     * 判断参数 InputImage 是否已赋值
                     * @return InputImage 是否已赋值
                     * 
                     */
                    bool InputImageHasBeenSet() const;

                    /**
                     * 获取人像参考图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputUrl 人像参考图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置人像参考图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputUrl 人像参考图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取生成分辨率。
真人类型支持256、512，默认为256，
卡通类型仅支持512。
                     * @return Resolution 生成分辨率。
真人类型支持256、512，默认为256，
卡通类型仅支持512。
                     * 
                     */
                    int64_t GetResolution() const;

                    /**
                     * 设置生成分辨率。
真人类型支持256、512，默认为256，
卡通类型仅支持512。
                     * @param _resolution 生成分辨率。
真人类型支持256、512，默认为256，
卡通类型仅支持512。
                     * 
                     */
                    void SetResolution(const int64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取自定义文案。
仅对真人类型的 Pose 生效，将在生成的表情动图中显示指定的文字。如果传入的字符串长度大于10，只截取前10个显示。
如果不传，默认使用自带的文案。
如果 text = "" 空字符串，代表不在表情动图中添加文案。
                     * @return Text 自定义文案。
仅对真人类型的 Pose 生效，将在生成的表情动图中显示指定的文字。如果传入的字符串长度大于10，只截取前10个显示。
如果不传，默认使用自带的文案。
如果 text = "" 空字符串，代表不在表情动图中添加文案。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置自定义文案。
仅对真人类型的 Pose 生效，将在生成的表情动图中显示指定的文字。如果传入的字符串长度大于10，只截取前10个显示。
如果不传，默认使用自带的文案。
如果 text = "" 空字符串，代表不在表情动图中添加文案。
                     * @param _text 自定义文案。
仅对真人类型的 Pose 生效，将在生成的表情动图中显示指定的文字。如果传入的字符串长度大于10，只截取前10个显示。
如果不传，默认使用自带的文案。
如果 text = "" 空字符串，代表不在表情动图中添加文案。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取头发遮罩开关。
true：裁剪过长的头发。
false：不裁剪过长的头发。
仅对卡通类型的 Pose 生效，默认为 false。
                     * @return Haircut 头发遮罩开关。
true：裁剪过长的头发。
false：不裁剪过长的头发。
仅对卡通类型的 Pose 生效，默认为 false。
                     * 
                     */
                    bool GetHaircut() const;

                    /**
                     * 设置头发遮罩开关。
true：裁剪过长的头发。
false：不裁剪过长的头发。
仅对卡通类型的 Pose 生效，默认为 false。
                     * @param _haircut 头发遮罩开关。
true：裁剪过长的头发。
false：不裁剪过长的头发。
仅对卡通类型的 Pose 生效，默认为 false。
                     * 
                     */
                    void SetHaircut(const bool& _haircut);

                    /**
                     * 判断参数 Haircut 是否已赋值
                     * @return Haircut 是否已赋值
                     * 
                     */
                    bool HaircutHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
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
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @return LogoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @param _logoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
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
                     * 表情模板。
请在 [表情动图模板列表](https://cloud.tencent.com/document/product/1668/115327)  中选择期望的模板，传入 Pose 名称。
                     */
                    std::string m_pose;
                    bool m_poseHasBeenSet;

                    /**
                     * 人像参考图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * 人像参考图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * 生成分辨率。
真人类型支持256、512，默认为256，
卡通类型仅支持512。
                     */
                    int64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 自定义文案。
仅对真人类型的 Pose 生效，将在生成的表情动图中显示指定的文字。如果传入的字符串长度大于10，只截取前10个显示。
如果不传，默认使用自带的文案。
如果 text = "" 空字符串，代表不在表情动图中添加文案。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 头发遮罩开关。
true：裁剪过长的头发。
false：不裁剪过长的头发。
仅对卡通类型的 Pose 生效，默认为 false。
                     */
                    bool m_haircut;
                    bool m_haircutHasBeenSet;

                    /**
                     * 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITMEMEJOBREQUEST_H_
