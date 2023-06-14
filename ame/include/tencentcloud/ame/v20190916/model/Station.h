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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_STATION_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_STATION_H_

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
                * 分类内容
                */
                class Station : public AbstractModel
                {
                public:
                    Station();
                    ~Station() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取StationID
                     * @return CategoryID StationID
                     * 
                     */
                    std::string GetCategoryID() const;

                    /**
                     * 设置StationID
                     * @param _categoryID StationID
                     * 
                     */
                    void SetCategoryID(const std::string& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取Station MCCode
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryCode Station MCCode
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategoryCode() const;

                    /**
                     * 设置Station MCCode
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _categoryCode Station MCCode
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategoryCode(const std::string& _categoryCode);

                    /**
                     * 判断参数 CategoryCode 是否已赋值
                     * @return CategoryCode 是否已赋值
                     * 
                     */
                    bool CategoryCodeHasBeenSet() const;

                    /**
                     * 获取Category Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Category Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Category Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Category Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Station的排序值，供参考（返回结果已按其升序）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rank Station的排序值，供参考（返回结果已按其升序）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置Station的排序值，供参考（返回结果已按其升序）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rank Station的排序值，供参考（返回结果已按其升序）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取station图片集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImagePathMap station图片集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImagePath> GetImagePathMap() const;

                    /**
                     * 设置station图片集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imagePathMap station图片集合
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
                     * StationID
                     */
                    std::string m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * Station MCCode
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_categoryCode;
                    bool m_categoryCodeHasBeenSet;

                    /**
                     * Category Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Station的排序值，供参考（返回结果已按其升序）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * station图片集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImagePath> m_imagePathMap;
                    bool m_imagePathMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_STATION_H_
