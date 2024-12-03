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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBREQUEST_H_

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
                * CheckAnimateImageJob请求参数结构体
                */
                class CheckAnimateImageJobRequest : public AbstractModel
                {
                public:
                    CheckAnimateImageJobRequest();
                    ~CheckAnimateImageJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取动作模板ID。
                     * @return TemplateId 动作模板ID。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置动作模板ID。
                     * @param _templateId 动作模板ID。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * @return ImageUrl 图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * @param _imageUrl 图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
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
                     * 获取图片base64数据。
图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * @return ImageBase64 图片base64数据。
图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片base64数据。
图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     * @param _imageBase64 图片base64数据。
图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
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
                     * 获取是否检测输入图人体12个身体部位（头部、颈部、右肩、右肘、右腕、左肩、左肘、左腕、右髋、左髋,、左膝、右膝）。默认不检测。
                     * @return EnableBodyJoins 是否检测输入图人体12个身体部位（头部、颈部、右肩、右肘、右腕、左肩、左肘、左腕、右髋、左髋,、左膝、右膝）。默认不检测。
                     * 
                     */
                    bool GetEnableBodyJoins() const;

                    /**
                     * 设置是否检测输入图人体12个身体部位（头部、颈部、右肩、右肘、右腕、左肩、左肘、左腕、右髋、左髋,、左膝、右膝）。默认不检测。
                     * @param _enableBodyJoins 是否检测输入图人体12个身体部位（头部、颈部、右肩、右肘、右腕、左肩、左肘、左腕、右髋、左髋,、左膝、右膝）。默认不检测。
                     * 
                     */
                    void SetEnableBodyJoins(const bool& _enableBodyJoins);

                    /**
                     * 判断参数 EnableBodyJoins 是否已赋值
                     * @return EnableBodyJoins 是否已赋值
                     * 
                     */
                    bool EnableBodyJoinsHasBeenSet() const;

                private:

                    /**
                     * 动作模板ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片base64数据。
图片格式：支持PNG、JPG、JPEG、BMP、WEBP格式；
图片分辨率：长边分辨率范围【192，4096】；
图片大小：不超过10M；
图片宽高比：【宽：高】数值在 1:2 到 1:1.2 范围内
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 是否检测输入图人体12个身体部位（头部、颈部、右肩、右肘、右腕、左肩、左肘、左腕、右髋、左髋,、左膝、右膝）。默认不检测。
                     */
                    bool m_enableBodyJoins;
                    bool m_enableBodyJoinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBREQUEST_H_
