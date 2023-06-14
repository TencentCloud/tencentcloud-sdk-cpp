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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_DOWNLOADINFO_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_DOWNLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ape/v20200513/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * 图片下载信息
                */
                class DownloadInfo : public AbstractModel
                {
                public:
                    DownloadInfo();
                    ~DownloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片基础信息
                     * @return ImageInfo 图片基础信息
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置图片基础信息
                     * @param _imageInfo 图片基础信息
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取图片原图URL
                     * @return ImageUrl 图片原图URL
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片原图URL
                     * @param _imageUrl 图片原图URL
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
                     * 获取图片缩略图URL
                     * @return ImageThumbUrl 图片缩略图URL
                     * 
                     */
                    std::string GetImageThumbUrl() const;

                    /**
                     * 设置图片缩略图URL
                     * @param _imageThumbUrl 图片缩略图URL
                     * 
                     */
                    void SetImageThumbUrl(const std::string& _imageThumbUrl);

                    /**
                     * 判断参数 ImageThumbUrl 是否已赋值
                     * @return ImageThumbUrl 是否已赋值
                     * 
                     */
                    bool ImageThumbUrlHasBeenSet() const;

                    /**
                     * 获取订单Id
                     * @return OrderId 订单Id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单Id
                     * @param _orderId 订单Id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取订单创建时间
                     * @return OrderCreateTime 订单创建时间
                     * 
                     */
                    std::string GetOrderCreateTime() const;

                    /**
                     * 设置订单创建时间
                     * @param _orderCreateTime 订单创建时间
                     * 
                     */
                    void SetOrderCreateTime(const std::string& _orderCreateTime);

                    /**
                     * 判断参数 OrderCreateTime 是否已赋值
                     * @return OrderCreateTime 是否已赋值
                     * 
                     */
                    bool OrderCreateTimeHasBeenSet() const;

                    /**
                     * 获取下载Id
                     * @return DownloadId 下载Id
                     * 
                     */
                    std::string GetDownloadId() const;

                    /**
                     * 设置下载Id
                     * @param _downloadId 下载Id
                     * 
                     */
                    void SetDownloadId(const std::string& _downloadId);

                    /**
                     * 判断参数 DownloadId 是否已赋值
                     * @return DownloadId 是否已赋值
                     * 
                     */
                    bool DownloadIdHasBeenSet() const;

                    /**
                     * 获取下载时间
                     * @return DownloadTime 下载时间
                     * 
                     */
                    std::string GetDownloadTime() const;

                    /**
                     * 设置下载时间
                     * @param _downloadTime 下载时间
                     * 
                     */
                    void SetDownloadTime(const std::string& _downloadTime);

                    /**
                     * 判断参数 DownloadTime 是否已赋值
                     * @return DownloadTime 是否已赋值
                     * 
                     */
                    bool DownloadTimeHasBeenSet() const;

                    /**
                     * 获取图片购买类型，单张/会员
                     * @return ConsumeType 图片购买类型，单张/会员
                     * 
                     */
                    int64_t GetConsumeType() const;

                    /**
                     * 设置图片购买类型，单张/会员
                     * @param _consumeType 图片购买类型，单张/会员
                     * 
                     */
                    void SetConsumeType(const int64_t& _consumeType);

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取是否首次下载
                     * @return FirstDownload 是否首次下载
                     * 
                     */
                    bool GetFirstDownload() const;

                    /**
                     * 设置是否首次下载
                     * @param _firstDownload 是否首次下载
                     * 
                     */
                    void SetFirstDownload(const bool& _firstDownload);

                    /**
                     * 判断参数 FirstDownload 是否已赋值
                     * @return FirstDownload 是否已赋值
                     * 
                     */
                    bool FirstDownloadHasBeenSet() const;

                private:

                    /**
                     * 图片基础信息
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 图片原图URL
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 图片缩略图URL
                     */
                    std::string m_imageThumbUrl;
                    bool m_imageThumbUrlHasBeenSet;

                    /**
                     * 订单Id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 订单创建时间
                     */
                    std::string m_orderCreateTime;
                    bool m_orderCreateTimeHasBeenSet;

                    /**
                     * 下载Id
                     */
                    std::string m_downloadId;
                    bool m_downloadIdHasBeenSet;

                    /**
                     * 下载时间
                     */
                    std::string m_downloadTime;
                    bool m_downloadTimeHasBeenSet;

                    /**
                     * 图片购买类型，单张/会员
                     */
                    int64_t m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * 是否首次下载
                     */
                    bool m_firstDownload;
                    bool m_firstDownloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_DOWNLOADINFO_H_
