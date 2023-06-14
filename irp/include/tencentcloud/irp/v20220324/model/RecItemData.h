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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_RECITEMDATA_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_RECITEMDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 推荐内容信息
                */
                class RecItemData : public AbstractModel
                {
                public:
                    RecItemData();
                    ~RecItemData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推荐的内容id，即用户行为上报中的itemId
                     * @return ItemId 推荐的内容id，即用户行为上报中的itemId
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置推荐的内容id，即用户行为上报中的itemId
                     * @param _itemId 推荐的内容id，即用户行为上报中的itemId
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取物料子类型，包括如下： 1-图文、2-长视频（横视频）、3-短视频（横视频）、4-小说、5-小视频（竖视频）、6-纯文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemType 物料子类型，包括如下： 1-图文、2-长视频（横视频）、3-短视频（横视频）、4-小说、5-小视频（竖视频）、6-纯文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetItemType() const;

                    /**
                     * 设置物料子类型，包括如下： 1-图文、2-长视频（横视频）、3-短视频（横视频）、4-小说、5-小视频（竖视频）、6-纯文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemType 物料子类型，包括如下： 1-图文、2-长视频（横视频）、3-短视频（横视频）、4-小说、5-小视频（竖视频）、6-纯文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemType(const int64_t& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取推荐内容的权重，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 推荐内容的权重，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置推荐内容的权重，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 推荐内容的权重，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取推荐预测分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 推荐预测分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置推荐预测分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 推荐预测分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取关键词，多个用英文分号分割，和物料上传的keyword一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keyword 关键词，多个用英文分号分割，和物料上传的keyword一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词，多个用英文分号分割，和物料上传的keyword一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyword 关键词，多个用英文分号分割，和物料上传的keyword一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 推荐的内容id，即用户行为上报中的itemId
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 物料子类型，包括如下： 1-图文、2-长视频（横视频）、3-短视频（横视频）、4-小说、5-小视频（竖视频）、6-纯文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 推荐内容的权重，取值范围[0,1000000]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 推荐预测分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 关键词，多个用英文分号分割，和物料上传的keyword一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_RECITEMDATA_H_
