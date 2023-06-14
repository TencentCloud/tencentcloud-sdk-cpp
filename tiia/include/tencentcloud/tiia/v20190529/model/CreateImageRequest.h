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
#include <tencentcloud/tiia/v20190529/model/Rect.h>


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
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库ID。
                     * @param _groupId 图库ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取物品ID，最多支持64个字符。 
一个物品ID可以包含多张图片，若EntityId已存在，则对其追加图片。同一个EntityId，最大支持10张图。
                     * @return EntityId 物品ID，最多支持64个字符。 
一个物品ID可以包含多张图片，若EntityId已存在，则对其追加图片。同一个EntityId，最大支持10张图。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置物品ID，最多支持64个字符。 
一个物品ID可以包含多张图片，若EntityId已存在，则对其追加图片。同一个EntityId，最大支持10张图。
                     * @param _entityId 物品ID，最多支持64个字符。 
一个物品ID可以包含多张图片，若EntityId已存在，则对其追加图片。同一个EntityId，最大支持10张图。
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取图片名称，最多支持64个字符， 
PicName唯一确定一张图片，具有唯一性。
                     * @return PicName 图片名称，最多支持64个字符， 
PicName唯一确定一张图片，具有唯一性。
                     * 
                     */
                    std::string GetPicName() const;

                    /**
                     * 设置图片名称，最多支持64个字符， 
PicName唯一确定一张图片，具有唯一性。
                     * @param _picName 图片名称，最多支持64个字符， 
PicName唯一确定一张图片，具有唯一性。
                     * 
                     */
                    void SetPicName(const std::string& _picName);

                    /**
                     * 判断参数 PicName 是否已赋值
                     * @return PicName 是否已赋值
                     * 
                     */
                    bool PicNameHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。  
ImageUrl和ImageBase64必须提供一个，如果都提供，只使用ImageUrl。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
建议：
• 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过5M。  
ImageUrl和ImageBase64必须提供一个，如果都提供，只使用ImageUrl。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
建议：
• 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。  
ImageUrl和ImageBase64必须提供一个，如果都提供，只使用ImageUrl。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
建议：
• 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过5M。  
ImageUrl和ImageBase64必须提供一个，如果都提供，只使用ImageUrl。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
建议：
• 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
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
                     * 获取图片自定义备注内容，最多支持4096个字符，查询时原样带回。
                     * @return CustomContent 图片自定义备注内容，最多支持4096个字符，查询时原样带回。
                     * 
                     */
                    std::string GetCustomContent() const;

                    /**
                     * 设置图片自定义备注内容，最多支持4096个字符，查询时原样带回。
                     * @param _customContent 图片自定义备注内容，最多支持4096个字符，查询时原样带回。
                     * 
                     */
                    void SetCustomContent(const std::string& _customContent);

                    /**
                     * 判断参数 CustomContent 是否已赋值
                     * @return CustomContent 是否已赋值
                     * 
                     */
                    bool CustomContentHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。 
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
                     * @return ImageBase64 图片 base64 数据，base64 编码后大小不可超过5M。 
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。 
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
                     * @param _imageBase64 图片 base64 数据，base64 编码后大小不可超过5M。 
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
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
                     * 获取图片自定义标签，最多不超过10个，格式为JSON。
                     * @return Tags 图片自定义标签，最多不超过10个，格式为JSON。
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置图片自定义标签，最多不超过10个，格式为JSON。
                     * @param _tags 图片自定义标签，最多不超过10个，格式为JSON。
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否需要启用主体识别，默认为**TRUE**。
• 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体创建图片并进行主体识别。主体识别结果可在**Response**中获取。
• 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图创建图片。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * @return EnableDetect 是否需要启用主体识别，默认为**TRUE**。
• 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体创建图片并进行主体识别。主体识别结果可在**Response**中获取。
• 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图创建图片。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * 
                     */
                    bool GetEnableDetect() const;

                    /**
                     * 设置是否需要启用主体识别，默认为**TRUE**。
• 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体创建图片并进行主体识别。主体识别结果可在**Response**中获取。
• 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图创建图片。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * @param _enableDetect 是否需要启用主体识别，默认为**TRUE**。
• 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体创建图片并进行主体识别。主体识别结果可在**Response**中获取。
• 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图创建图片。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * 
                     */
                    void SetEnableDetect(const bool& _enableDetect);

                    /**
                     * 判断参数 EnableDetect 是否已赋值
                     * @return EnableDetect 是否已赋值
                     * 
                     */
                    bool EnableDetectHasBeenSet() const;

                    /**
                     * 获取图像类目ID。
若设置类目ID，提取以下类目的主体创建图片。
类目取值说明：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * @return CategoryId 图像类目ID。
若设置类目ID，提取以下类目的主体创建图片。
类目取值说明：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置图像类目ID。
若设置类目ID，提取以下类目的主体创建图片。
类目取值说明：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * @param _categoryId 图像类目ID。
若设置类目ID，提取以下类目的主体创建图片。
类目取值说明：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取图像主体区域。
若设置主体区域，提取指定的区域创建图片。
                     * @return ImageRect 图像主体区域。
若设置主体区域，提取指定的区域创建图片。
                     * 
                     */
                    Rect GetImageRect() const;

                    /**
                     * 设置图像主体区域。
若设置主体区域，提取指定的区域创建图片。
                     * @param _imageRect 图像主体区域。
若设置主体区域，提取指定的区域创建图片。
                     * 
                     */
                    void SetImageRect(const Rect& _imageRect);

                    /**
                     * 判断参数 ImageRect 是否已赋值
                     * @return ImageRect 是否已赋值
                     * 
                     */
                    bool ImageRectHasBeenSet() const;

                private:

                    /**
                     * 图库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 物品ID，最多支持64个字符。 
一个物品ID可以包含多张图片，若EntityId已存在，则对其追加图片。同一个EntityId，最大支持10张图。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 图片名称，最多支持64个字符， 
PicName唯一确定一张图片，具有唯一性。
                     */
                    std::string m_picName;
                    bool m_picNameHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。  
ImageUrl和ImageBase64必须提供一个，如果都提供，只使用ImageUrl。
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：对应图片 base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
建议：
• 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的Url速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片自定义备注内容，最多支持4096个字符，查询时原样带回。
                     */
                    std::string m_customContent;
                    bool m_customContentHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。 
图片限制：
• 图片格式：支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
• 图片大小：base64 编码后大小不可超过5M。图片分辨率不超过4096\*4096。
• 如果在商品图像搜索中开启主体识别，分辨率不超过2000\*2000，图片长宽比小于10。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片自定义标签，最多不超过10个，格式为JSON。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否需要启用主体识别，默认为**TRUE**。
• 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体创建图片并进行主体识别。主体识别结果可在**Response**中获取。
• 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图创建图片。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     */
                    bool m_enableDetect;
                    bool m_enableDetectHasBeenSet;

                    /**
                     * 图像类目ID。
若设置类目ID，提取以下类目的主体创建图片。
类目取值说明：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
**<font color=#1E90FF>注意：仅服务类型为商品图像搜索时才生效。</font>**
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 图像主体区域。
若设置主体区域，提取指定的区域创建图片。
                     */
                    Rect m_imageRect;
                    bool m_imageRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CREATEIMAGEREQUEST_H_
