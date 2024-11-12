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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACEREQUEST_H_

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
                * AnalyzeFace请求参数结构体
                */
                class AnalyzeFaceRequest : public AbstractModel
                {
                public:
                    AnalyzeFaceRequest();
                    ~AnalyzeFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检测模式。
- 取值范围：
0 为检测所有出现的人脸。
1 为检测面积最大的人脸。
- 默认为 0。
- 最多返回 10 张人脸的五官定位（人脸关键点）具体信息。
                     * @return Mode 检测模式。
- 取值范围：
0 为检测所有出现的人脸。
1 为检测面积最大的人脸。
- 默认为 0。
- 最多返回 10 张人脸的五官定位（人脸关键点）具体信息。
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置检测模式。
- 取值范围：
0 为检测所有出现的人脸。
1 为检测面积最大的人脸。
- 默认为 0。
- 最多返回 10 张人脸的五官定位（人脸关键点）具体信息。
                     * @param _mode 检测模式。
- 取值范围：
0 为检测所有出现的人脸。
1 为检测面积最大的人脸。
- 默认为 0。
- 最多返回 10 张人脸的五官定位（人脸关键点）具体信息。
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * @return FaceModelVersion 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * @param _faceModelVersion 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取是否开启图片旋转识别支持。
- 0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @return NeedRotateDetection 是否开启图片旋转识别支持。
- 0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置是否开启图片旋转识别支持。
- 0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @param _needRotateDetection 是否开启图片旋转识别支持。
- 0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                private:

                    /**
                     * 检测模式。
- 取值范围：
0 为检测所有出现的人脸。
1 为检测面积最大的人脸。
- 默认为 0。
- 最多返回 10 张人脸的五官定位（人脸关键点）具体信息。
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 人脸识别服务所用的算法模型版本。
- 目前入参支持 “2.0”和“3.0“ 两个输入。
- 2020年4月2日开始，默认为“3.0”，之前使用过本接口的账号若未填写本参数默认为“2.0”。
- 2020年11月26日后开通服务的账号仅支持输入“3.0”。
- 不同算法模型版本对应的人脸识别算法不同，新版本的整体效果会优于旧版本，建议使用“3.0”版本。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * 是否开启图片旋转识别支持。
- 0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_ANALYZEFACEREQUEST_H_
