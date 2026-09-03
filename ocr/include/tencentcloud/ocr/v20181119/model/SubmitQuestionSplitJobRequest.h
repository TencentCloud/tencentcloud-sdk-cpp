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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SubmitQuestionSplitJob请求参数结构体
                */
                class SubmitQuestionSplitJobRequest : public AbstractModel
                {
                public:
                    SubmitQuestionSplitJobRequest();
                    ~SubmitQuestionSplitJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>批量ImageUrl图片入口。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * @return ImageUrlList <p>批量ImageUrl图片入口。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>批量ImageUrl图片入口。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * @param _imageUrlList <p>批量ImageUrl图片入口。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                    /**
                     * 获取<p>批量base64图片入口。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * @return ImageBase64List <p>批量base64图片入口。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * 
                     */
                    std::vector<std::string> GetImageBase64List() const;

                    /**
                     * 设置<p>批量base64图片入口。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * @param _imageBase64List <p>批量base64图片入口。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     * 
                     */
                    void SetImageBase64List(const std::vector<std::string>& _imageBase64List);

                    /**
                     * 判断参数 ImageBase64List 是否已赋值
                     * @return ImageBase64List 是否已赋值
                     * 
                     */
                    bool ImageBase64ListHasBeenSet() const;

                    /**
                     * 获取<p>选择切题模型</p><p>枚举值：</p><ul><li>youtu_crop： 轻量化切题模型，运算速度更快，适合常规切题</li><li>youtu_crop_pro： 属于切题精调大模型，针对双栏、跨栏等复杂版式识别精度大幅提升，但推理耗时更长</li></ul><p>默认值：youtu_crop</p>
                     * @return ModelType <p>选择切题模型</p><p>枚举值：</p><ul><li>youtu_crop： 轻量化切题模型，运算速度更快，适合常规切题</li><li>youtu_crop_pro： 属于切题精调大模型，针对双栏、跨栏等复杂版式识别精度大幅提升，但推理耗时更长</li></ul><p>默认值：youtu_crop</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>选择切题模型</p><p>枚举值：</p><ul><li>youtu_crop： 轻量化切题模型，运算速度更快，适合常规切题</li><li>youtu_crop_pro： 属于切题精调大模型，针对双栏、跨栏等复杂版式识别精度大幅提升，但推理耗时更长</li></ul><p>默认值：youtu_crop</p>
                     * @param _modelType <p>选择切题模型</p><p>枚举值：</p><ul><li>youtu_crop： 轻量化切题模型，运算速度更快，适合常规切题</li><li>youtu_crop_pro： 属于切题精调大模型，针对双栏、跨栏等复杂版式识别精度大幅提升，但推理耗时更长</li></ul><p>默认值：youtu_crop</p>
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>批量ImageUrl图片入口。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                    /**
                     * <p>批量base64图片入口。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。</p><p>入参限制：要求pdf只能有一个url或base64</p>
                     */
                    std::vector<std::string> m_imageBase64List;
                    bool m_imageBase64ListHasBeenSet;

                    /**
                     * <p>选择切题模型</p><p>枚举值：</p><ul><li>youtu_crop： 轻量化切题模型，运算速度更快，适合常规切题</li><li>youtu_crop_pro： 属于切题精调大模型，针对双栏、跨栏等复杂版式识别精度大幅提升，但推理耗时更长</li></ul><p>默认值：youtu_crop</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBREQUEST_H_
