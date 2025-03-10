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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_REFINEIMAGEREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_REFINEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * RefineImage请求参数结构体
                */
                class RefineImageRequest : public AbstractModel
                {
                public:
                    RefineImageRequest();
                    ~RefineImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputUrl 输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputUrl 输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
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
                     * 获取输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return InputImage 输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetInputImage() const;

                    /**
                     * 设置输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _inputImage 输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
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
                     * 获取返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。 示例值：url
                     * @return RspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。 示例值：url
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。 示例值：url
                     * @param _rspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。 示例值：url
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
                     * 输入图 Url。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * 输入图 Base64 数据。
Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
图片限制：转成 Base64 字符串后小于 6MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_inputImage;
                    bool m_inputImageHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。 示例值：url
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_REFINEIMAGEREQUEST_H_
