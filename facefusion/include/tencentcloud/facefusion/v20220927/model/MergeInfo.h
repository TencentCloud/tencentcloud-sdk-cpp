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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FaceRect.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * 人脸图片和待被融合的素材模板图的人脸位置信息。
                */
                class MergeInfo : public AbstractModel
                {
                public:
                    MergeInfo();
                    ~MergeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * @return Image 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * @param _image 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取输入图片url。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * @return Url 输入图片url。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置输入图片url。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * @param _url 输入图片url。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * @return InputImageFaceRect 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * 
                     */
                    FaceRect GetInputImageFaceRect() const;

                    /**
                     * 设置上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * @param _inputImageFaceRect 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     * 
                     */
                    void SetInputImageFaceRect(const FaceRect& _inputImageFaceRect);

                    /**
                     * 判断参数 InputImageFaceRect 是否已赋值
                     * @return InputImageFaceRect 是否已赋值
                     * 
                     */
                    bool InputImageFaceRectHasBeenSet() const;

                    /**
                     * 获取素材人脸ID，不填默认取最大人脸。
                     * @return TemplateFaceID 素材人脸ID，不填默认取最大人脸。
                     * 
                     */
                    std::string GetTemplateFaceID() const;

                    /**
                     * 设置素材人脸ID，不填默认取最大人脸。
                     * @param _templateFaceID 素材人脸ID，不填默认取最大人脸。
                     * 
                     */
                    void SetTemplateFaceID(const std::string& _templateFaceID);

                    /**
                     * 判断参数 TemplateFaceID 是否已赋值
                     * @return TemplateFaceID 是否已赋值
                     * 
                     */
                    bool TemplateFaceIDHasBeenSet() const;

                    /**
                     * 获取模板中人脸位置信息(人脸框)，不填默认取最大人脸。此字段仅适用于图片融合自定义模板素材场景。
Width、Height >= 30。
                     * @return TemplateFaceRect 模板中人脸位置信息(人脸框)，不填默认取最大人脸。此字段仅适用于图片融合自定义模板素材场景。
Width、Height >= 30。
                     * 
                     */
                    FaceRect GetTemplateFaceRect() const;

                    /**
                     * 设置模板中人脸位置信息(人脸框)，不填默认取最大人脸。此字段仅适用于图片融合自定义模板素材场景。
Width、Height >= 30。
                     * @param _templateFaceRect 模板中人脸位置信息(人脸框)，不填默认取最大人脸。此字段仅适用于图片融合自定义模板素材场景。
Width、Height >= 30。
                     * 
                     */
                    void SetTemplateFaceRect(const FaceRect& _templateFaceRect);

                    /**
                     * 判断参数 TemplateFaceRect 是否已赋值
                     * @return TemplateFaceRect 是否已赋值
                     * 
                     */
                    bool TemplateFaceRectHasBeenSet() const;

                private:

                    /**
                     * 输入图片base64。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 输入图片url。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64。（图片编码之后可能会大30%左右，建议合理控制图片大小）。
●支持图片格式：支持jpg或png
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 上传的图片人脸位置信息（人脸框）
Width、Height >= 30。
                     */
                    FaceRect m_inputImageFaceRect;
                    bool m_inputImageFaceRectHasBeenSet;

                    /**
                     * 素材人脸ID，不填默认取最大人脸。
                     */
                    std::string m_templateFaceID;
                    bool m_templateFaceIDHasBeenSet;

                    /**
                     * 模板中人脸位置信息(人脸框)，不填默认取最大人脸。此字段仅适用于图片融合自定义模板素材场景。
Width、Height >= 30。
                     */
                    FaceRect m_templateFaceRect;
                    bool m_templateFaceRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_MERGEINFO_H_
