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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTOREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ReasoningConfig.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyScenePhoto请求参数结构体
                */
                class VerifyScenePhotoRequest : public AbstractModel
                {
                public:
                    VerifyScenePhotoRequest();
                    ~VerifyScenePhotoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>场景类型参数，如果场景无法细分请选用该大类的第一个子类，目前支持以下类型：<br><strong>经营场所照</strong><br>0101 门头照<br>0102 店内照<br>0103 流动经营照    </p><p><strong>车牌业务照</strong><br>0201 车牌</p>
                     * @return Scene <p>场景类型参数，如果场景无法细分请选用该大类的第一个子类，目前支持以下类型：<br><strong>经营场所照</strong><br>0101 门头照<br>0102 店内照<br>0103 流动经营照    </p><p><strong>车牌业务照</strong><br>0201 车牌</p>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>场景类型参数，如果场景无法细分请选用该大类的第一个子类，目前支持以下类型：<br><strong>经营场所照</strong><br>0101 门头照<br>0102 店内照<br>0103 流动经营照    </p><p><strong>车牌业务照</strong><br>0201 车牌</p>
                     * @param _scene <p>场景类型参数，如果场景无法细分请选用该大类的第一个子类，目前支持以下类型：<br><strong>经营场所照</strong><br>0101 门头照<br>0102 店内照<br>0103 流动经营照    </p><p><strong>车牌业务照</strong><br>0201 车牌</p>
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>鉴伪模式，目前支持以下模式，对应支持不同的入参、出参。<br>Image：图像鉴伪模式，根据图像分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按1次调用计费。<br>Video：视频鉴伪模式，根据视频分析输出告警提示，不支持推理，支持屏幕翻拍提示。每次调用按1次调用计费。<br>Hybrid：混合鉴伪模式，综合图像、视频分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按2次调用计费。</p>
                     * @return Mode <p>鉴伪模式，目前支持以下模式，对应支持不同的入参、出参。<br>Image：图像鉴伪模式，根据图像分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按1次调用计费。<br>Video：视频鉴伪模式，根据视频分析输出告警提示，不支持推理，支持屏幕翻拍提示。每次调用按1次调用计费。<br>Hybrid：混合鉴伪模式，综合图像、视频分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按2次调用计费。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>鉴伪模式，目前支持以下模式，对应支持不同的入参、出参。<br>Image：图像鉴伪模式，根据图像分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按1次调用计费。<br>Video：视频鉴伪模式，根据视频分析输出告警提示，不支持推理，支持屏幕翻拍提示。每次调用按1次调用计费。<br>Hybrid：混合鉴伪模式，综合图像、视频分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按2次调用计费。</p>
                     * @param _mode <p>鉴伪模式，目前支持以下模式，对应支持不同的入参、出参。<br>Image：图像鉴伪模式，根据图像分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按1次调用计费。<br>Video：视频鉴伪模式，根据视频分析输出告警提示，不支持推理，支持屏幕翻拍提示。每次调用按1次调用计费。<br>Hybrid：混合鉴伪模式，综合图像、视频分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按2次调用计费。</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>视频的 Url 地址。格式支持：xxxxxx。要求视频不超过 100M。建议视频时长不小于1s。</p>
                     * @return VideoUrl <p>视频的 Url 地址。格式支持：xxxxxx。要求视频不超过 100M。建议视频时长不小于1s。</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>视频的 Url 地址。格式支持：xxxxxx。要求视频不超过 100M。建议视频时长不小于1s。</p>
                     * @param _videoUrl <p>视频的 Url 地址。格式支持：xxxxxx。要求视频不超过 100M。建议视频时长不小于1s。</p>
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
                     * 获取<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * @return ImageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * @param _imageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
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
                     * 获取<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * @return ImageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * @param _imageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>推理 Prompt 模板，默认使用 VLM 对图片进行理解推理，同时支持使用 ${变量名} 进行推理。传入该参数即开启推理流程。</p><p>入参限制：长度限制：1–2000 字符</p>
                     * @return ReasoningPrompt <p>推理 Prompt 模板，默认使用 VLM 对图片进行理解推理，同时支持使用 ${变量名} 进行推理。传入该参数即开启推理流程。</p><p>入参限制：长度限制：1–2000 字符</p>
                     * 
                     */
                    std::string GetReasoningPrompt() const;

                    /**
                     * 设置<p>推理 Prompt 模板，默认使用 VLM 对图片进行理解推理，同时支持使用 ${变量名} 进行推理。传入该参数即开启推理流程。</p><p>入参限制：长度限制：1–2000 字符</p>
                     * @param _reasoningPrompt <p>推理 Prompt 模板，默认使用 VLM 对图片进行理解推理，同时支持使用 ${变量名} 进行推理。传入该参数即开启推理流程。</p><p>入参限制：长度限制：1–2000 字符</p>
                     * 
                     */
                    void SetReasoningPrompt(const std::string& _reasoningPrompt);

                    /**
                     * 判断参数 ReasoningPrompt 是否已赋值
                     * @return ReasoningPrompt 是否已赋值
                     * 
                     */
                    bool ReasoningPromptHasBeenSet() const;

                    /**
                     * 获取<p>推理输出配置。当 ReasoningPrompt 传入时建议同步传入，未传入时使用默认配置（OutputMode=enum, EnumValues=[&quot;true&quot;,&quot;false&quot;], EnableImageInput=true）。</p>
                     * @return ReasoningConfig <p>推理输出配置。当 ReasoningPrompt 传入时建议同步传入，未传入时使用默认配置（OutputMode=enum, EnumValues=[&quot;true&quot;,&quot;false&quot;], EnableImageInput=true）。</p>
                     * 
                     */
                    ReasoningConfig GetReasoningConfig() const;

                    /**
                     * 设置<p>推理输出配置。当 ReasoningPrompt 传入时建议同步传入，未传入时使用默认配置（OutputMode=enum, EnumValues=[&quot;true&quot;,&quot;false&quot;], EnableImageInput=true）。</p>
                     * @param _reasoningConfig <p>推理输出配置。当 ReasoningPrompt 传入时建议同步传入，未传入时使用默认配置（OutputMode=enum, EnumValues=[&quot;true&quot;,&quot;false&quot;], EnableImageInput=true）。</p>
                     * 
                     */
                    void SetReasoningConfig(const ReasoningConfig& _reasoningConfig);

                    /**
                     * 判断参数 ReasoningConfig 是否已赋值
                     * @return ReasoningConfig 是否已赋值
                     * 
                     */
                    bool ReasoningConfigHasBeenSet() const;

                    /**
                     * 获取<p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * @return IgnoreWatermarkCategories <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * 
                     */
                    std::vector<std::string> GetIgnoreWatermarkCategories() const;

                    /**
                     * 设置<p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * @param _ignoreWatermarkCategories <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * 
                     */
                    void SetIgnoreWatermarkCategories(const std::vector<std::string>& _ignoreWatermarkCategories);

                    /**
                     * 判断参数 IgnoreWatermarkCategories 是否已赋值
                     * @return IgnoreWatermarkCategories 是否已赋值
                     * 
                     */
                    bool IgnoreWatermarkCategoriesHasBeenSet() const;

                private:

                    /**
                     * <p>场景类型参数，如果场景无法细分请选用该大类的第一个子类，目前支持以下类型：<br><strong>经营场所照</strong><br>0101 门头照<br>0102 店内照<br>0103 流动经营照    </p><p><strong>车牌业务照</strong><br>0201 车牌</p>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>鉴伪模式，目前支持以下模式，对应支持不同的入参、出参。<br>Image：图像鉴伪模式，根据图像分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按1次调用计费。<br>Video：视频鉴伪模式，根据视频分析输出告警提示，不支持推理，支持屏幕翻拍提示。每次调用按1次调用计费。<br>Hybrid：混合鉴伪模式，综合图像、视频分析输出告警提示，支持推理，支持区域篡改提示、AIGC合成提示、屏幕翻拍提示、截图提示、文字水印提示、水印内容、模板图片提示、VLM 推理结果。每次调用按2次调用计费。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>视频的 Url 地址。格式支持：xxxxxx。要求视频不超过 100M。建议视频时长不小于1s。</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>推理 Prompt 模板，默认使用 VLM 对图片进行理解推理，同时支持使用 ${变量名} 进行推理。传入该参数即开启推理流程。</p><p>入参限制：长度限制：1–2000 字符</p>
                     */
                    std::string m_reasoningPrompt;
                    bool m_reasoningPromptHasBeenSet;

                    /**
                     * <p>推理输出配置。当 ReasoningPrompt 传入时建议同步传入，未传入时使用默认配置（OutputMode=enum, EnumValues=[&quot;true&quot;,&quot;false&quot;], EnableImageInput=true）。</p>
                     */
                    ReasoningConfig m_reasoningConfig;
                    bool m_reasoningConfigHasBeenSet;

                    /**
                     * <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     */
                    std::vector<std::string> m_ignoreWatermarkCategories;
                    bool m_ignoreWatermarkCategoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYSCENEPHOTOREQUEST_H_
