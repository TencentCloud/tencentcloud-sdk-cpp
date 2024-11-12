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
                     * 获取图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取人脸识别服务所用的算法模型版本。目前入参支持“3.0“。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。目前入参支持“3.0“。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置人脸识别服务所用的算法模型版本。目前入参支持“3.0“。
                     * @param _faceModelVersion 人脸识别服务所用的算法模型版本。目前入参支持“3.0“。
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
                     * 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- Url、Image必须提供一个，如果都提供，只使用 Url。 
- 图片的宽高比请接近 3:4，手机拍摄比例最佳。
- 人脸尺寸大于100X100像素。
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
- 图片格式支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。目前入参支持“3.0“。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DETECTLIVEFACEACCURATEREQUEST_H_
