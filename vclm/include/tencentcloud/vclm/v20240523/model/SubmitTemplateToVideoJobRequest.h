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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEMPLATETOVIDEOJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEMPLATETOVIDEOJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/Image.h>
#include <tencentcloud/vclm/v20240523/model/LogoParam.h>
#include <tencentcloud/vclm/v20240523/model/ExtraParam.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * SubmitTemplateToVideoJob请求参数结构体
                */
                class SubmitTemplateToVideoJobRequest : public AbstractModel
                {
                public:
                    SubmitTemplateToVideoJobRequest();
                    ~SubmitTemplateToVideoJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>特效模板名称。请在 <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板列表</a>  中选择想要生成的特效对应的 template 名称。</p>
                     * @return Template <p>特效模板名称。请在 <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板列表</a>  中选择想要生成的特效对应的 template 名称。</p>
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置<p>特效模板名称。请在 <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板列表</a>  中选择想要生成的特效对应的 template 名称。</p>
                     * @param _template <p>特效模板名称。请在 <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板列表</a>  中选择想要生成的特效对应的 template 名称。</p>
                     * 
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取<p>参考图像，不同特效输入图片的数量详见： <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-图片要求说明</a></p><ul><li>支持传入图片Base64编码或图片URL（确保可访问）</li><li>图片格式：支持png、jpg、jpeg、webp、bmp、tiff</li><li>图片文件：大小不能超过10MB（base64后），图片分辨率不小于300×300px，不大于4096×4096，图片宽高比应在1:4 ~ 4:1之间</li></ul>
                     * @return Images <p>参考图像，不同特效输入图片的数量详见： <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-图片要求说明</a></p><ul><li>支持传入图片Base64编码或图片URL（确保可访问）</li><li>图片格式：支持png、jpg、jpeg、webp、bmp、tiff</li><li>图片文件：大小不能超过10MB（base64后），图片分辨率不小于300×300px，不大于4096×4096，图片宽高比应在1:4 ~ 4:1之间</li></ul>
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置<p>参考图像，不同特效输入图片的数量详见： <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-图片要求说明</a></p><ul><li>支持传入图片Base64编码或图片URL（确保可访问）</li><li>图片格式：支持png、jpg、jpeg、webp、bmp、tiff</li><li>图片文件：大小不能超过10MB（base64后），图片分辨率不小于300×300px，不大于4096×4096，图片宽高比应在1:4 ~ 4:1之间</li></ul>
                     * @param _images <p>参考图像，不同特效输入图片的数量详见： <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-图片要求说明</a></p><ul><li>支持传入图片Base64编码或图片URL（确保可访问）</li><li>图片格式：支持png、jpg、jpeg、webp、bmp、tiff</li><li>图片文件：大小不能超过10MB（base64后），图片分辨率不小于300×300px，不大于4096×4096，图片宽高比应在1:4 ~ 4:1之间</li></ul>
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
                     * 获取<p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @return LogoAdd <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置<p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     * @param _logoAdd <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
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
                     * 获取<p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成。</p>
                     * @return LogoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成。</p>
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置<p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成。</p>
                     * @param _logoParam <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成。</p>
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                    /**
                     * 获取<p>视频输出分辨率，默认值：360p 。不同特效支持的清晰度及消耗积分数详见：<a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-单次调用消耗积分数列</a></p>
                     * @return Resolution <p>视频输出分辨率，默认值：360p 。不同特效支持的清晰度及消耗积分数详见：<a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-单次调用消耗积分数列</a></p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>视频输出分辨率，默认值：360p 。不同特效支持的清晰度及消耗积分数详见：<a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-单次调用消耗积分数列</a></p>
                     * @param _resolution <p>视频输出分辨率，默认值：360p 。不同特效支持的清晰度及消耗积分数详见：<a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-单次调用消耗积分数列</a></p>
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
                     * 获取<p>是否为生成的视频添加背景音乐。默认：false，  传 true 时系统将从预设 BGM 库中自动挑选合适的音乐并添加；不传或为 false 则不添加 BGM。</p>
                     * @return BGM <p>是否为生成的视频添加背景音乐。默认：false，  传 true 时系统将从预设 BGM 库中自动挑选合适的音乐并添加；不传或为 false 则不添加 BGM。</p>
                     * 
                     */
                    bool GetBGM() const;

                    /**
                     * 设置<p>是否为生成的视频添加背景音乐。默认：false，  传 true 时系统将从预设 BGM 库中自动挑选合适的音乐并添加；不传或为 false 则不添加 BGM。</p>
                     * @param _bGM <p>是否为生成的视频添加背景音乐。默认：false，  传 true 时系统将从预设 BGM 库中自动挑选合适的音乐并添加；不传或为 false 则不添加 BGM。</p>
                     * 
                     */
                    void SetBGM(const bool& _bGM);

                    /**
                     * 判断参数 BGM 是否已赋值
                     * @return BGM 是否已赋值
                     * 
                     */
                    bool BGMHasBeenSet() const;

                    /**
                     * 获取<p>扩展字段。</p>
                     * @return ExtraParam <p>扩展字段。</p>
                     * 
                     */
                    ExtraParam GetExtraParam() const;

                    /**
                     * 设置<p>扩展字段。</p>
                     * @param _extraParam <p>扩展字段。</p>
                     * 
                     */
                    void SetExtraParam(const ExtraParam& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * <p>特效模板名称。请在 <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板列表</a>  中选择想要生成的特效对应的 template 名称。</p>
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>参考图像，不同特效输入图片的数量详见： <a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-图片要求说明</a></p><ul><li>支持传入图片Base64编码或图片URL（确保可访问）</li><li>图片格式：支持png、jpg、jpeg、webp、bmp、tiff</li><li>图片文件：大小不能超过10MB（base64后），图片分辨率不小于300×300px，不大于4096×4096，图片宽高比应在1:4 ~ 4:1之间</li></ul>
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>为生成视频添加标识的开关，默认为1。传0 需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成后方可生效。<br>1：添加标识；<br>0：不添加标识；<br>其他数值：默认按1处理。<br>建议您使用显著标识来提示，该视频是 AI 生成的视频。</p>
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * <p>标识内容设置。<br>默认在生成视频的右下角添加“ AI 生成”或“视频由 AI 生成”字样，如需替换为其他的标识图片，需前往  <a href="https://console.cloud.tencent.com/vtc/setting">控制台</a> 申请开启显式标识自主完成。</p>
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * <p>视频输出分辨率，默认值：360p 。不同特效支持的清晰度及消耗积分数详见：<a href="https://cloud.tencent.com/document/product/1616/119194">视频特效模板-单次调用消耗积分数列</a></p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>是否为生成的视频添加背景音乐。默认：false，  传 true 时系统将从预设 BGM 库中自动挑选合适的音乐并添加；不传或为 false 则不添加 BGM。</p>
                     */
                    bool m_bGM;
                    bool m_bGMHasBeenSet;

                    /**
                     * <p>扩展字段。</p>
                     */
                    ExtraParam m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_SUBMITTEMPLATETOVIDEOJOBREQUEST_H_
