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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_ALBUM_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_ALBUM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/ImagePath.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * Album
                */
                class Album : public AbstractModel
                {
                public:
                    Album();
                    ~Album() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专辑名
                     * @return AlbumName 专辑名
                     * 
                     */
                    std::string GetAlbumName() const;

                    /**
                     * 设置专辑名
                     * @param _albumName 专辑名
                     * 
                     */
                    void SetAlbumName(const std::string& _albumName);

                    /**
                     * 判断参数 AlbumName 是否已赋值
                     * @return AlbumName 是否已赋值
                     * 
                     */
                    bool AlbumNameHasBeenSet() const;

                    /**
                     * 获取专辑图片大小及类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImagePathMap 专辑图片大小及类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImagePath> GetImagePathMap() const;

                    /**
                     * 设置专辑图片大小及类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imagePathMap 专辑图片大小及类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImagePathMap(const std::vector<ImagePath>& _imagePathMap);

                    /**
                     * 判断参数 ImagePathMap 是否已赋值
                     * @return ImagePathMap 是否已赋值
                     * 
                     */
                    bool ImagePathMapHasBeenSet() const;

                private:

                    /**
                     * 专辑名
                     */
                    std::string m_albumName;
                    bool m_albumNameHasBeenSet;

                    /**
                     * 专辑图片大小及类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImagePath> m_imagePathMap;
                    bool m_imagePathMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_ALBUM_H_
