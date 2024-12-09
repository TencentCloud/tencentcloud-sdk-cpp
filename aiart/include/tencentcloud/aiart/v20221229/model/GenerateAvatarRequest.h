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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_GENERATEAVATARREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_GENERATEAVATARREQUEST_H_

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
                * GenerateAvatar请求参数结构体
                */
                class GenerateAvatarRequest : public AbstractModel
                {
                public:
                    GenerateAvatarRequest();
                    ~GenerateAvatarRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图像类型，默认为人像。
human：人像头像，仅支持人像图片输入，建议避免上传无人、多人、人像过小的图片。
pet：萌宠贴纸，仅支持动物图片输入，建议避免上传无动物、多动物、动物过小的图片。
                     * @return Type 图像类型，默认为人像。
human：人像头像，仅支持人像图片输入，建议避免上传无人、多人、人像过小的图片。
pet：萌宠贴纸，仅支持动物图片输入，建议避免上传无动物、多动物、动物过小的图片。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置图像类型，默认为人像。
human：人像头像，仅支持人像图片输入，建议避免上传无人、多人、人像过小的图片。
pet：萌宠贴纸，仅支持动物图片输入，建议避免上传无动物、多动物、动物过小的图片。
                     * @param _type 图像类型，默认为人像。
human：人像头像，仅支持人像图片输入，建议避免上传无人、多人、人像过小的图片。
pet：萌宠贴纸，仅支持动物图片输入，建议避免上传无动物、多动物、动物过小的图片。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取头像风格，仅在人像模式下生效。
若使用人像模式，请在  [百变头像风格列表](https://cloud.tencent.com/document/product/1668/107741) 中选择期望的风格，传入风格编号，不传默认使用 flower 风格。
若使用萌宠贴纸模式，无需选择风格，该参数不生效。
                     * @return Style 头像风格，仅在人像模式下生效。
若使用人像模式，请在  [百变头像风格列表](https://cloud.tencent.com/document/product/1668/107741) 中选择期望的风格，传入风格编号，不传默认使用 flower 风格。
若使用萌宠贴纸模式，无需选择风格，该参数不生效。
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置头像风格，仅在人像模式下生效。
若使用人像模式，请在  [百变头像风格列表](https://cloud.tencent.com/document/product/1668/107741) 中选择期望的风格，传入风格编号，不传默认使用 flower 风格。
若使用萌宠贴纸模式，无需选择风格，该参数不生效。
                     * @param _style 头像风格，仅在人像模式下生效。
若使用人像模式，请在  [百变头像风格列表](https://cloud.tencent.com/document/product/1668/107741) 中选择期望的风格，传入风格编号，不传默认使用 flower 风格。
若使用萌宠贴纸模式，无需选择风格，该参数不生效。
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

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
                     * 获取输入人像图的质量检测开关，默认开启，仅在人像模式下生效。
1：开启
0：关闭
建议开启检测，可提升生成效果，关闭检测可能因输入图像质量较差导致生成效果受损。
开启后，将增强对输入图像的质量要求，如果输入图像单边分辨率<500、图像中人脸占比较小、存在多人、没有检测到人脸、人脸不完整、人脸遮挡等，将被拦截。
关闭后，将降低对输入图像的质量要求，如果图像中没有检测到人脸或人脸占比过小等，将被拦截。
                     * @return Filter 输入人像图的质量检测开关，默认开启，仅在人像模式下生效。
1：开启
0：关闭
建议开启检测，可提升生成效果，关闭检测可能因输入图像质量较差导致生成效果受损。
开启后，将增强对输入图像的质量要求，如果输入图像单边分辨率<500、图像中人脸占比较小、存在多人、没有检测到人脸、人脸不完整、人脸遮挡等，将被拦截。
关闭后，将降低对输入图像的质量要求，如果图像中没有检测到人脸或人脸占比过小等，将被拦截。
                     * 
                     */
                    int64_t GetFilter() const;

                    /**
                     * 设置输入人像图的质量检测开关，默认开启，仅在人像模式下生效。
1：开启
0：关闭
建议开启检测，可提升生成效果，关闭检测可能因输入图像质量较差导致生成效果受损。
开启后，将增强对输入图像的质量要求，如果输入图像单边分辨率<500、图像中人脸占比较小、存在多人、没有检测到人脸、人脸不完整、人脸遮挡等，将被拦截。
关闭后，将降低对输入图像的质量要求，如果图像中没有检测到人脸或人脸占比过小等，将被拦截。
                     * @param _filter 输入人像图的质量检测开关，默认开启，仅在人像模式下生效。
1：开启
0：关闭
建议开启检测，可提升生成效果，关闭检测可能因输入图像质量较差导致生成效果受损。
开启后，将增强对输入图像的质量要求，如果输入图像单边分辨率<500、图像中人脸占比较小、存在多人、没有检测到人脸、人脸不完整、人脸遮挡等，将被拦截。
关闭后，将降低对输入图像的质量要求，如果图像中没有检测到人脸或人脸占比过小等，将被拦截。
                     * 
                     */
                    void SetFilter(const int64_t& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

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

                private:

                    /**
                     * 图像类型，默认为人像。
human：人像头像，仅支持人像图片输入，建议避免上传无人、多人、人像过小的图片。
pet：萌宠贴纸，仅支持动物图片输入，建议避免上传无动物、多动物、动物过小的图片。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 头像风格，仅在人像模式下生效。
若使用人像模式，请在  [百变头像风格列表](https://cloud.tencent.com/document/product/1668/107741) 中选择期望的风格，传入风格编号，不传默认使用 flower 风格。
若使用萌宠贴纸模式，无需选择风格，该参数不生效。
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

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
                     * 输入人像图的质量检测开关，默认开启，仅在人像模式下生效。
1：开启
0：关闭
建议开启检测，可提升生成效果，关闭检测可能因输入图像质量较差导致生成效果受损。
开启后，将增强对输入图像的质量要求，如果输入图像单边分辨率<500、图像中人脸占比较小、存在多人、没有检测到人脸、人脸不完整、人脸遮挡等，将被拦截。
关闭后，将降低对输入图像的质量要求，如果图像中没有检测到人脸或人脸占比过小等，将被拦截。
                     */
                    int64_t m_filter;
                    bool m_filterHasBeenSet;

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

                    /**
                     * 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_GENERATEAVATARREQUEST_H_
