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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DetectLiveFaceAccurate请求参数结构体
                */
                class DetectLiveFaceAccurateRequest : public AbstractModel
                {
                public:
                    DetectLiveFaceAccurateRequest();
                    ~DetectLiveFaceAccurateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
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
                     * 获取<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
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
                     * 获取<p>人脸识别服务所用的算法模型版本。目前入参支持“3.0“。</p>
                     * @return FaceModelVersion <p>人脸识别服务所用的算法模型版本。目前入参支持“3.0“。</p>
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置<p>人脸识别服务所用的算法模型版本。目前入参支持“3.0“。</p>
                     * @param _faceModelVersion <p>人脸识别服务所用的算法模型版本。目前入参支持“3.0“。</p>
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。 </li><li>图片的宽高比请接近 3:4，手机拍摄比例最佳。</li><li>人脸尺寸大于100X100像素。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>人脸识别服务所用的算法模型版本。目前入参支持“3.0“。</p>
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
