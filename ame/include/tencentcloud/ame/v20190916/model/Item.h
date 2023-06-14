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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_ITEM_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/DataInfo.h>
#include <tencentcloud/ame/v20190916/model/Album.h>
#include <tencentcloud/ame/v20190916/model/Artist.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 歌曲信息
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Song ID
                     * @return ItemID Song ID
                     * 
                     */
                    std::string GetItemID() const;

                    /**
                     * 设置Song ID
                     * @param _itemID Song ID
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
                     * 获取Song info
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataInfo Song info
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataInfo GetDataInfo() const;

                    /**
                     * 设置Song info
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataInfo Song info
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataInfo(const DataInfo& _dataInfo);

                    /**
                     * 判断参数 DataInfo 是否已赋值
                     * @return DataInfo 是否已赋值
                     * 
                     */
                    bool DataInfoHasBeenSet() const;

                    /**
                     * 获取专辑信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Album 专辑信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Album GetAlbum() const;

                    /**
                     * 设置专辑信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _album 专辑信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlbum(const Album& _album);

                    /**
                     * 判断参数 Album 是否已赋值
                     * @return Album 是否已赋值
                     * 
                     */
                    bool AlbumHasBeenSet() const;

                    /**
                     * 获取多个歌手集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Artists 多个歌手集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Artist> GetArtists() const;

                    /**
                     * 设置多个歌手集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _artists 多个歌手集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArtists(const std::vector<Artist>& _artists);

                    /**
                     * 判断参数 Artists 是否已赋值
                     * @return Artists 是否已赋值
                     * 
                     */
                    bool ArtistsHasBeenSet() const;

                    /**
                     * 获取歌曲状态，1:添加进购物车；2:核销进曲库包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 歌曲状态，1:添加进购物车；2:核销进曲库包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置歌曲状态，1:添加进购物车；2:核销进曲库包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 歌曲状态，1:添加进购物车；2:核销进曲库包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Song ID
                     */
                    std::string m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * Song info
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataInfo m_dataInfo;
                    bool m_dataInfoHasBeenSet;

                    /**
                     * 专辑信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Album m_album;
                    bool m_albumHasBeenSet;

                    /**
                     * 多个歌手集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Artist> m_artists;
                    bool m_artistsHasBeenSet;

                    /**
                     * 歌曲状态，1:添加进购物车；2:核销进曲库包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_ITEM_H_
