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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELREQUEST_H_

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
                * DetectLabel请求参数结构体
                */
                class DetectLabelRequest : public AbstractModel
                {
                public:
                    DetectLabelRequest();
                    ~DetectLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片 Base64 编码数据。
与ImageUrl同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：经Base64编码后不超过4M。
**<font color=#1E90FF>注意：图片需要Base64编码，并且要去掉编码头部。</font>**
                     * @return ImageBase64 图片 Base64 编码数据。
与ImageUrl同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：经Base64编码后不超过4M。
**<font color=#1E90FF>注意：图片需要Base64编码，并且要去掉编码头部。</font>**
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片 Base64 编码数据。
与ImageUrl同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：经Base64编码后不超过4M。
**<font color=#1E90FF>注意：图片需要Base64编码，并且要去掉编码头部。</font>**
                     * @param _imageBase64 图片 Base64 编码数据。
与ImageUrl同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：经Base64编码后不超过4M。
**<font color=#1E90FF>注意：图片需要Base64编码，并且要去掉编码头部。</font>**
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
                     * 获取图片 URL 地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果； 
• 长宽比：长边:短边<5； 
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @return ImageUrl 图片 URL 地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果； 
• 长宽比：长边:短边<5； 
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片 URL 地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果； 
• 长宽比：长边:短边<5； 
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     * @param _imageUrl 图片 URL 地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果； 
• 长宽比：长边:短边<5； 
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
                     * 获取本次调用支持的识别场景，可选值如下：
• WEB，针对网络图片优化;
• CAMERA，针对手机摄像头拍摄图片优化;
• ALBUM，针对手机相册、网盘产品优化;
• NEWS，针对新闻、资讯、广电等行业优化；
如果不传此参数，则默认为WEB。

支持多场景（Scenes）一起检测。例如，使用 Scenes=["WEB", "CAMERA"]，即对一张图片使用两个模型同时检测，输出两套识别结果。
                     * @return Scenes 本次调用支持的识别场景，可选值如下：
• WEB，针对网络图片优化;
• CAMERA，针对手机摄像头拍摄图片优化;
• ALBUM，针对手机相册、网盘产品优化;
• NEWS，针对新闻、资讯、广电等行业优化；
如果不传此参数，则默认为WEB。

支持多场景（Scenes）一起检测。例如，使用 Scenes=["WEB", "CAMERA"]，即对一张图片使用两个模型同时检测，输出两套识别结果。
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置本次调用支持的识别场景，可选值如下：
• WEB，针对网络图片优化;
• CAMERA，针对手机摄像头拍摄图片优化;
• ALBUM，针对手机相册、网盘产品优化;
• NEWS，针对新闻、资讯、广电等行业优化；
如果不传此参数，则默认为WEB。

支持多场景（Scenes）一起检测。例如，使用 Scenes=["WEB", "CAMERA"]，即对一张图片使用两个模型同时检测，输出两套识别结果。
                     * @param _scenes 本次调用支持的识别场景，可选值如下：
• WEB，针对网络图片优化;
• CAMERA，针对手机摄像头拍摄图片优化;
• ALBUM，针对手机相册、网盘产品优化;
• NEWS，针对新闻、资讯、广电等行业优化；
如果不传此参数，则默认为WEB。

支持多场景（Scenes）一起检测。例如，使用 Scenes=["WEB", "CAMERA"]，即对一张图片使用两个模型同时检测，输出两套识别结果。
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                private:

                    /**
                     * 图片 Base64 编码数据。
与ImageUrl同时存在时优先使用ImageUrl字段。
图片限制：
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：经Base64编码后不超过4M。
**<font color=#1E90FF>注意：图片需要Base64编码，并且要去掉编码头部。</font>**
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片 URL 地址。 
图片限制： 
• 图片格式：PNG、JPG、JPEG、BMP。 
• 图片大小：所下载图片经Base64编码后不超过4M。图片下载时间不超过3秒。 
建议：
• 图片像素：大于50*50像素，否则影响识别效果； 
• 长宽比：长边:短边<5； 
• 接口响应时间会受到图片下载时间的影响，建议使用更可靠的存储服务，推荐将图片存储在腾讯云COS。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 本次调用支持的识别场景，可选值如下：
• WEB，针对网络图片优化;
• CAMERA，针对手机摄像头拍摄图片优化;
• ALBUM，针对手机相册、网盘产品优化;
• NEWS，针对新闻、资讯、广电等行业优化；
如果不传此参数，则默认为WEB。

支持多场景（Scenes）一起检测。例如，使用 Scenes=["WEB", "CAMERA"]，即对一张图片使用两个模型同时检测，输出两套识别结果。
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTLABELREQUEST_H_
