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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_IMAGEINPAINTINGREMOVALREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_IMAGEINPAINTINGREMOVALREQUEST_H_

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
                * ImageInpaintingRemoval请求参数结构体
                */
                class ImageInpaintingRemovalRequest : public AbstractModel
                {
                public:
                    ImageInpaintingRemovalRequest();
                    ~ImageInpaintingRemovalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputImage 输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputImage() const;

                    /**
                     * 设置输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputImage 输入图 Base64 数据。
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
                     * 获取输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputUrl 输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputUrl 输入图 Url。
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
                     * 获取消除区域 Mask 图 Base64 数据。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * @return Mask 消除区域 Mask 图 Base64 数据。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * 
                     */
                    std::string GetMask() const;

                    /**
                     * 设置消除区域 Mask 图 Base64 数据。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * @param _mask 消除区域 Mask 图 Base64 数据。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * 
                     */
                    void SetMask(const std::string& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取消除区域 Mask 图 Url。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * @return MaskUrl 消除区域 Mask 图 Url。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * 
                     */
                    std::string GetMaskUrl() const;

                    /**
                     * 设置消除区域 Mask 图 Url。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * @param _maskUrl 消除区域 Mask 图 Url。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     * 
                     */
                    void SetMaskUrl(const std::string& _maskUrl);

                    /**
                     * 判断参数 MaskUrl 是否已赋值
                     * @return MaskUrl 是否已赋值
                     * 
                     */
                    bool MaskUrlHasBeenSet() const;

                    /**
                     * 获取返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     * @return RspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     * @param _rspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
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
                     * 输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * 输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：单边分辨率小于5000，转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * 消除区域 Mask 图 Base64 数据。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     */
                    std::string m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * 消除区域 Mask 图 Url。
Mask 为单通道灰度图，待消除部分呈白色区域，原图保持部分呈黑色区域。
Mask 的 Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：Mask 分辨率需要和输入原图保持一致，转成 Base64 字符串后小于 6MB。
                     */
                    std::string m_maskUrl;
                    bool m_maskUrlHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
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

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_IMAGEINPAINTINGREMOVALREQUEST_H_
