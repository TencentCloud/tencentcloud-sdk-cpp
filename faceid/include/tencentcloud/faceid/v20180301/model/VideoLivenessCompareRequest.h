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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPAREREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * VideoLivenessCompare请求参数结构体
                */
                class VideoLivenessCompareRequest : public AbstractModel
                {
                public:
                    VideoLivenessCompareRequest();
                    ~VideoLivenessCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于人脸比对照片的URL地址；图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。

图片仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     * @return ImageUrl 用于人脸比对照片的URL地址；图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。

图片仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于人脸比对照片的URL地址；图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。

图片仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     * @param ImageUrl 用于人脸比对照片的URL地址；图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。

图片仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取比对图片的32位Md5值。
                     * @return ImageMd5 比对图片的32位Md5值。
                     */
                    std::string GetImageMd5() const;

                    /**
                     * 设置比对图片的32位Md5值。
                     * @param ImageMd5 比对图片的32位Md5值。
                     */
                    void SetImageMd5(const std::string& _imageMd5);

                    /**
                     * 判断参数 ImageMd5 是否已赋值
                     * @return ImageMd5 是否已赋值
                     */
                    bool ImageMd5HasBeenSet() const;

                    /**
                     * 获取用于活体检测的视频Url 地址。视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。

视频仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     * @return VideoUrl 用于活体检测的视频Url 地址。视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。

视频仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置用于活体检测的视频Url 地址。视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。

视频仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     * @param VideoUrl 用于活体检测的视频Url 地址。视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。

视频仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取视频的32位Md5值。
                     * @return VideoMd5 视频的32位Md5值。
                     */
                    std::string GetVideoMd5() const;

                    /**
                     * 设置视频的32位Md5值。
                     * @param VideoMd5 视频的32位Md5值。
                     */
                    void SetVideoMd5(const std::string& _videoMd5);

                    /**
                     * 判断参数 VideoMd5 是否已赋值
                     * @return VideoMd5 是否已赋值
                     */
                    bool VideoMd5HasBeenSet() const;

                    /**
                     * 获取活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @return LivenessType 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @param LivenessType 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取数字模式传参：传数字验证码，需自定义四位数字验证码；
动作模式传参：传动作顺序，需自定义动作顺序(2,1 or 1,2)；
静默模式传参：空。
                     * @return ValidateData 数字模式传参：传数字验证码，需自定义四位数字验证码；
动作模式传参：传动作顺序，需自定义动作顺序(2,1 or 1,2)；
静默模式传参：空。
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置数字模式传参：传数字验证码，需自定义四位数字验证码；
动作模式传参：传动作顺序，需自定义动作顺序(2,1 or 1,2)；
静默模式传参：空。
                     * @param ValidateData 数字模式传参：传数字验证码，需自定义四位数字验证码；
动作模式传参：传动作顺序，需自定义动作顺序(2,1 or 1,2)；
静默模式传参：空。
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     */
                    bool ValidateDataHasBeenSet() const;

                private:

                    /**
                     * 用于人脸比对照片的URL地址；图片下载后经Base64编码后的数据大小不超过3M，仅支持jpg、png格式。

图片仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 比对图片的32位Md5值。
                     */
                    std::string m_imageMd5;
                    bool m_imageMd5HasBeenSet;

                    /**
                     * 用于活体检测的视频Url 地址。视频下载后经Base64编码后不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。

视频仅支持腾讯云同region的Cos地址，可保障更高的下载速度和稳定性，可使用CreateUploadUrl生成或自行购买Cos。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频的32位Md5值。
                     */
                    std::string m_videoMd5;
                    bool m_videoMd5HasBeenSet;

                    /**
                     * 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * 数字模式传参：传数字验证码，需自定义四位数字验证码；
动作模式传参：传动作顺序，需自定义动作顺序(2,1 or 1,2)；
静默模式传参：空。
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEOLIVENESSCOMPAREREQUEST_H_
