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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/AttributesOptions.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DetectBody请求参数结构体
                */
                class DetectBodyRequest : public AbstractModel
                {
                public:
                    DetectBodyRequest();
                    ~DetectBodyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人体图片 Base64 数据。
图片 base64 编码后大小不可超过5M。
图片分辨率不得超过 1920 * 1080 。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 人体图片 Base64 数据。
图片 base64 编码后大小不可超过5M。
图片分辨率不得超过 1920 * 1080 。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置人体图片 Base64 数据。
图片 base64 编码后大小不可超过5M。
图片分辨率不得超过 1920 * 1080 。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 人体图片 Base64 数据。
图片 base64 编码后大小不可超过5M。
图片分辨率不得超过 1920 * 1080 。
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
                     * 获取最多检测的人体数目，默认值为1（仅检测图片中面积最大的那个人体）； 最大值10 ，检测图片中面积最大的10个人体。
                     * @return MaxBodyNum 最多检测的人体数目，默认值为1（仅检测图片中面积最大的那个人体）； 最大值10 ，检测图片中面积最大的10个人体。
                     * 
                     */
                    uint64_t GetMaxBodyNum() const;

                    /**
                     * 设置最多检测的人体数目，默认值为1（仅检测图片中面积最大的那个人体）； 最大值10 ，检测图片中面积最大的10个人体。
                     * @param _maxBodyNum 最多检测的人体数目，默认值为1（仅检测图片中面积最大的那个人体）； 最大值10 ，检测图片中面积最大的10个人体。
                     * 
                     */
                    void SetMaxBodyNum(const uint64_t& _maxBodyNum);

                    /**
                     * 判断参数 MaxBodyNum 是否已赋值
                     * @return MaxBodyNum 是否已赋值
                     * 
                     */
                    bool MaxBodyNumHasBeenSet() const;

                    /**
                     * 获取人体图片 Url 。
Url、Image必须提供一个，如果都提供，只使用 Url。
图片 base64 编码后大小不可超过5M。 
图片分辨率不得超过 1920 * 1080 。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 人体图片 Url 。
Url、Image必须提供一个，如果都提供，只使用 Url。
图片 base64 编码后大小不可超过5M。 
图片分辨率不得超过 1920 * 1080 。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置人体图片 Url 。
Url、Image必须提供一个，如果都提供，只使用 Url。
图片 base64 编码后大小不可超过5M。 
图片分辨率不得超过 1920 * 1080 。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 人体图片 Url 。
Url、Image必须提供一个，如果都提供，只使用 Url。
图片 base64 编码后大小不可超过5M。 
图片分辨率不得超过 1920 * 1080 。
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
                     * 获取是否返回年龄、性别、朝向等属性。 
可选项有 Age、Bag、Gender、UpperBodyCloth、LowerBodyCloth、Orientation。  
如果此参数为空则为不需要返回。 
需要将属性组成一个用逗号分隔的字符串，属性之间的顺序没有要求。 
关于各属性的详细描述，参见下文出参。 
最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的 BodyAttributesInfo 不具备参考意义。
                     * @return AttributesOptions 是否返回年龄、性别、朝向等属性。 
可选项有 Age、Bag、Gender、UpperBodyCloth、LowerBodyCloth、Orientation。  
如果此参数为空则为不需要返回。 
需要将属性组成一个用逗号分隔的字符串，属性之间的顺序没有要求。 
关于各属性的详细描述，参见下文出参。 
最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的 BodyAttributesInfo 不具备参考意义。
                     * 
                     */
                    AttributesOptions GetAttributesOptions() const;

                    /**
                     * 设置是否返回年龄、性别、朝向等属性。 
可选项有 Age、Bag、Gender、UpperBodyCloth、LowerBodyCloth、Orientation。  
如果此参数为空则为不需要返回。 
需要将属性组成一个用逗号分隔的字符串，属性之间的顺序没有要求。 
关于各属性的详细描述，参见下文出参。 
最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的 BodyAttributesInfo 不具备参考意义。
                     * @param _attributesOptions 是否返回年龄、性别、朝向等属性。 
可选项有 Age、Bag、Gender、UpperBodyCloth、LowerBodyCloth、Orientation。  
如果此参数为空则为不需要返回。 
需要将属性组成一个用逗号分隔的字符串，属性之间的顺序没有要求。 
关于各属性的详细描述，参见下文出参。 
最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的 BodyAttributesInfo 不具备参考意义。
                     * 
                     */
                    void SetAttributesOptions(const AttributesOptions& _attributesOptions);

                    /**
                     * 判断参数 AttributesOptions 是否已赋值
                     * @return AttributesOptions 是否已赋值
                     * 
                     */
                    bool AttributesOptionsHasBeenSet() const;

                private:

                    /**
                     * 人体图片 Base64 数据。
图片 base64 编码后大小不可超过5M。
图片分辨率不得超过 1920 * 1080 。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 最多检测的人体数目，默认值为1（仅检测图片中面积最大的那个人体）； 最大值10 ，检测图片中面积最大的10个人体。
                     */
                    uint64_t m_maxBodyNum;
                    bool m_maxBodyNumHasBeenSet;

                    /**
                     * 人体图片 Url 。
Url、Image必须提供一个，如果都提供，只使用 Url。
图片 base64 编码后大小不可超过5M。 
图片分辨率不得超过 1920 * 1080 。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 是否返回年龄、性别、朝向等属性。 
可选项有 Age、Bag、Gender、UpperBodyCloth、LowerBodyCloth、Orientation。  
如果此参数为空则为不需要返回。 
需要将属性组成一个用逗号分隔的字符串，属性之间的顺序没有要求。 
关于各属性的详细描述，参见下文出参。 
最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的 BodyAttributesInfo 不具备参考意义。
                     */
                    AttributesOptions m_attributesOptions;
                    bool m_attributesOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYREQUEST_H_
