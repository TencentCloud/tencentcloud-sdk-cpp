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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_TRACE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_TRACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/BodyRect.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人体动作轨迹信息
                */
                class Trace : public AbstractModel
                {
                public:
                    Trace();
                    ~Trace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体动作轨迹图片 Base64 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Images 人体动作轨迹图片 Base64 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置人体动作轨迹图片 Base64 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _images 人体动作轨迹图片 Base64 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取人体动作轨迹图片 Url 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
Urls、Images必须提供一个，如果都提供，只使用 Urls。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Urls 人体动作轨迹图片 Url 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
Urls、Images必须提供一个，如果都提供，只使用 Urls。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置人体动作轨迹图片 Url 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
Urls、Images必须提供一个，如果都提供，只使用 Urls。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _urls 人体动作轨迹图片 Url 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
Urls、Images必须提供一个，如果都提供，只使用 Urls。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取若输入的Images 和 Urls 是已经裁剪后的人体小图，则可以忽略本参数。 
若否，或图片中包含多个人体，则需要通过本参数来指定图片中的人体框。 
顺序对应 Images 或 Urls 中的顺序。  
当不输入本参数时，我们将认为输入图片已是经过裁剪后的人体小图，不会进行人体检测而直接进行特征提取处理。
                     * @return BodyRects 若输入的Images 和 Urls 是已经裁剪后的人体小图，则可以忽略本参数。 
若否，或图片中包含多个人体，则需要通过本参数来指定图片中的人体框。 
顺序对应 Images 或 Urls 中的顺序。  
当不输入本参数时，我们将认为输入图片已是经过裁剪后的人体小图，不会进行人体检测而直接进行特征提取处理。
                     * 
                     */
                    std::vector<BodyRect> GetBodyRects() const;

                    /**
                     * 设置若输入的Images 和 Urls 是已经裁剪后的人体小图，则可以忽略本参数。 
若否，或图片中包含多个人体，则需要通过本参数来指定图片中的人体框。 
顺序对应 Images 或 Urls 中的顺序。  
当不输入本参数时，我们将认为输入图片已是经过裁剪后的人体小图，不会进行人体检测而直接进行特征提取处理。
                     * @param _bodyRects 若输入的Images 和 Urls 是已经裁剪后的人体小图，则可以忽略本参数。 
若否，或图片中包含多个人体，则需要通过本参数来指定图片中的人体框。 
顺序对应 Images 或 Urls 中的顺序。  
当不输入本参数时，我们将认为输入图片已是经过裁剪后的人体小图，不会进行人体检测而直接进行特征提取处理。
                     * 
                     */
                    void SetBodyRects(const std::vector<BodyRect>& _bodyRects);

                    /**
                     * 判断参数 BodyRects 是否已赋值
                     * @return BodyRects 是否已赋值
                     * 
                     */
                    bool BodyRectsHasBeenSet() const;

                private:

                    /**
                     * 人体动作轨迹图片 Base64 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 人体动作轨迹图片 Url 数组。 
数组长度最小为1最大为5。 
单个图片 base64 编码后大小不可超过2M。 
Urls、Images必须提供一个，如果都提供，只使用 Urls。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 若输入的Images 和 Urls 是已经裁剪后的人体小图，则可以忽略本参数。 
若否，或图片中包含多个人体，则需要通过本参数来指定图片中的人体框。 
顺序对应 Images 或 Urls 中的顺序。  
当不输入本参数时，我们将认为输入图片已是经过裁剪后的人体小图，不会进行人体检测而直接进行特征提取处理。
                     */
                    std::vector<BodyRect> m_bodyRects;
                    bool m_bodyRectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_TRACE_H_
