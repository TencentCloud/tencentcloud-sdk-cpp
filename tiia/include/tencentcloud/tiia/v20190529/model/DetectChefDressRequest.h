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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectChefDress请求参数结构体
                */
                class DetectChefDressRequest : public AbstractModel
                {
                public:
                    DetectChefDressRequest();
                    ~DetectChefDressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Url 。
ImageUrl和ImageBase64必须提供一个，同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过 3840 x 2160pixel。
建议：
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @return ImageUrl 图片的 Url 。
ImageUrl和ImageBase64必须提供一个，同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过 3840 x 2160pixel。
建议：
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 。
ImageUrl和ImageBase64必须提供一个，同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过 3840 x 2160pixel。
建议：
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @param _imageUrl 图片的 Url 。
ImageUrl和ImageBase64必须提供一个，同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过 3840 x 2160pixel。
建议：
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
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
                     * 获取图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要base64编码，并且要去掉编码头部。
支持的图片格式：PNG、JPG、JPEG、暂不支持GIF格式。
支持的图片大小：所下载图片经Base64编码后不超过5M。
                     * @return ImageBase64 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要base64编码，并且要去掉编码头部。
支持的图片格式：PNG、JPG、JPEG、暂不支持GIF格式。
支持的图片大小：所下载图片经Base64编码后不超过5M。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要base64编码，并且要去掉编码头部。
支持的图片格式：PNG、JPG、JPEG、暂不支持GIF格式。
支持的图片大小：所下载图片经Base64编码后不超过5M。
                     * @param _imageBase64 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要base64编码，并且要去掉编码头部。
支持的图片格式：PNG、JPG、JPEG、暂不支持GIF格式。
支持的图片大小：所下载图片经Base64编码后不超过5M。
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
                     * 获取人体检测模型开关，“true”为开启，“false”为关闭
默认为开启，开启后可先对图片中的人体进行检测之后再进行属性识别
                     * @return EnableDetect 人体检测模型开关，“true”为开启，“false”为关闭
默认为开启，开启后可先对图片中的人体进行检测之后再进行属性识别
                     * 
                     */
                    bool GetEnableDetect() const;

                    /**
                     * 设置人体检测模型开关，“true”为开启，“false”为关闭
默认为开启，开启后可先对图片中的人体进行检测之后再进行属性识别
                     * @param _enableDetect 人体检测模型开关，“true”为开启，“false”为关闭
默认为开启，开启后可先对图片中的人体进行检测之后再进行属性识别
                     * 
                     */
                    void SetEnableDetect(const bool& _enableDetect);

                    /**
                     * 判断参数 EnableDetect 是否已赋值
                     * @return EnableDetect 是否已赋值
                     * 
                     */
                    bool EnableDetectHasBeenSet() const;

                    /**
                     * 获取人体优选开关，“true”为开启，“false”为关闭
开启后自动对检测质量低的人体进行优选过滤，有助于提高属性识别的准确率。
默认为开启，仅在人体检测开关开启时可配置，人体检测模型关闭时人体优选也关闭
人体优选开启时，检测到的人体分辨率不超过1920*1080 pixel
                     * @return EnablePreferred 人体优选开关，“true”为开启，“false”为关闭
开启后自动对检测质量低的人体进行优选过滤，有助于提高属性识别的准确率。
默认为开启，仅在人体检测开关开启时可配置，人体检测模型关闭时人体优选也关闭
人体优选开启时，检测到的人体分辨率不超过1920*1080 pixel
                     * 
                     */
                    bool GetEnablePreferred() const;

                    /**
                     * 设置人体优选开关，“true”为开启，“false”为关闭
开启后自动对检测质量低的人体进行优选过滤，有助于提高属性识别的准确率。
默认为开启，仅在人体检测开关开启时可配置，人体检测模型关闭时人体优选也关闭
人体优选开启时，检测到的人体分辨率不超过1920*1080 pixel
                     * @param _enablePreferred 人体优选开关，“true”为开启，“false”为关闭
开启后自动对检测质量低的人体进行优选过滤，有助于提高属性识别的准确率。
默认为开启，仅在人体检测开关开启时可配置，人体检测模型关闭时人体优选也关闭
人体优选开启时，检测到的人体分辨率不超过1920*1080 pixel
                     * 
                     */
                    void SetEnablePreferred(const bool& _enablePreferred);

                    /**
                     * 判断参数 EnablePreferred 是否已赋值
                     * @return EnablePreferred 是否已赋值
                     * 
                     */
                    bool EnablePreferredHasBeenSet() const;

                private:

                    /**
                     * 图片的 Url 。
ImageUrl和ImageBase64必须提供一个，同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过 3840 x 2160pixel。
建议：
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片经过base64编码的内容。与ImageUrl同时存在时优先使用ImageUrl字段。
注意：图片需要base64编码，并且要去掉编码头部。
支持的图片格式：PNG、JPG、JPEG、暂不支持GIF格式。
支持的图片大小：所下载图片经Base64编码后不超过5M。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 人体检测模型开关，“true”为开启，“false”为关闭
默认为开启，开启后可先对图片中的人体进行检测之后再进行属性识别
                     */
                    bool m_enableDetect;
                    bool m_enableDetectHasBeenSet;

                    /**
                     * 人体优选开关，“true”为开启，“false”为关闭
开启后自动对检测质量低的人体进行优选过滤，有助于提高属性识别的准确率。
默认为开启，仅在人体检测开关开启时可配置，人体检测模型关闭时人体优选也关闭
人体优选开启时，检测到的人体分辨率不超过1920*1080 pixel
                     */
                    bool m_enablePreferred;
                    bool m_enablePreferredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSREQUEST_H_
