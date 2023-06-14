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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DetectBodyJoints请求参数结构体
                */
                class DetectBodyJointsRequest : public AbstractModel
                {
                public:
                    DetectBodyJointsRequest();
                    ~DetectBodyJointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据，base64 编码后大小不可超过5M。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 图片 base64 数据，base64 编码后大小不可超过5M。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取人体局部关键点识别，开启后对人体局部图（例如部分身体部位）进行关键点识别，输出人体关键点坐标，默认不开启

注意：若开启人体局部图片关键点识别，则BoundBox、Confidence返回为空。
                     * @return LocalBodySwitch 人体局部关键点识别，开启后对人体局部图（例如部分身体部位）进行关键点识别，输出人体关键点坐标，默认不开启

注意：若开启人体局部图片关键点识别，则BoundBox、Confidence返回为空。
                     * 
                     */
                    bool GetLocalBodySwitch() const;

                    /**
                     * 设置人体局部关键点识别，开启后对人体局部图（例如部分身体部位）进行关键点识别，输出人体关键点坐标，默认不开启

注意：若开启人体局部图片关键点识别，则BoundBox、Confidence返回为空。
                     * @param _localBodySwitch 人体局部关键点识别，开启后对人体局部图（例如部分身体部位）进行关键点识别，输出人体关键点坐标，默认不开启

注意：若开启人体局部图片关键点识别，则BoundBox、Confidence返回为空。
                     * 
                     */
                    void SetLocalBodySwitch(const bool& _localBodySwitch);

                    /**
                     * 判断参数 LocalBodySwitch 是否已赋值
                     * @return LocalBodySwitch 是否已赋值
                     * 
                     */
                    bool LocalBodySwitchHasBeenSet() const;

                private:

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。  
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 人体局部关键点识别，开启后对人体局部图（例如部分身体部位）进行关键点识别，输出人体关键点坐标，默认不开启

注意：若开启人体局部图片关键点识别，则BoundBox、Confidence返回为空。
                     */
                    bool m_localBodySwitch;
                    bool m_localBodySwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSREQUEST_H_
