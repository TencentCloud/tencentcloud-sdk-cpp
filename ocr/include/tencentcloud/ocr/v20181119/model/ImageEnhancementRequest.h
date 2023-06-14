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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTREQUEST_H_

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
                * ImageEnhancement请求参数结构体
                */
                class ImageEnhancementRequest : public AbstractModel
                {
                public:
                    ImageEnhancementRequest();
                    ~ImageEnhancementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
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
                     * 获取图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
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
                     * 获取默认为空，ReturnImage的取值以及含义如下：
“preprocess”: 返回预处理后的图片数据
“origin”：返回原图片数据
" ":不返回图片数据
                     * @return ReturnImage 默认为空，ReturnImage的取值以及含义如下：
“preprocess”: 返回预处理后的图片数据
“origin”：返回原图片数据
" ":不返回图片数据
                     * 
                     */
                    std::string GetReturnImage() const;

                    /**
                     * 设置默认为空，ReturnImage的取值以及含义如下：
“preprocess”: 返回预处理后的图片数据
“origin”：返回原图片数据
" ":不返回图片数据
                     * @param _returnImage 默认为空，ReturnImage的取值以及含义如下：
“preprocess”: 返回预处理后的图片数据
“origin”：返回原图片数据
" ":不返回图片数据
                     * 
                     */
                    void SetReturnImage(const std::string& _returnImage);

                    /**
                     * 判断参数 ReturnImage 是否已赋值
                     * @return ReturnImage 是否已赋值
                     * 
                     */
                    bool ReturnImageHasBeenSet() const;

                    /**
                     * 获取默认值为1，指定图像增强方法：
1：切边增强
2：弯曲矫正
202：黑白模式
204：提亮模式
205：灰度模式
207：省墨模式
208：文字锐化（适合非彩色图片）
300:自动增强（自动从301～304选择任务类型）
301：去摩尔纹
302：去除阴影
303：去除模糊 
304：去除过曝
                     * @return TaskType 默认值为1，指定图像增强方法：
1：切边增强
2：弯曲矫正
202：黑白模式
204：提亮模式
205：灰度模式
207：省墨模式
208：文字锐化（适合非彩色图片）
300:自动增强（自动从301～304选择任务类型）
301：去摩尔纹
302：去除阴影
303：去除模糊 
304：去除过曝
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置默认值为1，指定图像增强方法：
1：切边增强
2：弯曲矫正
202：黑白模式
204：提亮模式
205：灰度模式
207：省墨模式
208：文字锐化（适合非彩色图片）
300:自动增强（自动从301～304选择任务类型）
301：去摩尔纹
302：去除阴影
303：去除模糊 
304：去除过曝
                     * @param _taskType 默认值为1，指定图像增强方法：
1：切边增强
2：弯曲矫正
202：黑白模式
204：提亮模式
205：灰度模式
207：省墨模式
208：文字锐化（适合非彩色图片）
300:自动增强（自动从301～304选择任务类型）
301：去摩尔纹
302：去除阴影
303：去除模糊 
304：去除过曝
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 默认为空，ReturnImage的取值以及含义如下：
“preprocess”: 返回预处理后的图片数据
“origin”：返回原图片数据
" ":不返回图片数据
                     */
                    std::string m_returnImage;
                    bool m_returnImageHasBeenSet;

                    /**
                     * 默认值为1，指定图像增强方法：
1：切边增强
2：弯曲矫正
202：黑白模式
204：提亮模式
205：灰度模式
207：省墨模式
208：文字锐化（适合非彩色图片）
300:自动增强（自动从301～304选择任务类型）
301：去摩尔纹
302：去除阴影
303：去除模糊 
304：去除过曝
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IMAGEENHANCEMENTREQUEST_H_
