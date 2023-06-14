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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTRESPONSE_H_

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
                * ImageEnhancement返回参数结构体
                */
                class ImageEnhancementResponse : public AbstractModel
                {
                public:
                    ImageEnhancementResponse();
                    ~ImageEnhancementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片数据标识：
“origin”：原图
“preprocess”:预处理后的图
                     * @return ImageTag 图片数据标识：
“origin”：原图
“preprocess”:预处理后的图
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取图片数据，返回预处理后图像或原图像base64字符
                     * @return Image 图片数据，返回预处理后图像或原图像base64字符
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * 图片数据标识：
“origin”：原图
“preprocess”:预处理后的图
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 图片数据，返回预处理后图像或原图像base64字符
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTRESPONSE_H_
