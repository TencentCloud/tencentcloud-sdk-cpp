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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYPICREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * BeautifyPic请求参数结构体
                */
                class BeautifyPicRequest : public AbstractModel
                {
                public:
                    BeautifyPicRequest();
                    ~BeautifyPicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M，单边分辨率不超过4000。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @return Image 图片 base64 数据，base64 编码后大小不可超过5M，单边分辨率不超过4000。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M，单边分辨率不超过4000。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @param _image 图片 base64 数据，base64 编码后大小不可超过5M，单边分辨率不超过4000。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
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
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。，单边分辨率不超过4000。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。  
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @return Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。，单边分辨率不超过4000。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。  
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。，单边分辨率不超过4000。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。  
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     * @param _url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。，单边分辨率不超过4000。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。  
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
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
                     * 获取美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * @return Whitening 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * 
                     */
                    uint64_t GetWhitening() const;

                    /**
                     * 设置美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * @param _whitening 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     * 
                     */
                    void SetWhitening(const uint64_t& _whitening);

                    /**
                     * 判断参数 Whitening 是否已赋值
                     * @return Whitening 是否已赋值
                     * 
                     */
                    bool WhiteningHasBeenSet() const;

                    /**
                     * 获取磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值10。
                     * @return Smoothing 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值10。
                     * 
                     */
                    uint64_t GetSmoothing() const;

                    /**
                     * 设置磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值10。
                     * @param _smoothing 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值10。
                     * 
                     */
                    void SetSmoothing(const uint64_t& _smoothing);

                    /**
                     * 判断参数 Smoothing 是否已赋值
                     * @return Smoothing 是否已赋值
                     * 
                     */
                    bool SmoothingHasBeenSet() const;

                    /**
                     * 获取瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * @return FaceLifting 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * 
                     */
                    uint64_t GetFaceLifting() const;

                    /**
                     * 设置瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * @param _faceLifting 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     * 
                     */
                    void SetFaceLifting(const uint64_t& _faceLifting);

                    /**
                     * 判断参数 FaceLifting 是否已赋值
                     * @return FaceLifting 是否已赋值
                     * 
                     */
                    bool FaceLiftingHasBeenSet() const;

                    /**
                     * 获取大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * @return EyeEnlarging 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * 
                     */
                    uint64_t GetEyeEnlarging() const;

                    /**
                     * 设置大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * @param _eyeEnlarging 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     * 
                     */
                    void SetEyeEnlarging(const uint64_t& _eyeEnlarging);

                    /**
                     * 判断参数 EyeEnlarging 是否已赋值
                     * @return EyeEnlarging 是否已赋值
                     * 
                     */
                    bool EyeEnlargingHasBeenSet() const;

                    /**
                     * 获取返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * @return RspImgType 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     * @param _rspImgType 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
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
                     * 图片 base64 数据，base64 编码后大小不可超过5M，单边分辨率不超过4000。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。，单边分辨率不超过4000。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。  
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
暂不支持带有alpha透明通道的图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 美白程度，取值范围[0,100]。0不美白，100代表最高程度。默认值30。
                     */
                    uint64_t m_whitening;
                    bool m_whiteningHasBeenSet;

                    /**
                     * 磨皮程度，取值范围[0,100]。0不磨皮，100代表最高程度。默认值10。
                     */
                    uint64_t m_smoothing;
                    bool m_smoothingHasBeenSet;

                    /**
                     * 瘦脸程度，取值范围[0,100]。0不瘦脸，100代表最高程度。默认值70。
                     */
                    uint64_t m_faceLifting;
                    bool m_faceLiftingHasBeenSet;

                    /**
                     * 大眼程度，取值范围[0,100]。0不大眼，100代表最高程度。默认值70。
                     */
                    uint64_t m_eyeEnlarging;
                    bool m_eyeEnlargingHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url ) ，二选一。url有效期为1天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYPICREQUEST_H_
