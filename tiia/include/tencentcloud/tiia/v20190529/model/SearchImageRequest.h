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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_SEARCHIMAGEREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_SEARCHIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/ImageRect.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * SearchImage请求参数结构体
                */
                class SearchImageRequest : public AbstractModel
                {
                public:
                    SearchImageRequest();
                    ~SearchImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图库名称。
                     * @return GroupId 图库名称。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库名称。
                     * @param GroupId 图库名称。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
图片分辨率不超4096\*4096。 
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     * @return ImageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
图片分辨率不超4096\*4096。 
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
图片分辨率不超4096\*4096。 
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     * @param ImageUrl 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
图片分辨率不超4096\*4096。 
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。 
图片分辨率不超过4096\*4096。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     * @return ImageBase64 图片 base64 数据，base64 编码后大小不可超过5M。 
图片分辨率不超过4096\*4096。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。 
图片分辨率不超过4096\*4096。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     * @param ImageBase64 图片 base64 数据，base64 编码后大小不可超过5M。 
图片分辨率不超过4096\*4096。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取返回数量，默认值为10，最大值为100。
                     * @return Limit 返回数量，默认值为10，最大值为100。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值为10，最大值为100。
                     * @param Limit 返回数量，默认值为10，最大值为100。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始序号，默认值为0。
                     * @return Offset 起始序号，默认值为0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始序号，默认值为0。
                     * @param Offset 起始序号，默认值为0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取出参Score中，只有超过**MatchThreshold**值的结果才会返回。默认为0
                     * @return MatchThreshold 出参Score中，只有超过**MatchThreshold**值的结果才会返回。默认为0
                     */
                    int64_t GetMatchThreshold() const;

                    /**
                     * 设置出参Score中，只有超过**MatchThreshold**值的结果才会返回。默认为0
                     * @param MatchThreshold 出参Score中，只有超过**MatchThreshold**值的结果才会返回。默认为0
                     */
                    void SetMatchThreshold(const int64_t& _matchThreshold);

                    /**
                     * 判断参数 MatchThreshold 是否已赋值
                     * @return MatchThreshold 是否已赋值
                     */
                    bool MatchThresholdHasBeenSet() const;

                    /**
                     * 获取针对入库时提交的Tags信息进行条件过滤。支持>、>=、 <、 <=、=，!=，多个条件之间支持AND和OR进行连接。
                     * @return Filter 针对入库时提交的Tags信息进行条件过滤。支持>、>=、 <、 <=、=，!=，多个条件之间支持AND和OR进行连接。
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置针对入库时提交的Tags信息进行条件过滤。支持>、>=、 <、 <=、=，!=，多个条件之间支持AND和OR进行连接。
                     * @param Filter 针对入库时提交的Tags信息进行条件过滤。支持>、>=、 <、 <=、=，!=，多个条件之间支持AND和OR进行连接。
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取图像主体区域。
若设置主体区域，提取指定的区域进行检索。
                     * @return ImageRect 图像主体区域。
若设置主体区域，提取指定的区域进行检索。
                     */
                    ImageRect GetImageRect() const;

                    /**
                     * 设置图像主体区域。
若设置主体区域，提取指定的区域进行检索。
                     * @param ImageRect 图像主体区域。
若设置主体区域，提取指定的区域进行检索。
                     */
                    void SetImageRect(const ImageRect& _imageRect);

                    /**
                     * 判断参数 ImageRect 是否已赋值
                     * @return ImageRect 是否已赋值
                     */
                    bool ImageRectHasBeenSet() const;

                    /**
                     * 获取是否需要启用主体识别，默认为**TRUE** 。
1. 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体进行检索并进行主体识别。主体识别结果可在**Response中**获取。
2. 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图检索图片。
注意：服务类型为商品图像搜索时生效。
                     * @return EnableDetect 是否需要启用主体识别，默认为**TRUE** 。
1. 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体进行检索并进行主体识别。主体识别结果可在**Response中**获取。
2. 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图检索图片。
注意：服务类型为商品图像搜索时生效。
                     */
                    bool GetEnableDetect() const;

                    /**
                     * 设置是否需要启用主体识别，默认为**TRUE** 。
1. 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体进行检索并进行主体识别。主体识别结果可在**Response中**获取。
2. 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图检索图片。
注意：服务类型为商品图像搜索时生效。
                     * @param EnableDetect 是否需要启用主体识别，默认为**TRUE** 。
1. 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体进行检索并进行主体识别。主体识别结果可在**Response中**获取。
2. 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图检索图片。
注意：服务类型为商品图像搜索时生效。
                     */
                    void SetEnableDetect(const bool& _enableDetect);

                    /**
                     * 判断参数 EnableDetect 是否已赋值
                     * @return EnableDetect 是否已赋值
                     */
                    bool EnableDetectHasBeenSet() const;

                    /**
                     * 获取图像类目ID。
若设置类目ID，提取对应类目的主体进行检索。
注意：服务类型为商品图像搜索时生效。
类目信息：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
                     * @return CategoryId 图像类目ID。
若设置类目ID，提取对应类目的主体进行检索。
注意：服务类型为商品图像搜索时生效。
类目信息：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置图像类目ID。
若设置类目ID，提取对应类目的主体进行检索。
注意：服务类型为商品图像搜索时生效。
类目信息：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
                     * @param CategoryId 图像类目ID。
若设置类目ID，提取对应类目的主体进行检索。
注意：服务类型为商品图像搜索时生效。
类目信息：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * 图库名称。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。 
图片分辨率不超4096\*4096。 
Url、Image必须提供一个，如果都提供，只使用 Url。 
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。 
图片分辨率不超过4096\*4096。 
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
注意：开启主体识别分辨率不超过2000\*2000，图片长宽比小于10（长/短 < 10）。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 返回数量，默认值为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始序号，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 出参Score中，只有超过**MatchThreshold**值的结果才会返回。默认为0
                     */
                    int64_t m_matchThreshold;
                    bool m_matchThresholdHasBeenSet;

                    /**
                     * 针对入库时提交的Tags信息进行条件过滤。支持>、>=、 <、 <=、=，!=，多个条件之间支持AND和OR进行连接。
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 图像主体区域。
若设置主体区域，提取指定的区域进行检索。
                     */
                    ImageRect m_imageRect;
                    bool m_imageRectHasBeenSet;

                    /**
                     * 是否需要启用主体识别，默认为**TRUE** 。
1. 为**TRUE**时，启用主体识别，返回主体信息。若没有指定**ImageRect**，自动提取最大面积主体进行检索并进行主体识别。主体识别结果可在**Response中**获取。
2. 为**FALSE**时，不启用主体识别，不返回主体信息。若没有指定**ImageRect**，以整张图检索图片。
注意：服务类型为商品图像搜索时生效。
                     */
                    bool m_enableDetect;
                    bool m_enableDetectHasBeenSet;

                    /**
                     * 图像类目ID。
若设置类目ID，提取对应类目的主体进行检索。
注意：服务类型为商品图像搜索时生效。
类目信息：
0：上衣。
1：裙装。
2：下装。
3：包。
4：鞋。
5：配饰。
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_SEARCHIMAGEREQUEST_H_
