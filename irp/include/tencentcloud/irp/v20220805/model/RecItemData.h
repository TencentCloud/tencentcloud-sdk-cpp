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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_RECITEMDATA_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_RECITEMDATA_H_

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
        namespace V20220805
        {
            namespace Model
            {
                /**
                * 推荐返回的内容信息
                */
                class RecItemData : public AbstractModel
                {
                public:
                    RecItemData();
                    ~RecItemData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推荐的内容ID
                     * @return ItemId 推荐的内容ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置推荐的内容ID
                     * @param _itemId 推荐的内容ID
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
                     * 获取内容类型，同内容上报类型一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemType 内容类型，同内容上报类型一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置内容类型，同内容上报类型一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemType 内容类型，同内容上报类型一致
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取推荐追踪id，本次推荐内容产生的后续行为上报均要用该ItemTraceId上报。每次接口调用返回的ItemTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemTraceId 推荐追踪id，本次推荐内容产生的后续行为上报均要用该ItemTraceId上报。每次接口调用返回的ItemTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemTraceId() const;

                    /**
                     * 设置推荐追踪id，本次推荐内容产生的后续行为上报均要用该ItemTraceId上报。每次接口调用返回的ItemTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemTraceId 推荐追踪id，本次推荐内容产生的后续行为上报均要用该ItemTraceId上报。每次接口调用返回的ItemTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemTraceId(const std::string& _itemTraceId);

                    /**
                     * 判断参数 ItemTraceId 是否已赋值
                     * @return ItemTraceId 是否已赋值
                     * 
                     */
                    bool ItemTraceIdHasBeenSet() const;

                    /**
                     * 获取推荐预测分，分值越高被推荐的理由越充分，取值范围[0,1000000]，用于做二次排序的参考
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 推荐预测分，分值越高被推荐的理由越充分，取值范围[0,1000000]，用于做二次排序的参考
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置推荐预测分，分值越高被推荐的理由越充分，取值范围[0,1000000]，用于做二次排序的参考
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 推荐预测分，分值越高被推荐的理由越充分，取值范围[0,1000000]，用于做二次排序的参考
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

                private:

                    /**
                     * 推荐的内容ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 内容类型，同内容上报类型一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 推荐追踪id，本次推荐内容产生的后续行为上报均要用该ItemTraceId上报。每次接口调用返回的ItemTraceId不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemTraceId;
                    bool m_itemTraceIdHasBeenSet;

                    /**
                     * 推荐预测分，分值越高被推荐的理由越充分，取值范围[0,1000000]，用于做二次排序的参考
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_RECITEMDATA_H_
