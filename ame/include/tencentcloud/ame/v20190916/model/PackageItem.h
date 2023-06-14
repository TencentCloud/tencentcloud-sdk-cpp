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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_PACKAGEITEM_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_PACKAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 曲库包歌曲信息
                */
                class PackageItem : public AbstractModel
                {
                public:
                    PackageItem();
                    ~PackageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
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
                     * 获取歌曲名
                     * @return TrackName 歌曲名
                     * 
                     */
                    std::string GetTrackName() const;

                    /**
                     * 设置歌曲名
                     * @param _trackName 歌曲名
                     * 
                     */
                    void SetTrackName(const std::string& _trackName);

                    /**
                     * 判断参数 TrackName 是否已赋值
                     * @return TrackName 是否已赋值
                     * 
                     */
                    bool TrackNameHasBeenSet() const;

                    /**
                     * 获取歌曲ID
                     * @return ItemID 歌曲ID
                     * 
                     */
                    std::string GetItemID() const;

                    /**
                     * 设置歌曲ID
                     * @param _itemID 歌曲ID
                     * 
                     */
                    void SetItemID(const std::string& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取专辑图片
                     * @return Img 专辑图片
                     * 
                     */
                    std::string GetImg() const;

                    /**
                     * 设置专辑图片
                     * @param _img 专辑图片
                     * 
                     */
                    void SetImg(const std::string& _img);

                    /**
                     * 判断参数 Img 是否已赋值
                     * @return Img 是否已赋值
                     * 
                     */
                    bool ImgHasBeenSet() const;

                    /**
                     * 获取歌手名
                     * @return ArtistName 歌手名
                     * 
                     */
                    std::string GetArtistName() const;

                    /**
                     * 设置歌手名
                     * @param _artistName 歌手名
                     * 
                     */
                    void SetArtistName(const std::string& _artistName);

                    /**
                     * 判断参数 ArtistName 是否已赋值
                     * @return ArtistName 是否已赋值
                     * 
                     */
                    bool ArtistNameHasBeenSet() const;

                    /**
                     * 获取歌曲时长
                     * @return Duration 歌曲时长
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置歌曲时长
                     * @param _duration 歌曲时长
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取授权区域，global: 全球 CN: 中国
                     * @return AuthorizedArea 授权区域，global: 全球 CN: 中国
                     * 
                     */
                    std::string GetAuthorizedArea() const;

                    /**
                     * 设置授权区域，global: 全球 CN: 中国
                     * @param _authorizedArea 授权区域，global: 全球 CN: 中国
                     * 
                     */
                    void SetAuthorizedArea(const std::string& _authorizedArea);

                    /**
                     * 判断参数 AuthorizedArea 是否已赋值
                     * @return AuthorizedArea 是否已赋值
                     * 
                     */
                    bool AuthorizedAreaHasBeenSet() const;

                    /**
                     * 获取标签数组
                     * @return Tags 标签数组
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签数组
                     * @param _tags 标签数组
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 订单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 歌曲名
                     */
                    std::string m_trackName;
                    bool m_trackNameHasBeenSet;

                    /**
                     * 歌曲ID
                     */
                    std::string m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * 专辑图片
                     */
                    std::string m_img;
                    bool m_imgHasBeenSet;

                    /**
                     * 歌手名
                     */
                    std::string m_artistName;
                    bool m_artistNameHasBeenSet;

                    /**
                     * 歌曲时长
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 授权区域，global: 全球 CN: 中国
                     */
                    std::string m_authorizedArea;
                    bool m_authorizedAreaHasBeenSet;

                    /**
                     * 标签数组
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_PACKAGEITEM_H_
