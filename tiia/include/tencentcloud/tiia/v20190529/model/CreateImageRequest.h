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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGEREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGEREQUEST_H_

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
                * CreateImage请求参数结构体
                */
                class CreateImageRequest : public AbstractModel
                {
                public:
                    CreateImageRequest();
                    ~CreateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图库ID。
                     * @return GroupId 图库ID。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库ID。
                     * @param GroupId 图库ID。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取物品ID，最多支持64个字符。 
若EntityId已存在，则对其追加图片。
                     * @return EntityId 物品ID，最多支持64个字符。 
若EntityId已存在，则对其追加图片。
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置物品ID，最多支持64个字符。 
若EntityId已存在，则对其追加图片。
                     * @param EntityId 物品ID，最多支持64个字符。 
若EntityId已存在，则对其追加图片。
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取图片名称，最多支持64个字符， 
同一个EntityId，最大支持5张图。如果图片名称已存在，则会更新库中的图片。
                     * @return PicName 图片名称，最多支持64个字符， 
同一个EntityId，最大支持5张图。如果图片名称已存在，则会更新库中的图片。
                     */
                    std::string GetPicName() const;

                    /**
                     * 设置图片名称，最多支持64个字符， 
同一个EntityId，最大支持5张图。如果图片名称已存在，则会更新库中的图片。
                     * @param PicName 图片名称，最多支持64个字符， 
同一个EntityId，最大支持5张图。如果图片名称已存在，则会更新库中的图片。
                     */
                    void SetPicName(const std::string& _picName);

                    /**
                     * 判断参数 PicName 是否已赋值
                     * @return PicName 是否已赋值
                     */
                    bool PicNameHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过2M。  
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片分辨率不超过1920*1080。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return ImageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过2M。  
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片分辨率不超过1920*1080。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过2M。  
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片分辨率不超过1920*1080。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param ImageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过2M。  
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片分辨率不超过1920*1080。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过2M。 
图片分辨率不超过1920*1080。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return ImageBase64 图片 base64 数据，base64 编码后大小不可超过2M。 
图片分辨率不超过1920*1080。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过2M。 
图片分辨率不超过1920*1080。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param ImageBase64 图片 base64 数据，base64 编码后大小不可超过2M。 
图片分辨率不超过1920*1080。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取用户自定义的内容，最多支持4096个字符，查询时原样带回。
                     * @return CustomContent 用户自定义的内容，最多支持4096个字符，查询时原样带回。
                     */
                    std::string GetCustomContent() const;

                    /**
                     * 设置用户自定义的内容，最多支持4096个字符，查询时原样带回。
                     * @param CustomContent 用户自定义的内容，最多支持4096个字符，查询时原样带回。
                     */
                    void SetCustomContent(const std::string& _customContent);

                    /**
                     * 判断参数 CustomContent 是否已赋值
                     * @return CustomContent 是否已赋值
                     */
                    bool CustomContentHasBeenSet() const;

                    /**
                     * 获取图片自定义标签，最多不超过10个，格式为JSON。
                     * @return Tags 图片自定义标签，最多不超过10个，格式为JSON。
                     */
                    std::string GetTags() const;

                    /**
                     * 设置图片自定义标签，最多不超过10个，格式为JSON。
                     * @param Tags 图片自定义标签，最多不超过10个，格式为JSON。
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 图库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 物品ID，最多支持64个字符。 
若EntityId已存在，则对其追加图片。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 图片名称，最多支持64个字符， 
同一个EntityId，最大支持5张图。如果图片名称已存在，则会更新库中的图片。
                     */
                    std::string m_picName;
                    bool m_picNameHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过2M。  
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片分辨率不超过1920*1080。
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过2M。 
图片分辨率不超过1920*1080。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 用户自定义的内容，最多支持4096个字符，查询时原样带回。
                     */
                    std::string m_customContent;
                    bool m_customContentHasBeenSet;

                    /**
                     * 图片自定义标签，最多不超过10个，格式为JSON。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGEREQUEST_H_
